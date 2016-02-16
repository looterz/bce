#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "extended_eventhandlers",
            "cba_ui",
            "cba_xeh",
            "cba_xeh_a3",
            "cba_jr"
        };
        author[] = {"Blastcore Eagle Team"};
        authorUrl = "https://github.com/looterz/bce";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@bce";
        name = "Blastcore Eagle";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "https://github.com/looterz/bce";
        description = "Issue Tracker: https://github.com/looterz/bce/issues";
    };
};

#include "CfgEventHandlers.hpp"
