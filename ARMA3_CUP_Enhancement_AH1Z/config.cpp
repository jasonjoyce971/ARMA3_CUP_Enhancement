class CfgPatches
{
	class ARMA3_CUP_Enhancement_AH1Z
	{
		units[]=
		{
			"JAS_CUP_B_AH1Z_BASE",
			"JAS_CUP_B_AH1Z_USMC",
			"JAS_CUP_B_AH1Z_AAC",
			"JAS_CUP_I_AH1Z_AAF",
			"JAS_CUP_I_AH1Z_AAC",
			"JAS_AH1Z_Loadout_Module"
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
			"FIR_AirWeaponSystem_US",
			"ARMA3_CUP_Enhancement_Systems",
			"ARMA3_CUP_Enhancement_Weapons",
			"CUP_BaseData",
			"CUP_BaseConfigs",
			"CUP_AirVehicles_Core",
			"CUP_AirVehicles_ah1z",
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
		class ARMA3_CUP_Enhancement_AH1Z
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_AH1Z"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_AH1Z_Init_Function
		{
			class AH1Z_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AH1Z\sqs\modules\ah1z_loadout_module.sqf";
			};
			class AH1Z_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AH1Z\sqs\modules\ah1z_loadout_module_set.sqf";
			};
		};
	};
};

// Jets Content -> relates to sensor overhaul
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
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Components;

class DefaultEventhandlers;
class Eventhandlers;
class CBA_Extended_EventHandlers_base;
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
		class AH1Z
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AH-1Z Viper";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Attack Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The AH-1Z is the culmination of successive upgrades to the original AH-1 Cobra. The Cobra saw action in Vietnam and throughout the Cold War era until it was eventually phased out of US Army use to make way for the AH-64. The USMC however, prefered the AH-1 since it was easier to stow, maintain and operate at sea. The USMC AH-1 fleet then was upgraded to the W variant Super Cobra and subsequently the Z variant Viper. The platform is comparable to the AH-64 in most aspects, but is still prefered by the USMC simply due to its size.<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2HYDRA Rockets<br/>%2APKWS Rockets<br/>%2AGM-114K<br/><br/>Factions:<br/><br/>%2USMC<br/>%2Altis Armed Forces";
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
class AH1_GUI
{
	idd = -1;
	movingenable = "false";
	class Controls
	{
		class RscFrame_1800 : RscFrame
		{
			idc = 1800;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			colorText[] = { 1, 1, 1, 1 };
			colorBackground[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
		};
		class AH1_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_AH1Z\ui\AH1_background.paa";
		};
		class AH1_Skin_Button: RscPicture
		{
			idc=1610;
			text="FIR_AirWeaponSystem_US\ui\button_skin.paa";
			x="0.75 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.0875109 * safezoneW";
			h="0.0699973 * safezoneH";
		};
		class AH1_Skin_Button2: RscButton
		{
			idc=1920;
			text="";
			x="0.75 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.0875109 * safezoneW";
			h="0.0699973 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Open the Skin Setting";
			action="_skinhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\setskin\setskin_open.sqf""";
		};
		class rsc1 : RscText
		{
			idc = 1000;
			text = "Right Wingtip";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1101 : RscText
		{
			idc = 1101;
			text = "Left Wingtip";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1001 : RscText
		{
			idc = 1001;
			text = "Right Outboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Left Outboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1003 : RscText
		{
			idc = 1003;
			text = "Right Inboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "Left Inboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp1 : RscCombo
		{
			idc = 2100;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp2 : RscCombo
		{
			idc = 2201;
			x = "0.22 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp3 : RscCombo
		{
			idc = 2101;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.33 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp4 : RscCombo
		{
			idc = 2102;
			x = "0.22 * safezoneW + safezoneX";
			y = "0.33 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp5 : RscCombo
		{
			idc = 2103;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.384 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp6 : RscCombo
		{
			idc = 2104;
			x = "0.22 * safezoneW + safezoneX";
			y = "0.384 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1008 : RscText
		{
			idc = 1008;
			text = "select loadout";
			x = "0.73625 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.11375 * safezoneW";
			h = "0.014 * safezoneH";
		};
		class AH1_refuel_Button : RscPicture
		{
			idc = 1904;
			text = "FIR_AirWeaponSystem_US\ui\button_refuel.paa";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.346 * safezoneH + safezoneY";
			w = "0.09625 * safezoneW";
			h = "0.07 * safezoneH";
		};
		class btn_refuel : RscButton
		{
			idc = 1600;
			text = "";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.346 * safezoneH + safezoneY";
			w = "0.09625 * safezoneW";
			h = "0.07 * safezoneH";
			colorText[] = { -1, -1, -1, -1 };
			colorBackground[] = { -1, -1, -1, -1 };
			colorActive[] = { -1, -1, -1, -1 };
			tooltip = "Refuel the Aircraft";
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\loadout\A164_Refuel.sqf""";
		};
		class AH1_repair_Button : RscPicture
		{
			idc = 1904;
			text = "FIR_AirWeaponSystem_US\ui\button_repair.paa";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.444 * safezoneH + safezoneY";
			w = "0.09625 * safezoneW";
			h = "0.07 * safezoneH";
		};
		class btn_repair : RscButton
		{
			idc = 1601;
			text = "";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.444 * safezoneH + safezoneY";
			w = "0.09625 * safezoneW";
			h = "0.07 * safezoneH";
			colorText[] = { -1, -1, -1, -1 };
			colorBackground[] = { -1, -1, -1, -1 };
			colorActive[] = { -1, -1, -1, -1 };
			tooltip = "Repair the Aircraft";
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\loadout\A164_Repair.sqf""";
		};
		class AH1_Apply_Button : RscPicture
		{
			idc = 1902;
			text = "FIR_AirWeaponSystem_US\ui\button_apply.paa";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.766 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.056 * safezoneH";
		};
		class btn_apply : RscButton
		{
			idc = 1602;
			text = "";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.766 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.056 * safezoneH";
			colorText[] = { -1, -1, -1, -1 };
			colorBackground[] = { -1, -1, -1, -1 };
			colorActive[] = { -1, -1, -1, -1 };
			tooltip = "Apply the Current Loadout";
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_Loadout.sqf""";
		};
		class AH1_Cancel_Button : RscPicture
		{
			idc = 1903;
			text = "FIR_AirWeaponSystem_US\ui\button_cancel.paa";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.766 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.056 * safezoneH";
		};
		class btn_cancel : RscButton
		{
			idc = 1603;
			text = "";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.766 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.056 * safezoneH";
			colorText[] = { -1, -1, -1, -1 };
			colorBackground[] = { -1, -1, -1, -1 };
			colorActive[] = { -1, -1, -1, -1 };
			tooltip = "Close";
			action = "closeDialog 0";
		};
		class AH1_custom_save_Buttonpic_1 : RscPicture
		{
			idc = 1905;
			text = "FIR_AirWeaponSystem_US\ui\button_save1_ca.paa";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.542 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
		};
		class btn_slot1 : RscButton
		{
			idc = 1604;
			text = "";
			x = "0.745 * safezoneW + safezoneX";
			y = "0.542 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			colorText[] = { -1, -1, -1, -1 };
			colorBackground[] = { -1, -1, -1, -1 };
			colorActive[] = { -1, -1, -1, -1 };
			tooltip = "Save Loadout to Custom Slot 1";
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_SaveCustom.sqf""";
		};
		class AH1_custom_save_Buttonpic_2 : RscPicture
		{
			idc = 1906;
			text = "FIR_AirWeaponSystem_US\ui\button_save2_ca.paa";
			x = "0.78 * safezoneW + safezoneX";
			y = "0.542 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
		};
		class btn_slot2 : RscButton
		{
			idc = 1605;
			text = "";
			x = "0.78 * safezoneW + safezoneX";
			y = "0.542 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			colorText[] = { -1, -1, -1, -1 };
			colorBackground[] = { -1, -1, -1, -1 };
			colorActive[] = { -1, -1, -1, -1 };
			tooltip = "Save Loadout to Custom Slot 2";
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_SaveCustom.sqf""";
		};
		class AH1_custom_save_Buttonpic_3 : RscPicture
		{
			idc = 1906;
			text = "FIR_AirWeaponSystem_US\ui\button_save3_ca.paa";
			x = "0.815 * safezoneW + safezoneX";
			y = "0.542 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
		};
		class btn_slot3 : RscButton
		{
			idc = 1606;
			text = "";
			x = "0.815 * safezoneW + safezoneX";
			y = "0.542 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			colorText[] = { -1, -1, -1, -1 };
			colorBackground[] = { -1, -1, -1, -1 };
			colorActive[] = { -1, -1, -1, -1 };
			tooltip = "Save Loadout to Custom Slot 3";
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_SaveCustom.sqf""";
		};
		class loadout_combo : RscCombo
		{
			idc = 2108;
			x = "0.745 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
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
	class JAS_CUP_B_AH1Z_BASE : Helicopter_Base_H
	{
		expansion = 3;
		dlc = "CUP_Vehicles";
		side = 1;
		accuracy = 0.5;
		scope = 0;
		fir_ah1zUS_custom_skin=2;
		fir_ah1zUS_custom_name="AH1Z USMC";
		fir_ah1zUS_custom_code="JAS_CUP_B_AH1Z_USMC";
		fir_ah1zUS_custom_preview_pic="\ARMA3_CUP_Enhancement_AH1Z\UI\preview\AH1ZUSMC.paa";
		class Library
		{
			libTextDesc = "AH1Z";
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Bones
				{
				};
				class Draw
				{
				};
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.15000001, 1, 0.15000001, 1 };
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = { 0, 0, 0 };
				helmetRight[] = { 0, 0, 0 };
				helmetDown[] = { 0, 0, 0 };
			};
			class CUP_AH64_HUD_1
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
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] =
						{
							0.5,
							"0.9 - 0.04 + 0.012"
						};
						pos10[] =
						{
							"0.5 + 0.0111",
							"0.9 - 0.04 + 0.012 + 0.0133"
						};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.85000002, 0.85000002 };
					};
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
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.75, 0.75 };
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
										{ -0.38, 0 },
										1
									},
									{},

									{
										"Level0",
										{ -0.37, 0 },
										1
									},

									{
										"Level0",
										{ -0.33000001, 0 },
										1
									},
									{},

									{
										"Level0",
										{ -0.31999999, 0 },
										1
									},

									{
										"Level0",
										{ -0.28, 0 },
										1
									},
									{},

									{
										"Level0",
										{ -0.27000001, 0 },
										1
									},

									{
										"Level0",
										{ -0.23, 0 },
										1
									},
									{},

									{
										"Level0",
										{ -0.22, 0 },
										1
									},

									{
										"Level0",
										{ -0.18000001, 0 },
										1
									},
									{},

									{
										"Level0",
										{ -0.17, 0 },
										1
									},

									{
										"Level0",
										{ -0.13, 0 },
										1
									},
									{},

									{
										"Level0",
										{ -0.12, 0 },
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
										{ 0.38, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.37, 0 },
										1
									},

									{
										"Level0",
										{ 0.33000001, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.31999999, 0 },
										1
									},

									{
										"Level0",
										{ 0.28, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.27000001, 0 },
										1
									},

									{
										"Level0",
										{ 0.23, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.22, 0 },
										1
									},

									{
										"Level0",
										{ 0.18000001, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.17, 0 },
										1
									},

									{
										"Level0",
										{ 0.13, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.12, 0 },
										1
									},

									{
										"Level0",
										{ 0.079999998, 0 },
										1
									}
								};
							};
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
					class Static_HAD_BOX
					{
						clipTL[] = { 0, 1 };
						clipBR[] = { 1, 0 };
						type = "line";
						width = 5;
						points[] =
						{

							{

								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},

							{

								{
									"0.5-0.1",
									"0.9+0.04"
								},
								1
							},

							{

								{
									"0.5+0.1",
									"0.9+0.04"
								},
								1
							},

							{

								{
									"0.5+0.1",
									"0.9-0.04"
								},
								1
							},

							{

								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},
							{},

							{

								{
									"0.5-0.1",
									"0.9-0.04+0.012"
								},
								1
							},

							{

								{
									"0.5-0.092",
									"0.9-0.04+0.012"
								},
								1
							},
							{},

							{

								{
									"0.5+0.1",
									"0.9-0.04+0.012"
								},
								1
							},

							{

								{
									"0.5+0.092",
									"0.9-0.04+0.012"
								},
								1
							},
							{},

							{

								{
									0.5,
									"0.9-0.04"
								},
								1
							},

							{

								{
									0.5,
									"0.9-0.032"
								},
								1
							},
							{},

							{

								{
									0.5,
									"0.9+0.04"
								},
								1
							},

							{

								{
									0.5,
									"0.9+0.032"
								},
								1
							},
							{}
						};
					};
					class Gunner_HAD
					{
						type = "line";
						width = 6;
						points[] =
						{

							{
								"GunnerAim",
								{ -0.015, -0.0080000004 },
								1
							},

							{
								"GunnerAim",
								{ -0.015, 0.0080000004 },
								1
							},

							{
								"GunnerAim",
								{ 0.015, 0.0080000004 },
								1
							},

							{
								"GunnerAim",
								{ 0.015, -0.0080000004 },
								1
							},

							{
								"GunnerAim",
								{ -0.015, -0.0080000004 },
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
					class Centerline
					{
						type = "line";
						width = 5;
						points[] =
						{

							{
								{ 0.5, 0.47999999 },
								1
							},

							{
								{ 0.5, 0.44999999 },
								1
							},
							{},

							{
								{ 0.5, 0.51999998 },
								1
							},

							{
								{ 0.5, 0.55000001 },
								1
							},
							{},

							{
								{ 0.47999999, 0.5 },
								1
							},

							{
								{ 0.44999999, 0.5 },
								1
							},
							{},

							{
								{ 0.51999998, 0.5 },
								1
							},

							{
								{ 0.55000001, 0.5 },
								1
							},
							{}
						};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] =
						{
							{ 0.61000001, 0.86000001 },
							1
						};
						right[] =
						{
							{ 0.64999998, 0.86000001 },
							1
						};
						down[] =
						{
							{ 0.61000001, 0.89999998 },
							1
						};
					};
					class Ammo_GUN
					{
						type = "group";
						condition = "mgun";
						class Ammo_count_GUN
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.88999999 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.88999999 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.93000001 },
								1
							};
						};
					};
					class Ammo_RKT
					{
						type = "group";
						condition = "rocket";
						class Ammo_count_RKT
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.88999999 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.88999999 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.93000001 },
								1
							};
						};
					};
					class Ammo_AGM
					{
						type = "group";
						condition = "AAmissile";
						class Ammo_count_AGM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.88999999 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.88999999 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.93000001 },
								1
							};
						};
					};
					class Ammo_AAM
					{
						type = "group";
						condition = "ATmissile";
						class Ammo_count_AAM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.88999999 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.88999999 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.93000001 },
								1
							};
						};
					};
					class Ammo_Bomb
					{
						type = "group";
						condition = "Bomb";
						class Ammo_count_Bomb
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.88999999 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.88999999 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.93000001 },
								1
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
					class ATMissileTOFGroup
					{
						condition = "ATmissile";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.92000002 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.92000002 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.95999998 },
								1
							};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0024999999;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.69, 0.92000002 },
								1
							};
							right[] =
							{
								{ 0.73000002, 0.92000002 },
								1
							};
							down[] =
							{
								{ 0.69, 0.95999998 },
								1
							};
						};
					};
					class LaserTOFGroup
					{
						condition = "Bomb";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.92000002 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.92000002 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.95999998 },
								1
							};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0024999999;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.69, 0.92000002 },
								1
							};
							right[] =
							{
								{ 0.73000002, 0.92000002 },
								1
							};
							down[] =
							{
								{ 0.69, 0.95999998 },
								1
							};
						};
					};
					class RocketTOFGroup
					{
						condition = "Rocket";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] =
							{
								{ 0.61000001, 0.92000002 },
								1
							};
							right[] =
							{
								{ 0.64999998, 0.92000002 },
								1
							};
							down[] =
							{
								{ 0.61000001, 0.95999998 },
								1
							};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0024999999;
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.69, 0.92000002 },
								1
							};
							right[] =
							{
								{ 0.73000002, 0.92000002 },
								1
							};
							down[] =
							{
								{ 0.69, 0.95999998 },
								1
							};
						};
					};
					class RangeNumber
					{
						type = "text";
						source = "targetDist";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] =
						{
							{ 0.38999999, 0.88999999 },
							1
						};
						right[] =
						{
							{ 0.43000001, 0.88999999 },
							1
						};
						down[] =
						{
							{ 0.38999999, 0.93000001 },
							1
						};
					};
					class RangeText
					{
						type = "text";
						source = "static";
						text = "RNG";
						align = "left";
						scale = 1;
						pos[] =
						{
							{ 0.38999999, 0.86000001 },
							1
						};
						right[] =
						{
							{ 0.43000001, 0.86000001 },
							1
						};
						down[] =
						{
							{ 0.38999999, 0.89999998 },
							1
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
							sourceScale = 290;
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
						hideValue = 201;
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
							{ 0.029999999, 0.89999998 },
							1
						};
						right[] =
						{
							{ 0.07, 0.89999998 },
							1
						};
						down[] =
						{
							{ 0.029999999, 0.94 },
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
							{ 0.1, 0.89999998 },
							1
						};
						right[] =
						{
							{ 0.14, 0.89999998 },
							1
						};
						down[] =
						{
							{ 0.1, 0.94 },
							1
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = { -0.039999999, 0.039999999, 0.1 };
				helmetRight[] = { 0.079999998, 0, 0 };
				helmetDown[] = { 0, -0.079999998, 0 };
			};
			class CUP_AH64_HUD_2
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
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.75300002, 0.75300002 };
					};
					class WeaponAim1
					{
						type = "vector";
						source = "weapon";
						pos0[] = { 0, 0 };
						pos10[] = { 0.25299999, 0.23 };
					};
					class Target
					{
						type = "vector";
						source = "target";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.75300002, 0.75300002 };
					};
					class RadarContact
					{
						type = "fixed";
						pos[] = { 0, 0 };
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
					class Gunner_AIM
					{
						type = "group";
						class Circle
						{
							type = "line";
							width = 6;
							points[] =
							{

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, -0.015 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, -0.029999999 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, -0.032499999 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, -0.047499999 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, 0.015 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, 0.029999999 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, 0.032499999 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, 0.047499999 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.015, 0 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.029999999, 0 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.032499999, 0 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.047499999, 0 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.015, 0 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.029999999, 0 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.032499999, 0 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.047499999, 0 },
									1
								}
							};
						};
					};
					class GunCross
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 9;
							points[] =
							{

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, -0.050000001 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, -0.015 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, 0.015 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, 0.050000001 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.050000001, 0 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.015, 0 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.015, 0 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.050000001, 0 },
									1
								},
								{}
							};
						};
					};
					class RocketCross
					{
						condition = "rocket";
						width = 6;
						class Circle
						{
							type = "line";
							width = 6;
							points[] =
							{

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.050000001, -0.079999998 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.050000001, -0.079999998 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, -0.079999998 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0, 0.079999998 },
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.050000001, 0.079999998 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.050000001, 0.079999998 },
									1
								},
								{}
							};
						};
					};
					class AT_Aim
					{
						condition = "ATmissile";
						width = 2;
						class Circle
						{
							type = "line";
							width = 2;
							points[] =
							{

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.1, -0.1 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.1, -0.1 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ 0.1, 0.1 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.1, 0.1 },
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{ -0.1, -0.1 },
									1
								}
							};
						};
					};
					class AA_aim
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 2.5;
							points[] =
							{

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0 / 4",
										"-0.248559 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0434 / 4",
										"-0.244781 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0855 / 4",
										"-0.233571 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.125 / 4",
										"-0.215252 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1607 / 4",
										"-0.190396 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1915 / 4",
										"-0.159774 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2165 / 4",
										"-0.12428 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.234925 / 4",
										"-0.0850072 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2462 / 4",
										"-0.0431499 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.25 / 4",
										"0 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2462 / 4",
										"0.0431499 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.234925 / 4",
										"0.0850072 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2165 / 4",
										"0.12428 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1915 / 4",
										"0.159774 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1607 / 4",
										"0.190396 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.125 / 4",
										"0.215252 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0855 / 4",
										"0.233571 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0434 / 4",
										"0.244781 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0 / 4",
										"0.248559 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0434 / 4",
										"0.244781 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0855 / 4",
										"0.233571 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.125 / 4",
										"0.215252 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1607 / 4",
										"0.190396 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1915 / 4",
										"0.159774 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2165 / 4",
										"0.12428 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.234925 / 4",
										"0.0850072 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2462 / 4",
										"0.0431499 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.25 / 4",
										"0 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2462 / 4",
										"-0.0431499 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.234925 / 4",
										"-0.0850072 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2165 / 4",
										"-0.12428 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1915 / 4",
										"-0.159774 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1607 / 4",
										"-0.190396 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.125 / 4",
										"-0.215252 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0855 / 4",
										"-0.233571 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0434 / 4",
										"-0.244781 / 4"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0 / 4",
										"-0.248559 / 4"
									},
									1
								},
								{},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0 / 2",
										"-0.248559 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0434 / 2",
										"-0.244781 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0855 / 2",
										"-0.233571 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.125 / 2",
										"-0.215252 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1607 / 2",
										"-0.190396 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1915 / 2",
										"-0.159774 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2165 / 2",
										"-0.12428 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.234925 / 2",
										"-0.0850072 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2462 / 2",
										"-0.0431499 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.25 / 2",
										"0 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2462 / 2",
										"0.0431499 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.234925 / 2",
										"0.0850072 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.2165 / 2",
										"0.12428 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1915 / 2",
										"0.159774 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.1607 / 2",
										"0.190396 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.125 / 2",
										"0.215252 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0855 / 2",
										"0.233571 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0.0434 / 2",
										"0.244781 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0 / 2",
										"0.248559 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0434 / 2",
										"0.244781 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0855 / 2",
										"0.233571 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.125 / 2",
										"0.215252 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1607 / 2",
										"0.190396 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1915 / 2",
										"0.159774 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2165 / 2",
										"0.12428 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.234925 / 2",
										"0.0850072 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2462 / 2",
										"0.0431499 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.25 / 2",
										"0 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2462 / 2",
										"-0.0431499 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.234925 / 2",
										"-0.0850072 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.2165 / 2",
										"-0.12428 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1915 / 2",
										"-0.159774 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.1607 / 2",
										"-0.190396 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.125 / 2",
										"-0.215252 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0855 / 2",
										"-0.233571 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"-0.0434 / 2",
										"-0.244781 / 2"
									},
									1
								},

								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,

									{
										"0 / 2",
										"-0.248559 / 2"
									},
									1
								}
							};
						};
					};
					class TargetACQ
					{
						type = "line";
						width = 2;
						points[] =
						{

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.059999999 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.055 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.050000001 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.045000002 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.039999999 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.035 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.029999999 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.025 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.02 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.015 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.0099999998 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, -0.0049999999 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.059999999 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.055 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.050000001 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.045000002 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.039999999 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.035 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.029999999 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.025 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.02 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.015 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.0099999998 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0, 0.0049999999 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.059999999, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.055, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.050000001, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.045000002, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.039999999, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.035, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.029999999, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.025, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.02, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.015, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.0099999998, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ -0.0049999999, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.059999999, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.055, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.050000001, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.045000002, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.039999999, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.035, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.029999999, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.025, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.02, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.015, 0 },
								1
							},
							{},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.0099999998, 0 },
								1
							},

							{
								"ForwardVec",
								1,
								"target",
								{ 0.0049999999, 0 },
								1
							},
							{}
						};
					};
					class RadarTargets
					{
						type = "radar";
						pos0[] = { 0.5, 0.5 };
						pos10[] = { 0.75300002, 0.75300002 };
						width = 2.5;
						points[] =
						{

							{
								"ForwardVec",
								1,
								"RadarContact",
								{ -0.0099999998, -0.0099999998 },
								1
							},

							{
								"ForwardVec",
								1,
								"RadarContact",
								{ 0.0099999998, -0.0099999998 },
								1
							},

							{
								"ForwardVec",
								1,
								"RadarContact",
								{ 0.0099999998, 0.0099999998 },
								1
							},

							{
								"ForwardVec",
								1,
								"RadarContact",
								{ -0.0099999998, 0.0099999998 },
								1
							},

							{
								"ForwardVec",
								1,
								"RadarContact",
								{ -0.0099999998, -0.0099999998 },
								1
							}
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = { -0.035, 0.035, 0.1 };
				helmetRight[] = { 0.07, 0, 0 };
				helmetDown[] = { 0, -0.07, 0 };
			};
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
		//liftForceCoef = 2.5;
		liftForceCoef = 3.5;
		radarType = 4;
		lockDetectionSystem = "CM_Lock_Radar + CM_Lock_Laser + CM_Lock_IR";
		incommingMisslieDetectionSystem = "CM_Missile";
		selectionHRotorStill = "mainRotorStatic";
		selectionHRotorMove = "mainRotorBlurred";
		selectionVRotorStill = "tailRotorStatic";
		selectionVRotorMove = "tailRotorBlurred";
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "pedall";
		driverRightLegAnimName = "pedalr";
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
				blinkingPattern[] = { 1.9, 0.1 };
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
				blinkingPattern[] = { 0.1, 1.9 };
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
			class Exhaust4
			{
				direction = "exhaust4_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust4";
			};
		};
		driveOnComponent[] =
		{
			"Skid_L",
			"Skid_R"
		};
		ace_cargo_hasCargo = 0;
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			//RTDconfig = "CUP\AirVehicles\CUP_AirVehicles_AH1Z\RTD_CUP_AH1Z.xml";
			RTDconfig = "ARMA3_CUP_Enhancement_AH1Z\rotorLib\RTD_ah1.xml";
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
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\CUP_AH1Z.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\UI\ah1z_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\UI\icomap_ah1z_CA.paa";
		mapSize = 15.5;
		cost = 10000000;
		armor = 60;
		damageResistance = 0.0055499999;
		vehicleClass = "Air";
		laserScanner = 1;
		MainRotorSpeed = -1;
		backRotorSpeed = 3;
		weapons[] =
		{
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		insideSoundCoef = 0.2;
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
			"db0",
			1,
			100
		};
		soundGeneralCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			"db0",
			1,
			100
		};
		soundGeneralCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			"db0",
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
			"db0",
			1,
			100
		};
		soundBushCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			"db0",
			1,
			100
		};
		soundBushCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			"db0",
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
			"db0",
			1,
			100
		};
		soundWaterCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			"db0",
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
			"db20",
			1
		};
		soundGetIn[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\open",
			"db-5",
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\close",
			"db0",
			1,
			50
		};
		soundEngineOnInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_start_v2",
			"db-8",
			1
		};
		soundEngineOnExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_start_v2",
			"db-2",
			1,
			600
		};
		soundEngineOffInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_stop_v2",
			"db-8",
			1
		};
		soundEngineOffExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_stop_v2",
			"db-2",
			1,
			600
		};
		soundLocked[] =
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			"db0",
			1
		};
		soundIncommingMissile[] =
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			"db0",
			1
		};
		rotorDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			"db0",
			1
		};
		rotorDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			"db8",
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
			"db0",
			1
		};
		tailDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			"db0",
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
			"db0",
			1,
			100
		};
		landingSoundInt1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			"db0",
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
			"db5",
			1,
			100
		};
		landingSoundOut1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			"db5",
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
			"db0",
			1
		};
		slingCargoAttach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			"db0",
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
			"db0",
			1
		};
		slingCargoDetach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			"db0",
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
			"db0",
			1
		};
		slingCargoDetachAir1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			"db0",
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
			"db0",
			1
		};
		slingCargoRopeBreak1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			"db0",
			1,
			80
		};
		slingCargoRopeBreak[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_engine_v2",
					"db5",
					1,
					700
				};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_rotor_normal",
					"db3",
					1,
					1500
				};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
			};
			class RotorNoiseExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_02\rotor_swist",
					"db0",
					1,
					400
				};
				frequency = 1;
				volume = "(camPos*(rotorThrust factor [0.6, 1]))";
				cone[] = { 0.69999999, 1.3, 1, 0 };
			};
			class EngineInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_engine_v2",
					"db0",
					1
				};
				frequency = "rotorSpeed";
				volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_rotor_normal",
					"db-3",
					1
				};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db-10",
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
					"db-13",
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
					"db-10",
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
					"db-13",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db0",
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
					"db-7",
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
					"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
					"db-8",
					1,
					50
				};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
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
						"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_engine_v2",
						"db5",
						1,
						700
					};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_rotor_normal",
						"db3",
						1,
						1500
					};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
				};
				class RotorNoiseExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_02\rotor_swist",
						"db0",
						1,
						400
					};
					frequency = 1;
					volume = "(camPos*(rotorThrust factor [0.6, 1]))";
					cone[] = { 0.69999999, 1.3, 1, 0 };
				};
				class EngineInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_engine_v2",
						"db0",
						1
					};
					frequency = "rotorSpeed";
					volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_rotor_normal",
						"db-3",
						1
					};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db-10",
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
						"db-13",
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
						"db-10",
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
						"db-13",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db0",
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
						"db-7",
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
						"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
						"db-8",
						1,
						50
					};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		maxSpeed = 293;
		driverAction = "CUP_AH1Z_Pilot";
		driverInAction = "CUP_AH1Z_Pilot";
		GetInAction = "GetInHigh";
		GetOutAction = "GetOutHigh";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		threat[] = { 0.30000001, 1, 0.80000001 };
		destrType = "DestructWreck";
		class HitPoints : HitPoints
		{
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
			class HitHull
			{
				armor = 999;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.69999999;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			class HitAvionics
			{
				armor = 2;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 1;
			};
			class HitVRotor
			{
				radius = 0.2;
				armor = 3;
				material = 51;
				name = "tail rotor";
				visual = "tail rotor static";
				passThrough = 0.30000001;
			};
			class HitHRotor
			{
				radius = 0.30000001;
				armor = 4;
				material = 51;
				name = "main rotor";
				visual = "main rotor static";
				passThrough = 0.1;
			};
			class HitMissiles
			{
				armor = 1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
		};
		dammageHalf[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_monitor_glass_ca.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_monitor_glass_destr_co.paa"
		};
		dammageFull[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_monitor_glass_ca.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_monitor_glass_destr_co.paa"
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_body.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_body_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_body_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_glass_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_cockpit.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_cockpit.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_cockpit_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_engines.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_engines_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_engines_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_monitors.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_monitors.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_monitors_destruct.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_body_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_engines_co.paa"
		};
		LODTurnedIn = "VIEW_CARGO";
		LODTurnedOut = "VIEW_CARGO";
		class AnimationSources : AnimationSources
		{
			class maingun_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_Vacannon_M197_veh";
			};
			class 20mmBarrels
			{
				source = "revolving";
				weapon = "CUP_Vacannon_M197_veh";
			};
			class MainTurret
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class MainGun
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class SensorTurret : MainTurret
			{
			};
			class Sensors : MainGun
			{
			};
			class mainRotor_folded
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
			class mainRotor_unfolded : mainRotor_folded
			{
				source = "user";
				initPhase = 0;
			};
			class rotorShaft_unfolded : mainRotor_unfolded
			{
			};
			class rocket_out_revolving
			{
				source = "revolving";
				weapon = "CUP_Vmlauncher_FFAR_veh_19Out";
			};
			class rocket_in_revolving
			{
				source = "revolving";
				weapon = "CUP_Vmlauncher_FFAR_veh_19In";
			};
			class rocket2_out_revolving
			{
				source = "revolving";
				weapon = "CUP_FFARLauncher7_Out_W";
			};
			class rocket2_in_revolving
			{
				source = "revolving";
				weapon = "CUP_FFARLauncher7_In_W";
			};
			class Addhydra19_in
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Addhydra19_out
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Addhydra7_in
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Addhydra7_out
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Pack
			{
				displayName = "Pack";
				displayNameDefault = "Pack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement = "[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AH1Z\scripts\AH1Z_fold.sqf""";
			};
			class unPack
			{
				displayName = "UnPack";
				displayNameDefault = "Unpack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement = "[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AH1Z\scripts\AH1Z_fold.sqf""";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerAction = "CUP_AH1Z_Gunner";
				gunnerInAction = "CUP_AH1Z_Gunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				weapons[] =
				{
					"CUP_Vacannon_M197_veh"
				};
				magazines[] =
				{
					"CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M"
				};
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				LODTurnedIn = "VIEW_CARGO";
				LODTurnedOut = "VIEW_CARGO";
				showHDM = 1;
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -100;
				maxTurn = 100;
				initTurn = 0;
				discreteDistance[] = { 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
				discreteDistanceInitIndex = 2;
				isCopilot = 1;
				showHMD = 1;
				CanEject = 0;
				startEngine = 0;
				outGunnerMayFire = 1;
				commanding = -1;
				primaryGunner = 1;
				turretInfoType = "RscOptics_AH1Z_FLIR";
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] =
				{
					"TankCommanderOptics1"
				};
				gunnerForceOptics = 0;
				canUseScanner = 1;
				showAllTargets = "2+4";
				copilotHasFlares = 1;
				LockDetectionSystem = "1 + 2 + 4 + 8";
				incomingMissileDetectionSystem = 16;
				TurretCanSee = "1+2+4+8+16";
				pilotOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				turretOpticsShowCursor = 1;
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
							"Ti"
						};
						thermalMode[] = { 0, 1 };
						gunnerOpticsColor[] = { 0.15000001, 1, 0.15000001, 1 };
						gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
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
							"Ti"
						};
						thermalMode[] = { 0, 1 };
						gunnerOpticsColor[] = { 0.15000001, 1, 0.15000001, 1 };
						gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
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
						gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
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
						gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
					};
					class Narrow : Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = { 0, 0, 0, 1 };
						gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower : Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = { 0, 0, 0, 1 };
						gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
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
							"NVG",
							"Ti"
						};
						thermalMode[] = { 2, 3 };
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
						hideUnitInfo = 1;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						material = 51;
						name = "vez";
						visual = "vez";
						passThrough = 0.30000001;
					};
					class HitGun
					{
						armor = 0.2;
						material = 51;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
					};
				};
			};
		};
		class RenderTargets
		{
			class TadsView
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "pip0_pos";
					pointDirection = "pip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.69999999;
				};
			};
		};
		// JETS
		class Components: Components
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
		};
	};
	class JAS_CUP_B_AH1Z_USMC : JAS_CUP_B_AH1Z_BASE
	{
		author = "CUP/-{GOL}-Jason";
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\CUP_AH1Z.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\UI\ah1z_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\UI\icomap_ah1z_CA.paa";
		fir_ah1zUS_custom_skin=1;
		fir_ah1zUS_custom_name="AH1Z USMC";
		fir_ah1zUS_custom_code="JAS_CUP_B_AH1Z_USMC";
		fir_ah1zUS_custom_preview_pic="\ARMA3_CUP_Enhancement_AH1Z\UI\preview\AH1ZUSMC.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AH1Z\UI\editorpreview\AH1ZUSMC.jpg";
		mapSize = 15.5;
		displayName = "AH1Z/J";
		expansion = 3;
		dlc = "CUP_Vehicles";
		faction = "CUP_B_USMC";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		crew = "CUP_B_USMC_Pilot";
		typicalCargo[] =
		{
			"CUP_B_USMC_Pilot"
		};
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources : AnimationSources
		{
			class Addhydra19_in
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					"FIR_MasterArm",
					"Laserdesignator_mounted",
					"CUP_Vacannon_M197_veh"
				};
				magazines[] =
				{
					"CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M",
					"Laserbatteries"
				};
			};
		};
		class UserActions
		{
			class AH1_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "gunner this == player and ((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\Fire.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_B_AH1Z_AAC : JAS_CUP_B_AH1Z_BASE
	{
		author = "CUP/-{GOL}-Jason";
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\CUP_AH1Z.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\UI\ah1z_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\UI\icomap_ah1z_CA.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AH1Z\UI\editorpreview\AH1ZUSMC.jpg";
		fir_ah1zUS_custom_skin=2;
		fir_ah1zUS_custom_name="AH1Z AAC";
		fir_ah1zUS_custom_code="JAS_CUP_B_AH1Z_AAC";
		fir_ah1zUS_custom_preview_pic="\ARMA3_CUP_Enhancement_AH1Z\UI\preview\AH1ZAAF.paa";
		mapSize = 15.5;
		displayName = "AH1Z/J";
		expansion = 3;
		dlc = "CUP_Vehicles";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		crew = "CUP_B_USMC_Pilot";
		typicalCargo[] =
		{
			"CUP_B_USMC_Pilot"
		};
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources : AnimationSources
		{
			class Addhydra19_in
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					"FIR_MasterArm",
					"Laserdesignator_mounted",
					"CUP_Vacannon_M197_veh"
				};
				magazines[] =
				{
					"CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M",
					"Laserbatteries"
				};
			};
		};
		class UserActions
		{
			class AH1_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "gunner this == player and ((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\Fire.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_I_AH1Z_AAF : JAS_CUP_B_AH1Z_BASE
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "IND_F";
		displayName = "AH1Z/J";
		crew = "I_helipilot_F";
		fir_ah1zUS_custom_skin=1;
		fir_ah1zUS_custom_name="AH1Z AAF";
		fir_ah1zUS_custom_code="JAS_CUP_I_AH1Z_AAF";
		fir_ah1zUS_custom_preview_pic="\ARMA3_CUP_Enhancement_AH1Z\UI\preview\AH1ZAAF.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AH1Z\UI\editorpreview\AH1ZAAF.jpg";
		typicalCargo[] =
		{
			"I_helipilot_F"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\aaf_ah1z_body_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\aaf_ah1z_engines_co.paa"
		};
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources : AnimationSources
		{
			class Addhydra19_in
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					"FIR_MasterArm",
					"Laserdesignator_mounted",
					"CUP_Vacannon_M197_veh"
				};
				magazines[] =
				{
					"CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M",
					"Laserbatteries"
				};
			};
		};
		class UserActions
		{
			class AH1_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "gunner this == player and ((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\Fire.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_I_AH1Z_AAC : JAS_CUP_B_AH1Z_BASE
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_ZEUS";
		displayName = "AH1Z/J";
		crew = "I_helipilot_F";
		fir_ah1zUS_custom_skin=1;
		fir_ah1zUS_custom_name="AH1Z AAF";
		fir_ah1zUS_custom_code="JAS_CUP_I_AH1Z_AAF";
		fir_ah1zUS_custom_preview_pic="\ARMA3_CUP_Enhancement_AH1Z\UI\preview\AH1ZAAF.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AH1Z\UI\editorpreview\AH1ZAAF.jpg";
		typicalCargo[] =
		{
			"I_helipilot_F"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\aaf_ah1z_body_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\aaf_ah1z_engines_co.paa"
		};
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources : AnimationSources
		{
			class Addhydra19_in
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					"FIR_MasterArm",
					"Laserdesignator_mounted",
					"CUP_Vacannon_M197_veh"
				};
				magazines[] =
				{
					"CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M",
					"Laserbatteries"
				};
			};
		};
		class UserActions
		{
			class AH1_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "gunner this == player and ((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AH1Z\sqs\loadout\AH1_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\Fire.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_AH1Z_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="AH-1Z Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_AH1Z_Loadout";
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=1;
		isDisposable=1;
		is3DEN=0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
			class HP1
			{
				displayName="Hardpoint 1";
				description="Select Weapon for HP1";
				typeName="NUMBER";
				class values
				{
					class hp1_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp1_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp1_122
					{
						name="AGM-122";
						value=2;
					};
				};
			};
			class HP2
			{
				displayName="Hardpoint 2";
				description="Select Weapon for HP2";
				typeName="NUMBER";
				class values
				{
					class hp2_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp2_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp2_122
					{
						name="AGM-122";
						value=2;
					};
				};
			};
			class HP3
			{
				displayName="Hardpoint 3";
				description="Select Weapon for HP3";
				typeName="NUMBER";
				class values
				{
					class hp3_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp3_hydra7
					{
						name="HYDRA x7";
						value=1;
					};
					class hp3_hydra19
					{
						name="HYDRA x19";
						value=2;
					};
					class hp3_APKWS
					{
						name="APKWS x7";
						value=3;
					};
					class hp3_114K
					{
						name="AGM-114K";
						value=4;
					};
					class hp3_114N
					{
						name="AGM-114N";
						value=5;
					};
					class hp3_114C
					{
						name="AGM-114 Mixed";
						value=6;
					};
				};
			};
			class HP4
			{
				displayName="Hardpoint 4";
				description="Select Weapon for HP4";
				typeName="NUMBER";
				class values
				{
					class hp4_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp4_hydra7
					{
						name="HYDRA x7";
						value=1;
					};
					class hp4_hydra19
					{
						name="HYDRA x19";
						value=2;
					};
					class hp4_APKWS
					{
						name="APKWS x7";
						value=3;
					};
					class hp4_114k
					{
						name="AGM-114K";
						value=4;
					};
					class hp4_114N
					{
						name="AGM-114N";
						value=5;
					};
					class hp4_114C
					{
						name="AGM-114 Mixed";
						value=6;
					};
				};
			};
			class HP5
			{
				displayName="Hardpoint 5";
				description="Select Weapon for HP5";
				typeName="NUMBER";
				class values
				{
					class hp5_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp5_hydra7
					{
						name="HYDRA x7";
						value=1;
					};
					class hp5_hydra19
					{
						name="HYDRA x19";
						value=2;
					};
					class hp5_APKWS
					{
						name="APKWS x7";
						value=3;
					};
					class hp5_114k
					{
						name="AGM-114K";
						value=4;
					};
					class hp5_114N
					{
						name="AGM-114N";
						value=5;
					};
					class hp5_114C
					{
						name="AGM-114 Mixed";
						value=6;
					};
				};
			};
			class HP6
			{
				displayName="Hardpoint 6";
				description="Select Weapon for HP6";
				typeName="NUMBER";
				class values
				{
					class hp6_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp6_hydra7
					{
						name="HYDRA x7";
						value=1;
					};
					class hp6_hydra19
					{
						name="HYDRA x19";
						value=2;
					};
					class hp6_APKWS
					{
						name="APKWS x7";
						value=3;
					};
					class hp6_114k
					{
						name="AGM-114K";
						value=4;
					};
					class hp6_114N
					{
						name="AGM-114N";
						value=5;
					};
					class hp6_114C
					{
						name="AGM-114 Mixed";
						value=6;
					};
				};
			};
			class skin
			{
				displayName="Paint Job";
				description="Select Paint Job";
				typeName="NUMBER";
				class values
				{
					class USMC
					{
						name="USMC";
						value=0;
						default=1;
					};
					class AAF
					{
						name="AAF";
						value=1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="AH1Z Loadout Module";
			sync[]=
			{
				"LocationArea_F"
			};
			class LocationArea_F
			{
				description[]=
				{
					"First line",
					"Second line"
				};
				position=1;
				direction=1;
				optional=1;
				duplicate=1;
				synced[]=
				{
					"AnyVehicle"
				};
			};
		};
	};
};
