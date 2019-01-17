#include "script_component.hpp"

if (!hasInterface) exitWith {0};

player call FUNC(giveEarplugs);
ace_hearing_disableVolumeUpdate = true;
0 spawn FUNC(discord);

if (!isMultiplayer) exitWith {0};

call FUNC(disableChat);

// Start with safety on
if (side player != sideLogic) then {
  [player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
};