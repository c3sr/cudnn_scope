#include "scope/init/init.hpp"
#include "scope/init/flags.hpp"
#include "scope/utils/utils.hpp"
#include "scope/utils/version.hpp"

#include "config.hpp"


// Declare a new flag
DECLARE_FLAG_bool(example);
DEFINE_FLAG_bool(example, false, "an example flag");

// register an option statically
SCOPE_REGISTER_OPTS(
    clara::Opt(FLAG(example))["-e1"]("static flag (from Example|Scope)")
);

void example_before_init() {
    // Create a version string and tell scope about it
    // These values are defined in example_scope/config.hpp.in
    RegisterVersionString(
        version(SCOPE_PROJECT_NAME,
                             SCOPE_VERSION,
                             SCOPE_GIT_REFSPEC,
                             SCOPE_GIT_HASH,
                             SCOPE_GIT_LOCAL_CHANGES)
    );

    RegisterOpt( clara::Opt(FLAG(example))["-e2"]("programmatic flag (from Example|Scope)") );
}

int example_init() {
    
    // Do something with some command line flags
    // parse(argc, argv);
    if (FLAG(example)) {

        LOG(critical, "Example flag was set, so exiting!");

        // signal that initialization should fail
        return 1;
    }

    // Do some other initialization
    LOG(info, "Running the example benchmark init hook");

    // Anything but 0 will cause Scope's init infrastructure to exit with this code
    return 0;
}

SCOPE_REGISTER_BEFORE_INIT(example_before_init);
SCOPE_REGISTER_INIT(example_init);

