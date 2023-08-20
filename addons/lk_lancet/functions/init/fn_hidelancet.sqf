// hidePartWhenEmpty.sqf

// Define the object you want to hide when the magazine is empty
private _hidelancet = "lancetdummy"; // Replace "mag_hide" with the memory point or source name of the part you want to hide

// Function to hide the part when the magazine is empty
fn_hidelancet = {
    params ["_launcher"];
    if (!(_launcher isKindOf "StaticWeapon")) exitWith {}; // Ensure this script only works with stationary weapons

    private _magazineCount = getNumber (configFile >> "CfgWeapons" >> currentMagazine _launcher >> "count");
    if (_magazineCount == 0) then {
        _launcher animateSource [_hidelancet, 0]; // Hide the part by setting the animation source to 0 (fully hidden)
	hint "hidden!";
    } else {
        _launcher animateSource [_hidelancet, 1]; // Show the part by setting the animation source to 1 (fully shown)
    };
};

// Execute the function when the mission starts
[] spawn {
    waitUntil {!(isNull player)};
    player addEventHandler ["Fired", {_this call lancet_fnc_hidelancet}];
};