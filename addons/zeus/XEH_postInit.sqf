#include "script_component.hpp"

if (isServer) then {
    [QGVAR(zeusAssign), {
        params ["_unit"];
        if !(isPlayer _unit) exitWith {};

        private _curatorModule = [_unit] call FUNC(getFreeCuratorModule);
        _unit assignCurator _curatorModule;
    }] call CBA_fnc_addEventHandler;

    [QGVAR(zeusUnassign), {
        params ["_unit"];
        if !(isPlayer _unit) exitWith {};

        private _curatorModule = getAssignedCuratorLogic _unit;
        if (_curatorModule isEqualTo objNull) exitWith {};
        unassignCurator (GVAR(curators) select _curatorModule);
    }] call CBA_fnc_addEventHandler;
};

if !(hasInterface) exitWith {0};

if (typeOf player isEqualto "VirtualCurator_F") then {
  player enableSimulation false;
  player setPosASL [0, 0, 20];
  [player] call FUNC(assignZeus);
};
