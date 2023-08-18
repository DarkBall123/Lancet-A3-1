#include "..\includes.hpp"
params ["_display"];

if(uiNamespace getVariable ["isSlewing", false]) exitWith {};

getMousePosition params ["_x", "_y"];

private _safeZoneX = safeZoneX;
private _safeZoneW = safeZoneW;
private _safeZoneH = safeZoneH;
private _safeZoneY = safeZoneY;

_x = _safeZoneX + (_x * _safeZoneW);
_y = _safeZoneY + (_y * _safeZoneH);

// Getting the four lines
private _lineAbove = uiNamespace getVariable "_lineAbove";
private _lineBelow = uiNamespace getVariable "_lineBelow";
private _lineLeft = uiNamespace getVariable "_lineLeft";
private _lineRight = uiNamespace getVariable "_lineRight";

// Setting the color of the lines to white
[_lineAbove, _lineBelow, _lineLeft, _lineRight] apply {
    _x ctrlSetBackgroundColor [1,1,1,1];
};

_gap = 0.15;

// Positioning the lines
_lineAbove ctrlSetPosition [_x, _y - 0.3- _gap, 0.003, 0.3];
_lineAbove ctrlCommit 0;

_lineBelow ctrlSetPosition [_x, _y + _gap, 0.003, _safeZoneY + _safeZoneH - _y - _gap];
_lineBelow ctrlCommit 0;

_lineLeft ctrlSetPosition [_safeZoneX, _y, _x - _safeZoneX - _gap, 0.003];
_lineLeft ctrlCommit 0;

_lineRight ctrlSetPosition [_x + _gap, _y, _safeZoneX + _safeZoneW - _x - _gap, 0.003];
_lineRight ctrlCommit 0;
