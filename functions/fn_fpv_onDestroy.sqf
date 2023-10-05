params ["_uav", "", "_damage"];

cutText ["", "PLAIN"];

private _missileType = "";
private _uavType = toLower (typeOf _uav);

if (_uavType find "at" > -1) then {
	_missileType = "FPV_RPG42_AT";
} else {
	if (_uavType find "ap" > -1) then {
		_missileType = "R_TBG32V_F";
	};
};

private _missile = createVehicle [_missileType, _uav modelToWorld [0, 0, 0]];

[_missile, true] remoteExec ["hideObjectGlobal", 2];
_missile setVectorDirAndUp [vectorDir _uav, vectorUp _uav];
//_missile setVelocity (velocity _uav);

triggerAmmo _missile;

deleteVehicle _uav;

