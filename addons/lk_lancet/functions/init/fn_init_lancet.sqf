params ["_uav",objNull,[objNull]];

if(is3DEN) exitWith {};
if(!(alive player)) exitWith {};
if(allDisplays isEqualTo [findDisplay 0]) exitWith {};

_uav flyInHeight 500;