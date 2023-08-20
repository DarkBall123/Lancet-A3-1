class BIS_AddonInfo
{
	author="Dankan37, Sam, Lukin";
	timepacked="1682755312";
};
class RscPicture;
class RscText;
class ctrlMapEmpty;
class ctrlStaticBackground;
class D37_seeker
{
	idd=3737;
	movingEnable="false";
	onMouseMoving="_this call D37AT_fnc_handleMouse";
	class controls
	{
		class line_above: ctrlStaticBackground
		{
			idc=-1;
			x=0;
			y=0;
			w=0;
			h=0;
			onLoad="uiNamespace setVariable [""_lineAbove"", (_this # 0)];";
		};
		class line_below: ctrlStaticBackground
		{
			idc=-1;
			x=0;
			y=0;
			w=0;
			h=0;
			onLoad="uiNamespace setVariable [""_lineBelow"", (_this # 0)];";
		};
		class line_left: ctrlStaticBackground
		{
			idc=-1;
			x=0;
			y=0;
			w=0;
			h=0;
			onLoad="uiNamespace setVariable [""_lineLeft"", (_this # 0)];";
		};
		class line_right: ctrlStaticBackground
		{
			idc=-1;
			x=0;
			y=0;
			w=0;
			h=0;
			onLoad="uiNamespace setVariable [""_lineRight"", (_this # 0)];";
		};
		class seeker_lock: RscPicture
		{
			idc=1201;
			text="LANCETmini\pictures\targetLock.paa";
			x="0.5 - 0.25 / 2";
			y="0.5 - 0.25 / 2";
			w=0.25;
			h=0.25;
			colorText[]={1,1,1,0.60000002};
		};
		class tx_zoom: RscText
		{
			idc=1000;
			x="0.22 * safezoneW + safezoneX";
			y="0.45 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.1 * safezoneH";
			font="LCD14";
			fade=1;
		};
		class tx_camera: RscText
		{
			idc=1002;
			x="0.22 * safezoneW + safezoneX";
			y="0.49 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.1 * safezoneH";
			font="LCD14";
			fade=1;
		};
		class tx_azimuth: RscText
		{
			idc=1001;
			x="0.25 * safezoneW + safezoneX";
			y="0.87 * safezoneH + safezoneY";
			w="0.08 * safezoneW";
			h="0.06 * safezoneH";
			font="LCD14";
			fade=1;
		};
		class tx_time: RscText
		{
			idc=1003;
			x="0.61 * safezoneW + safezoneX";
			y="0.87 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.06 * safezoneH";
			font="LCD14";
			fade=1;
		};
		class tx_lock: RscText
		{
			idc=1004;
			x="0.66 * safezoneW + safezoneX";
			y="0.07  * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.06 * safezoneH";
			font="LCD14";
			fade=1;
		};
		class tx_launchtime: RscText
		{
			idc=1005;
			x="0.5 * safezoneW + safezoneX";
			y="0.87  * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.06 * safezoneH";
			style="ST_LEFT";
			font="LCD14";
			fade=1;
		};
	};
	class controlsBackground
	{
		class map_background: ctrlMapEmpty
		{
			idc=-1;
			x=0;
			y=0;
			w=1;
			h=1;
			onLoad="(_this # 0) ctrlMapCursor ['', 'BlankCursor']; (_this # 0) ctrlShow false;";
		};
	};
};
class cfgPatches
{
	class LANCETmini
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_beta"
		};
		author="Dankan37/Sam/Lukin";
	};
};
class cfgFunctions
{
	class D37AT
	{
		file="LANCETmini\functions";
		class scripts
		{
			class handleSpeed
			{
			};
			class findTarget
			{
			};
			class handleGuidance
			{
			};
			class handleMissile
			{
			};
			class manouverTime
			{
			};
			class handleEffects
			{
			};
			class handleMouse
			{
			};
			class centerCursor
			{
			};
			class handleText
			{
			};
			class addEventHandler
			{
			};
			class addMissile
			{
			};
			class camCreate
			{
			};
			class dialogEventHandlers
			{
			};
			class initMissile
			{
			};
			class cleanEffectsCam
			{
			};
		};
	};
};
class cfgAmmo
{
	class M_Titan_AT;
	class M_Titan_MIL_AT: M_Titan_AT
	{
		indirectHit=350;
		indirectHitRange=40;
		manualControl=0;
		timeToLive=180;
		flightProfiles[]=
		{
			"TopDown"
		};
		submunitionAmmo="ammo_Penetrator_Titan_AT_improved";
		submunitionInitSpeed=1250;
		D37AT_speedArray[]={75,43,7,60,1};
		class EventHandlers
		{
			class D37_AT
			{
				fired="[_this #0, _this # 6] call D37AT_fnc_initMissile;";
			};
		};
	};
	class M_Lancet_MIL_AT: M_Titan_AT
	{
		modelspecial="\LANCETmini\lancet.p3d";
		model="\LANCETmini\lancet.p3d";
		indirectHit=350;
		indirectHitRange=40;
		manualControl=0;
		timeToLive=180;
		flightProfiles[]=
		{
			"TopDown"
		};
		submunitionAmmo="ammo_Penetrator_Titan_AT_improved";
		submunitionInitSpeed=1250;
		D37AT_speedArray[]={75,43,7,60,1};
		class EventHandlers
		{
			class D37_AT
			{
				fired="[_this #0, _this # 6] call D37AT_fnc_initMissile;";
			};
		};
	};
	class M_Titan_MIL_AP: M_Titan_AT
	{
		indirectHit=50;
		indirectHitRange=12;
		manualControl=0;
		timeToLive=180;
		flightProfiles[]=
		{
			"TopDown"
		};
		D37AT_speedArray[]={77,45,7,60,1};
		missileManualControlCone=0;
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly";
		submunitionAmmo="";
		class EventHandlers
		{
			class D37_AT
			{
				fired="[_this #0, _this # 6] call D37AT_fnc_initMissile;";
			};
		};
	};
	class M_Lancet_MIL_AP: M_Titan_AT
	{
		modelspecial="\LANCETmini\lancet.p3d";
		model="\LANCETmini\lancet.p3d";
		indirectHit=50;
		indirectHitRange=12;
		manualControl=0;
		timeToLive=180;
		flightProfiles[]=
		{
			"TopDown"
		};
		D37AT_speedArray[]={77,45,7,60,1};
		missileManualControlCone=0;
		submunitionAmmo="";
		class EventHandlers
		{
			class D37_AT
			{
				fired="[_this #0, _this # 6] call D37AT_fnc_initMissile;";
			};
		};
	};
	class M_Titan_MIL_KE: M_Titan_AT
	{
		explosive=0;
		indirectHit=5;
		indirectHitRange=0.5;
		manualControl=0;
		caliber=4;
		hit=30;
		timeToLive=180;
		flightProfiles[]=
		{
			"TopDown"
		};
		D37AT_speedArray[]={95,88,9,77,1};
		submunitionAmmo="";
		class EventHandlers
		{
			class D37_AT
			{
				fired="[_this #0, _this # 6] call D37AT_fnc_initMissile;";
			};
		};
	};
	class M_Lancet_MIL_KE: M_Titan_AT
	{
		modelspecial="\LANCETmini\lancet.p3d";
		model="\LANCETmini\lancet.p3d";
		explosive=0;
		indirectHit=5;
		indirectHitRange=0.5;
		manualControl=0;
		caliber=4;
		hit=30;
		timeToLive=180;
		flightProfiles[]=
		{
			"TopDown"
		};
		D37AT_speedArray[]={95,88,9,77,1};
		submunitionAmmo="";
		class EventHandlers
		{
			class D37_AT
			{
				fired="[_this #0, _this # 6] call D37AT_fnc_initMissile;";
			};
		};
	};
	class ammo_Penetrator_Titan_AT_long;
	class ammo_Penetrator_Titan_AT_improved: ammo_Penetrator_Titan_AT_long
	{
		simulationStep=0.0020000001;
		timeToLive=0.25;
	};
	class M_Scalpel_AT;
	class M_Scalpel_MIL_AT: M_Scalpel_AT
	{
		indirectHit=400;
		indirectHitRange=90;
		manualControl=1;
		maxControlRange=300;
		missileManualControlCone=180;
		timeToLive=180;
		thrustTime=0.60000002;
		D37AT_speedArray[]={180,120,9,77,1.2};
		submunitionAmmo="ammo_Penetrator_Titan_AT_improved";
		submunitionInitSpeed=1250;
		class EventHandlers
		{
			class D37_AT
			{
				fired="[_this #0, _this # 6] call D37AT_fnc_initMissile;";
			};
		};
	};
};
class cfgMagazines
{
	class Titan_AT;
	class Titan_MIL_AT: Titan_AT
	{
		displayname="Lancet-3";
		ammo="M_lancet_MIL_AT";
		mass=100;
		author="Dankan37/Lukin/Sam";
	};
	class Titan_AP;
	class Titan_MIL_AP: Titan_AP
	{
		displayname="Lancet-1";
		ammo="M_lancet_MIL_AP";
		mass=70;
		author="Dankan37/Lukin/Sam";
	};
	class TITAN_MIL_KE: Titan_MIL_AP
	{
		displayname="Lancet K";
		descriptionShort="Type: Kinetic <br />Rounds: 1<br />Used in: Titan MPRL Compact";
		displayNameShort="K";
		ammo="M_lancet_MIL_KE";
		mass=25;
		author="Dankan37/Lukin/Sam";
	};
	class PylonRack_4Rnd_LG_scalpel;
	class PylonRack_4Rnd_MIL_scalpel: PylonRack_4Rnd_LG_scalpel
	{
		displayName="Lancet 4x";
		ammo="M_Scalpel_MIL_AT";
		hardpoints[]+=
		{
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK",
			"RHS_HP_APU6_9m127_KA52",
			"RHS_HP_9m120_Mi28",
			"RHS_HP_MELB"
		};
	};
	class PylonRack_3Rnd_LG_scalpel;
	class PylonRack_3Rnd_MIL_scalpel: PylonRack_3Rnd_LG_scalpel
	{
		displayName="Lancet 3x";
		ammo="M_Scalpel_MIL_AT";
		hardpoints[]+=
		{
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK",
			"RHS_HP_APU6_9m127_KA52",
			"RHS_HP_9m120_Mi28",
			"RHS_HP_MELB"
		};
	};
	class PylonRack_1Rnd_LG_scalpel;
	class PylonRack_1Rnd_MIL_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		displayName="Lancet 1x";
		ammo="M_Scalpel_MIL_AT";
	};
	class PylonMissile_1Rnd_LG_scalpel;
	class PylonMissile_1Rnd_MIL_scalpel: PylonMissile_1Rnd_LG_scalpel
	{
		displayName="Lancet 1x";
		ammo="M_Scalpel_MIL_AT";
		hardpoints[]+=
		{
			"RHS_HP_HELLFIRE_PLANE",
			"RHS_HP_LONGBOW_PLANE",
			"RHS_HP_MELB"
		};
	};
};
class cfgWeapons
{
	class launch_Titan_base;
	class launch_Titan_short_base: launch_Titan_base
	{
		magazines[]+=
		{
			"Titan_MIL_AP",
			"Titan_MIL_AT",
			"TITAN_MIL_KE"
		};
	};
	class RocketPods;
	class missiles_SCALPEL: RocketPods
	{
		magazines[]+=
		{
			"PylonRack_4Rnd_MIL_scalpel",
			"PylonRack_1Rnd_MIL_scalpel",
			"PylonRack_3Rnd_MIL_scalpel",
			"PylonMissile_1Rnd_MIL_scalpel"
		};
		hardpoints[]+=
		{
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK",
			"RHS_HP_APU6_9m127_KA52",
			"RHS_HP_9m120_Mi28",
			"RHS_HP_MELB"
		};
		class EventHandlers
		{
			class D37_AT
			{
			};
		};
	};
};
class CfgWrapperUI
{
	class Cursors
	{
		class Move;
		class BlankCursor: Move
		{
			texture="lancetmini\pictures\blank_ca.paa";
		};
	};
};
class cfgMods
{
	author="Lukin";
	timepacked="1689375599";
};
