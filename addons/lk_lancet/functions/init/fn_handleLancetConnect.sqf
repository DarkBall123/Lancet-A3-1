systemChat "loaded";

while { true } do {
    private _player = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];

    if ((getConnectedUAV _player) isEqualType objNull && (typeOf (getConnectedUAV _player)) == "lk_lancet" && (typeOf cameraOn == "lk_lancet")) then {
        systemChat "connected";
        waitUntil { uiSleep 0.5; ((typeOf getConnectedUAV _player) != "lk_lancet") || (typeOf cameraOn == "lk_lancet")};
    } else {
        uiSleep 0.5;
    };
};
