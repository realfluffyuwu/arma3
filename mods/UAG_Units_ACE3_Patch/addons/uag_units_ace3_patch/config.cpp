class CfgPatches {
    class uag_units_ace3_patch {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_units_ace3_patch";
        requiredAddons[] = {
            "uag_units_uag",
            "ace_main",
        };
        requiredVersion = 2.16;
        units[] = {
            "UAG_Contractor_Black_Splinter"
        };
        weapons[] = {};
    };
};

#include "macros.hpp"
#include "Units/_index.hpp"