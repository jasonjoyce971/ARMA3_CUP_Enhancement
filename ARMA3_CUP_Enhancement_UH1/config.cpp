//#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class ARMA3_CUP_Enhancement_UH1
	{
		units[]=
		{
			"JAS_CUP_O_UH1H_TKA",
			"JAS_CUP_O_UH1H_SLA",
			"JAS_CUP_I_UH1H_TK_GUE",
			"JAS_CUP_B_UH1D_GER_KSK_Des",
			"JAS_CUP_B_UH1D_GER_KSK"
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
		class ARMA3_CUP_Enhancement_UH1
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_UH1"
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
			directory = "ARMA3_CUP_Enhancement_UH1\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_UH1\presentation\picture.paa";
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
		class UH1
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "UH-1 Iroquois";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The UH-1 is possibly the most famous helicopter in the world, it is certainly one of the most common. Built to be easy to maintain, easy to fly and easy to adapt, the system has seen multiple upgrades and life extensions and is still in use today after 60 years of service.<br/><br/>Variants:<br/><br/>%2UH-1D - basic transport<br/>%2UH-1H - basic transport<br/>%2UH-1Y Venom Gunship - USMARSOC DAP<br/>%2UH-1Y Venom MEV - Dedicated Medical Transport<br/>%2UH-1Y Venom Transport - Basic Transport<br/><br/>Factions:<br/><br/>%2NATO<br/>%2USMC";
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
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class Strategic;
	class thingX;
	class Motorcycle;
	class EAWS_TRD_target : Strategic
	{
		scope = 1;
		vehicleClass = "misc";
		displayName = "EAWS TRD Target";
		destrType = "DestructNo";
		model = "\ARMA3_CUP_Enhancement_UH1\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_UH1\data\ico\ico.paa";
		mapSize = 10;
		cost = 999999999;
		armor = 50;
	};
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
	class JAS_CUP_UH1H_base: Helicopter_Base_H
	{
		expansion=1;
		picture="\CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UI\Picture_uh1h_CA.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UI\Icon_uh1h_CA.paa";
		mapSize=14;
		model="CUP\AirVehicles\CUP_AirVehicles_UH1H\CUP_UH1H.p3d";
		displayName="UH-1H";
		destrType="DestructWreck";
		simulation = "helicopterrtd";
		unitInfoTypeRTD = "RscUnitInfoAirRTDFull";
		unitInfoTypeLite = "RscUnitInfoAirRTDBasic";
		unitInfoType = "RscUnitInfoAir";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_UH1\rotorLib\RTD_Huey.xml";
			starterTime = 5;
			throttleOffToIdle = 8;
			throttleIdleToOff = 12;
			throttleIdleToFull = 4;
			throttleFullToIdle = 13;
			autoHoverCorrection[] = { 0, 2.8800001, 0 };
			maxTorque = 700;
			maxMainRotorStress = 50000;
			maxTailRotorStress = 4000;
			retreatBladeStallWarningSpeed = 76.536003;
		};
		class Library
		{
			libTextDesc="$STR_EP1_LIB_UH1H";
		};
		cargoAction[]=
		{
			"CUP_UH1Y_Cargo03",
			"CUP_UH1Y_Cargo03",
			"CUP_UH1Y_Cargo02",
			"CUP_UH1Y_Cargo01",
			"CUP_UH1Y_Cargo01",
			"CUP_UH1Y_Cargo01"
		};
		cargoIsCoDriver[]={0,0};
		hideWeaponsCargo=1;
		transportSoldier=4;
		driverAction="CUP_UH1H_Pilot";
		driverInAction="CUP_UH1H_Pilot";
		driverOpticsModel="";
		gunnerOpticsModel="";
		driveOnComponent[]=
		{
			"Skids"
		};
		selectionhrotormove="velka vrtule blur";
		selectionhrotorstill="velka vrtule staticka";
		selectionvrotormove="mala vrtule blur";
		selectionvrotorstill="mala vrtule staticka";
		liftForceCoef=1.1;
		bodyFrictionCoef=0.80000001;
		cyclicAsideForceCoef=1.2;
		cyclicForwardForceCoef=0.69999999;
		backRotorForceCoef=1;
		threat[]={0.40000001,0,0};
		mainRotorSpeed=1.2;
		backRotorSpeed=6.0999999;
		altFullForce=5400;
		altNoForce=6900;
		class MFD
		{
		};
		enableManualFire=0;
		class MarkerLights
		{
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class GreenStill
			{
				name="zeleny pozicni";
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
		};
		class Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=20;
				outerAngle=135;
				coneFadeCoef=10;
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo hitpoint";
				selection="L svetlo";
				useFlare=1;
				flareSize=15;
				flareMaxDistance=300;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewpInOptics=1;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		memoryPointDriverOptics="slingCamera";
		slingLoadMemoryPoint="slingLoad0";
		slingLoadMaxCargoMass=4000;
		driverCompartments="Compartment1";
		class Exhausts
		{
			class Exhaust1
			{
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
				position="exhaust1";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_engine_ext_2",
					"db0",
					1,
					800
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_rotor_ext_1",
					"db8",
					1,
					1400
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,2,0.5};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_rotor_high_ext_1",
					"db8",
					1,
					1600
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,2,0.5};
			};
			class EngineIn
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_engine_int_1",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed-0.75)*4";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_rotor_int_1",
					1.2589254,
					1
				};
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_rotor_high_int_1",
					1.2589254,
					1
				};
				/*frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";*/
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
		};
		attenuationEffectType="OpenHeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		insideSoundCoef=0.1;
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			"db0",
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			"db0",
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			"db5",
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			"db5",
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			"db0",
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			"db8",
			1,
			300
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			"db0",
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			"db0",
			1,
			160
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			"db0",
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			"db0",
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			"db0",
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			"db0",
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			"db0",
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			"db0",
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			"db0",
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			"db0",
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			"db0",
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
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			"db20",
			1
		};
		soundEngineOffExt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\sfx\UH1H_stop_ext",
			"db-7",
			1,
			700
		};
		soundEngineOffInt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_stop_int",
			"db-7",
			1
		};
		soundEngineOnExt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_start_ext",
			"db-7",
			1,
			700
		};
		soundEngineOnInt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\UH1H_start_int",
			"db-7",
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			"db0",
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			"db0",
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			"db0",
			1,
			100
		};
		soundGetIn[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\open_close",
			"db-10",
			1
		};
		soundGetOut[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\sfx\open_close",
			"db-10",
			1,
			40
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			"db0",
			1
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			"db0",
			1
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			"db0",
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			"db0",
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
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			"db0",
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			"db0",
			1,
			300
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				gunnerName="Right Door Gunner";
				minElev=-60;
				maxElev=30;
				initElev=-30;
				minTurn=-173;
				maxTurn=-3;
				initTurn=-70;
				soundServo[]=
				{
					"db-40",
					1
				};
				stabilizedInAxes=0;
				weapons[]=
				{
					"CUP_M240_uh1h_right_veh_W"
				};
				magazines[]=
				{
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
				};
				gunBeg="muzzle";
				gunEnd="chamber";
				memoryPointsGetInGunner="pos Gunner";
				memoryPointsGetInGunnerDir="pos Gunner dir";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=0;
				gunnerAction="CUP_UH1Y_Gunner";
				gunnerInAction="CUP_UH1Y_Gunner";
				commanding=-3;
				primaryGunner=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				gunnerCompartments="Compartment1";
				LODTurnedOut=1000;
				LODTurnedIn=1000;
			};
			class LeftDoorGun: MainTurret
			{
				body="Turret_2";
				gun="Gun_2";
				gunnerName="Left Door Gunner";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				weapons[]=
				{
					"CUP_M240_uh1h_left_veh_W"
				};
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				memoryPointsGetInGunner="pos Gunner";
				memoryPointsGetInGunnerDir="pos Gunner dir";
				proxyIndex=2;
				memoryPointGunnerOptics="gunnerview_2";
				selectionFireAnim="zasleh_1";
				commanding=-2;
				minElev=-50;
				maxElev=30;
				initElev=-30;
				minTurn=3;
				maxTurn=173;
				initTurn=80;
				primaryGunner=1;
			};
			class CopilotTurret: MainTurret
			{
				CanEject=0;
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerAction="CUP_UH1H_Pilot";
				gunnerInAction="CUP_UH1H_Pilot";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				GunnerDoor="";
				gunnerName="Co-Pilot";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				proxyIndex=3;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				proxyType="CPGunner";
				minElev=-40;
				maxElev=20;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				isCopilot=1;
				body="";
				gun="";
				soundServo[]=
				{
					"db-40",
					1
				};
				weapons[]={};
				magazines[]={};
				gunBeg="";
				gunEnd="";
				gunnerOpticsModel="";
				memoryPointGunnerOptics="";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=0;
				primaryGunner=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_M240_uh1h_right_veh_W";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_M240_uh1h_right_veh_W";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_M240_uh1h_right_veh_W";
			};
			class ReloadAnim_2
			{
				source="reload";
				weapon="CUP_M240_uh1h_left_veh_W";
			};
			class ReloadMagazine_2
			{
				source="reloadmagazine";
				weapon="CUP_M240_uh1h_left_veh_W";
			};
			class Revolving_2
			{
				source="revolving";
				weapon="CUP_M240_uh1h_left_veh_W";
			};
		};
		armor=50;
		damageResistance=0.0039400002;
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.25;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit1_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit2.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit2.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit2_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit3.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit3.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_cockpit3_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_in_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_instruments.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_instruments.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_instruments_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_rotor.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_rotor.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\UH1D_rotor_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\default_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\default_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo_mlod"
		};
		irScanRangeMin=100;
		irScanRangeMax=1000;
		irScanToEyeFactor=2;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class JAS_CUP_O_UH1H_TKA: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		side=0;
		faction="CUP_O_TK";
		crew="CUP_O_TK_Pilot";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_TKA_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_TKA_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_TKA_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_O_UH1H_TKA.jpg";
	};
	class JAS_CUP_O_UH1H_SLA: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		side=0;
		faction="CUP_O_SLA";
		crew="CUP_O_SLA_Pilot";
		typicalCargo[]=
		{
			"CUP_O_SLA_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_SLA_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_SLA_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_O_UH1H_SLA.jpg";
	};
	class JAS_CUP_O_UH1H_AAC: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		side=0;
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		crew="CUP_O_TK_Pilot";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_TKA_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_TKA_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_TKA_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_O_UH1H_TKA.jpg";
	};
	class JAS_CUP_I_UH1H_TK_GUE: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		side=2;
		faction="CUP_I_TK_GUE";
		crew="CUP_I_TK_GUE_Soldier";
		typicalCargo[]=
		{
			"CUP_I_TK_GUE_Soldier"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_I_UH1H_TK_GUE.jpg";
	};
	class JAS_CUP_I_UH1H_TK_AAC: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		side=2;
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
		crew="CUP_I_TK_GUE_Soldier";
		typicalCargo[]=
		{
			"CUP_I_TK_GUE_Soldier"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_I_UH1H_TK_GUE.jpg";
	};
	class JAS_CUP_B_UH1D_GER_KSK: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		displayName="UH-1D";
		side=1;
		faction="CUP_B_GER";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_GER_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_GER_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_B_UH1D_GER_KSK.jpg";
	};
	class JAS_CUP_B_UH1D_GER_KSK_Des: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		displayName="UH-1D (Desert)";
		side=1;
		faction="CUP_B_GER";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_B_UH1D_GER_KSK_Des.jpg";
	};
	class JAS_CUP_B_UH1D_GER_AAC: JAS_CUP_UH1H_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		displayName="UH-1D";
		side=1;
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_GER_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_GER_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_B_UH1D_GER_KSK.jpg";
	};
	class JAS_CUP_UH1HWreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_UH1H\CUP_UH1HWreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		hideWeaponsCargo=1;
		transportSoldier=1;
		class Eventhandlers
		{
		};
	};
};
