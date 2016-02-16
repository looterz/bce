#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"bce_main", "WarFXPE"};
        author[] = {"Blastcore Eagle Team"};
        authorUrl = "https://github.com/looterz/bce";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgCloudlets.hpp"
#include "CfgLights.hpp"

class CfgCoreData
{
	eyeFlare = "WarFXPE\ParticleEffects\Flare\Flares\eyeflare_ca.paa";
  eyeFlareSun = "A3\data_f\masktextureflare01_co.paa";
};

class CfgLensFlare
{
	flareSizeEyeSun[] = {0.03};
};
