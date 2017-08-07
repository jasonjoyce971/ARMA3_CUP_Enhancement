class CfgPatches
{
	class ARMA3_CUP_Enhancement_CH47
	{
		units[]=
		{
			"JAS_CUP_B_CH47F_USA",
			"JAS_CUP_B_CH47F_GB",
			"JAS_CUP_B_CH47F_AAC",
			"JAS_CUP_B_CH47F_VIV_GB",
			"JAS_CUP_B_CH47F_VIV_AAC",
			"JAS_CUP_B_CH47F_VIV_USA"
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
		class ARMA3_CUP_Enhancement_CH47
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_CH47"
			};
		};
	};
};
/*
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class Components;
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
*/
class Components;
class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
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
	class JAS_CUP_CH47F_base: Helicopter_Base_H
	{
		author="-{GOL}-Jason";
		mapSize=27.48;
		_generalMacro="JAS_CUP_CH47F_base";
		/*class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=500;
						aimDown=0;
						animDirection="PilotCamera_V";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=500;
						aimDown=0;
						animDirection="PilotCamera_V";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};*/
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
		class RotorLibHelicopterProperties
		{
			RTDconfig="ARMA3_CUP_Enhancement_CH47\rotorLib\RTD_Heli_Transport_03.xml";
			autoHoverCorrection[]={6.5,0,0};
			defaultCollective=0.60500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=4032;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=350000;
			maxTailRotorStress=350000;
		};
		armor=40;
		maxSpeed=300;
		fuelCapacity=1360;
		fuelConsumptionRate=0.126;
		slingLoadMaxCargoMass=10000;
		radarType=8;
		canFloat=1;
		waterLeakiness=0.050000001;
		maxFordingDepth=2.5;
		waterResistanceCoef=1;
		waterResistance=10;
		waterLinearDampingCoefY=5;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=5;
		waterDamageEngine=0.2;
		liftForceCoef=1.5;
		mainBladeRadius=8;
		tailBladeCenter="rotor_02_center";
		tailBladeRadius=8;
		tailBladeVertical=0;
		memoryPointTaskMarker="TaskMarker_1_pos";
		cost=10000000;
		threat[]={0.30000001,0.2,0.30000001};
		editorSubcategory="EdSubcat_Helicopters";
		icon="\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Map_Heli_Transport_03_base_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Heli_Transport_03_base_CA.paa";
		gearRetracting=0;
		gearUpTime=0;
		gearDownTime=0;
		driveOnComponent[]=
		{
			"gear_1_1_wheels",
			"gear_2_1_wheels",
			"gear_1_2_wheel",
			"gear_2_2_wheel"
		};
		scope=0;
		displayname="CH-47 Base";
		class Library
		{
			libTextDesc="$STR_A3_HURON_DESC_F0";
		};
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverAction = "CUP_CH47_Pilot";
		driverInAction="pilot_Heli_Transport_03";
		GetInAction="GetInMedium";
		getOutAction="GetOutMedium";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[] =
		{
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1"
		};
		enableManualFire=0;
		model="CUP\AirVehicles\CUP_AirVehicles_CH47\CUP_CH_47F.p3d";
		DLC="Heli";
		overviewPicture="\A3\Data_F_Heli\Images\dlcbrowser_heli_01_ca.paa";
		transportSoldier=14;
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		hideWeaponsCargo=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment3"
		};
		memoryPointCM[] =
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[] =
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		weapons[]=
		{
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		lockDetectionSystem="1 + 8 + 4";
		incomingMissileDetectionSystem=16;
		selectionHRotorMove="velka vrtule blur";
		selectionHRotorStill="velka vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		maximumLoad=6000;
		supplyRadius=-0.5;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
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
			class HitEngine
			{
				armor = 0.5;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			class HitAvionics
			{
				armor = 0.15000001;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 1;
			};
			class HitVRotor
			{
				armor = 0.5;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.30000001;
			};
			class HitHRotor
			{
				armor = 0.5;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
		};
		class AnimationSources : AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "CUP_M134";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "CUP_M134_2";
			};
			class Gatling_1_muzzle_hide
			{
				source = "reload";
				weapon = "CUP_M134";
			};
			class Gatling_1_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_M134";
			};
			class Gatling_2_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_M134_2";
			};
			class machinegun_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_M240_veh_W";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "CUP_M240_veh_W";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "CUP_M240_veh_W";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "CUP_M240_veh_W";
			};
		};
		class UserActions
		{
			/* class Ramp_Open
			{
				userActionID=60;
				displayName="$STR_ACTION_RAMP_OPEN0";
				textToolTip="$STR_ACTION_RAMP_OPEN0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="";
				condition="this doorPhase ""Door_rear_source"" < 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement="this animateDoor ['Door_rear_source', 1]";
				priority=1.5;
				radius=1.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				showWindow=0;
				onlyForPlayer=1;
				shortcut="";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID=61;
				displayName="$STR_ACTION_RAMP_CLOSE0";
				textToolTip="$STR_ACTION_RAMP_CLOSE0";
				condition="this doorPhase ""Door_rear_source"" > 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement="this animateDoor ['Door_rear_source', 0]";
			}; */
		};
		class RenderTargets
		{
			class SlingLoadCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="slingLoad_cam_pos";
					pointDirection="slingLoad_cam_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		dustEffect="HeliDustBig";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustEffectHeli";
			};
			class Exhaust2
			{
				position = "exhaust_2";
				direction = "exhaust_2_dir";
				effect = "ExhaustEffectHeli";
			};
		};
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
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
		soundLandCrashes[]=
		{
			"emptySound",
			0
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
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
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
		soundDammage[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\int-alarm_loop",
			10,
			1
		};
		soundGetIn[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\close",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\open",
			1,
			1,
			40
		};
		soundEngineOnInt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_start_int",
			0.25118864,
			1
		};
		soundEngineOnExt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_start_ext",
			1.4125376,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_stop_int",
			0.25118864,
			1
		};
		soundEngineOffExt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_stop_ext",
			1.4125376,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			0.31622776,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",
			2.5118864,
			1,
			150
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
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
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
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
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
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
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
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
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_ext",
					1.7782794,
					1,
					800
				};
				frequency="rotorSpeed";
				volume="camPos*(rotorSpeed factor[0.4,1])";
			};
			class RotorExt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_ext",
					1.4125376,
					0.80000001,
					2000
				};
				frequency="rotorSpeed*1.1";
				volume="1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorSwistExt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_forsage_ext",
					1,
					1,
					400
				};
				frequency=1;
				volume="camPos*(rotorThrust factor [0.6, 1])";
				cone[]={1,1.4,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_int",
					0.79432821,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_int",
					1,
					0.80000001
				};
				frequency="rotorSpeed*1.1";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
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
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.63095737,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					1.1220185,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[50,80])";
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
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_ext",
						1.7782794,
						1,
						800
					};
					frequency="rotorSpeed";
					volume="camPos*(rotorSpeed factor[0.4,1])";
				};
				class RotorExt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_ext",
						1.4125376,
						0.80000001,
						2000
					};
					frequency="rotorSpeed*1.1";
					volume="1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorSwistExt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_forsage_ext",
						1,
						1,
						400
					};
					frequency=1;
					volume="camPos*(rotorThrust factor [0.6, 1])";
					cone[]={1,1.4,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_int",
						0.79432821,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_int",
						1,
						0.80000001
					};
					frequency="rotorSpeed*1.1";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
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
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.63095737,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[50,80])";
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret : MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = -3;
				maxTurn = 173;
				initTurn = 0;
				soundServo[] =
				{
					"db-40",
					1
				};
				animationSourceHatch = "";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] =
				{
					"CUP_M134"
				};
				magazines[] =
				{
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
				gunnerName = "$STR_CUP_POSITION_CREWCHIEF";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "CUP_CH47_Gunner";
				gunnerInAction = "CUP_CH47_Gunner";
				commanding = -2;
				primaryGunner = 1;
				class ViewOptics
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
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				isCopilot = 0;
				selectionFireAnim = "zasleh";
				slingLoadOperator = 0;
			};
			class RightDoorGun : MainTurret
			{
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 30;
				initElev = -30;
				minTurn = -173;
				maxTurn = 3;
				initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				weapons[] =
				{
					"CUP_M134_2"
				};
				magazines[] =
				{
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerName = "$STR_CUP_POSITION_DOORGUNNER";
				commanding = -2;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				preciseGetInOut = 1;
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				isCopilot = 0;
				turretFollowFreeLook = 0;
				slingLoadOperator = 0;
			};
			class BackDoorGun : MainTurret
			{
				body = "Turret3";
				gun = "Gun_3";
				minTurn = 130;
				maxTurn = 230;
				initTurn = 180;
				minElev = -50;
				maxElev = 50;
				initElev = 0;
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				stabilizedInAxes = 0;
				selectionFireAnim = "zasleh_3";
				proxyIndex = 3;
				gunnerName = "$STR_CUP_POSITION_REARGUNNER";
				gunnerOpticsShowCursor = 0;
				commanding = -1;
				gunnerAction = "CUP_CH47_Gunner01";
				gunnerInAction = "CUP_CH47_Gunner01";
				weapons[] =
				{
					"CUP_M240_veh_W"
				};
				magazines[] =
				{
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
				};
				gunBeg = "muzzle_3";
				gunEnd = "chamber_3";
				primaryGunner = 0;
				memoryPointGun = "machinegun_3";
				memoryPointGunnerOptics = "gunnerview_3";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerCompartments = "Compartment2";
				isCopilot = 0;
				slingLoadOperator = 0;
			};
			class CopilotTurret : CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "CUP_CH47_Pilot";
				gunnerInAction = "CUP_CH47_Pilot";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 4;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				isCopilot = 1;
				slingLoadOperator = 0;
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "pos_light_still_white";
				color[] = { 1, 1, 1 };
				ambient[] = { 0.1, 0.1, 0.1 };
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15000001;
				drawLightCenterSize = 0.039999999;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedStill
			{
				name = "pos_light_still_red";
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
			class GreenStill
			{
				name = "pos_light_still_green";
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
				name = "pos_light_blink_red";
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
			class WhiteBlinking
			{
				name = "pos_light_blink_white";
				color[] = { 1, 1, 1 };
				ambient[] = { 0.1, 0.1, 0.1 };
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = { 0.1, 0.89999998 };
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.079999998;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = { 7000, 7500, 10000, 1 };
				ambient[] = { 100, 100, 100, 0 };
				position = "light_m";
				direction = "light_m_direction";
				hitpoint = "light_m";
				selection = "light_m";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
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
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_int_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_int_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_damage.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		numberPhysicalWheels=4;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=20;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 16;
		LESH_canBeTowed = 1;
		LESH_towFromFront = 0;
		LESH_AxisOffsetTarget[] = { 0, -7.5, -2.3599999 };
		LESH_WheelOffset[] = { 0, 3 };
	};
	class JAS_CUP_CH47F_VIV_Base: JAS_CUP_CH47F_base
	{
		displayName="CH-47J Cargo Transport";
		model="\CUP\AirVehicles\CUP_AirVehicles_CH47\CUP_CH_47F_VIV.p3d";
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
				maxLoadMass=13000;
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
			class MainTurret: MainTurret
			{
			};
			class RightDoorGun: RightDoorGun
			{
			};
			class CopilotTurret: CopilotTurret
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class Turret_3
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Gun_3
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class JAS_CUP_B_CH47F_USA : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "CH-47J Troop Transport";
		faction = "CUP_B_US_Army";
		side = 1;
		crew = "CUP_B_US_Pilot";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FUSA.jpg";
	};
	class JAS_CUP_B_CH47F_VIV_USA: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		faction="CUP_B_US_Army";
		side=1;
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FUSA.jpg";
	};
	class JAS_CUP_B_CH47F_AAC : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "CH-47J Troop Transport";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		side = 1;
		crew = "CUP_B_US_Pilot";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
	class JAS_CUP_B_CH47F_VIV_AAC: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		side=1;
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
	class JAS_CUP_B_CH47F_GB : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "Chinook HC-4J Troop Transport";
		faction = "CUP_B_GB";
		side = 1;
		crew = "CUP_B_BAF_Pilot_DDPM";
		typicalCargo[] =
		{
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
			"",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
	class JAS_CUP_B_CH47F_VIV_GB: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		displayName="Chinook HC-4J Cargo Transport";
		faction="CUP_B_GB";
		side=1;
		crew="CUP_B_BAF_Pilot_DDPM";
		typicalCargo[]=
		{
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
			"",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
	class JAS_CUP_I_CH47F_RACS : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "Chinook CH-47F Troop Transport";
		faction = "CUP_I_RACS";
		side = 2;
		crew = "CUP_I_RACS_Pilot";
		typicalCargo[] =
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_racs_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_racs_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_I_CH47F_RACS.jpg";
	};
	class JAS_CUP_I_CH47F_VIV_RACS: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		displayName="Chinook CH-47F Cargo Transport";
		faction="CUP_I_RACS";
		side=2;
		crew="CUP_I_RACS_Pilot";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_racs_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_racs_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_I_CH47F_RACS.jpg";
	};
	class JAS_CUP_I_CH47F_AAC : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "CH-47J Troop Transport";
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_GIANT";
		side = 2;
		crew = "CUP_I_RACS_Pilot";
		typicalCargo[] =
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_racs_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_racs_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_I_CH47F_RACS.jpg";
	};
	class JAS_CUP_I_CH47F_VIV_AAC: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_GIANT";
		side=2;
		crew="CUP_I_RACS_Pilot";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_racs_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_racs_ca.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_racs_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_I_CH47F_RACS.jpg";
	};
};
