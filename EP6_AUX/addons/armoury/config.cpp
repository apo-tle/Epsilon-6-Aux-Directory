#include script_component.hpp

class CfgPatches {
    name = COMPONENT_NAME;
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
            "ep6_main",
            "cba_settings",
            "ace_main"
    };
    author = "Apostle Golden";
    url = ECSTRING(main,INVITE);
    VERSION_CONFIG;
};

#include "CfgGlasses.hpp"
