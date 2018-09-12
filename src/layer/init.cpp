#include "scope/init/init.hpp"
#include "scope/init/flags.hpp"
#include "scope/utils/utils.hpp"
#include "scope/utils/version.hpp"

#include "config.hpp"

// Declare a new flag
DECLARE_FLAG_bool(cudnn);
DEFINE_FLAG_bool(cudnn, false, "an cudnn flag");

// register an option statically
SCOPE_REGISTER_OPTS(
    clara::Opt(FLAG(cudnn))["-e1"]("static flag (from cudnn|Scope)"));

void cudnn_before_init()
{
    // Create a version string and tell scope about it
    // These values are defined in cudnn_scope/config.hpp.in
    RegisterVersionString(
        version(SCOPE_PROJECT_NAME,
                SCOPE_VERSION,
                SCOPE_GIT_REFSPEC,
                SCOPE_GIT_HASH,
                SCOPE_GIT_LOCAL_CHANGES));

    RegisterOpt(clara::Opt(FLAG(cudnn))["-e2"]("programmatic flag (from cudnn|Scope)"));
}

int cudnn_init()
{

    // Do something with some command line flags
    // parse(argc, argv);
    if (FLAG(cudnn))
    {

        LOG(critical, "cudnn flag was set, so exiting!");

        // signal that initialization should fail
        return 1;
    }

    // Do some other initialization
    LOG(info, "Running the cudnn benchmark init hook");

    // Anything but 0 will cause Scope's init infrastructure to exit with this code
    return 0;
}

SCOPE_REGISTER_BEFORE_INIT(cudnn_before_init);
SCOPE_REGISTER_INIT(cudnn_init);
