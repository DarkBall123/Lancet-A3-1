[ 
    "FPV_DefaultText",
    "EDITBOX",
    ["Default Text", "Enter the text"],
    "FPV Settings",
    "CROCUS",
    0
] call cba_settings_fnc_init; 


if (isServer) then {
    [
        "FPV_isUavCaptive",
        "CHECKBOX",
        ["AI Cannot See FPV Drones", ""],
        "FPV Settings",
        true,
        1,
        { publicVariable "FPV_isUavCaptive" }
    ] call cba_settings_fnc_init;
};



