class CfgPatches
{
	class ARMA3_CUP_Enhancement_HC3
	{
		units[]=
		{
			"JAS_CUP_Merlin_HC3_Base",
			"JAS_CUP_B_Merlin_HC3_GB_Armed",
			"JAS_CUP_B_Merlin_HC3_AAC_Armed",
			"JAS_CUP_B_Merlin_HM2_GB",
			"JAS_CUP_B_Merlin_HC4_GB",
			"JAS_CUP_B_Merlin_HC4_AAC",
			"JAS_CUP_B_Merlin_HC3_VIV_GB",
			"JAS_CUP_B_Merlin_HC3_VIV_AAC",
			"JAS_CUP_B_Merlin_HC4_GB_VIV",
			"JAS_CUP_B_Merlin_HC4_AAC_VIV"
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
		class ARMA3_CUP_Enhancement_HC3
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_HC3"
			};
		};
	};
};
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
		class AW101
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AW101 Merlin";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Merlin was designed in a joint venture between Agusta from Italy and Westland from the UK on the request of their respective governments to produce a new naval utility helicopter. The original designation EWI01 was lost to a typo and became EW101 which became AW101. The model name Merlin is only officially used by 4 countries, Britain, Denmark, Norway and Portugal but has become more commonly used since the platforms introduction in 1999. The Royal Navy use their Merlins for a variety of tasks including Anti-Submarine warfare, Airborne Early Warning and SAR but the systems primary function is medium lift transport. For a chopper of its capability, the Merlin is suprisingly easy to fly and is quite durable leading to its place as the RAFs prefered mass insertion chopper.<br/><br/>Factions:<br/><br/>%2United Kingdom<br/>%2Altis Armed Forces (Vanilla Variant)";
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
	class JAS_CUP_Merlin_HC3_Base : Helicopter_Base_H
	{
		scope = 1;
		scopeCurator = 0;
		side = 1;
		faction = "CUP_B_GB";
		dlc = "CUP_Vehicles";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_HC3\rotorLib\RTD_Merlin.xml";
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
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
			class Exhaust3
			{
				direction = "exhaust3_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust3";
			};
		};
		author = "CUP/-{GOL}-Jason";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_2_co.paa"
		};
		driveOnComponent[] =
		{
			"Wheels"
		};
		AGM_FastRoping = 1;
		AGM_FastRoping_Positions[] =
		{
			{ 0.60000002, -5, -0.5 },
			{ -0.2, -5, -0.5 }
		};
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.2;
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		slingLoadOperator = 1;
		liftForceCoef = 2.5;
		memoryPointDriverOptics = "slingCamera";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_LIBRARY0";
		};
		picture = "\CUP\AirVehicles\CUP_AirVehicles_HC3\Data\UI\picture_merlin_ca.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_HC3\Data\UI\icon_merlin_ca.paa";
		mapSize = 20;
		memoryPointsGetInDriver = "pos codriver";
		memoryPointsGetInDriverDir = "pos codriver dir";
		availableForSupportTypes[] =
		{
			"Drop",
			"Transport"
		};
		crewVulnerable = 1;
		crew = "CUP_B_BAF_Pilot_DDPM";
		typicalCargo[] =
		{
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM"
		};
		driverAction = "Merlin_Pilot_BAF";
		cargoIsCoDriver[] = { 1, 0 };
		GetInAction = "GetInHigh";
		GetOutAction = "GetOutHigh";
		cargoAction[] =
		{
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"passenger_flatground_crosslegs",
			"passenger_flatground_crosslegs",
			"passenger_flatground_crosslegs",
			"passenger_flatground_generic04",
			"passenger_flatground_generic04",
			"passenger_flatground_generic02",
			"passenger_flatground_generic04",
			"passenger_flatground_generic02",
			"passenger_flatground_generic02",
			"passenger_flatground_crosslegs"
		};
		memoryPointsGetInCargo[] =
		{
			"pos cargo"
		};
		memoryPointsGetInCargoDir[] =
		{
			"pos cargo dir"
		};
		maxSpeed = 309;
		accuracy = 1.5;
		cost = 10000000;
		armor = 60;
		damageResistance = 0.0055499999;
		vehicleClass = "Air";
		laserScanner = 1;
		MainRotorSpeed = 1;
		backRotorSpeed = 1;
		gearRetracting = 1;
		gearUpTime = 1;
		gearDownTime = 1;
		weapons[] =
		{
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		LockDetectionSystem = 1118208;
		IncommingMisslieDetectionSystem = "CM_Missile";
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		nightVision = 1;
		mainBladeRadius = 0;
		tailBladeRadius = 0;
		hideWeaponsCargo = 1;
		transportSoldier = 21;
		transportMaxBackpacks = 28;
		radarType = 4;
		enableManualFire = 0;
		selectionFireAnim = "zasleh";
		threat[] = { 0.30000001, 0.30000001, 0.30000001 };
		destrType = "DestructWreck";
		supplyRadius = 5;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 20;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 2;
			};
		};
		class Reflectors
		{
			class Right
			{
				color[] = { 7000, 7500, 10000 };
				ambient[] = { 70, 75, 100 };
				intensity = 50;
				size = 1;
				innerAngle = 20;
				outerAngle = 135;
				coneFadeCoef = 10;
				position = "Light_R_pos";
				direction = "Light_R_dir";
				hitpoint = "Light_R_hitpoint";
				selection = "Light_R";
				useFlare = 1;
				flareSize = 15;
				flareMaxDistance = 300;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class Left : Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};
		};
		aggregateReflectors[] =
		{

			{
				"Left",
				"Right"
			}
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
					visionMode[] =
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[] = { 0, 1 };
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewpInOptics = 1;
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
		class MarkerLights
		{
			class GreenStill
			{
				name = "light_nav_right";
				color[] = { 0, 0.80000001, 0 };
				ambient[] = { 0, 0.079999998, 0 };
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15000001;
				drawLightCenterSize = 0.039999999;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "light_nav_top";
				color[] = { 0.89999998, 0.15000001, 0.1 };
				ambient[] = { 0.090000004, 0.015, 0.0099999998 };
				intensity = 50;
				blinking = 1;
				blinkingPattern[] = { 0.1, 0.89999998 };
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.039999999;
			};
			class RedStill
			{
				name = "light_nav_left";
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
		};
		class AnimationSources : AnimationSources
		{
			class dvere_l
			{
				source = "door";
				animPeriod = 1.3;
				initPhase = -1;
				sound = "MetalOldBigDoorsSound";
			};
			class dvere_p
			{
				source = "door";
				animPeriod = 1.3;
				initPhase = -1;
				sound = "MetalOldBigDoorsSound";
			};
			class rampa
			{
				source = "door";
				animPeriod = 6;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class HidePIPMFDCO
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HidePIPMFDPI
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class hide_radar
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class hide_instrument
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class Tailsection
			{
				source = "user";
				animPeriod = 10;
				initPhase = 0;
			};
			class Winchsection
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Winchsection2 : Winchsection
			{
				source = "user";
				initPhase = 0;
			};
			class mainRotor_folded
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 1;
			};
			class mainRotor_unfolded : mainRotor_folded
			{
				source = "user";
				initPhase = 0;
			};
			class AddGunHolder
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
				isComponent = 1;
			};
			class Gun_HRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Gun_VRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
		};
		class RenderTargets
		{
			class camera
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "FLIR_begin";
					pointDirection = "FLIR_end";
					renderQuality = 4;
					renderVisionMode = 0;
					fov = 0.46599999;
				};
			};
		};
		class MFD
		{
			class CUP_HC3_HUD_1
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.15000001, 1, 0.15000001, 1 };
				enableParallax = 0;
				class Bones
				{
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.64999998, 0.64999998 };
					};
					class Velocity_slip
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.5, 0.84500003 };
						pos10[] = { 0.52999997, 0.84500003 };
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = { 0.93000001, 0.2 };
						maxPos[] = { 0.93000001, 0.80000001 };
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 60;
						minPos[] = { 0.96499997, 0.2 };
						maxPos[] = { 0.96499997, 0.80000001 };
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = { 0.5, 0.5 };
						min = -3.1415999;
						max = 3.1415999;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = { 0, 0 };
						pos10[] = { 0.25, 0.25 };
					};
					class Level0
					{
						type = "horizon";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.77999997, 0.77999997 };
						angle = 0;
					};
					class LevelP5 : Level0
					{
						angle = 5;
					};
					class LevelM5 : Level0
					{
						angle = -5;
					};
					class LevelP10 : Level0
					{
						angle = 10;
					};
					class LevelM10 : Level0
					{
						angle = -10;
					};
					class LevelP15 : Level0
					{
						angle = 15;
					};
					class LevelM15 : Level0
					{
						angle = -15;
					};
					class LevelP20 : Level0
					{
						angle = 20;
					};
					class LevelM20 : Level0
					{
						angle = -20;
					};
					class LevelP25 : Level0
					{
						angle = 25;
					};
					class LevelM25 : Level0
					{
						angle = -25;
					};
					class LevelP30 : Level0
					{
						angle = 30;
					};
					class LevelM30 : Level0
					{
						angle = -30;
					};
					class LevelP35 : Level0
					{
						angle = 35;
					};
					class LevelM35 : Level0
					{
						angle = -35;
					};
					class LevelP40 : Level0
					{
						angle = 40;
					};
					class LevelM40 : Level0
					{
						angle = -40;
					};
					class LevelP45 : Level0
					{
						angle = 45;
					};
					class LevelM45 : Level0
					{
						angle = -45;
					};
					class LevelP50 : Level0
					{
						angle = 50;
					};
					class LevelM50 : Level0
					{
						angle = -50;
					};
					class LevelP55 : Level0
					{
						angle = 55;
					};
					class LevelM55 : Level0
					{
						angle = -55;
					};
					class LevelP60 : Level0
					{
						angle = 60;
					};
					class LevelM60 : Level0
					{
						angle = -60;
					};
					class LevelP65 : Level0
					{
						angle = 65;
					};
					class LevelM65 : Level0
					{
						angle = -65;
					};
					class LevelP70 : Level0
					{
						angle = 70;
					};
					class LevelM70 : Level0
					{
						angle = -70;
					};
					class LevelP75 : Level0
					{
						angle = 75;
					};
					class LevelM75 : Level0
					{
						angle = -75;
					};
					class LevelP80 : Level0
					{
						angle = 80;
					};
					class LevelM80 : Level0
					{
						angle = -80;
					};
					class LevelP85 : Level0
					{
						angle = 85;
					};
					class LevelM85 : Level0
					{
						angle = -85;
					};
					class LevelP90 : Level0
					{
						angle = 90;
					};
					class LevelM90 : Level0
					{
						angle = -90;
					};
				};
				class Draw
				{
					color[] = { 0.18000001, 1, 0.18000001 };
					alpha = 1;
					condition = "on";
					class Horizont
					{
						clipTL[] = { 0.15000001, 0.15000001 };
						clipBR[] = { 0.85000002, 0.85000002 };
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{ -0.41999999, 0 },
										1
									},

									{
										"Level0",
										{ -0.079999998, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.41999999, 0 },
										1
									},

									{
										"Level0",
										{ 0.079999998, 0 },
										1
									},
									{}
								};
							};
							class LevelM10 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelM10",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM10",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM10",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM10",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM10",
									{ -0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM10",
									{ -0.16, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM10",
									{ -0.20999999, 0 },
									1
								};
							};
							class VALM_2_10 : VALM_1_10
							{
								align = "right";
								pos[] =
								{
									"LevelM10",
									{ 0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM10",
									{ 0.25999999, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM10",
									{ 0.20999999, 0 },
									1
								};
							};
							class LevelP10 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelP10",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP10",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP10",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP10",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP10",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP10",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP10",
									{ -0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP10",
									{ -0.16, 0 },
									1
								};
								down[] =
								{
									"LevelP10",
									{ -0.20999999, 0.050000001 },
									1
								};
							};
							class VALP_2_10 : VALP_1_10
							{
								align = "right";
								pos[] =
								{
									"LevelP10",
									{ 0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP10",
									{ 0.25999999, 0 },
									1
								};
								down[] =
								{
									"LevelP10",
									{ 0.20999999, 0.050000001 },
									1
								};
							};
							class LevelM20 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelM20",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM20",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM20",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM20",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM20",
									{ -0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM20",
									{ -0.16, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM20",
									{ -0.20999999, 0 },
									1
								};
							};
							class VALM_2_20 : VALM_1_20
							{
								align = "right";
								pos[] =
								{
									"LevelM20",
									{ 0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM20",
									{ 0.25999999, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM20",
									{ 0.20999999, 0 },
									1
								};
							};
							class LevelP20 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelP20",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP20",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP20",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP20",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP20",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP20",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP20",
									{ -0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP20",
									{ -0.16, 0 },
									1
								};
								down[] =
								{
									"LevelP20",
									{ -0.20999999, 0.050000001 },
									1
								};
							};
							class VALP_2_20 : VALP_1_20
							{
								align = "right";
								pos[] =
								{
									"LevelP20",
									{ 0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP20",
									{ 0.25999999, 0 },
									1
								};
								down[] =
								{
									"LevelP20",
									{ 0.20999999, 0.050000001 },
									1
								};
							};
							class LevelM30 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelM30",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM30",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM30",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM30",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM30",
									{ -0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM30",
									{ -0.16, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM30",
									{ -0.20999999, 0 },
									1
								};
							};
							class VALM_2_30 : VALM_1_30
							{
								align = "right";
								pos[] =
								{
									"LevelM30",
									{ 0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM30",
									{ 0.25999999, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM30",
									{ 0.20999999, 0 },
									1
								};
							};
							class LevelP30 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelP30",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP30",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP30",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP30",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP30",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP30",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP30",
									{ -0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP30",
									{ -0.16, 0 },
									1
								};
								down[] =
								{
									"LevelP30",
									{ -0.20999999, 0.050000001 },
									1
								};
							};
							class VALP_2_30 : VALP_1_30
							{
								align = "right";
								pos[] =
								{
									"LevelP30",
									{ 0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP30",
									{ 0.25999999, 0 },
									1
								};
								down[] =
								{
									"LevelP30",
									{ 0.20999999, 0.050000001 },
									1
								};
							};
							class LevelM40 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelM40",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM40",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM40",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM40",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM40",
									{ -0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM40",
									{ -0.16, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM40",
									{ -0.20999999, 0 },
									1
								};
							};
							class VALM_2_40 : VALM_1_40
							{
								align = "right";
								pos[] =
								{
									"LevelM40",
									{ 0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM40",
									{ 0.25999999, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM40",
									{ 0.20999999, 0 },
									1
								};
							};
							class LevelP40 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelP40",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP40",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP40",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP40",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP40",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP40",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP40",
									{ -0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP40",
									{ -0.16, 0 },
									1
								};
								down[] =
								{
									"LevelP40",
									{ -0.20999999, 0.050000001 },
									1
								};
							};
							class VALP_2_40 : VALP_1_40
							{
								align = "right";
								pos[] =
								{
									"LevelP40",
									{ 0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP40",
									{ 0.25999999, 0 },
									1
								};
								down[] =
								{
									"LevelP40",
									{ 0.20999999, 0.050000001 },
									1
								};
							};
							class LevelM50 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelM50",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM50",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM50",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM50",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM50",
									{ -0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM50",
									{ -0.16, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM50",
									{ -0.20999999, 0 },
									1
								};
							};
							class VALM_2_50 : VALM_1_50
							{
								align = "right";
								pos[] =
								{
									"LevelM50",
									{ 0.20999999, -0.050000001 },
									1
								};
								right[] =
								{
									"LevelM50",
									{ 0.25999999, -0.050000001 },
									1
								};
								down[] =
								{
									"LevelM50",
									{ 0.20999999, 0 },
									1
								};
							};
							class LevelP50 : Level0
							{
								type = "line";
								width = 3;
								points[] =
								{

									{
										"LevelP50",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP50",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP50",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP50",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP50",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP50",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP50",
									{ -0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP50",
									{ -0.16, 0 },
									1
								};
								down[] =
								{
									"LevelP50",
									{ -0.20999999, 0.050000001 },
									1
								};
							};
							class VALP_2_50 : VALP_1_50
							{
								align = "right";
								pos[] =
								{
									"LevelP50",
									{ 0.20999999, 0 },
									1
								};
								right[] =
								{
									"LevelP50",
									{ 0.25999999, 0 },
									1
								};
								down[] =
								{
									"LevelP50",
									{ 0.20999999, 0.050000001 },
									1
								};
							};
						};
					};
					class StaticBank
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								{ 0.47819999, 0.25099999 },
								1
							},

							{
								{ 0.47729999, 0.241 },
								1
							},
							{},

							{
								{ 0.45660001, 0.2538 },
								1
							},

							{
								{ 0.4549, 0.2439 },
								1
							},
							{},

							{
								{ 0.43529999, 0.25850001 },
								1
							},

							{
								{ 0.43009999, 0.2392 },
								1
							},
							{},

							{
								{ 0.4145, 0.2651 },
								1
							},

							{
								{ 0.4111, 0.25569999 },
								1
							},
							{},

							{
								{ 0.39430001, 0.27340001 },
								1
							},

							{
								{ 0.3901, 0.26440001 },
								1
							},
							{},

							{
								{ 0.375, 0.28349999 },
								1
							},

							{
								{ 0.36500001, 0.26620001 },
								1
							},
							{},

							{
								{ 0.32319999, 0.32319999 },
								1
							},

							{
								{ 0.3091, 0.3091 },
								1
							},
							{},

							{
								{ 0.28349999, 0.375 },
								1
							},

							{
								{ 0.26620001, 0.36500001 },
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.4782)",
									0.25099999
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.4773)",
									0.241
								},
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.4566)",
									0.2538
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.4549)",
									0.2439
								},
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.4353)",
									0.25850001
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.4301)",
									0.2392
								},
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.4145)",
									0.2651
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.4111)",
									0.25569999
								},
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.3943)",
									0.27340001
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.3901)",
									0.26440001
								},
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.3750)",
									0.28349999
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.3650)",
									0.26620001
								},
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.3232)",
									0.32319999
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.3091)",
									0.3091
								},
								1
							},
							{},

							{

								{
									"0.5 + (0.5- 0.2835)",
									0.375
								},
								1
							},

							{

								{
									"0.5 + (0.5- 0.2662)",
									0.36500001
								},
								1
							},
							{},

							{

								{
									0.5,
									"0.5 - 0.25"
								},
								1
							},

							{

								{
									0.5,
									"0.5 - 0.28"
								},
								1
							}
						};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								"HorizonBankRot",
								{ 0, 0.25 },
								1
							},

							{
								"HorizonBankRot",
								{ -0.0099999998, 0.23 },
								1
							},

							{
								"HorizonBankRot",
								{ 0.0099999998, 0.23 },
								1
							},

							{
								"HorizonBankRot",
								{ 0, 0.25 },
								1
							}
						};
					};
					class Waterline
					{
						type = "line";
						width = 7;
						points[] =
						{

							{
								{ 0.44999999, 0.5 },
								1
							},

							{
								{ 0.47999999, 0.5 },
								1
							},

							{
								{ 0.49000001, 0.52499998 },
								1
							},

							{
								{ 0.5, 0.5 },
								1
							},

							{
								{ 0.50999999, 0.52499998 },
								1
							},

							{
								{ 0.51999998, 0.5 },
								1
							},

							{
								{ 0.55000001, 0.5 },
								1
							}
						};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] =
							{

								{

									{
										"0.5-0.018",
										"0.9-0.04"
									},
									1
								},

								{

									{
										"0.5-0.018",
										"0.9-0.075"
									},
									1
								},
								{},

								{

									{
										"0.5+0.018",
										"0.9-0.04"
									},
									1
								},

								{

									{
										"0.5+0.018",
										"0.9-0.075"
									},
									1
								},
								{},

								{

									{
										"0.5+0.2",
										"0.9-0.04"
									},
									1
								},

								{

									{
										"0.5-0.2",
										"0.9-0.04"
									},
									1
								}
							};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] =
							{

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.75",
										"0.02 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								{},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.6",
										"0.02 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								{},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.5",
										"0.02 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								{},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.4",
										"0.02 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								{},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.30",
										"0.02 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								{},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.20",
										"0.02 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								{},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.1",
										"0.02 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"-0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},

								{
									"Velocity_slip",
									1,

									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								}
							};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] =
							{

								{
									0.029999999,
									"0.53 + 0.055"
								},
								1
							};
							right[] =
							{

								{
									0.07,
									"0.53 + 0.055"
								},
								1
							};
							down[] =
							{

								{
									0.029999999,
									"0.53 + 0.095"
								},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] =
							{

								{
									0.029999999,
									"0.53 + 0.105"
								},
								1
							};
							right[] =
							{

								{
									0.07,
									"0.53 + 0.105"
								},
								1
							};
							down[] =
							{

								{
									0.029999999,
									"0.53 + 0.145"
								},
								1
							};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 1;
							pos[] =
							{

								{
									0.029999999,
									"0.53 + 0.155"
								},
								1
							};
							right[] =
							{

								{
									0.07,
									"0.53 + 0.155"
								},
								1
							};
							down[] =
							{

								{
									0.029999999,
									"0.53 + 0.195"
								},
								1
							};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.5999999;
						pos[] =
						{
							{ 0.029999999, 0.47499999 },
							1
						};
						right[] =
						{
							{ 0.079999998, 0.47499999 },
							1
						};
						down[] =
						{
							{ 0.029999999, 0.52499998 },
							1
						};
					};
					class TorqueNumber
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 488;
							pos[] =
							{
								{ 0.064999998, 0.175 },
								1
							};
							right[] =
							{
								{ 0.115, 0.175 },
								1
							};
							down[] =
							{
								{ 0.064999998, 0.22499999 },
								1
							};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.07, 0.175 },
								1
							};
							right[] =
							{
								{ 0.12, 0.175 },
								1
							};
							down[] =
							{
								{ 0.07, 0.22499999 },
								1
							};
						};
					};
					class AltNumber : SpeedNumber
					{
						align = "right";
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] =
						{
							{ 0.82999998, 0.47499999 },
							1
						};
						right[] =
						{
							{ 0.88, 0.47499999 },
							1
						};
						down[] =
						{
							{ 0.82999998, 0.52499998 },
							1
						};
					};
					class ASLNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{ 0.83499998, 0.18000001 },
							1
						};
						right[] =
						{
							{ 0.875, 0.18000001 },
							1
						};
						down[] =
						{
							{ 0.83499998, 0.22 },
							1
						};
					};
					class VspeedScalePosta
					{
						type = "line";
						width = 5;
						points[] =
						{

							{
								{ 0.98000002, 0.2 },
								1
							},

							{
								{ 1, 0.2 },
								1
							},
							{},

							{
								{ 0.93000001, 0.2 },
								1
							},

							{
								{ 0.94999999, 0.2 },
								1
							},
							{},

							{
								{ 0.98000002, 0.34999999 },
								1
							},

							{
								{ 1, 0.34999999 },
								1
							},
							{},

							{
								{ 0.93000001, 0.34999999 },
								1
							},

							{
								{ 0.94999999, 0.34999999 },
								1
							},
							{},

							{
								{ 0.94, 0.38 },
								1
							},

							{
								{ 0.94999999, 0.38 },
								1
							},
							{},

							{
								{ 0.94, 0.41 },
								1
							},

							{
								{ 0.94999999, 0.41 },
								1
							},
							{},

							{
								{ 0.94, 0.44 },
								1
							},

							{
								{ 0.94999999, 0.44 },
								1
							},
							{},

							{
								{ 0.94, 0.47 },
								1
							},

							{
								{ 0.94999999, 0.47 },
								1
							},
							{},

							{
								{ 0.98000002, 0.5 },
								1
							},

							{
								{ 1, 0.5 },
								1
							},
							{},

							{
								{ 0.93000001, 0.5 },
								1
							},

							{
								{ 0.94999999, 0.5 },
								1
							},
							{},

							{
								{ 0.94, 0.52999997 },
								1
							},

							{
								{ 0.94999999, 0.52999997 },
								1
							},
							{},

							{
								{ 0.94, 0.56 },
								1
							},

							{
								{ 0.94999999, 0.56 },
								1
							},
							{},

							{
								{ 0.94, 0.58999997 },
								1
							},

							{
								{ 0.94999999, 0.58999997 },
								1
							},
							{},

							{
								{ 0.94, 0.62 },
								1
							},

							{
								{ 0.94999999, 0.62 },
								1
							},
							{},

							{
								{ 0.98000002, 0.64999998 },
								1
							},

							{
								{ 1, 0.64999998 },
								1
							},
							{},

							{
								{ 0.93000001, 0.64999998 },
								1
							},

							{
								{ 0.94999999, 0.64999998 },
								1
							},
							{},

							{
								{ 0.99000001, 0.68000001 },
								1
							},

							{
								{ 0.98000002, 0.68000001 },
								1
							},
							{},

							{
								{ 0.99000001, 0.70999998 },
								1
							},

							{
								{ 0.98000002, 0.70999998 },
								1
							},
							{},

							{
								{ 0.99000001, 0.74000001 },
								1
							},

							{
								{ 0.98000002, 0.74000001 },
								1
							},
							{},

							{
								{ 0.99000001, 0.76999998 },
								1
							},

							{
								{ 0.98000002, 0.76999998 },
								1
							},
							{},

							{
								{ 0.98000002, 0.80000001 },
								1
							},

							{
								{ 1, 0.80000001 },
								1
							},
							{},

							{
								{ 0.93000001, 0.80000001 },
								1
							},

							{
								{ 0.94999999, 0.80000001 },
								1
							},
							{}
						};
					};
					class RadarAltitudeBand
					{
						clipTL[] = { 0, 0.2 };
						clipBR[] = { 1, 0.80000001 };
						class radarbanda
						{
							type = "line";
							width = 17;
							points[] =
							{

								{
									"RadarAltitudeBone",
									{ 0, 0 },
									1
								},

								{
									"RadarAltitudeBone",
									{ 0, 0.60000002 },
									1
								}
							};
						};
					};
					class VspeedBand
					{
						type = "line";
						width = 3;
						points[] =
						{

							{
								"VspeedBone",
								{ -0.0099999998, 0 },
								1
							},

							{
								"VspeedBone",
								{ -0.025, -0.015 },
								1
							},

							{
								"VspeedBone",
								{ -0.025, 0.015 },
								1
							},

							{
								"VspeedBone",
								{ -0.0099999998, 0 },
								1
							},
							{}
						};
					};
					class HeadingNumber : SpeedNumber
					{
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							{ 0.5, 0.045000002 },
							1
						};
						right[] =
						{
							{ 0.56, 0.045000002 },
							1
						};
						down[] =
						{

							{
								0.5,
								"0.045 + 0.06"
							},
							1
						};
					};
					class Center_box
					{
						type = "line";
						width = 1.5;
						points[] =
						{

							{

								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							},

							{

								{
									"0.45 + 0.10",
									"0.02 + 0.085 - 0.06"
								},
								1
							},

							{

								{
									"0.45 + 0.10",
									"0.02 + 0.085"
								},
								1
							},

							{

								{
									0.44999999,
									"0.02 + 0.085"
								},
								1
							},

							{

								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							}
						};
					};
					class HeadingArrow
					{
						type = "line";
						width = 7;
						points[] =
						{

							{

								{
									"0.5",
									"0.128 + 0.03"
								},
								1
							},

							{
								{ 0.5, 0.12800001 },
								1
							}
						};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = { 0, 0 };
						clipBR[] = { 0.44999999, 1 };
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] =
							{
								0.12,
								"0.0 + 0.065"
							};
							right[] =
							{
								0.16,
								"0.0 + 0.065"
							};
							down[] =
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = { 0.55000001, 0 };
						clipBR[] = { 1, 1 };
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] =
							{
								0.12,
								"0.0 + 0.065"
							};
							right[] =
							{
								0.16,
								"0.0 + 0.065"
							};
							down[] =
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] =
						{
							0.44999999,
							"0.02 + 0.085"
						};
						clipBR[] =
						{
							"0.45 + 0.10",
							1
						};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] =
							{
								0.12,
								"0.0 + 0.065"
							};
							right[] =
							{
								0.16,
								"0.0 + 0.065"
							};
							down[] =
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "Fuel";
						align = "right";
						scale = 1;
						pos[] =
						{
							{ 0.85000002, 0.86000001 },
							1
						};
						right[] =
						{
							{ 0.88999999, 0.86000001 },
							1
						};
						down[] =
						{
							{ 0.85000002, 0.89999998 },
							1
						};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] =
						{
							{ 0.92000002, 0.86000001 },
							1
						};
						right[] =
						{
							{ 0.95999998, 0.86000001 },
							1
						};
						down[] =
						{
							{ 0.92000002, 0.89999998 },
							1
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = { -0.039999999, 0.039999999, 0.1 };
				helmetRight[] = { 0.079999998, 0, 0 };
				helmetDown[] = { 0, -0.079999998, 0 };
			};
			class CUP_HC3_HUD_2
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.15000001, 1, 0.15000001, 1 };
				enableParallax = 0;
				class Bones
				{
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.75, 0.75 };
					};
					class ForwardVec1
					{
						type = "vector";
						source = "forward";
						pos0[] = { 0, 0 };
						pos10[] = { 0.25, 0.25 };
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = { 0, 0 };
						pos10[] = { 0.25299999, 0.25299999 };
					};
				};
				class Draw
				{
					color[] = { 0.18000001, 1, 0.18000001 };
					alpha = 1;
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 7;
						points[] =
						{

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0, -0.02 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0.0099999998, -0.01732 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0.01732, -0.0099999998 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0.02, 0 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0.01732, 0.0099999998 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0.0099999998, 0.01732 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0, 0.02 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ -0.0099999998, 0.01732 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ -0.01732, 0.0099999998 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ -0.02, 0 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ -0.01732, -0.0099999998 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ -0.0099999998, -0.01732 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0, -0.02 },
								1
							},
							{},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0.039999999, 0 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0.02, 0 },
								1
							},
							{},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ -0.039999999, 0 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ -0.02, 0 },
								1
							},
							{},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0, -0.039999999 },
								1
							},

							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{ 0, -0.02 },
								1
							}
						};
					};
					class AC_Centerline
					{
						type = "group";
						condition = "on";
						class AC_Cross
						{
							type = "line";
							width = 4;
							points[] =
							{

								{
									"ForwardVec",
									1,

									{
										" -0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},

								{
									"ForwardVec",
									1,

									{
										" 0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},
								{},

								{
									"ForwardVec",
									1,

									{
										" -0.0 + 0.5",
										"0.006 + 0.5"
									},
									1
								},

								{
									"ForwardVec",
									1,

									{
										" 0.0 + 0.5",
										"-0.006 + 0.5"
									},
									1
								}
							};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = { -0.035, 0.035, 0.1 };
				helmetRight[] = { 0.07, 0, 0 };
				helmetDown[] = { 0, -0.07, 0 };
			};
		};
		class UserActions
		{
			class CloseRear
			{
				displayName = "<t color='#FF0000'>Close Ramp</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 0;
				condition = "this doorPhase ""rampa"" > 0.45 AND (((player == (driver this) or player == (gunner this))) && (alive this))";
				statement = "this animateDoor [""rampa"",0];";
				priority = 9;
			};
			class OpenRearRamp
			{
				displayName = "<t color='#FF0000'>Open Ramp</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 0;
				condition = "this doorPhase ""rampa"" < 0.55 AND (((player == (driver this) or player == (gunner this))) && (alive this))";
				statement = "this animateDoor [""rampa"",1];";
				priority = 9;
			};
			class COmfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip"",1];";
				priority = 13;
			};
			class COmfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip"",0];";
				priority = 13;
			};
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",1];";
				priority = 13;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",0];";
				priority = 13;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_p"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""dvere_p"",0];this animateDoor [""dvere_p_pop"",0];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_p"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""dvere_p"",1];this animateDoor [""dvere_p_pop"",1];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Crew Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_l"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""dvere_l"",0];this animateDoor [""dvere_l_pop"",0];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Crew Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_l"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""dvere_l"",1];this animateDoor [""dvere_l_pop"",1];";
			};
			class OutWinch
			{
				displayName = "<t color='#FF0000'>Extend Winch</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this animationPhase ""Winchsection"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animate [""Winchsection"",1]; this animate [""Winchsection2"",1];";
			};
			class InWinch
			{
				displayName = "<t color='#FF0000'>Retract Winch</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this animationPhase ""Winchsection"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animate [""Winchsection"",0]; this animate [""Winchsection2"",0];";
			};
		};
		class CargoTurret;
		class Turrets : Turrets
		{
			class CopilotTurret : MainTurret
			{
				body = "FLIR_turret";
				gun = "FLIR_gun";
				animationSourceBody = "FLIR_turret";
				animationSourceGun = "FLIR_gun";
				memoryPointGunnerOptics = "FLIR_end";
				gunBeg = "FLIR_end";
				gunEnd = "FLIR_begin";
				memoryPointGun = "FLIR_end";
				stabilizedInAxes = 3;
				gunnername = "Co-Pilot";
				isCopilot = 1;
				proxyIndex = 1;
				minElev = -40;
				maxElev = 20;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				turretInfoType = "RscOptics_UAV_gunner";
				weapons[] =
				{
					"Laserdesignator_mounted"
				};
				magazines[] =
				{
					"Laserbatteries"
				};
				proxyType = "CPGunner";
				inGunnerMayFire = 1;
				gunnerAction = "Merlin_Pilot_BAF";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerOpticsEffect[] = {};
				gunnerOpticsModel = "";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.46599999;
						minFov = 0.46599999;
						maxFov = 0.46599999;
						visionMode[] =
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[] = { 0, 1 };
						gunnerOpticsColor[] = { 0.15000001, 1, 0.15000001, 1 };
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] =
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.46599999;
						minFov = 0.46599999;
						maxFov = 0.46599999;
						visionMode[] =
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[] = { 0, 1 };
						gunnerOpticsColor[] = { 0.15000001, 1, 0.15000001, 1 };
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] =
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
						gunnerOpticsEffect[] =
						{
							"TankCommanderOptics1"
						};
					};
					class WideL : Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = { 0, 0, 0, 1 };
						directionStabilized = 1;
						opticsPPEffects[] =
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Medium : Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = { 0, 0, 0, 1 };
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow : Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = { 0, 0, 0, 1 };
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower : Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = { 0, 0, 0, 1 };
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.0099999998;
						minFov = 0.0099999998;
						maxFov = 0.0099999998;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] =
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				startEngine = 0;
				gunnerHasFlares = 0;
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos loadmaster";
				memoryPointsGetInGunnerDir = "pos loadmaster dir";
				gunnerName = "Loadmaster (Right)";
				proxyIndex = 27;
				maxElev = 40;
				minElev = -40;
				maxTurn = 55;
				minTurn = -45;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "";
			};
			class CargoTurret_02 : CargoTurret
			{
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerName = "Crewmaster (left)";
				proxyIndex = 28;
				maxElev = 40;
				minElev = -40;
				maxTurn = 40;
				minTurn = -25;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "";
			};
			class CargoTurret_03 : CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo right";
				memoryPointsGetInGunnerDir = "pos cargo dir right";
				gunnerName = "Passenger (Right Seat)";
				proxyIndex = 26;
				maxElev = 15;
				minElev = -40;
				maxTurn = 100;
				minTurn = 40;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "rampa";
			};
			class CargoTurret_04 : CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo left";
				memoryPointsGetInGunnerDir = "pos cargo dir left";
				gunnerName = "Passenger (Left Seat)";
				proxyIndex = 25;
				maxElev = 15;
				minElev = -40;
				maxTurn = -40;
				minTurn = -100;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "rampa";
			};
		};
		class HitPoints : HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 0.5;
			};
			class HitEngine
			{
				armor = 0.5;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 0.5;
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
				armor = 0.30000001;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.1;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
			class HitGlass1 : HitGlass1
			{
				armor = 0.5;
			};
			class HitGlass2 : HitGlass2
			{
				armor = 0.5;
			};
			class HitGlass3 : HitGlass3
			{
				armor = 0.5;
			};
			class HitGlass4 : HitGlass4
			{
				armor = 0.5;
			};
			class HitGlass5 : HitGlass5
			{
				armor = 0.5;
			};
			class HitGlass6
			{
				armor = 0.5;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
			class HitGlass7
			{
				armor = 0.5;
				material = -1;
				name = "glass7";
				visual = "glass7";
				passThrough = 0;
			};
			class HitGlass8
			{
				armor = 0.5;
				material = -1;
				name = "glass8";
				visual = "glass8";
				passThrough = 0;
			};
			class HitGlass9
			{
				armor = 0.5;
				material = -1;
				name = "glass9";
				visual = "glass9";
				passThrough = 0;
			};
			class HitGlass10
			{
				armor = 0.5;
				material = -1;
				name = "glass10";
				visual = "glass10";
				passThrough = 0;
			};
			class HitGlass11
			{
				armor = 0.5;
				material = -1;
				name = "glass11";
				visual = "glass11";
				passThrough = 0;
			};
			class HitGlass12
			{
				armor = 0.5;
				material = -1;
				name = "glass12";
				visual = "glass12";
				passThrough = 0;
			};
			class HitGlass13
			{
				armor = 0.5;
				material = -1;
				name = "glass13";
				visual = "glass13";
				passThrough = 0;
			};
			class HitGlass14
			{
				armor = 0.5;
				material = -1;
				name = "glass14";
				visual = "glass14";
				passThrough = 0;
			};
			class HitGlass15
			{
				armor = 0.5;
				material = -1;
				name = "glass15";
				visual = "glass15";
				passThrough = 0;
			};
			class HitGlass16
			{
				armor = 0.5;
				material = -1;
				name = "glass16";
				visual = "glass16";
				passThrough = 0;
			};
			class HitGlass17
			{
				armor = 0.5;
				material = -1;
				name = "glass17";
				visual = "glass17";
				passThrough = 0;
			};
			class HitGlass18
			{
				armor = 0.5;
				material = -1;
				name = "glass18";
				visual = "glass18";
				passThrough = 0;
			};
			class HitGlass19
			{
				armor = 0.5;
				material = -1;
				name = "glass19";
				visual = "glass19";
				passThrough = 0;
			};
			class HitGlass20
			{
				armor = 0.5;
				material = -1;
				name = "glass20";
				visual = "glass20";
				passThrough = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\merlin_int_01.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\merlin_int_01_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\merlin_int_01_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\merlin_int_02.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\merlin_int_02_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\merlin_int_02_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\Merlin_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\Merlin_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\Merlin_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\MerlinHc3_2_BAF.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\MerlinHc3_2_BAF_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\MerlinHc3_2_BAF_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\MerlinHc3_1_BAF.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\MerlinHc3_1_BAF_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_HC3\Data\MerlinHc3_1_BAF_destruct.rvmat"
			};
		};
		attenuationEffectType = "HeliAttenuation";
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
		soundDammage[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\open",
			1,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\close",
			1,
			1,
			50
		};
		soundEngineOnInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_start_v2",
			0.31622776,
			1
		};
		soundEngineOnExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_start_v2",
			2.2387211,
			1,
			600
		};
		soundEngineOffInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_stop_v2",
			0.31622776,
			1
		};
		soundEngineOffExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_stop_v2",
			2.2387211,
			1,
			600
		};
		soundLocked[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		rotorDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			1,
			1
		};
		rotorDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
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
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
			1,
			1,
			100
		};
		landingSoundInt1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
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
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
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
			"A3\Sounds_F\dummysound",
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
		class Sounds
		{
			class EngineExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_engine",
					1.2589254,
					1,
					900
				};
				frequency = "rotorSpeed";
				volume = "camPos*(rotorSpeed-0.72)*4";
			};
			class RotorExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_rotor",
					1.7782794,
					1,
					2000
				};
				frequency = "rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
			};
			class RotorNoiseExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\rotor_swist",
					0.70794576,
					1,
					800
				};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				cone[] = { 0.69999999, 1.3, 1, 0 };
			};
			class EngineInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_engine",
					1,
					1
				};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(rotorSpeed-0.75)*4";
			};
			class RotorInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_rotor",
					1.2589254,
					1
				};
				frequency = "rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
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
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
					0.70794576,
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
					0.70794576,
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[40,60])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_engine",
						1.2589254,
						1,
						900
					};
					frequency = "rotorSpeed";
					volume = "camPos*(rotorSpeed-0.72)*4";
				};
				class RotorExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_rotor",
						1.7782794,
						1,
						2000
					};
					frequency = "rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
				};
				class RotorNoiseExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\rotor_swist",
						0.70794576,
						1,
						800
					};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
					cone[] = { 0.69999999, 1.3, 1, 0 };
				};
				class EngineInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_engine",
						1,
						1
					};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*(rotorSpeed-0.75)*4";
				};
				class RotorInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_rotor",
						1.2589254,
						1
					};
					frequency = "rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
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
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
						0.70794576,
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
						0.70794576,
						1,
						50
					};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[40,60])";
				};
			};
		};
	};
	class JAS_CUP_Merlin_HC3_VIV_Base: JAS_CUP_Merlin_HC3_Base
	{
		displayName="Merlin HC3J (VIV)";
		model="\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF_VIV";
		transportSoldier=0;
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VTV_limit_1",
					"VTV_limit_2"
				};
				disableHeightLimit=0;
				maxLoadMass=3000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit_1"
				};
				unloadingInterval=3;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
	};
	class JAS_CUP_B_Merlin_HC3_GB_Armed : JAS_CUP_Merlin_HC3_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "AAC Merlin HC3J";
		model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF";
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
		_generalMacro = "CUP_B_Merlin_HC3_GB_Armed";
		class AnimationSources : AnimationSources
		{
			class rampa_hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class rampa_unhide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class AddGunHolder
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				isComponent = 1;
			};
			class Gun_HRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Gun_VRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class machinegun_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_Vhmg_M2_veh";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "CUP_Vhmg_M2_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "CUP_Vhmg_M2_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "CUP_Vhmg_M2_veh";
			};
		};
		class UserActions
		{
			class COmfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip"",1];";
				priority = 13;
			};
			class COmfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip"",0];";
				priority = 13;
			};
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",1];";
				priority = 13;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",0];";
				priority = 13;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_p"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""dvere_p"",0];this animateDoor [""dvere_p_pop"",0];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_p"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""dvere_p"",1];this animateDoor [""dvere_p_pop"",1];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Crew Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_l"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""dvere_l"",0];this animateDoor [""dvere_l_pop"",0];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Crew Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_l"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""dvere_l"",1];this animateDoor [""dvere_l_pop"",1];";
			};
			class OutWinch
			{
				displayName = "<t color='#FF0000'>Extend Winch</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this animationPhase ""Winchsection"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animate [""Winchsection"",1]; this animate [""Winchsection2"",1];";
			};
			class InWinch
			{
				displayName = "<t color='#FF0000'>Retract Winch</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this animationPhase ""Winchsection"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animate [""Winchsection"",0]; this animate [""Winchsection2"",0];";
			};
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
			};
			class MainTurret : MainTurret
			{
				body = "gun_HRot";
				gun = "gun_VRot";
				animationSourceBody = "gun_HRot";
				animationSourceGun = "gun_VRot";
				weapons[] =
				{
					"CUP_Vhmg_M2_veh"
				};
				magazines[] =
				{
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M"
				};
				LODTurnedIn = 1200;
				LODTurnedOut = 1200;
				proxyIndex = 2;
				gunnerName = "Rear Gunner";
				gunnerOpticsShowCursor = 0;
				commanding = -1;
				gunnerAction = "CUP_CH47_Gunner01";
				gunnerInAction = "CUP_CH47_Gunner01";
				minTurn = 110;
				maxTurn = 250;
				initTurn = 180;
				minElev = -20;
				maxElev = 60;
				initElev = 0;
				memoryPointGunnerOptics = "gunnerview_2";
				memoryPointGun = "muzzle";
				gunBeg = "muzzle";
				gunEnd = "chamber";
				canEject = 0;
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				stabilizedInAxes = "StabilizedInAxesNone";
				soundServo[] =
				{
					"",
					0.0099999998,
					1
				};
				animationSourceHatch = "";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				class ViewOptics : ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.69999999;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class CargoTurret_01 : CargoTurret_01
			{
			};
			class CargoTurret_02 : CargoTurret_02
			{
			};
			class CargoTurret_03 : CargoTurret_03
			{
			};
			class CargoTurret_04 : CargoTurret_04
			{
			};
		};
	};
	class JAS_CUP_B_Merlin_HC3_AAC_Armed : JAS_CUP_Merlin_HC3_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		displayname = "AAC Merlin HC3J";
		model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF";
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
		_generalMacro = "CUP_B_Merlin_HC3_GB_Armed";
		class AnimationSources : AnimationSources
		{
			class rampa_hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class rampa_unhide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class AddGunHolder
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				isComponent = 1;
			};
			class Gun_HRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Gun_VRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class machinegun_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_Vhmg_M2_veh";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "CUP_Vhmg_M2_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "CUP_Vhmg_M2_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "CUP_Vhmg_M2_veh";
			};
		};
		class UserActions
		{
			class COmfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip"",1];";
				priority = 13;
			};
			class COmfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip"",0];";
				priority = 13;
			};
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",1];";
				priority = 13;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "PackAction";
				radius = 10;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",0];";
				priority = 13;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_p"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""dvere_p"",0];this animateDoor [""dvere_p_pop"",0];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_p"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""dvere_p"",1];this animateDoor [""dvere_p_pop"",1];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Crew Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_l"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""dvere_l"",0];this animateDoor [""dvere_l_pop"",0];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Crew Door</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this doorPhase ""dvere_l"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""dvere_l"",1];this animateDoor [""dvere_l_pop"",1];";
			};
			class OutWinch
			{
				displayName = "<t color='#FF0000'>Extend Winch</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this animationPhase ""Winchsection"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animate [""Winchsection"",1]; this animate [""Winchsection2"",1];";
			};
			class InWinch
			{
				displayName = "<t color='#FF0000'>Retract Winch</t>";
				position = "doplnovani";
				radius = 12;
				onlyForplayer = 0;
				condition = "this animationPhase ""Winchsection"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animate [""Winchsection"",0]; this animate [""Winchsection2"",0];";
			};
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
			};
			class MainTurret : MainTurret
			{
				body = "gun_HRot";
				gun = "gun_VRot";
				animationSourceBody = "gun_HRot";
				animationSourceGun = "gun_VRot";
				weapons[] =
				{
					"CUP_Vhmg_M2_veh"
				};
				magazines[] =
				{
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M"
				};
				LODTurnedIn = 1200;
				LODTurnedOut = 1200;
				proxyIndex = 2;
				gunnerName = "Rear Gunner";
				gunnerOpticsShowCursor = 0;
				commanding = -1;
				gunnerAction = "CUP_CH47_Gunner01";
				gunnerInAction = "CUP_CH47_Gunner01";
				minTurn = 110;
				maxTurn = 250;
				initTurn = 180;
				minElev = -20;
				maxElev = 60;
				initElev = 0;
				memoryPointGunnerOptics = "gunnerview_2";
				memoryPointGun = "muzzle";
				gunBeg = "muzzle";
				gunEnd = "chamber";
				canEject = 0;
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				stabilizedInAxes = "StabilizedInAxesNone";
				soundServo[] =
				{
					"",
					0.0099999998,
					1
				};
				animationSourceHatch = "";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				class ViewOptics : ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.69999999;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class CargoTurret_01 : CargoTurret_01
			{
			};
			class CargoTurret_02 : CargoTurret_02
			{
			};
			class CargoTurret_03 : CargoTurret_03
			{
			};
			class CargoTurret_04 : CargoTurret_04
			{
			};
		};
	};
	class JAS_CUP_B_Merlin_HC3_VIV_GB: JAS_CUP_Merlin_HC3_VIV_Base
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_GB";
		crew="CUP_B_BAF_Pilot_DDPM";
		typicalCargo[]=
		{
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM"
		};
		scopeCurator=2;
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
	};
	class JAS_CUP_B_Merlin_HC3_VIV_AAC: JAS_CUP_Merlin_HC3_VIV_Base
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		crew="CUP_B_BAF_Pilot_DDPM";
		typicalCargo[]=
		{
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM"
		};
		scopeCurator=2;
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
	};
	class JAS_CUP_B_Merlin_HM2_GB : JAS_CUP_Merlin_HC3_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 0;
		scopeCurator = 0;
		displayname = "AW101 RN Grey Merlin HM2";
		model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF";
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
		_generalMacro = "CUP_B_Merlin_HM2_GB";
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\skins\merlinhc3_1_Grey_RN_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\skins\merlinhc3_2_Grey_RN_co.paa"
		};
		class AnimationSources: AnimationSources
		{
			class hide_radar
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class hide_instrument
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
		class UserActions: UserActions
		{
			class Pack
			{
				displayName="Pack";
				displayNameDefault="Pack";
				position="PackAction";
				radius=10;
				onlyForPlayer=1;
				condition="(!isEngineOn this) AND {(this animationphase 'Tailsection' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement="[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_HC3\Data\Scripts\AW101_fold.sqf""";
			};
			class unPack
			{
				displayName="UnPack";
				displayNameDefault="Unpack";
				position="PackAction";
				radius=10;
				onlyForPlayer=1;
				condition="this animationphase ""Tailsection"" !=0 AND driver this == player";
				statement="[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_HC3\Data\Scripts\AW101_fold.sqf""";
			};
		};
	};
	class JAS_CUP_B_Merlin_HC4_GB : JAS_CUP_B_Merlin_HM2_GB
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "RN Merlin HC4J";
		model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF";
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
		_generalMacro = "CUP_B_Merlin_HC4_GB";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\skins\merlinhc3_2_Green_RN_co.paa"
		};
	};
	class JAS_CUP_B_Merlin_HC4_AAC : JAS_CUP_B_Merlin_HM2_GB
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "RN Merlin HC4J";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF";
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
		_generalMacro = "CUP_B_Merlin_HC4_GB";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\skins\merlinhc3_2_Green_RN_co.paa"
		};
	};
	class JAS_CUP_B_Merlin_HC4_GB_VIV : JAS_CUP_B_Merlin_HM2_GB
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "RN Merlin HC4J (VIV)";
		model="\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF_VIV";
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
		_generalMacro = "CUP_B_Merlin_HC4_GB";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\skins\merlinhc3_2_Green_RN_co.paa"
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VTV_limit_1",
					"VTV_limit_2"
				};
				disableHeightLimit=0;
				maxLoadMass=3000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit_1"
				};
				unloadingInterval=3;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
	};
	class JAS_CUP_B_Merlin_HC4_AAC_VIV : JAS_CUP_B_Merlin_HM2_GB
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "RN Merlin HC4J (VIV)";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		model="\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF_VIV";
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
		_generalMacro = "CUP_B_Merlin_HC4_GB";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_HC3\skins\merlinhc3_2_Green_RN_co.paa"
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VTV_limit_1",
					"VTV_limit_2"
				};
				disableHeightLimit=0;
				maxLoadMass=3000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit_1"
				};
				unloadingInterval=3;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
	};
};
