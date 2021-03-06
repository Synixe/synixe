#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
  #undef PREP
  #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
  #undef PREP
  #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// UI grid
#define SIZEX ((safeZoneW / safeZoneH) min 1.2)
#define SIZEY (SIZEX / 1.2)
#define W_PART(num) QUOTE((num * (SIZEX / 40)))
#define H_PART(num) QUOTE((num * (SIZEY / 25)))
#define X_PART(num) QUOTE((W_PART(num) + (safeZoneX + (safeZoneW - SIZEX) / 2)))
#define Y_PART(num) QUOTE((H_PART(num) + (safeZoneY + (safeZoneH - SIZEY) / 2)))
