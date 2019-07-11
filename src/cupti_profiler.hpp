#pragma once

#include <cassert>
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>

#include <cupti.h>

#include "fmt/printf.h"
#include "init.hpp"
#include "prettyprint.hpp"

#define DRIVER_API_CALL(apiFuncCall)                                                                                   \
  do {                                                                                                                 \
    CUresult _status = apiFuncCall;                                                                                    \
    if (_status != CUDA_SUCCESS) {                                                                                     \
      const auto err = fmt::format("{}:{}: error: driver function {} failed with error {}.\n", __FILE__, __LINE__,     \
                                   #apiFuncCall, _status);                                                             \
      LOG(critical, err);                                                                                              \
      throw std::runtime_error(err);                                                                                   \
    }                                                                                                                  \
  } while (0)

#define RUNTIME_API_CALL(apiFuncCall)                                                                                  \
  do {                                                                                                                 \
    cudaError_t _status = apiFuncCall;                                                                                 \
    if (_status != cudaSuccess) {                                                                                      \
      const auto err = fmt::format("{}:{}: error: runtime function {} failed with error {}.\n", __FILE__, __LINE__,    \
                                   #apiFuncCall, cudaGetErrorString(_status));                                         \
      LOG(critical, err);                                                                                              \
      throw std::runtime_error(err);                                                                                   \
    }                                                                                                                  \
  } while (0)

#define CUPTI_CALL(apiFuncCall)                                                                                        \
  do {                                                                                                                 \
    CUptiResult _status = apiFuncCall;                                                                                 \
    if (_status != CUPTI_SUCCESS) {                                                                                    \
      const char *errstr;                                                                                              \
      cuptiGetResultString(_status, &errstr);                                                                          \
      const auto err = fmt::format("{}:{}: error: cupti function {} failed with error {}.\n", __FILE__, __LINE__,      \
                                   #apiFuncCall, errstr);                                                              \
      LOG(critical, err);                                                                                              \
      throw std::runtime_error(err);                                                                                   \
    }                                                                                                                  \
  } while (0)

#define _LOG(...) LOG(debug, fmt::sprintf("[Log]: " __VA_ARGS__))
#define _DBG(...) LOG(debug, fmt::sprintf("[Log]: " __VA_ARGS__))

namespace cupti_profiler {
static const char *dummy_kernel_name = "^^ DUMMY ^^";

namespace detail {

  // Pass-specific data
  struct pass_data_t {
    // the set of event groups to collect for a pass
    CUpti_EventGroupSet *event_groups;
    // the number of entries in eventIdArray and eventValueArray
    uint32_t num_events;
    // array of event ids
    std::vector<CUpti_EventID> event_ids;
    // array of event values
    std::vector<uint64_t> event_values;
  };

  struct kernel_data_t {
    typedef std::unordered_map<std::string, uint64_t> event_val_t;
    typedef std::unordered_map<std::string, double> metric_val_t;

    kernel_data_t() : m_current_pass(0) {
    }

    std::vector<pass_data_t> m_pass_data;
    std::string m_name;

    int m_metric_passes;
    int m_event_passes;
    int m_current_pass;
    int m_total_passes;
    CUdevice m_device;

    event_val_t m_event_values;
    metric_val_t m_metric_values;
  };

  static void CUPTIAPI get_value_callback(void *userdata,
                                          CUpti_CallbackDomain UNUSED domain,
                                          CUpti_CallbackId cbid,
                                          const CUpti_CallbackData *cbInfo) {

    // This callback is enabled only for launch so we shouldn't see
    // anything else.
    if ((cbid != CUPTI_RUNTIME_TRACE_CBID_cudaLaunch_v3020) &&
        (cbid != CUPTI_RUNTIME_TRACE_CBID_cudaLaunchKernel_v7000)) {
      const auto err = fmt::format("{}:{} Unexpected cbid {}.\n", __FILE__, __LINE__, cbid);
      std::cerr << err;
      throw std::runtime_error(err);
    }

    const char *current_kernel_name = cbInfo->symbolName;

    // Skip execution if kernel name is NULL string
    // TODO: Make sure this is fine
    if (!current_kernel_name) {
      _LOG("Empty kernel name string. Skipping...");
      return;
    }

    std::map<std::string, detail::kernel_data_t> *kernel_data =
        (std::map<std::string, detail::kernel_data_t> *) userdata;

    if (cbInfo->callbackSite == CUPTI_API_ENTER) {
      // If this is kernel name hasn't been seen before
      if (kernel_data->count(current_kernel_name) == 0) {
        auto &current_kernel = (*kernel_data)[current_kernel_name];
        _LOG("New kernel encountered: %s", current_kernel_name);

        detail::kernel_data_t dummy  = (*kernel_data)[dummy_kernel_name];
        detail::kernel_data_t k_data = dummy;

        k_data.m_name = current_kernel_name;

        auto &pass_data = k_data.m_pass_data;

        for (uint32_t i = 0; i < pass_data[0].event_groups->numEventGroups; i++) {
          _LOG("  Enabling group %d", i);
          uint32_t all = 1;
          CUPTI_CALL(cuptiEventGroupSetAttribute(pass_data[0].event_groups->eventGroups[i],
                                                 CUPTI_EVENT_GROUP_ATTR_PROFILE_ALL_DOMAIN_INSTANCES, sizeof(all),
                                                 &all));
          CUPTI_CALL(cuptiEventGroupEnable(pass_data[0].event_groups->eventGroups[i]));

          (*kernel_data)[current_kernel_name] = k_data;
        }

        if (current_kernel.m_total_passes > 1) {
          return;
        }

        _LOG("cuptiSetEventCollectionMode CUPTI_EVENT_COLLECTION_MODE_KERNEL");
        CUPTI_CALL(cuptiSetEventCollectionMode(cbInfo->context, CUPTI_EVENT_COLLECTION_MODE_KERNEL));

      } else {
        auto &current_kernel  = (*kernel_data)[current_kernel_name];
        auto const &pass_data = current_kernel.m_pass_data;

        int current_pass = current_kernel.m_current_pass;
        if (current_pass >= current_kernel.m_total_passes)
          return;

        _LOG("Current pass for %s: %d", current_kernel_name, current_pass);

        for (uint32_t i = 0; i < pass_data[current_pass].event_groups->numEventGroups; i++) {
          _LOG("  Enabling group %d", i);
          uint32_t all = 1;
          CUPTI_CALL(cuptiEventGroupSetAttribute(pass_data[current_pass].event_groups->eventGroups[i],
                                                 CUPTI_EVENT_GROUP_ATTR_PROFILE_ALL_DOMAIN_INSTANCES, sizeof(all),
                                                 &all));
          CUPTI_CALL(cuptiEventGroupEnable(pass_data[current_pass].event_groups->eventGroups[i]));
        }

        if (current_kernel.m_total_passes > 1) {
          return;
        }

        _LOG("cuptiSetEventCollectionMode CUPTI_EVENT_COLLECTION_MODE_KERNEL");
        CUPTI_CALL(cuptiSetEventCollectionMode(cbInfo->context, CUPTI_EVENT_COLLECTION_MODE_KERNEL));
      }
    } else if (cbInfo->callbackSite == CUPTI_API_EXIT) {
      auto &current_kernel = (*kernel_data)[current_kernel_name];
      int current_pass     = current_kernel.m_current_pass;

      if (current_pass >= current_kernel.m_total_passes)
        return;

      auto &pass_data = current_kernel.m_pass_data[current_pass];

      for (uint32_t i = 0; i < pass_data.event_groups->numEventGroups; i++) {
        CUpti_EventGroup group = pass_data.event_groups->eventGroups[i];
        CUpti_EventDomainID group_domain;
        uint32_t numEvents, numInstances, numTotalInstances;
        CUpti_EventID *eventIds;
        size_t groupDomainSize       = sizeof(group_domain);
        size_t numEventsSize         = sizeof(numEvents);
        size_t numInstancesSize      = sizeof(numInstances);
        size_t numTotalInstancesSize = sizeof(numTotalInstances);
        uint64_t *values, normalized, sum;
        size_t valuesSize, eventIdsSize;

        CUPTI_CALL(cuptiEventGroupGetAttribute(group, CUPTI_EVENT_GROUP_ATTR_EVENT_DOMAIN_ID, &groupDomainSize,
                                               &group_domain));
        CUPTI_CALL(cuptiDeviceGetEventDomainAttribute(current_kernel.m_device, group_domain,
                                                      CUPTI_EVENT_DOMAIN_ATTR_TOTAL_INSTANCE_COUNT,
                                                      &numTotalInstancesSize, &numTotalInstances));
        CUPTI_CALL(cuptiEventGroupGetAttribute(group, CUPTI_EVENT_GROUP_ATTR_INSTANCE_COUNT, &numInstancesSize,
                                               &numInstances));
        CUPTI_CALL(cuptiEventGroupGetAttribute(group, CUPTI_EVENT_GROUP_ATTR_NUM_EVENTS, &numEventsSize, &numEvents));
        eventIdsSize = numEvents * sizeof(CUpti_EventID);
        eventIds     = (CUpti_EventID *) malloc(eventIdsSize);
        CUPTI_CALL(cuptiEventGroupGetAttribute(group, CUPTI_EVENT_GROUP_ATTR_EVENTS, &eventIdsSize, eventIds));

        valuesSize = sizeof(uint64_t) * numInstances;
        values     = (uint64_t *) malloc(valuesSize);

        for (uint32_t j = 0; j < numEvents; j++) {
          CUPTI_CALL(cuptiEventGroupReadEvent(group, CUPTI_EVENT_READ_FLAG_NONE, eventIds[j], &valuesSize, values));
          /*if (metric_data->eventIdx >= metric_data->numEvents) {
            fprintf(stderr, "[error]: Too many events collected, metric expects only %d\n",
                (int)metric_data->numEvents);
            exit(-1);
          }*/

          // sum collect event values from all instances
          sum = 0;
          for (uint32_t k = 0; k < numInstances; k++) {
            sum += values[k];
          }

          // normalize the event value to represent the total number of
          // domain instances on the device
          normalized = (sum * numTotalInstances) / numInstances;

          pass_data.event_ids.push_back(eventIds[j]);
          pass_data.event_values.push_back(normalized);
        }
        free(values);
        free(eventIds);
      }

      for (uint32_t i = 0; i < pass_data.event_groups->numEventGroups; i++) {
        _LOG("  Disabling group %d", i);
        CUPTI_CALL(cuptiEventGroupDisable(pass_data.event_groups->eventGroups[i]));
      }
      ++(*kernel_data)[current_kernel_name].m_current_pass;
    }
  }

  static double metric_value_to_double(CUpti_MetricID &id, CUpti_MetricValue &value) {
    CUpti_MetricValueKind value_kind;
    size_t value_kind_sz = sizeof(value_kind);
    CUPTI_CALL(cuptiMetricGetAttribute(id, CUPTI_METRIC_ATTR_VALUE_KIND, &value_kind_sz, &value_kind));
    switch (value_kind) {
      case CUPTI_METRIC_VALUE_KIND_FORCE_INT:
        return (double) value.metricValueInt64;
      case CUPTI_METRIC_VALUE_KIND_DOUBLE:
        return value.metricValueDouble;
      case CUPTI_METRIC_VALUE_KIND_UINT64:
        return (double) value.metricValueUint64;
      case CUPTI_METRIC_VALUE_KIND_INT64:
        return (double) value.metricValueInt64;
      case CUPTI_METRIC_VALUE_KIND_PERCENT:
        return (double) value.metricValuePercent;
      case CUPTI_METRIC_VALUE_KIND_THROUGHPUT:
        return (double) value.metricValueThroughput;
      case CUPTI_METRIC_VALUE_KIND_UTILIZATION_LEVEL:
        return (double) value.metricValueUtilizationLevel;
      default:
        const auto err = fmt::format("[error]: unknown value kind.\n");
        std::cerr << err;
        throw std::runtime_error(err);
    }
  }

} // namespace detail

struct profiler {
  typedef std::vector<std::string> strvec_t;
  using event_val_t  = detail::kernel_data_t::event_val_t;
  using metric_val_t = detail::kernel_data_t::metric_val_t;

  profiler(const strvec_t &events, const strvec_t &metrics, const int device_num = 0)
      : m_event_names(events), m_metric_names(metrics), m_device_num(device_num), m_num_metrics(metrics.size()),
        m_num_events(events.size()), m_metric_passes(0), m_event_passes(0) {

    int device_count = 0;

    CUPTI_CALL(cuptiActivityEnable(CUPTI_ACTIVITY_KIND_KERNEL));
    DRIVER_API_CALL(cuDeviceGetCount(&device_count));
    if (device_count == 0) {
      const auto err = fmt::format("There is no device supporting CUDA.\n");
      std::cerr << err;
      throw std::runtime_error(err);
    }

    m_metric_ids.resize(m_num_metrics);
    m_event_ids.resize(m_num_events);

    // Init device, context and setup callback
    CUPTI_CALL(cuptiSubscribe(&m_subscriber, (CUpti_CallbackFunc) detail::get_value_callback, &m_kernel_data));
    CUPTI_CALL(
        cuptiEnableCallback(1, m_subscriber, CUPTI_CB_DOMAIN_RUNTIME_API, CUPTI_RUNTIME_TRACE_CBID_cudaLaunch_v3020));
    CUPTI_CALL(cuptiEnableCallback(1, m_subscriber, CUPTI_CB_DOMAIN_RUNTIME_API,
                                   CUPTI_RUNTIME_TRACE_CBID_cudaLaunchKernel_v7000));

    CUpti_MetricID *metric_ids = (CUpti_MetricID *) calloc(sizeof(CUpti_MetricID), m_num_metrics);
    defer(free(metric_ids));
    for (int i = 0; i < m_num_metrics; ++i) {
        std::cout << "metric_name = " << m_metric_names[i] << "\n";
      CUPTI_CALL(cuptiMetricGetIdFromName(m_device, m_metric_names[i].c_str(), &metric_ids[i]));
    }

    CUpti_EventID *event_ids = (CUpti_EventID *) calloc(sizeof(CUpti_EventID), m_num_events);
    defer(free(event_ids));
    for (int i = 0; i < m_num_events; ++i) {
      CUPTI_CALL(cuptiEventGetIdFromName(m_device, m_event_names[i].c_str(), &event_ids[i]));
    }

    if (m_num_metrics > 0) {

      CUPTI_CALL(cuptiMetricCreateEventGroupSets(m_context, sizeof(CUpti_MetricID) * m_num_metrics, metric_ids,
                                                 &m_metric_pass_data));
      m_metric_passes = m_metric_pass_data->numSets;

      std::copy(metric_ids, metric_ids + m_num_metrics, m_metric_ids.begin());

      _LOG("# metric_passes = %d", m_metric_passes);

      if (m_metric_passes > 1) {
        CUPTI_CALL(cuptiEnableKernelReplayMode(m_context));
        _LOG("replaying kernel...");
      }
    }
    if (m_num_events > 0) {
      CUPTI_CALL(
          cuptiEventGroupSetsCreate(m_context, sizeof(CUpti_EventID) * m_num_events, event_ids, &m_event_pass_data));
      m_event_passes = m_event_pass_data->numSets;

      std::copy(event_ids, event_ids + m_num_events, m_event_ids.begin());
    }

    _LOG("# Metric Passes: %d\n", m_metric_passes);
    _LOG("# Event Passes: %d\n", m_event_passes);

    assert((m_metric_passes + m_event_passes) > 0);

    detail::kernel_data_t dummy_data;
    dummy_data.m_name          = dummy_kernel_name;
    dummy_data.m_metric_passes = m_metric_passes;
    dummy_data.m_event_passes  = m_event_passes;
    dummy_data.m_device        = m_device;
    dummy_data.m_total_passes  = m_metric_passes + m_event_passes;
    dummy_data.m_pass_data.resize(m_metric_passes + m_event_passes);

    auto &pass_data = dummy_data.m_pass_data;
    for (int i = 0; i < m_metric_passes; ++i) {
      int total_events = 0;
      _LOG("[metric] Looking at set (pass) %d", i);
      uint32_t num_events    = 0;
      size_t num_events_size = sizeof(num_events);
      for (uint32_t j = 0; j < m_metric_pass_data->sets[i].numEventGroups; ++j) {
        CUPTI_CALL(cuptiEventGroupGetAttribute(m_metric_pass_data->sets[i].eventGroups[j],
                                               CUPTI_EVENT_GROUP_ATTR_NUM_EVENTS, &num_events_size, &num_events));
        _LOG("  Event Group %d, #Events = %d", j, num_events);
        total_events += num_events;
      }
      pass_data[i].event_groups = m_metric_pass_data->sets + i;
      pass_data[i].num_events   = total_events;
    }

    for (int i = 0; i < m_event_passes; ++i) {
      int total_events = 0;
      _LOG("[event] Looking at set (pass) %d", i);
      uint32_t num_events    = 0;
      size_t num_events_size = sizeof(num_events);
      for (uint32_t j = 0; j < m_event_pass_data->sets[i].numEventGroups; ++j) {
        CUPTI_CALL(cuptiEventGroupGetAttribute(m_event_pass_data->sets[i].eventGroups[j],
                                               CUPTI_EVENT_GROUP_ATTR_NUM_EVENTS, &num_events_size, &num_events));
        _LOG("  Event Group %d, #Events = %d", j, num_events);
        total_events += num_events;
      }
      pass_data[i + m_metric_passes].event_groups = m_event_pass_data->sets + i;
      pass_data[i + m_metric_passes].num_events   = total_events;
    }

    m_kernel_data[dummy_kernel_name] = dummy_data;
  }

  ~profiler() {
  }

  int get_passes() {
    return m_metric_passes + m_event_passes;
  }

  void start() {
  }

  void stop() {

    _LOG("# metric_passes = %d", m_metric_passes);
    if (m_metric_passes > 1) {
      CUPTI_CALL(cuptiDisableKernelReplayMode(m_context));
      _LOG("disable replay kernel...");
    }

    for (auto &k : m_kernel_data) {
      auto &data = k.second.m_pass_data;

      if (k.first == dummy_kernel_name)
        continue;

      int total_events = 0;
      for (int i = 0; i < m_metric_passes; ++i) {
        // total_events += m_metric_data[i].num_events;
        total_events += data[i].num_events;
      }
      CUpti_MetricValue metric_value;
      CUpti_EventID *event_ids = new CUpti_EventID[total_events];
      uint64_t *event_values   = new uint64_t[total_events];

      defer(delete[] event_ids);
      defer(delete[] event_values);

      int running_sum = 0;
      for (int i = 0; i < m_metric_passes; ++i) {
        std::copy(data[i].event_ids.begin(), data[i].event_ids.end(), event_ids + running_sum);
        std::copy(data[i].event_values.begin(), data[i].event_values.end(), event_values + running_sum);
        running_sum += data[i].num_events;
      }

      // std::cout << "m_metric_names = " << m_metric_names << std::endl;
      // std::cout << "m_num_metrics = " << m_num_metrics << std::endl;
      for (int i = 0; i < m_num_metrics; ++i) {
        CUptiResult _status =
            cuptiMetricGetValue(m_device, m_metric_ids[i], total_events * sizeof(CUpti_EventID), event_ids,
                                total_events * sizeof(uint64_t), event_values, 0, &metric_value);
        if (_status != CUPTI_SUCCESS) {
          // const char *errstr;
          // cuptiGetResultString(_status, &errstr);
          // const auto err =
          //     fmt::format("Metric value retrieval failed for metric {} because of {}.\n", m_metric_names[i], errstr);
          // std::cerr << err;
          continue;
        }
        k.second.m_metric_values.insert(
            {m_metric_names[i], detail::metric_value_to_double(m_metric_ids[i], metric_value)});
      }

      std::map<CUpti_EventID, uint64_t> event_map;
      for (uint32_t i = m_metric_passes; i < (uint32_t)(m_metric_passes + m_event_passes); ++i) {
        for (uint32_t j = 0; j < data[i].num_events; ++j) {
          event_map[data[i].event_ids[j]] = data[i].event_values[j];
        }
      }

      for (int i = 0; i < m_num_events; ++i) {
        k.second.m_event_values.insert({"xxx", event_map[m_event_ids[i]]});
      }
    }

    // Disable callback and unsubscribe
    CUPTI_CALL(
        cuptiEnableCallback(0, m_subscriber, CUPTI_CB_DOMAIN_RUNTIME_API, CUPTI_RUNTIME_TRACE_CBID_cudaLaunch_v3020));
    CUPTI_CALL(cuptiEnableCallback(0, m_subscriber, CUPTI_CB_DOMAIN_RUNTIME_API,
                                   CUPTI_RUNTIME_TRACE_CBID_cudaLaunchKernel_v7000));
    CUPTI_CALL(cuptiUnsubscribe(m_subscriber));
  }

  std::vector<std::string> get_kernel_names() {
    if (m_kernel_names.size() == 0) {
      for (auto const &k : m_kernel_data) {
        if (k.first == dummy_kernel_name)
          continue;
        m_kernel_names.push_back(k.first);
      }
    }
    return m_kernel_names;
  }

  event_val_t get_event_values(const std::string &kernel_name) {
    if (m_num_events > 0)
      return m_kernel_data[kernel_name].m_event_values;
    else
      return event_val_t{};
  }

  metric_val_t get_metric_values(const std::string &kernel_name) {
    if (m_num_metrics > 0)
      return m_kernel_data[kernel_name].m_metric_values;
    else
      return metric_val_t{};
  }

private:
  const strvec_t &m_event_names{};
  const strvec_t &m_metric_names{};
  uint32_t m_device_num;
  int m_num_metrics, m_num_events;
  std::vector<CUpti_MetricID> m_metric_ids;
  std::vector<CUpti_EventID> m_event_ids;

  CUpti_SubscriberHandle m_subscriber;

  CUpti_EventGroupSets *m_metric_pass_data;
  CUpti_EventGroupSets *m_event_pass_data;

  int m_metric_passes, m_event_passes;
  // Kernel-specific (indexed by name) trace data
  std::map<std::string, detail::kernel_data_t> m_kernel_data;
  std::vector<std::string> m_kernel_names;
  int m_num_kernels;
};

#ifndef __CUPTI_PROFILER_NAME_SHORT
#define __CUPTI_PROFILER_NAME_SHORT 128
#endif

static std::vector<std::string> available_metrics(CUdevice device) {
  std::vector<std::string> metric_names;
  uint32_t numMetric;
  size_t size;
  char metricName[__CUPTI_PROFILER_NAME_SHORT];
  CUpti_MetricValueKind metricKind;
  CUpti_MetricID *metricIdArray;

  CUPTI_CALL(cuptiDeviceGetNumMetrics(device, &numMetric));
  size          = sizeof(CUpti_MetricID) * numMetric;
  metricIdArray = (CUpti_MetricID *) malloc(size);
  if (NULL == metricIdArray) {
    const auto err = fmt::format("Memory could not be allocated for metric array.\n");
    std::cerr << err;
    throw std::runtime_error(err);
  }

  CUPTI_CALL(cuptiDeviceEnumMetrics(device, &size, metricIdArray));

  for (uint32_t i = 0; i < numMetric; i++) {
    size = __CUPTI_PROFILER_NAME_SHORT;
    CUPTI_CALL(cuptiMetricGetAttribute(metricIdArray[i], CUPTI_METRIC_ATTR_NAME, &size, (void *) &metricName));
    size = sizeof(CUpti_MetricValueKind);
    CUPTI_CALL(cuptiMetricGetAttribute(metricIdArray[i], CUPTI_METRIC_ATTR_VALUE_KIND, &size, (void *) &metricKind));
    if ((metricKind == CUPTI_METRIC_VALUE_KIND_THROUGHPUT) ||
        (metricKind == CUPTI_METRIC_VALUE_KIND_UTILIZATION_LEVEL)) {
      continue;
    } else {
      metric_names.push_back(metricName);
    }
  }
  free(metricIdArray);
  return std::move(metric_names);
}

static std::vector<std::string> available_events(CUdevice device) {
  std::vector<std::string> event_names;
  uint32_t numDomains = 0, numEvents = 0, totalEvents = 0;
  size_t size;
  CUpti_EventDomainID *domainIdArray;
  CUpti_EventID *eventIdArray;
  size_t eventIdArraySize;
  char eventName[__CUPTI_PROFILER_NAME_SHORT];

  CUPTI_CALL(cuptiDeviceGetNumEventDomains(device, &numDomains));
  size          = sizeof(CUpti_EventDomainID) * numDomains;
  domainIdArray = (CUpti_EventDomainID *) malloc(size);
  if (NULL == domainIdArray) {
    const auto err = fmt::format("Memory could not be allocated for domain array.\n");
    std::cerr << err;
    throw std::runtime_error(err);
  }
  CUPTI_CALL(cuptiDeviceEnumEventDomains(device, &size, domainIdArray));

  for (uint32_t i = 0; i < numDomains; i++) {
    CUPTI_CALL(cuptiEventDomainGetNumEvents(domainIdArray[i], &numEvents));
    totalEvents += numEvents;
  }

  eventIdArraySize = sizeof(CUpti_EventID) * totalEvents;
  eventIdArray     = (CUpti_EventID *) malloc(eventIdArraySize);

  totalEvents = 0;
  for (uint32_t i = 0; i < numDomains; i++) {
    // Query num of events available in the domain
    CUPTI_CALL(cuptiEventDomainGetNumEvents(domainIdArray[i], &numEvents));
    size = numEvents * sizeof(CUpti_EventID);
    CUPTI_CALL(cuptiEventDomainEnumEvents(domainIdArray[i], &size, eventIdArray + totalEvents));
    totalEvents += numEvents;
  }

  for (uint32_t i = 0; i < totalEvents; i++) {
    size = __CUPTI_PROFILER_NAME_SHORT;
    CUPTI_CALL(cuptiEventGetAttribute(eventIdArray[i], CUPTI_EVENT_ATTR_NAME, &size, eventName));
    event_names.push_back(eventName);
  }
  free(domainIdArray);
  free(eventIdArray);
  return std::move(event_names);
}

} // namespace cupti_profiler
