params ["_launcher"];

if(is3DEN) exitWith {};
if(!(alive player)) exitWith {};
if(allDisplays isEqualTo [findDisplay 0]) exitWith {};



_launcher addEventHandler["Fired", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

	// Locality fix - only spawn lancet on client shooting this, or client controlling this gunner
	if(!(player == _gunner || player == _gunner getVariable ["BIS_fnc_moduleRemoteControl_owner", objNull])) exitWith {};

	_unitType = typeOf _unit;

	_basePos = AGLToASL (_unit modelToWorld (_unit selectionPosition "konec hlavne"));
	_muzzlePos = AGLToASL (_unit modelToWorld (_unit selectionPosition "usti hlavne"));

	_launchPos = _muzzlePos vectorAdd (_basePos vectorFromTo _muzzlePos);
	_uav = format["lk_lancet", [_unit] call lancet_fnc_factionswitch] createVehicle _launchPos;
	_uav setPosASL _launchPos;
	createVehicleCrew _uav;
	(driver _uav) disableAI "ALL";

	_gunner connectTerminalToUAV _uav;

	_dir = _unit weaponDirection (currentWeapon _unit);
	_dir_degrees = (_dir select 0) atan2 (_dir select 1);
	_vertical_angle = (atan ((vectorDir _unit)#2)) max 0;
	_uav setDir _dir_degrees;

	_uav engineOn true;
	_uav setVehicleAmmo 0;
	[_uav, [25, 0, direction _uav]] call lancet_fnc_setAngleOfAttack;
	_vel = velocity _uav;
	_dir = direction _uav;
	_speed = 60;
	_uav setVelocity [
		(sin _dir * _speed), 
		(cos _dir * _speed), 
		(50 + _vertical_angle)
	];
	_uav setDamage 0;

	_startTime = diag_tickTime;
	[_uav, _gunner, _vertical_angle, _startTime] spawn {
		params ["_uav", "_gunner", "_vertical_angle", "_startTime"];

		for "_i" from 1 to 5 do {
			[_uav, [25, 0, direction _uav]] call lancet_fnc_setAngleOfAttack;
			_vel = velocity _uav;
			_dir = direction _uav;
			_speed = 60;
			_uav setVelocity [
				(sin _dir * _speed), 
				(cos _dir * _speed), 
				(25 + _vertical_angle)
			];
			_uav setDamage 0;
			sleep 0.2;
		};
		_uav setDamage 0;

		(driver _uav) enableAI "ALL";
		
		_loiterwp = (group _uav) addWaypoint [position _gunner, 0];
		_loiterwp setWaypointType "LOITER";
		_loiterwp setWaypointLoiterRadius 500;
	};
}];