#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {};
    author = "SynixeBrett";
    VERSION_CONFIG;
  };
};

class RscDisplayInsertMarker {
  onLoad = "_this call ace_markers_fnc_initInsertMarker; _this call synixe_maps_fnc_checkPeek;";
  onUnload = "_this call synixe_maps_fnc_placeMarker;";
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"