class CfgPatches
{
	class ArmaFPV_Data
	{
		author="DarkBall & Sam";
		name="ArmaFPV";
		url="";
		requiredAddons[]=
		{
			"A3_Data_F_AoW_Loadorder",
			"A3_Data_F",
			"A3_Drones_F",
			"cba_settings"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_Crocus_AT",
			"O_Crocus_AP",
			"B_Crocus_AT",
			"B_Crocus_AP",
			"I_Crocus_AT",
			"I_Crocus_AP"
		};
		weapons[]={};
	};
};
class RscText;
class ctrlControlsGroupNoScrollBars;
class ctrlControlsGroup;
class ctrlStaticBackground;
class ctrlStaticPicture;
class ctrlStructuredText;
class RscTitles
{
	class ArmaFPV_Dialog
	{
		idd=-1;
		duration=9.9999997e+037;
		movingEnable="false";
		enableSimulation="true";
		class controls
		{
			class LeftLine: RscText
			{
				idc=-1;
				x="safeZoneXAbs";
				y="safeZoneY";
				w="(safeZoneW * 0.15)";
				h="(safeZoneH)";
				colorBackground[]={0,0,0,1};
			};
			class RightLine: LeftLine
			{
				x="safeZoneXAbs + safeZoneWAbs - (safeZoneW * 0.15)";
			};
			class CommunicationGroup: ctrlControlsGroupNoScrollBars
			{
				idc=-1;
				x="(safeZoneXAbs + (safeZoneW * 0.15)) + (safeZoneWAbs - 2*(safeZoneW * 0.15)) - ( 6 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y="(safeZoneY) + ( 6 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 6 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class CommunicationPicture: ctrlStaticPicture
					{
						idc=-1;
						text="\ArmaFPV\pictures\100.paa";
						onLoad="uiNameSpace setVariable [""ArmaFPV_SignalPicture"", _this # 0];";
						x=0;
						y="0.0 + ( 2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w="( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
						h="( 1 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class CommunicationText: ctrlStructuredText
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""ArmaFPV_SignalText"", _this # 0];";
						class Attributes
						{
							font="VCROSDMono";
							align="center";
							shadow=1;
						};
						shadow=0;
						size="( 1.8 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="27";
						x=0;
						y=0;
						w="( 6 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
			class BatteryGroup: ctrlControlsGroupNoScrollBars
			{
				idc=-1;
				x="(safeZoneXAbs + (safeZoneW * 0.15)) + ( 2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y="(safeZoneY) + (safeZoneH) - ( 2 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 8 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 8 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class BatteryPicture: ctrlStaticPicture
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""ArmaFPV_BatteryPicture"", _this # 0];";
						text="\ArmaFPV\pictures\A100.paa";
						x=0;
						y=0;
						w="( 1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.8 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class BatteryText: ctrlStructuredText
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""ArmaFPV_BatteryText"", _this # 0];";
						class Attributes
						{
							font="VCROSDMono";
							align="center";
							shadow=1;
						};
						shadow=0;
						size="( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="3.79 v";
						x=0;
						y="( 0.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w="( 8 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
			class OnTime_Group: ctrlControlsGroupNoScrollBars
			{
				idc=-1;
				x="(safeZoneXAbs + (safeZoneW * 0.15)) + (safeZoneWAbs - 2*(safeZoneW * 0.15)) - ( 6 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y="(safeZoneY) + (safeZoneH) - ( 2 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 8 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 10 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.5 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class OnTime_Picture: ctrlStaticPicture
					{
						idc=-1;
						text="\ArmaFPV\pictures\mn.paa";
						x=0;
						y=0;
						w="( 6 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
						h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class OnTime_Text: ctrlStructuredText
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""ArmaFPV_OnTimeText"", _this # 0];";
						class Attributes
						{
							font="VCROSDMono";
							align="right";
							shadow=1;
						};
						shadow=0;
						size="( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="03:38";
						x=0;
						y="( 0.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w="( 6.5 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
			class Center_target: ctrlStaticPicture
			{
				idc=-1;
				text="\ArmaFPV\pictures\PRICEL.paa";
				x="0.5 - ( 2 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
				y="0.5 - ( 2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 + ( 1.25 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class V_Line_Left: ctrlStaticPicture
			{
				idc=-1;
				text="\ArmaFPV\pictures\horiz.paa";
				x="0.5 + ( 10 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y="0.5 - ( 12 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w="( 1 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 12 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class V_Line_Right: V_Line_Left
			{
				x="0.5 - ( 10 * ( pixelGridNoUIScale * pixelW * 2 ))";
			};
			class MainText: ctrlStructuredText
			{
				idc=-1;
				class Attributes
				{
					font="VCROSDMono";
					align="center";
					shadow=1;
				};
				shadow=0;
				size="( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
				onLoad="uiNameSpace setVariable [""ArmaFPV_MainText"", _this # 0];";
				text="";
				x="(safeZoneXAbs + (safeZoneW * 0.15)) + (safeZoneWAbs - 2*(safeZoneW * 0.15)) / 2 - ( 20 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
				y="0.5 - ( 12 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.6 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 20 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 1.6 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
		};
	};
};
class CfgAmmo
{
	class ShellCore;
	class ShellBase;
	class ammo_Penetrator_Base;
	class R_PG32V_F;
	class FPV_RPG42_AT: R_PG32V_F
	{
		hit=500;
		indirectHit=500;
	};
};
class CfgFontFamilies
{
	class VCROSDMono
	{
		fonts[]=
		{
			"\ArmaFPV\font\VCROSDMono6",
			"\ArmaFPV\font\VCROSDMono7",
			"\ArmaFPV\font\VCROSDMono8",
			"\ArmaFPV\font\VCROSDMono9",
			"\ArmaFPV\font\VCROSDMono10",
			"\ArmaFPV\font\VCROSDMono11",
			"\ArmaFPV\font\VCROSDMono12",
			"\ArmaFPV\font\VCROSDMono13",
			"\ArmaFPV\font\VCROSDMono14",
			"\ArmaFPV\font\VCROSDMono15",
			"\ArmaFPV\font\VCROSDMono16",
			"\ArmaFPV\font\VCROSDMono17",
			"\ArmaFPV\font\VCROSDMono18",
			"\ArmaFPV\font\VCROSDMono19",
			"\ArmaFPV\font\VCROSDMono20",
			"\ArmaFPV\font\VCROSDMono21",
			"\ArmaFPV\font\VCROSDMono22",
			"\ArmaFPV\font\VCROSDMono23",
			"\ArmaFPV\font\VCROSDMono24",
			"\ArmaFPV\font\VCROSDMono25",
			"\ArmaFPV\font\VCROSDMono26",
			"\ArmaFPV\font\VCROSDMono27",
			"\ArmaFPV\font\VCROSDMono28",
			"\ArmaFPV\font\VCROSDMono29",
			"\ArmaFPV\font\VCROSDMono30",
			"\ArmaFPV\font\VCROSDMono31",
			"\ArmaFPV\font\VCROSDMono34",
			"\ArmaFPV\font\VCROSDMono35",
			"\ArmaFPV\font\VCROSDMono37",
			"\ArmaFPV\font\VCROSDMono46"
		};
	};
};
class CfgFunctions
{
	class DB
	{
		class FPV
		{
			file="\ArmaFPV\functions";
			class fpv_createDialog
			{
			};
			class fpv_getSignal
			{
			};
			class fpv_handleBattery
			{
			};
			class fpv_handleConnect
			{
				postInit=1;
			};
			class fpv_handleSignal
			{
			};
			class fpv_handleSettings
			{
			};
			class fpv_handleTime
			{
			};
			class fpv_onDestroy
			{
			};
			class fpv_destroyUI
			{
			};
			class fpv_droneInit
			{
			};
		};
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
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHRotor;
			class HitHull;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class drone_base_F: Helicopter_Base_F
	{
		features="Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author="$Sam";
		mapSize=4;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_UAV_s"
				};
				speechPlural[]=
				{
					"veh_air_UAV_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_air_UAV_s";
		textPlural="$STR_A3_nameSound_veh_air_UAV_p";
		nameSound="veh_air_UAV_s";
		_generalMacro="drone_base_F";
		editorSubcategory="EdSubcat_Drones";
		scope=0;
		displayName="$STR_A3_CfgVehicles_UAV_01_base0";
		isUav=1;
		uavCameraDriverPos="pip_pilot_pos";
		uavCameraDriverDir="pip_pilot_dir";
		uavCameraGunnerPos="";
		uavCameraGunnerDir="";
		extCameraPosition[]={0,-0.25,-2.3499999};
		extCameraParams[]={0.93000001,10,30,0.25,1,10,30,0,1};
		formationX=10;
		formationZ=10;
		memoryPointTaskMarker="TaskMarker_1_pos";
		memoryPointDriverOptics="pip_pilot_pos";
		driverOpticsModel="\ArmaFPV\lancet_hud.p3d";
		GunnerOpticsModel="\ArmaFPV\lancet_hud.p3d";
		driverForceOptics=1;
		disableInventory=1;
		unitInfoType="RscUnitInfoParachute";
		unitInfoTypeRTD="RscUnitInfoParachute";
		driverWeaponsInfoType="RscOptics_Offroad_01";
		getInRadius=0;
		damageEffect="UAVDestructionEffects";
		damageTexDelay=0.5;
		dustEffect="UAVDust";
		waterEffect="UAVWater";
		washDownDiameter="10.0f";
		washDownStrength="0.25f";
		killFriendlyExpCoef=0.1;
		accuracy=1.5;
		camouflage=0.5;
		audible=0.1;
		armor=0.5;
		cost=20000;
		altFullForce=1000;
		altNoForce=2000;
		LODTurnedIn=-1;
		LODTurnedOut=-1;
		epeImpulseDamageCoef=5;
		fuelExplosionPower=0;
		vehicleClass="Autonomous";
		model="\ArmaFPV\drone.p3d";
		icon="\ArmaFPV\data\drononmap.paa";
		picture="\ArmaFPV\data\drononmap.paa";
		class Reflectors
		{
		};
		startDuration=3;
		maxSpeed=140;
		precision=15;
		steerAheadSimul=0.5;
		steerAheadPlan=0.69999999;
		predictTurnPlan=2;
		predictTurnSimul=1.5;
		liftForceCoef=1;
		cyclicAsideForceCoef=2;
		cyclicForwardForceCoef=1.2;
		bodyFrictionCoef=0.30000001;
		backRotorForceCoef=5;
		fuelCapacity=8.5;
		maxFordingDepth=0.30000001;
		threat[]={0.1,0.1,0.1};
		maxMainRotorDive=0;
		minMainRotorDive=0;
		neutralMainRotorDive=0;
		gearRetracting=0;
		mainRotorSpeed=-7;
		backRotorSpeed=7;
		tailBladeVertical=0;
		radarTargetSize=0.1;
		visualTargetSize=0.1;
		irTarget=0;
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=0;
		weapons[]={};
		magazines[]={};
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		class TransportItems
		{
		};
		destrType="DestructDefault";
		driverCompartments="Compartment3";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.1;
			};
			class HitHRotor: HitHRotor
			{
				armor=0.30000001;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_damage.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_destruct.rvmat"
			};
		};
		class ViewPilot: ViewPilot
		{
			minFov=0.25;
			maxFov=1.25;
			initFov=1;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			minFov=1.25;
			maxFov=1.25;
			initFov=1.25;
			visionMode[]=
			{
				"Normal"
			};
			thermalMode[]={0,1};
		};
		class MFD
		{
		};
		enableManualFire=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components
				{
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				class components
				{
				};
			};
		};
		class Turrets
		{
		};
		attenuationEffectType="OpenHeliAttenuation";
		soundGetIn[]=
		{
			"",
			1,
			1
		};
		soundGetOut[]=
		{
			"",
			1,
			1,
			50
		};
		soundEnviron[]=
		{
			"",
			0.031622775,
			1
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_start_full_int",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_start_full_01",
			0.56234133,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_stop_full_int",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Uav_01\quad_stop_full_01",
			0.56234133,
			1,
			200
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
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
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
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\quad_engine_full_01",
					0.44668359,
					1,
					200
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade",
					0.31622776,
					1,
					200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_high",
					0.31622776,
					1,
					250
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\quad_engine_full_int",
					0.56234133,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_int",
					0.56234133,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_high_int",
					0.56234133,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustsEffectDrone";
			};
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_UAV_01_base_Library0";
		};
	};
	class O_Crocus_AT: drone_base_F
	{
		author="$Sam";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\ArmaFPV\data\krokus1.jpg";
		_generalMacro="O_Crocus_AT";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		displayName="Crocus AT";
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"O_Crocus_AT_Bag"
			};
			displayName="";
		};
		textureList[]=
		{
			"Indep",
			1
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call DB_fnc_fpv_onDestroy";
				init="(_this # 0) spawn DB_fnc_fpv_droneInit;";
			};
		};
	};
	class O_Crocus_AP: O_Crocus_AT
	{
		author="$Sam";
		_generalMacro="O_Crocus_AP";
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\ArmaFPV\data\termo.jpg";
		displayName="Crocus AP";
		model="\ArmaFPV\drone2\drone2.p3d";
		icon="\ArmaFPV\data\drononmap.paa";
		picture="\ArmaFPV\data\drononmap.paa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"O_Crocus_AP_Bag"
			};
			displayName="";
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call DB_fnc_fpv_onDestroy";
				init="(_this # 0) spawn DB_fnc_fpv_droneInit;";
			};
		};
	};
	class B_Crocus_AT: drone_base_F
	{
		author="$Sam";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\ArmaFPV\data\krokus1.jpg";
		_generalMacro="B_Crocus_AT";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		displayName="Crocus AT";
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"B_Crocus_AT_Bag"
			};
			displayName="";
		};
		textureList[]=
		{
			"Indep",
			1
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call DB_fnc_fpv_onDestroy";
				init="(_this # 0) spawn DB_fnc_fpv_droneInit;";
			};
		};
	};
	class B_Crocus_AP: B_Crocus_AT
	{
		author="$Sam";
		_generalMacro="B_Crocus_AP";
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\ArmaFPV\data\termo.jpg";
		displayName="Crocus AP";
		model="\ArmaFPV\drone2\drone2.p3d";
		icon="\ArmaFPV\data\drononmap.paa";
		picture="\ArmaFPV\data\drononmap.paa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"B_Crocus_AP_Bag"
			};
			displayName="";
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call DB_fnc_fpv_onDestroy";
				init="(_this # 0) spawn DB_fnc_fpv_droneInit;";
			};
		};
	};
	class I_Crocus_AT: drone_base_F
	{
		author="$Sam";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\ArmaFPV\data\krokus1.jpg";
		_generalMacro="I_Crocus_AT";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
		displayName="Crocus AT";
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"I_Crocus_AT_Bag"
			};
			displayName="";
		};
		textureList[]=
		{
			"Indep",
			1
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call DB_fnc_fpv_onDestroy";
				init="(_this # 0) spawn DB_fnc_fpv_droneInit;";
			};
		};
	};
	class I_Crocus_AP: I_Crocus_AT
	{
		author="$Sam";
		_generalMacro="I_Crocus_AP";
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\ArmaFPV\data\termo.jpg";
		displayName="Crocus AP";
		model="\ArmaFPV\drone2\drone2.p3d";
		icon="\ArmaFPV\data\drononmap.paa";
		picture="\ArmaFPV\data\drononmap.paa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"I_Crocus_AP_Bag"
			};
			displayName="";
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call DB_fnc_fpv_onDestroy";
				init="(_this # 0) spawn DB_fnc_fpv_droneInit;";
			};
		};
	};
	class Land_SatelliteAntenna_01_F;
	class FPV_Retranslator: Land_SatelliteAntenna_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Signal Booster";
	};
	class B_UAV_01_backpack_F;
	class O_Crocus_AT_Bag: B_UAV_01_backpack_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crocus AT Bag";
		author="DarkBall";
		class assembleInfo
		{
			assembleTo="O_Crocus_AT";
			base="";
			displayName="Crocus AT";
			dissasembleTo[]={};
			primary=1;
		};
	};
	class O_Crocus_AP_Bag: B_UAV_01_backpack_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crocus AP Bag";
		author="DarkBall";
		class assembleInfo
		{
			assembleTo="O_Crocus_AP";
			base="";
			displayName="Crocus AP";
			dissasembleTo[]={};
			primary=1;
		};
	};
	class B_Crocus_AT_Bag: B_UAV_01_backpack_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crocus AT Bag";
		author="DarkBall";
		class assembleInfo
		{
			assembleTo="B_Crocus_AT";
			base="";
			displayName="Crocus AT";
			dissasembleTo[]={};
			primary=1;
		};
	};
	class B_Crocus_AP_Bag: B_UAV_01_backpack_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crocus AP Bag";
		author="DarkBall";
		class assembleInfo
		{
			assembleTo="B_Crocus_AP";
			base="";
			displayName="Crocus AP";
			dissasembleTo[]={};
			primary=1;
		};
	};
	class I_Crocus_AT_Bag: B_UAV_01_backpack_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crocus AT Bag";
		author="DarkBall";
		class assembleInfo
		{
			assembleTo="I_Crocus_AT";
			base="";
			displayName="Crocus AT";
			dissasembleTo[]={};
			primary=1;
		};
	};
	class I_Crocus_AP_Bag: B_UAV_01_backpack_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crocus AP Bag";
		author="DarkBall";
		class assembleInfo
		{
			assembleTo="I_Crocus_AP";
			base="";
			displayName="Crocus AP";
			dissasembleTo[]={};
			primary=1;
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class my_preInit
	{
		init="call compile preProcessFileLineNumbers '\ArmaFPV\XEH_preInit.sqf'";
	};
};
class cfgMods
{
	author="Darkball";
	timepacked="1696510849";
};
