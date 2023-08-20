#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class lk_lancet
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F"};
		requiredVersion = 0.1;
		units[] = {"Lk_lancet3"};
		weapons[] = {};
	};
};
class cfgammo {
    class M_Titan_AT;
 	class m_lancet_dummy: M_Titan_AT {
	modelspecial = "\lk_lancet\lancet_3.p3d";
	model = "\lk_lancet\lancet_3.p3d";
        indirectHit = 0;
        indirectHitRange = 0;
        manualControl = 0;
        timeToLive =  180;
        submunitionAmmo = "";
        submunitionInitSpeed = 500;
        };
    };

class cfgMagazines {
    class Titan_AT;
    class lancet_dummy_mag: Titan_AT {
        displayname = "Lancet-3 Loitering Ammunition";
        ammo = "m_lancet_dummy";
        mass = 100;
        author = "Z Virtual Ordnance";
    };
};

class CfgWeapons
{
	class Default;
	class InventoryItem_Base_F;
	class ItemCore: Default{};
	class CBA_MiscItem_ItemInfo: InventoryItem_Base_F{};
	class CBA_MiscItem: ItemCore
	{
		class ItemInfo: CBA_MiscItem_ItemInfo{};
	};
	class fakeWeapon;
	class Lancet_launcher_weap: fakeWeapon
	{
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "konec hlavne";
				effectName = "GrenadeLauncherCloud";
				positionName = "usti hlavne";
			};
		};
		class BaseSoundModeType
		{
			closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
			soundClosure[] = {"closure1",1};
		};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
			begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
			closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundClosure[] = {"closure1",1};
			soundSetShot[] = {"DS_UGL_Closure_SoundSet","DS_UGL_Shot_SoundSet","DS_pistol1_Tail_SoundSet"};
		};
       		magazineReloadTime = 60;
		 reloadTime = 60;
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
class All{};
	class AllVehicles: All
	{
		class NewTurret{};
	};
	class Air: AllVehicles
	{
		class Components{};
	};
	class Plane: Air{};
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class AnimationSources;
		class Components;
		class Sounds
		{
			class EngineHighIn
			{
			};
			class EngineHighOut
			{
			};
			class EngineLowIn
			{
			};
			class EngineLowOut
			{
			};
			class ForsageIn
			{
			};
			class ForsageOut
			{
			};
			class WindNoiseIn
			{
			};
			class WindNoiseOut
			{
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
					};
				};
			};
		};
	};
	class lancet_base_F: UAV
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: None";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "UAV_02_base_F";
		displayName = "$STR_A3_CfgVehicles_UAV_02_base0";
		editorSubcategory = "EdSubcat_Drones";
		icon = "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\Map_UAV_02_CA.paa";
		picture = "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\UAV_02_base_F.paa";
		unitInfoType = "";
		attenuationEffectType = "OpenHeliAttenuation";
				soundGetIn[]=
		{
			"",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_5",
			0.39810717,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_start_ext",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_start_int",
			0.70794576,
			1,
			400
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_stop_int",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_stop_ext",
			0.70794576,
			1,
			400
		};
		soundGearUp[]=
		{
			"A3\Sounds_F\vehicles\air\noises\drone_gear_up",
			1,
			1,
			120
		};
		soundGearDown[]=
		{
			"A3\Sounds_F\vehicles\air\noises\drone_gear_down",
			1,
			1,
			120
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Up",
			0.63095737,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Down",
			0.63095737,
			1,
			100
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
Crash0[]=
        {
            "A3\sounds_f\weapons\Explosion\expl_big_2.wss",
            db+5,
            1,
            3000
        };
        Crash1[]=
        {
            "A3\sounds_f\weapons\Explosion\expl_big_2.wss",
            db+5,
            1,
            3000
        };
        Crash2[]=
        {
            "A3\sounds_f\weapons\Explosion\expl_big_2.wss",
            db+5,
            1,
            3000
        };
        Crash3[]=
        {
            "A3\sounds_f\weapons\Explosion\expl_big_2.wss",
            db+5,
            1,
            3000
        };
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_low_ext",0.70794576,1.0,450};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_high_ext",1.0,1.0,650};
				frequency = "(rpm factor[0.5, 1.0])";
				volume = "camPos*(rpm factor[0.2, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_forsage_ext",1.1220185,1.0,900};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2.0,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\noise",0.31622776,1.0,150};
				frequency = "(0.3+(1.005*(speed factor[1, 50])))";
				volume = "camPos*(speed factor[1,  50])";
			};
			class EngineLowIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_low_int",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_high_int",1.0,1.0};
				frequency = "(rpm factor[0.5, 1.0])";
				volume = "(1-camPos)*(rpm factor[0.2, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_forsage_int",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(thrust factor[0.6, 1.0])";
			};
			class WindNoiseIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\noise",0.25118864,1.0};
				frequency = "(0.3+(1.005*(speed factor[1, 50])))";
				volume = "(1-camPos)*(speed factor[1, 50])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		formationX = 30;
		formationZ = 30;
		class HitPoints
		{
			class HitHull
			{
				armor = 3;
				explosionShielding = 5;
				name = "HitHull";
				passThrough = 0.5;
				visual = "Hit_Hull";
				radius = 0.25;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
			class HitEngine: HitHull
			{
				armor = 1.5;
				explosionShielding = 2;
				name = "HitEngine";
				passThrough = 0.5;
				visual = "Hit_Engine";
				radius = 0.25;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitFuel: HitHull
			{
				armor = 3;
				explosionShielding = 4;
				name = "HitFuel";
				passThrough = 0.5;
				visual = "Hit_Fuel";
				radius = 0.3;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLAileron: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLAileron";
				passThrough = 0.1;
				visual = "Hit_AileronL";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRAileron: HitLAileron
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRAileron";
				passThrough = 0.1;
				visual = "Hit_AileronR";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCRudder: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLCRudder";
				passThrough = 0.1;
				visual = "Hit_RudderL";
				radius = 0.15;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRRudder: HitLCRudder
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRRudder";
				passThrough = 0.1;
				visual = "Hit_RudderR";
				radius = 0.15;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCElevator: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLCElevator";
				passThrough = 0.1;
				visual = "Hit_ElevatorL";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRElevator: HitLCElevator
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRElevator";
				passThrough = 0.1;
				visual = "Hit_ElevatorR";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
		};
		class Exhausts
		{
			class Exhaust_center
			{
				position = "pos_Exhausts_start_center";
				direction = "pos_Exhausts_end_center";
				effect = "ExhaustsEffectHeliComHP";
			};
		};
		class Armory
		{
			description = "$STR_A3_CfgVehicles_UAV_02_base_Armory0";
		};
		model = "\lk_lancet\lancet_3.p3d";
		driveOnComponent[] = {};
		maximumLoad = 250;
		class TransportItems{};
		LODTurnedIn = -1;
		LODTurnedOut = -1;
		memoryPointLDust = "DustLeft";
		memoryPointRDust = "DustRight";
		memoryPointDriverOptics = "PiP0_pos";
		driverOpticsModel = "lk_lancet\lancet_hud.p3d";
		driverWeaponsInfoType = "RscOptics_Offroad_01";
		driverForceOptics = 1;
		GunnerOpticsModel = "lk_lancet\lancet_hud.p3d";
		vehicleClass = "Air";
		GunnerForceOptics = 1;
		uavCameraDriverPos = "PiP0_pos";
		uavCameraDriverDir = "PiP0_dir";
		uavCameraGunnerPos = "laserstart";
		uavCameraGunnerDir = "commanderview";
		getInRadius = 0;
		class WingVortices{};
		class ViewPilot: ViewPilot
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			visionMode[] = {"Normal","NVG"};
			thermalMode[] = {0,1};
		};
		class AnimationSources: AnimationSources
		{
			class Bombs
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class AT_missiles
			{
				source = "user";
				animPeriod = 0.99;
				initPhase = 1;
			};
			class Damper_1_source
			{
				source = "damper";
				wheel = "Wheel_1";
			};
			class Damper_2_source
			{
				source = "damper";
				wheel = "Wheel_2";
			};
			class Damper_3_source
			{
				source = "damper";
				wheel = "Wheel_3";
			};
			class Wheel_1_source
			{
				source = "wheel";
				wheel = "Wheel_1";
			};
			class Wheel_2_source
			{
				source = "wheel";
				wheel = "Wheel_2";
			};
			class Wheel_3_source
			{
				source = "wheel";
				wheel = "Wheel_3";
			};
		};
		class camShakeGForce
		{
			distance = 0;
			frequency = 2;
			minSpeed = 1;
			power = 0.1;
		};
		weapons[] = {};
		magazines[] = {};
		maxSpeed = 400;
		landingAoa = 0.1309;
		landingSpeed = 140;
		stallSpeed = 50;
		stallWarningTreshold = 0.07;
		wheelSteeringSensitivity = 1.3;
		airBrake = 1;
		airBrakeFrictionCoef = 2;
		flaps = 0;
		flapsFrictionCoef = 0.2;
		gearsUpFrictionCoef = 0.35;
		airFrictionCoefs0[] = {0.0,0.0,0.0};
		airFrictionCoefs1[] = {0.1,0.7,0.005};
		airFrictionCoefs2[] = {0.001,0.0075,6e-05};
		angleOfIndicence = 0;
		envelope[] = {0.0,0.07,0.26,0.59,1.04,1.63,1.98,2.7,3.2,4.05,4.68,5.49,6.19,7.04,7.53,7.9,8.2,8.4,8.5,8.2,7.0};
		altNoForce = 13000;
		altFullForce = 2000;
		thrustCoef[] = {1.36,1.25,1.14,1.04,0.95,0.86,0.78,0.7,0.61,0.3,0.0,0.0,0.0};
		aileronSensitivity = 0.2;
		aileronCoef[] = {0.0,0.12,0.46,0.65,0.75,0.82,0.88,0.92,0.95,0.97,0.99,1.0,1.01};
		elevatorSensitivity = 0.3;
		elevatorCoef[] = {0.0,0.2,0.7,0.47,0.38,0.32,0.28,0.25,0.22,0.19,0.17,0.15,0.13};
		rudderInfluence = 0.9397;
		rudderCoef[] = {0.0,0.6,1.2,1.5,1.7,1.8,1.9,1.9,2.0,2.0,2.0,1.8,1.4};
		aileronControlsSensitivityCoef = 2.0;
		elevatorControlsSensitivityCoef = 2.0;
		rudderControlsSensitivityCoef = 2.0;
		draconicForceXCoef = 8.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {2.0,2.5,3.1,3.7,4.4,5.1,5.9,6.5,7.0,7.5,7.9,8.3,8.5};
		draconicTorqueYCoef[] = {12.0,8.0,3.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
		maxOmega = 3000;
		engineMoi = 0.1;
		dampingRateFullThrottle = 0.03;
		dampingRateZeroThrottleClutchEngaged = 0.03;
		dampingRateZeroThrottleClutchDisengaged = 0.03;
		killFriendlyExpCoef = 0.01;
		driverCompartments = "Compartment3";
		cargoCompartments[] = {"Compartment2"};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02.rvmat","A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_damage.rvmat","A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_destruct.rvmat"};
		};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		weapons[] = {};
		magazines[] = {""};
		radarTargetSize = 0.05;
		visualTargetSize = 0.05;
		irTargetSize = 0.05;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		laserscanner = 1;
		showAllTargets = 4;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
};
class lk_lancet: lancet_base_F
	{
		author = "Lukin";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",0},{"missileb",0},{"missilea1",1},{"missilea2",1},{"missilea3",1},{"missileb1",1},{"missileb2",1},{"missileb3",1},{"positionlights",0},{"hideweapons",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "''";
		};
		_generalMacro = "lk_lancet";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_R_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 1;
		unitInfoType = "RscUnitInfoParachute";
		displayName = "Lancet-3 Loitering Ammunition";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		defaultUserMFDvalues[] = {0.15,1.0,0.15,1};
	};
class Land: AllVehicles{};
	class LandVehicle: Land{};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
class lancet_tripod_launcher: Mortar_01_base_F
	{
		model = "\lk_lancet\tripod\lancet_tripod.p3d";
		crew = "O_Soldier_UAV_F";
		_generalmacro = "lancet_tripod_launcher";
		displayName = "Lancet Tripod Launcher";
		scopecurator = 2;
		scope = 2;
		side = 0;
		faction = "OPF_R_F";
		artilleryScanner = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				turretInfoType = "RscOptics_Offroad_01";
				weapons[] = {"Lancet_Launcher_Weap"};
				magazines[] = {"FakeMagazine"};
				elevationMode = 0;
				cameraDir = "look";
				discreteDistanceCameraPoint[] = {"eye"};
			};
		};
class AnimationSources
		{
			class hidelancet
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
};
class CfgFunctions
{
	class lancet
	{
		class init
		{
			file = "lk_lancet\functions\init";
			class init_launcher_tripod{};
			class setangleofattack{};
			class hidelancet{};
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class lancet_tripod_launcher
	{
		class lancet_tripod_launcher_initpost_eh
		{
			clientInit = "_this call lancet_fnc_init_launcher_tripod";
		};
	};
};