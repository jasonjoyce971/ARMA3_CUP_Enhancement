class CfgPatches
{
	class ARMA3_CUP_Enhancement_MI6
	{
		units[]=
		{
			"JAS_CUP_B_MI6A_CDF",
			"JAS_CUP_B_MI6T_CDF",
			"JAS_CUP_O_MI6A_CHDKZ",
			"JAS_CUP_O_MI6T_CHDKZ",
			"JAS_CUP_O_MI6A_AAC",
			"JAS_CUP_O_MI6T_AAC",
			"JAS_CUP_O_MI6A_TKA",
			"JAS_CUP_O_MI6T_TKA",
			"JAS_CUP_O_MI6A_RU",
			"JAS_CUP_O_MI6T_RU",
			"JAS_CUP_C_MI6A_RU",
			"JAS_CUP_C_MI6T_RU"
		};
		weapons[]=
		{
			
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Heli",
			"A3_Weapons_F",
			"A3_CargoPoses_f",
			"ARMA3_CUP_Enhancement_Systems",
			"FIR_AirWeaponSystem_US",
			"CUP_BaseData",
			"CUP_BaseConfigs",
			"CUP_AirVehicles_Core",
			"ARMA3_CUP_Enhancement_Weapons",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_VehicleWeapons",
			"CUP_Weapons_Pods",
			"CUP_Weapons_WeaponsCore",
			"A3_Modules_F"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ARMA3_CUP_Enhancement_MI6
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_MI6"
			};
		};
	};
};
/* class CfgMissions
{
	// Campaigns
	class Campaigns
	{
		class RootCampaign
		{
			// Each of these definitions are applied to the root campaign
			briefingname = $STR_A3_CampaignName;
			overviewText = $STR_A3_CampaignOverview;
			author = $STR_A3_Bohemia_Interactive;
			overviewPicture = "a3\Missions_F_EPA\data\img\Campaign_overview_CA.paa";
			// Classes of episodes included
			campaigns[] = {StageA, StageB, StageC};
			class StageA
			{
				directory = "A3\Missions_F_EPA\Campaign";	
				//include the campaign description.ext to make it's content re-usable outside of the campaign
				#include "\A3\Missions_F_EPA\Campaign\description.ext"
			};
			class StageB
			{
				directory = "A3\Missions_F_EPA\CampaignDummy";
			};
			class StageC
			{
				directory = "A3\Missions_F_EPA\CampaignDummy2";
			};
		};
	};
	// Showcase missions
	class Showcases
	{
		displayName = $STR_A3_CFGMISSIONS_SHOWCASES0;
		briefingName = $STR_A3_CFGMISSIONS_SHOWCASES0;
		author = $STR_A3_Bohemia_Interactive;
		overviewPicture = "a3\Missions_F_Beta\data\img\Campaign_overview_CA.paa";
		overviewText = $STR_A3_CFGMISSIONS_SHOWCASES0;
		class Showcase_Ranges
		{
			briefingName = "-{GOL}- AAC Weapons Training";
			directory = "ARMA3_CUP_Enhancement_MI6\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_MI6\presentation\picture.paa";
			author = "-{GOL}-Jason";
		};
	};
	// Multiplayer missions
	class MPMissions
	{
		class MP_COOP_m01
		{
			briefingName="@STR_A3_MP_COOP_m01_briefingName";
			directory = "A3\missions_f\mpscenarios\MP_COOP_m01.Stratis";
		};
	};
	// Challenges
	class Challenges
	{
		briefingName = $STR_A3_CHALLENGES_NAME;
		overviewText = $STR_A3_CHALLENGES_OVERVIEW;
		overviewPicture = "\a3\Missions_F_Beta\data\img\Challenges_overview_CA.paa";
		// Firing Drills
		author = $STR_A3_Bohemia_Interactive;
		class Firing_Drills
		{
			briefingName = $STR_A3_FIRING_DRILLS_NAME;
			overviewText = $STR_A3_FIRING_DRILLS_OVERVIEW;
			overviewPicture = "\a3\Missions_F_Beta\data\img\FiringDrills_overview_CA.paa";
			author = $STR_A3_Bohemia_Interactive;
			class SP_FD04 //Green
			{
				directory = "a3\Missions_F_Beta\Challenges\firing_drills\sp_fd04.stratis";
				briefingName = $STR_A3_FIRING_DRILLS_SP_FD04_NAME;
				overviewText = $STR_A3_FIRING_DRILLS_SP_FD04_OVERVIEW;
				overviewPicture = "\a3\Missions_F_Beta\data\img\SP_FD04_overview_CA.paa";
				author = $STR_A3_Bohemia_Interactive;
			};
		};
	};
}; */
class DefaultEventhandlers;
class Eventhandlers;
class CBA_Extended_EventHandlers;
class IGUIBack;
class RscControlsGroup;
class RscText;
class RangeText : RscText
{
};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscFrame;
class RscCombo;
class Rsclistbox;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscMapControl;
class RscObject;
class RscHTML;
class RscTextCheckbox;
class RscEdit;
class CfgHints
{
	class AWSAIRCRAFT
	{
		class MI6
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Mi-6 Hook";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Mass Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Hook is a true giant of the helicopter world, the thing is massive. It is so big in fact, it requires wings as well as rotors to generate enough lift. Owing its design origins to the same need that gave birth to the Chinook, the Hook was designed to lift a complete fighting force, 65 men to be precise. The Hooks size however is a major pitfall making it cumbersome and difficult to control at low speed due to simple inertia.<br/><br/>Factions:<br/><br/>%2Chernarus Defence Force<br/>%2ChDKZ<br/>%2Russian Federation<br/>%2Takistani Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
	};
};
class RscInGameUI
{
	class RscUnitInfo;
	class Rsc_LilB_Kimi_Base : RscUnitInfo
	{
		controls[] =
		{
			"WeaponInfoControlsGroupRight",
			"CA_BackgroundVehicle",
			"CA_BackgroundVehicleTitle",
			"CA_BackgroundVehicleTitleDark",
			"CA_BackgroundFuel",
			"CA_Vehicle",
			"CA_VehicleRole",
			"CA_HitZones",
			"CA_SpeedBackground",
			"CA_SpeedUnits",
			"CA_Speed",
			"CA_ValueFuel",
			"CA_AltBackground",
			"CA_AltUnits",
			"CA_Alt",
			"CA_TextFlaresMode",
			"CA_TextFlares",
			"CA_Radar"
		};
		class CA_HMDs_Kimi_Autohover : RscPicture
		{
			shadow = 1;
			idc = 1204;
			text = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\autohover_ca.paa";
			x = "5.6 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",  (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.4 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",  (safezoneY + 0.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "0.8 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class Rsc_LilB_Kimi_UI_Turret : Rsc_LilB_Kimi_Base
	{
		idd = 300;
		controls[] =
		{
			"CA_Zeroing",
			"CA_IGUI_elements_group",
			"CA_HMDs_Kimi_Autohover"
		};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group : RscControlsGroup
		{
			idc = 170;
			class VScrollbar : VScrollbar
			{
				width = 0;
			};
			class HScrollbar : HScrollbar
			{
				height = 0;
			};
			x = "0 *   (0.01875 * SafezoneH) +   (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w = "53.5 *   (0.01875 * SafezoneH)";
			h = "40 *   (0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance : RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "24.78 *   (0.01875 * SafezoneH)";
					y = "30.88 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_Speed : RangeText
				{
					idc = 188;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "120";
					x = "14.78 *   (0.01875 * SafezoneH)";
					y = "30.88 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_Alt : RangeText
				{
					idc = 189;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "3825";
					x = "34.78 *   (0.01875 * SafezoneH)";
					y = "30.88 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_VisionMode : RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "12.58 *   (0.01875 * SafezoneH)";
					y = "8 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_FlirMode : RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "15.78 *   (0.01875 * SafezoneH)";
					y = "8 *   (0.025 * SafezoneH)";
					w = "4.5 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class ValueGrid : RangeText
				{
					idc = 172;
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.20 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
				};
				class TextTADS : RangeText
				{
					idc = 1010;
					text = "TADS";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = "12.30 *   (0.01875 * SafezoneH)";
					y = "5 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class ValueTime : RangeText
				{
					idc = 190;
					text = "20:28:35";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.1 *   (0.01875 * SafezoneH)";
					y = "6.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
				};
				class CA_Laser : RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\Apache_LaserOn.paa";
					x = "20.45 *   (0.01875 * SafezoneH)";
					y = "14.1 *   (0.025 * SafezoneH)";
					w = "12.5 *   (0.01875 * SafezoneH)";
					h = "12 *   (0.025 * SafezoneH)";
				};
				class CA_Heading : RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "24.83 *   (0.01875 * SafezoneH)";
					y = "6 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class HelicopterWreck;
	class Air : AllVehicles
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
	};
	class Helicopter : Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class AnimationSources;
		class HitPoints;
	};
	class Helicopter_Base_F : Helicopter
	{
		class RotorLibHelicopterProperties;
		class DefaultEventhandlers;
		class Turrets : Turrets
		{
			class MainTurret;
			class NewTurret;
		};
		class HitPoints : HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
	};
	class Helicopter_Base_H : Helicopter_Base_F
	{
		class Eventhandlers;
		class ViewPilot;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets : Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class JAS_CUP_MI6A_Base : Helicopter_Base_H
	{
		scope = 0;
		class RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MI6\rotorLib\RTD_Hook.xml";
			autoHoverCorrection[] = { 6.5, 0, 0 };
			defaultCollective = 0.60500002;
			retreatBladeStallWarningSpeed = 92.583;
			maxTorque = 4032;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 350000;
			maxTailRotorStress = 350000;
		};
		model = "\cup\airvehicles\cup_airvehicles_mi6\int73_mi6a.p3d";
		displayName = "Mi-6JA Hook";
		Icon = "\cup\airvehicles\cup_airvehicles_mi6\icons\mi6icon_ca.paa";
		Picture = "\cup\airvehicles\cup_airvehicles_mi6\icons\mi6pic_ca.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_MI6\UI\editorpreview\MI6A.jpg";
		simulation = "helicopterrtd";
		numberPhysicalWheels = 3;
		driverIsCommander = 1;
		mapSize = 35;
		extCameraPosition[] = { 0, 3.5, -35 };
		armor = 100;
		cost = 10000000;
		maxSpeed = 340;
		fuelCapacity = 600;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		driverCompartments = "Compartment1";
		viewDriverShadow = 1;
		viewGunnerShadow = 1;
		viewCargoShadow = 1;
		driverAction = "CUP_MI6_Pilot";
		driverInAction = "CUP_MI6_Pilot";
		memoryPointsGetInGunner = "pos gunner";
		memoryPointsGetInGunnerDir = "pos gunner dir";
		gearRetracting = 0;
		crewVulnerable = 1;
		damageResistance = 0.0014;
		weapons[] = {};
		magazines[] = {};
		memoryPointCM[] = {};
		memoryPointCMDir[] = {};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		minMainRotorDive = -2;
		maxMainRotorDive = 2;
		neutralMainRotorDive = 0;
		minBackRotorDive = -2.5;
		maxBackRotorDive = 2.5;
		neutralBackRotorDive = 0;
		supplyradius = 7.5;
		threat[] = { 0.69999999, 0.1, 0.2 };
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		transportMaxBackpacks = 30;
		castDriverShadow = 1;
		castCargoShadow = 1;
		driverCanSee = "1+2+8+16";
		destrType = "DestructWreck";
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";
		selectionhrotormove = "velka vrtule blur";
		selectionhrotorstill = "velka vrtule staticka";
		selectionvrotormove = "mala vrtule blur";
		selectionvrotorstill = "mala vrtule staticka";
		liftForceCoef = 1.5;
		driveOnComponent[] =
		{
			"damper_front",
			"damper_left",
			"damper_right"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					directionStabilized = 1;
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					thermalMode[] = { 0, 1 };
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics = 0;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 80;
			maxElev = 80;
			initElev = 80;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 0;
		};
		memoryPointDriverOptics = "slingCamera";
		slingLoadMaxCargoMass = 15300;
		slingLoadMemoryPoint = "slingLoad0";
		insideSoundCoef = 0.89999998;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		attenuationEffectType = "SemiOpenHeliAttenuation";
		emptySound[] =
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[] =
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[] =
		{
			"emptySound",
			0
		};
		soundBuildingCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[] =
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[] =
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		rotorDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",
			1,
			1
		};
		rotorDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",
			2.5118864,
			1,
			300
		};
		rotorDamage[] =
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[] =
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[] =
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[] =
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[] =
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN",
			1,
			1,
			100
		};
		gearUp[] =
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[] =
		{
			"gearDownInt",
			"gearDownExt"
		};
		soundLocked[] =
		{
			"\cup\airvehicles\cup_airvehicles_mi6\sounds\int-alarm_loop.wss",
			3.1622777,
			1
		};
		soundIncommingMissile[] =
		{
			"\cup\airvehicles\cup_airvehicles_mi6\sounds\int-alarm_loop.wss",
			3.1622777,
			1
		};
		soundGetIn[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\open_close",
			1,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\open_close",
			1,
			1,
			50
		};
		soundDammage[] =
		{
			"\cup\airvehicles\cup_airvehicles_mi6\sounds\mi6_alarm.wss",
			0.001,
			1
		};
		soundEngineOnInt[] =
		{
			"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_engstart_ext.ogg",
			0.69999999,
			1
		};
		soundEngineOnExt[] =
		{
			"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_engstart_ext.ogg",
			1,
			1,
			800
		};
		soundEngineOffInt[] =
		{
			"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_engoff_ext.ogg",
			0.69999999,
			1
		};
		soundEngineOffExt[] =
		{
			"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_engoff_ext.ogg",
			1,
			1,
			800
		};
		class Sounds
		{
			class Engine
			{
				sound[] =
				{
					"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_ext_x1.ogg",
					2.5118864,
					1,
					1500
				};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] =
				{
					"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_ext_x7.ogg",
					2.5118864,
					1,
					2000
				};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = { 1.6, 3.1400001, 2, 0.89999998 };
			};
			class RotorHighOut
			{
				sound[] =
				{
					"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_ext_x13.ogg",
					3.5118899,
					1,
					2500
				};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = { 1.6, 3.1400001, 2, 0.89999998 };
			};
			class EngineIn
			{
				sound[] =
				{
					"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_int_0.ogg",
					1,
					1
				};
				/*frequency = "rotorSpeed";
				volume = "(1-camPos)*(rotorSpeed factor[0.4,1])";*/
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed-0.75)*4";
			};
			class RotorLowIn
			{
				sound[] =
				{
					"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_int_50.ogg",
					1.2589254,
					1
				};
				/*frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";*/
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorHighIn
			{
				sound[] =
				{
					"\cup\airvehicles\cup_airvehicles_mi6\sounds\Mi6_int_90.ogg",
					1.2589254,
					1
				};
				/*frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";*/
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.2238721,
					1,
					20
				};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] =
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] =
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.70794576,
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
					1.1220185,
					1,
					50
				};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[40,80])";
			};
		};
		class Library
		{
			libTextDesc = "The Mil Mi-6 Hook was a Soviet/Russian heavy transport helicopter that was designed by the Mil design bureau. It was built in large numbers for both military and civil roles. It had a cargo capacity comparable with AN-12";
		};
		hiddenSelections[] =
		{
			"fus1",
			"fus2",
			"fus3",
			"wings",
			"cargo1",
			"szyba_lewa",
			"szyba_prawa",
			"szyba_przednia_lewa",
			"szyba_przednia_prawa"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\textures\RUS2\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\textures\RUS2\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\textures\RUS2\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\textures\RUS2\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6_glass.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6_glass_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6_glass_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6_glass_in.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6_glass_in_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6_glass_in_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus1.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus1_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus1_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus2.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus2_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus2_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus3.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus3_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6fus3_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6wings.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6wings_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi6\Data\mi6wings_destruct.rvmat"
			};
		};
		class EventHandlers : Eventhandlers
		{
			class CUP_AirVehicles_Mi6
			{
				init = "_b2a = _this execvm ""\cup\airvehicles\cup_airvehicles_mi6\mi6_init.sqf""";
				engine = "_b4a = _this execvm ""\cup\airvehicles\cup_airvehicles_mi6\scripts\mi6maxengine.sqf""";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = { 7000, 7500, 10000 };
				ambient[] = { 70, 75, 100 };
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 300;
				};
			};
			class Right : Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {};
		class MarkerLights
		{
			class NavRed
			{
				name = "NavRed";
				color[] = { 0.80000001, 0, 0 };
				ambient[] = { 0.079999998, 0, 0 };
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15000001;
				drawLightCenterSize = 0.039999999;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class NavGreen : NavRed
			{
				name = "NavGreen";
				color[] = { 0, 0.80000001, 0 };
				ambient[] = { 0, 0.079999998, 0 };
			};
			class NavWhite : NavRed
			{
				name = "NavWhite";
				color[] = { 1, 1, 1 };
				ambient[] = { 0.1, 0.1, 0.1 };
			};
			class BeaconRed1
			{
				name = "dolnyBeacon";
				color[] = { 0.89999998, 0.15000001, 0.1 };
				ambient[] = { 0.090000004, 0.015, 0.0099999998 };
				intensity = 75;
				blinking = 1;
				blinkingStartsOn = 0;
				blinkingPattern[] = { 0.89999998, 0.1 };
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.039999999;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1_pos";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position = "exhaust_2_pos";
				direction = "exhaust_2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				CanEject = 0;
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				commanding = -3;
				gunnerAction = "CUP_MI6_Pilot";
				gunnerInAction = "CUP_MI6_Pilot";
				gunnerCompartments = "Compartment1";
			};
			class Radiooperator : MainTurret
			{
				body = "";
				gun = "";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				minElev = -80;
				maxElev = 40;
				initElev = 0;
				minTurn = 270;
				maxTurn = 90;
				initTurn = 0;
				proxyIndex = 2;
				hasGunner = 1;
				gunBeg = "";
				gunEnd = "";
				animationSourceBody = "";
				animationSourceGun = "";
				weapons[] = {};
				magazines[] = {};
				gunnerName = "Radiooperator";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "CUP_UH60_Cargo02";
				gunnerInAction = "CUP_UH60_Cargo02";
				gunnerCanSee = 31;
				radarType = 4;
				startEngine = 0;
				primaryGunner = 0;
				commanding = -1;
				stabilizedInAxes = "StabilizedInAxesNone";
				outGunnerMayFire = 1;
				memoryPointGun = "";
				memoryPointGunnerOptics = "";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerForceOptics = 0;
				lockWhenDriverOut = 0;
				gunnerCompartments = "Compartment1";
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -90;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = 110;
					initFov = 0.69999999;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class Mechanic : MainTurret
			{
				body = "";
				gun = "";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				minElev = -90;
				maxElev = 45;
				initElev = 0;
				minTurn = 80;
				maxTurn = 280;
				initTurn = 180;
				proxyIndex = 3;
				hasGunner = 1;
				gunBeg = "";
				gunEnd = "";
				animationSourceBody = "";
				animationSourceGun = "";
				weapons[] = {};
				magazines[] = {};
				gunnerName = "Mechanic";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "CUP_UH60_Cargo02";
				gunnerInAction = "CUP_UH60_Cargo02";
				gunnerCanSee = 31;
				radarType = 4;
				startEngine = 0;
				primaryGunner = 0;
				commanding = -1;
				stabilizedInAxes = "StabilizedInAxesNone";
				outGunnerMayFire = 1;
				memoryPointGun = "";
				memoryPointGunnerOptics = "";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerForceOptics = 0;
				lockWhenDriverOut = 0;
				gunnerCompartments = "Compartment1";
			};
			class Navigator : MainTurret
			{
				body = "";
				gun = "";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				minElev = -90;
				maxElev = 40;
				initElev = 0;
				minTurn = -110;
				maxTurn = 110;
				initTurn = 0;
				proxyIndex = 4;
				hasGunner = 1;
				gunBeg = "";
				gunEnd = "";
				animationSourceBody = "";
				animationSourceGun = "";
				weapons[] = {};
				magazines[] = {};
				gunnerName = "Navigator";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "CUP_UH60_Cargo02";
				gunnerInAction = "CUP_UH60_Cargo02";
				gunnerCanSee = 31;
				radarType = 4;
				startEngine = 0;
				primaryGunner = 0;
				commanding = -1;
				stabilizedInAxes = "StabilizedInAxesNone";
				outGunnerMayFire = 1;
				memoryPointGun = "";
				memoryPointGunnerOptics = "";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerForceOptics = 0;
				lockWhenDriverOut = 0;
				gunnerCompartments = "Compartment1";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -120;
					maxAngleY = 120;
					initFov = 0.41999999;
					minFov = 0.022;
					maxFov = 0.94;
				};
			};
		};
		class MFD
		{
		};
		class HitPoints : HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "trup";
				visual = "trup";
				passThrough = 1;
			};
			class HitFuel
			{
				armor = 0.80000001;
				material = 51;
				name = "palivo";
				visual = "palivo";
				passThrough = 0.2;
			};
			class HitEngine
			{
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 0.2;
			};
			class HitAvionics
			{
				armor = 0.15000001;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0.2;
			};
			class HitVRotor
			{
				armor = 0.2;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule";
				passThrough = 0.1;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule";
				passThrough = 0.1;
			};
			class HitGlass1
			{
				armor = 0.1;
				material = -1;
				name = "glass01";
				visual = "glass01";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 0.1;
				material = -1;
				name = "glass02";
				visual = "glass02";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 0.1;
				material = -1;
				name = "glass03";
				visual = "glass03";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 0.1;
				material = -1;
				name = "glass04";
				visual = "glass04";
				passThrough = 0;
			};
			class HitGlass5
			{
				armor = 0.1;
				material = -1;
				name = "glass05";
				visual = "glass05";
				passThrough = 0;
			};
			class HitGlass6
			{
				armor = 0.1;
				material = -1;
				name = "glass06";
				visual = "glass06";
				passThrough = 0;
			};
			class HitGlass7
			{
				armor = 0.1;
				material = -1;
				name = "glass07";
				visual = "glass07";
				passThrough = 0;
			};
			class HitGlass8
			{
				armor = 0.1;
				material = -1;
				name = "glass08";
				visual = "glass08";
				passThrough = 0;
			};
			class HitGlass9
			{
				armor = 0.1;
				material = -1;
				name = "glass09";
				visual = "glass09";
				passThrough = 0;
			};
			class HitGlass10
			{
				armor = 0.1;
				material = -1;
				name = "glass10";
				visual = "glass10";
				passThrough = 0;
			};
			class HitGlass11
			{
				armor = 0.1;
				material = -1;
				name = "glass11";
				visual = "glass11";
				passThrough = 0;
			};
			class HitGlass12
			{
				armor = 0.1;
				material = -1;
				name = "glass12";
				visual = "glass12";
				passThrough = 0;
			};
			class HitGlass13
			{
				armor = 0.1;
				material = -1;
				name = "glass13";
				visual = "glass13";
				passThrough = 0;
			};
			class HitGlass14
			{
				armor = 0.1;
				material = -1;
				name = "glass14";
				visual = "glass14";
				passThrough = 0;
			};
			class HitGlass15
			{
				armor = 0.1;
				material = -1;
				name = "glass15";
				visual = "glass15";
				passThrough = 0;
			};
			class HitGlass16
			{
				armor = 0.1;
				material = -1;
				name = "glass16";
				visual = "glass16";
				passThrough = 0;
			};
			class HitGlass17
			{
				armor = 0.1;
				material = -1;
				name = "glass17";
				visual = "glass17";
				passThrough = 0;
			};
			class HitGlass18
			{
				armor = 0.1;
				material = -1;
				name = "glass18";
				visual = "glass18";
				passThrough = 0;
			};
			class HitGlass19
			{
				armor = 0.1;
				material = -1;
				name = "glass19";
				visual = "glass19";
				passThrough = 0;
			};
			class HitGlass20
			{
				armor = 0.1;
				material = -1;
				name = "glass20";
				visual = "glass20";
				passThrough = 0;
			};
			class HitGlass21
			{
				armor = 0.1;
				material = -1;
				name = "glass21";
				visual = "glass21";
				passThrough = 0;
			};
			class HitGlass22
			{
				armor = 0.1;
				material = -1;
				name = "glass22";
				visual = "glass22";
				passThrough = 0;
			};
			class HitGlass23
			{
				armor = 0.1;
				material = -1;
				name = "glass23";
				visual = "glass23";
				passThrough = 0;
			};
			class HitGlass24
			{
				armor = 0.1;
				material = -1;
				name = "glass24";
				visual = "glass24";
				passThrough = 0;
			};
			class HitGlass25
			{
				armor = 0.1;
				material = -1;
				name = "glass25";
				visual = "glass25";
				passThrough = 0;
			};
			class HitGlass26
			{
				armor = 0.1;
				material = -1;
				name = "glass26";
				visual = "glass26";
				passThrough = 0;
			};
			class HitGlass27
			{
				armor = 0.1;
				material = -1;
				name = "glass27";
				visual = "glass27";
				passThrough = 0;
			};
			class HitGlass28
			{
				armor = 0.1;
				material = -1;
				name = "glass28";
				visual = "glass28";
				passThrough = 0;
			};
			class HitGlass29
			{
				armor = 0.1;
				material = -1;
				name = "glass29";
				visual = "glass29";
				passThrough = 0;
			};
			class HitGlass30
			{
				armor = 0.1;
				material = -1;
				name = "glass30";
				visual = "glass30";
				passThrough = 0;
			};
			class HitGlass31
			{
				armor = 0.1;
				material = -1;
				name = "glass31";
				visual = "glass31";
				passThrough = 0;
			};
			class HitGlass32
			{
				armor = 0.1;
				material = -1;
				name = "glass32";
				visual = "glass32";
				passThrough = 0;
			};
			class HitGlass34
			{
				armor = 0.1;
				material = -1;
				name = "glass34";
				visual = "glass34";
				passThrough = 0;
			};
			class HitGlass35
			{
				armor = 0.1;
				material = -1;
				name = "glass35";
				visual = "glass35";
				passThrough = 0;
			};
			class HitGlass36
			{
				armor = 0.1;
				material = -1;
				name = "glass36";
				visual = "glass36";
				passThrough = 0;
			};
			class HitGlass37
			{
				armor = 0.1;
				material = -1;
				name = "glass37";
				visual = "glass37";
				passThrough = 0;
			};
			class HitGlass38
			{
				armor = 0.1;
				material = -1;
				name = "glass38";
				visual = "glass38";
				passThrough = 0;
			};
			class HitGlass39
			{
				armor = 0.1;
				material = -1;
				name = "glass39";
				visual = "glass39";
				passThrough = 0;
			};
			class HitGlass40
			{
				armor = 0.1;
				material = -1;
				name = "glass40";
				visual = "glass40";
				passThrough = 0;
			};
			class HitGlass41
			{
				armor = 0.1;
				material = -1;
				name = "glass41";
				visual = "glass41";
				passThrough = 0;
			};
			class HitGlass42
			{
				armor = 0.1;
				material = -1;
				name = "glass42";
				visual = "glass42";
				passThrough = 0;
			};
		};
		class AnimationSources
		{
			class landing_lights
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class ramp_bottom
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class ramp_bottom2
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class ramp_leftdoor
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class ramp_rightdoor
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2 : HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3 : HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4 : HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5 : HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6 : HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7 : HitGlass1
			{
				hitpoint = "HitGlass7";
			};
			class HitGlass8 : HitGlass1
			{
				hitpoint = "HitGlass8";
			};
			class HitGlass9 : HitGlass1
			{
				hitpoint = "HitGlass9";
			};
			class HitGlass10 : HitGlass1
			{
				hitpoint = "HitGlass10";
			};
			class HitGlass11 : HitGlass1
			{
				hitpoint = "HitGlass11";
			};
			class HitGlass12 : HitGlass1
			{
				hitpoint = "HitGlass12";
			};
			class HitGlass13 : HitGlass1
			{
				hitpoint = "HitGlass13";
			};
			class HitGlass14 : HitGlass1
			{
				hitpoint = "HitGlass14";
			};
			class HitGlass15 : HitGlass1
			{
				hitpoint = "HitGlass15";
			};
			class HitGlass16 : HitGlass1
			{
				hitpoint = "HitGlass16";
			};
			class HitGlass17 : HitGlass1
			{
				hitpoint = "HitGlass17";
			};
			class HitGlass18 : HitGlass1
			{
				hitpoint = "HitGlass18";
			};
			class HitGlass19 : HitGlass1
			{
				hitpoint = "HitGlass19";
			};
			class HitGlass20 : HitGlass1
			{
				hitpoint = "HitGlass20";
			};
			class HitGlass21 : HitGlass1
			{
				hitpoint = "HitGlass21";
			};
			class HitGlass22 : HitGlass1
			{
				hitpoint = "HitGlass22";
			};
			class HitGlass23 : HitGlass1
			{
				hitpoint = "HitGlass23";
			};
			class HitGlass24 : HitGlass1
			{
				hitpoint = "HitGlass24";
			};
			class HitGlass25 : HitGlass1
			{
				hitpoint = "HitGlass25";
			};
			class HitGlass26 : HitGlass1
			{
				hitpoint = "HitGlass26";
			};
			class HitGlass27 : HitGlass1
			{
				hitpoint = "HitGlass27";
			};
			class HitGlass28 : HitGlass1
			{
				hitpoint = "HitGlass28";
			};
			class HitGlass29 : HitGlass1
			{
				hitpoint = "HitGlass29";
			};
			class HitGlass30 : HitGlass1
			{
				hitpoint = "HitGlass30";
			};
			class HitGlass31 : HitGlass1
			{
				hitpoint = "HitGlass31";
			};
			class HitGlass32 : HitGlass1
			{
				hitpoint = "HitGlass32";
			};
			class HitGlass33 : HitGlass1
			{
				hitpoint = "HitGlass33";
			};
			class HitGlass34 : HitGlass1
			{
				hitpoint = "HitGlass34";
			};
			class HitGlass35 : HitGlass1
			{
				hitpoint = "HitGlass35";
			};
			class HitGlass36 : HitGlass1
			{
				hitpoint = "HitGlass36";
			};
			class HitGlass37 : HitGlass1
			{
				hitpoint = "HitGlass37";
			};
			class HitGlass38 : HitGlass1
			{
				hitpoint = "HitGlass38";
			};
			class HitGlass39 : HitGlass1
			{
				hitpoint = "HitGlass39";
			};
			class HitGlass40 : HitGlass1
			{
				hitpoint = "HitGlass40";
			};
			class HitGlass41 : HitGlass1
			{
				hitpoint = "HitGlass41";
			};
			class HitGlass42 : HitGlass1
			{
				hitpoint = "HitGlass42";
			};
		};
		class UserActions
		{
			class landing_lights_off
			{
				displayName = "Retract landing lights";
				position = "landlights";
				radius = 8;
				condition = "(this animationPhase ""landing_lights"" > 0.5) AND (player == driver this)";
				statement = "this animate [""landing_lights"", 0]";
				onlyforplayer = 0;
				priority = 9;
				showWindow = 0;
			};
			class landing_lights_on
			{
				displayName = "Deploy landing lights";
				shortcut = "";
				position = "landlights";
				radius = 8;
				condition = "(this animationPhase ""landing_lights"" < 0.5) AND (player == driver this)";
				statement = "this animate [""landing_lights"", 1]";
				onlyforplayer = 0;
				priority = 10;
				showWindow = 0;
			};
			class doors_close
			{
				displayName = "Close cargo doors";
				position = "pos cargo";
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" < 0.1) AND (this animationPhase ""ramp_bottom2"" < 0.1) AND (this animationPhase ""ramp_leftdoor"" > 0.95) AND (this animationPhase ""ramp_rightdoor"" > 0.95)";
				statement = "this animate [""ramp_leftdoor"", 0]; this animate [""ramp_rightdoor"", 0];";
				onlyforplayer = 0;
				priority = 5;
				showWindow = 0;
			};
			class doors_open
			{
				displayName = "Open cargo doors";
				position = "pos cargo";
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" < 0.1) AND (this animationPhase ""ramp_bottom2"" < 0.1) AND (this animationPhase ""ramp_leftdoor"" < 0.1) AND (this animationPhase ""ramp_rightdoor"" < 0.1)";
				statement = "this animate [""ramp_leftdoor"", 1]; this animate [""ramp_rightdoor"", 1];";
				onlyforplayer = 0;
				priority = 5;
				showWindow = 0;
			};
			class ramp_bottom_close
			{
				displayName = "Raise ramp";
				position = "pos cargo";
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" > 0.95) AND (this animationPhase ""ramp_bottom2"" > 0.95) AND (this animationPhase ""ramp_leftdoor"" > 0.95) AND (this animationPhase ""ramp_rightdoor"" > 0.95)";
				statement = "this animate [""ramp_bottom"", 0]; this animate [""ramp_bottom2"", 0]; this animate [""Mi6_roadplane"", 1];";
				onlyforplayer = 0;
				priority = 5;
				showWindow = 0;
			};
			class ramp_bottom_open
			{
				displayName = "Lower ramp";
				position = "pos cargo";
				radius = 5;
				condition = "(this animationPhase ""ramp_bottom"" < 0.1) AND (this animationPhase ""ramp_bottom2"" < 0.1) AND (this animationPhase ""ramp_leftdoor"" > 0.95) AND (this animationPhase ""ramp_rightdoor"" > 0.95)";
				statement = "this animate [""ramp_bottom2"", 1]; this animate [""ramp_bottom"", 1]; this animate [""Mi6_roadplane"", 0];";
				onlyforplayer = 0;
				priority = 5;
				showWindow = 0;
			};
			class SecureVehicle
			{
				displayName = "Secure Vehicle";
				displayNameDefault = "Secure Vehicle";
				position = "CargoAttach";
				radius = 5;
				showwindow = 1;
				onlyForPlayer = 1;
				condition = "player in crew (vehicle player) && (vehicle player) != this && (vehicle player) != player";
				statement = "[this, vehicle player, player] call CUP_fnc_secureVehicleCargo";
			};
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[] = {"VTV_limit_1","VTV_limit_2"};
				disableHeightLimit = 0;
				maxLoadMass = 12000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0,0};
				exits[] = {"VTV_exit_1"};
				unloadingInterval = 3;
				loadingDistance = 10;
				loadingAngle = 60;
				parachuteClassDefault = "B_Parachute_02_F";
				parachuteHeightLimitDefault = 50;
			};
		};
	};
	class JAS_CUP_MI6T_Base : JAS_CUP_MI6A_Base
	{
		displayName = "Mi-6JT Hook";
		model = "\cup\airvehicles\cup_airvehicles_mi6\int73_mi6t.p3d";
		editorPreview = "\ARMA3_CUP_Enhancement_MI6\UI\editorpreview\MI6T.jpg";
		hideWeaponsCargo = 1;
		transportSoldier = 54;
		cargoAction[] =
		{
			"CUP_C130_Cargo02"
		};
	};
	class JAS_CUP_Mi6Wreck : HelicopterWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\cup\airvehicles\cup_airvehicles_mi6\wreck\int73_mi6_wreck.p3d";
		Icon = "\cup\airvehicles\cup_airvehicles_mi6\icons\mi6icon_ca.paa";
		mapSize = 35;
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		hideWeaponsCargo = 1;
		transportSoldier = 18;
		class Eventhandlers
		{
		};
	};
	class JAS_CUP_B_MI6A_CDF : JAS_CUP_MI6A_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 1;
		faction = "CUP_B_CDF";
		accuracy = 1000;
		crew = "CUP_B_CDF_Pilot";
		typicalCargo[] =
		{
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_B_MI6T_CDF : JAS_CUP_MI6T_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 1;
		faction = "CUP_B_CDF";
		accuracy = 1000;
		crew = "CUP_B_CDF_Pilot";
		typicalCargo[] =
		{
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CDF\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6A_CHDKZ : JAS_CUP_MI6A_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		faction = "CUP_O_CHDKZ";
		accuracy = 1000;
		crew = "CUP_O_INS_Pilot";
		typicalCargo[] =
		{
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6T_CHDKZ : JAS_CUP_MI6T_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		faction = "CUP_O_CHDKZ";
		accuracy = 1000;
		crew = "CUP_O_INS_Pilot";
		typicalCargo[] =
		{
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6A_AAC : JAS_CUP_MI6A_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		accuracy = 1000;
		crew = "CUP_O_INS_Pilot";
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_GIANT";
		typicalCargo[] =
		{
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6T_AAC : JAS_CUP_MI6T_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_GIANT";
		accuracy = 1000;
		crew = "CUP_O_INS_Pilot";
		typicalCargo[] =
		{
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\CHDKZ\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6A_TKA : JAS_CUP_MI6A_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		faction = "CUP_O_TK";
		accuracy = 1000;
		crew = "CUP_O_TK_Pilot";
		typicalCargo[] =
		{
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6T_TKA : JAS_CUP_MI6T_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		faction = "CUP_O_TK";
		accuracy = 1000;
		crew = "CUP_O_TK_Pilot";
		typicalCargo[] =
		{
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6A_RU : JAS_CUP_MI6A_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		faction = "CUP_O_RU";
		accuracy = 1000;
		crew = "CUP_O_RU_Pilot";
		typicalCargo[] =
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_O_MI6T_RU : JAS_CUP_MI6T_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 0;
		faction = "CUP_O_RU";
		accuracy = 1000;
		crew = "CUP_O_RU_Pilot";
		typicalCargo[] =
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_C_MI6A_RU : JAS_CUP_MI6A_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 3;
		faction = "CUP_C_RU";
		accuracy = 1000;
		crew = "C_Man_Pilot_F";
		typicalCargo[] =
		{
			"C_Man_Pilot_F",
			"C_Man_Pilot_F",
			"C_Man_Pilot_F",
			"C_Man_Pilot_F"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
	class JAS_CUP_C_MI6T_RU : JAS_CUP_MI6T_Base
	{
		scope = 2;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 3;
		faction = "CUP_C_RU";
		accuracy = 1000;
		crew = "C_Man_Pilot_F";
		typicalCargo[] =
		{
			"C_Man_Pilot_F",
			"C_Man_Pilot_F",
			"C_Man_Pilot_F",
			"C_Man_Pilot_F"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6fus1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6fus2_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6fus3_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\AERO\mi6wings_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa",
			"cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"
		};
	};
};
