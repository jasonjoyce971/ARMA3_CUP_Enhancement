class CfgPatches
{
	class ARMA3_CUP_Enhancement_AV8
	{
		units[]=
		{
			"JAS_CUP_AV8B_Base",
			"JAS_CUP_B_AV8B_USMC",
			"JAS_CUP_B_AV8B_USMC2",
			"JAS_CUP_B_AV8B_USMC3",
			"JAS_CUP_B_AV8B_USMC4",
			"JAS_CUP_I_AV8B_AAF",
			"JAS_CUP_AV8B_AAC",
			"JAS_CUP_I_AV8B_AAC",
			"JAS_CUP_B_GR9_GB",
			"JAS_CUP_GR9_AAC",
			"JAS_CUP_AV8B_Canopy",
			"JAS_CUP_AV8B_EjectionSeat",
			"JAS_CUP_AV8BWreck",
			"JAS_AV8_Loadout_Module",
			"JAS_GR9_Loadout_Module"
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
		class ARMA3_CUP_Enhancement_AV8
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_AV8"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_GR9_Init_Function
		{
			class GR9_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\gr9_loadout_module.sqf";
			};
			class GR9_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\gr9_loadout_module_set.sqf";
			};
		};
		class JAS_AV8_Init_Function
		{
			class AV8_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\av8_loadout_module.sqf";
			};
			class AV8_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\av8_loadout_module_set.sqf";
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class Components;
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class Eventhandlers;
class CBA_Extended_EventHandlers;
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
class AV8_GUI
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
		class f35_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_AV8\ui\AV8B_background.paa";
		};
		class A10_Skin_Button: RscPicture
		{
			idc=1610;
			text="FIR_AirWeaponSystem_US\ui\button_skin.paa";
			x="0.75 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.0875109 * safezoneW";
			h="0.0699973 * safezoneH";
		};
		class A10_Skin_Button2: RscButton
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
			text = "Right Outboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1101 : RscText
		{
			idc = 1101;
			text = "Left Outboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1001 : RscText
		{
			idc = 1001;
			text = "Right Midline";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Left Midline";
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
		class AV8_refuel_Button : RscPicture
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
		class AV8_repair_Button : RscPicture
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
		class AV8_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_Loadout.sqf""";
		};
		class AV8_Cancel_Button : RscPicture
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
		class AV8_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_SaveCustom.sqf""";
		};
		class AV8_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_SaveCustom.sqf""";
		};
		class AV8_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_SaveCustom.sqf""";
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
class GR9_GUI
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
		class f35_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_AV8\ui\AV8B_background.paa";
		};
		class A10_Skin_Button: RscPicture
		{
			idc=1610;
			text="FIR_AirWeaponSystem_US\ui\button_skin.paa";
			x="0.75 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.0875109 * safezoneW";
			h="0.0699973 * safezoneH";
		};
		class A10_Skin_Button2: RscButton
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
			text = "Right Outboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1101 : RscText
		{
			idc = 1101;
			text = "Left Outboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1001 : RscText
		{
			idc = 1001;
			text = "Right Midline";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Left Midline";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1003 : RscText
		{
			idc = 1003;
			text = "Right Wheel Strut";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "Left Wheel Strut";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Right Inboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Inboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Belly Station";
			x = "0.43 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
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
		class hp7 : RscCombo
		{
			idc = 2105;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.438 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp8 : RscCombo
		{
			idc = 2106;
			x = "0.22 * safezoneW + safezoneX";
			y = "0.438 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp9 : RscCombo
		{
			idc = 2202;
			x = "0.43 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
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
		class GR9_refuel_Button : RscPicture
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
		class GR9_repair_Button : RscPicture
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
		class GR9_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_Loadout.sqf""";
		};
		class GR9_Cancel_Button : RscPicture
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
		class GR9_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_SaveCustom.sqf""";
		};
		class GR9_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_SaveCustom.sqf""";
		};
		class GR9_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_SaveCustom.sqf""";
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
	class thingX;
	class Motorcycle;
	class AllVehicles;
	class PlaneWreck;
	class CUP_AV8B_Base;
	class JAS_CUP_AV8B_Canopy : thingX
	{
		mapSize = 0.77999997;
		author = "John_Spartan & Saul";
		displayName = "AV8B Canopy";
		model = "\cup\airvehicles\cup_airvehicles_av8b\models\cup_av8b_canopy.p3d";
		_generalMacro = "thingX";
		scope = 1;
		simulation = "thing";
		animated = 0;
		reversed = 1;
		nameSound = "";
		vehicleClass = "Objects";
		accuracy = 0.2;
		class DestructionEffects
		{
		};
	};
	class JAS_CUP_AV8B_EjectionSeat : Motorcycle
	{
		destrType = "DestructNo";
		reversed = 1;
		startEngine = 0;
		hasdriver = 0;
		crew = "CUP_AV8B_Pilot";
		castCargoShadow = 1;
		transportSoldier = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		cargoCanEject = 1;
		driverCanEject = 0;
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] =
		{
			"CUP_AV8B_Pilot"
		};
		driverAction = "CUP_AV8B_Pilot";
		getInAction = "";
		getOutAction = "";
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos driver";
		memoryPointsGetInCargoDir = "pos driver dir";
		usePreciseGetInAction = 0;
		scope = 1;
		vehicleClass = "Objects";
		side = 1;
		faction = "BLU_F";
		author = "John_Spartan & Saul";
		displayName = "Ejection Seat";
		canFloat = 0;
		driveOnComponent[] =
		{
			"landcontact_1",
			"landcontact_2",
			"landcontact_3",
			"landcontact_4"
		};
		Icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\models\cup_av8b_ejection_seat.p3d";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGetIn[] =
		{
			"",
			0.00031622776,
			1
		};
		soundGetOut[] =
		{
			"",
			0.00031622776,
			1
		};
		soundEngine[] =
		{
			"",
			1.7782794,
			0.89999998
		};
		soundEnviron[] =
		{
			"",
			0.56234097,
			1
		};
		unitInfoType = "RscUnitInfoSoldier";
		hideUnitInfo = 1;
		weapons[] = {};
		magazines[] = {};
		dammageHalf[] = {};
		dammageFull[] = {};
		extCameraPosition[] = { 0, 3, -10 };
		threat[] = { 0, 0, 0 };
		class ViewPilot
		{
			initFov = 1;
			minFov = 0.60000002;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = -35;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -130;
			maxAngleY = 130;
			minMoveX = -0.2;
			maxMoveX = 0.2;
			minMoveY = -0.025;
			maxMoveY = 0.1;
			minMoveZ = -0.2;
			maxMoveZ = 0.2;
		};
		fuelCapacity = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class Turrets
		{
		};
		class Exhausts
		{
		};
		class Reflectors
		{
		};
		class Sounds
		{
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int_destruct.rvmat"
			};
		};
		class Eventhandlers : Eventhandlers
		{
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers
			{
			};
		};
	};
	class JAS_CUP_AV8B_Base : CUP_AV8B_Base
	{
		scope = 1;
		author = "-{GOL}-Jason";
		memoryPointDriverOptics = "pip0_pos";
		unitInfoType = "RscOptics_AV_pilot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(15 / 120)";
					minFov="(15 / 120)";
					maxFov="(15 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-179;
			maxTurn=179;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=true;
		};
		// VTOL TWEAKS
		waterEffect = "VTOLWater";
	};
	class JAS_CUP_B_AV8B_USMC : JAS_CUP_AV8B_Base
	{
		scope = 2;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Grey";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCLIGHT.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\AV8B.jpg";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_CMLauncher",
			"JAS_FIR_GAU12"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"JAS_FIR_GAU12_300rnd_M"
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class ECM_ON
			{
				displayName = "ECM JAMMER ON";
				position = "pos cano";
				radius = 15;
				shortcut = "User4";
				condition = "this getvariable ""ECMJAMMER"" == ""yes"";";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer = "False";
			};
			class AV8B_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 25) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Fueltank_Jettison
			{
				displayName = "Jettison Fueltanks";
				position = "pos cano";
				radius = 15;
				shortcut = "User8";
				condition = "player in this and isengineon this";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\Jettison\droptanks.sqf"";";
				onlyforplayer = "False";
			};
			class FindRadarTGT
			{
				displayName = "Find Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""FIR_AGM88"" and this getvariable ""SEAD_SET"" == ""no""; ";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\harm.sqf""; ";
				onlyforplayer = "False";
			};
			class ClearRadarTGT
			{
				displayName = "Clear Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""FIR_AGM88"" and this getvariable ""SEAD_SET"" == ""yes""; ";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\SEAD\harmoff.sqf""; ";
				onlyforplayer = "False";
			};
			class SearchRDRTGT
			{
				displayName = "QIT ON";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "currentweapon this == ""FIR_AGM88"";";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\Search_RDRTGT.sqf""; ";
				onlyforplayer = "False";
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targeting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";_this execVM ""\cup\airvehicles\cup_airvehicles_av8b\scripts\init_av8b.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		airBrake = 1;
		armor = 80;
		armorLights = 1;
		armorStructural = 2;
		camouflage = 100;
		crewCrashProtection = 0.15;
		ejectDamageLimit = 0.45;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		ejectSpeed[] = {0,60,0};
		headGforceLeaningFactor[] = {0.01,0.002,0.01};
		irScanGround = 1;
		irScanRangeMax = 5000;
		irScanRangeMin = 500;
		irScanToEyeFactor = 2;
		irTarget = 1;
		irTargetSize = 1;
		laserScanner = 1;
		laserTarget = 0;
		nvScanner = 0;
		nvTarget = 0;
		radarTarget = 1;
		radarTargetSize = 1;
		radarType = 4;
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
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=8000;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=100000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=10000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=125;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
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
		unitInfoType = "RscOptics_CAS_Pilot";
	};
	class JAS_CUP_B_AV8B_USMC2 : JAS_CUP_B_AV8B_USMC
	{
		scope = 0;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Dark";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC2";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCDARK.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II Dark";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_dark_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_dark_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
	};
	class JAS_CUP_B_AV8B_USMC3 : JAS_CUP_B_AV8B_USMC
	{
		scope = 0;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Aces";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC3";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCACES.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II Aces";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
	};
	class JAS_CUP_B_AV8B_USMC4 : JAS_CUP_B_AV8B_USMC
	{
		scope = 0;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Black Sheep";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC4";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCSHEEP.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_2_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_2_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
	};
	class JAS_CUP_I_AV8B_AAF : JAS_CUP_B_AV8B_USMC
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 AAF";
		fir_av8_custom_code="JAS_CUP_I_AV8B_AAF";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8AAF.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\AV8BAAF.jpg";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		faction = "IND_F";
		crew = "I_pilot_F";
		side = 2;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
	};
	class JAS_CUP_AV8B_AAC : JAS_CUP_B_AV8B_USMC
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		fir_av8_custom_skin=2;
		fir_av8_custom_name="AV-8 AAF";
		fir_av8_custom_code="JAS_CUP_I_AV8B_AAF";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8AAF.paa";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		crew = "B_pilot_F";
		side = 1;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
	};
	class JAS_CUP_I_AV8B_AAC : JAS_CUP_B_AV8B_USMC
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		fir_av8_custom_skin=2;
		fir_av8_custom_name="AV-8 AAF";
		fir_av8_custom_code="JAS_CUP_I_AV8B_AAF";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8AAF.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\AV8BAAF.jpg";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_PHANTOM";
		crew = "I_pilot_F";
		side = 2;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
	};
	class JAS_CUP_B_GR9_GB : JAS_CUP_AV8B_Base
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_gr9";
		fir_gr9_custom_skin=1;
		fir_gr9_custom_name="GR9 RAF Grey";
		fir_gr9_custom_code="JAS_CUP_B_GR9_GB";
		fir_gr9_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\GR9GREY.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\GR9.jpg";
		displayName = "Harrier GR.9J";
		dlc = "CUP_Vehicles";
		faction = "CUP_B_GB";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_CMLauncher",
			"FIR_GAU12"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"FIR_GAU12_300rnd_M"
		};
		class Library
		{
			libTextDesc = "The British Aerospace Harrier II is a second-generation vertical/short takeoff and landing (V/STOL) jet aircraft used previously by the Royal Air Force (RAF) and, between 2006 and 2010, the Royal Navy (RN). The aircraft was derived from the McDonnell Douglas AV-8B Harrier II, which itself was a development of the Hawker Siddeley Harrier. Initial deliveries of the Harrier II were designated in service as Harrier GR5; subsequently upgraded airframes were redesignated accordingly as GR7 and GR9.";
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class ECM_ON
			{
				displayName = "ECM JAMMER ON";
				position = "pos cano";
				radius = 15;
				shortcut = "User4";
				condition = "this getvariable ""ECMJAMMER"" == ""yes"";";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer = "False";
			};
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";_this execVM ""\cup\airvehicles\cup_airvehicles_av8b\scripts\init_av8b.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		airBrake = 1;
		armor = 80;
		armorLights = 1;
		armorStructural = 2;
		camouflage = 100;
		crewCrashProtection = 0.15;
		ejectDamageLimit = 0.45;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		ejectSpeed[] = {0,60,0};
		headGforceLeaningFactor[] = {0.01,0.002,0.01};
		irScanGround = 1;
		irScanRangeMax = 5000;
		irScanRangeMin = 500;
		irScanToEyeFactor = 2;
		irTarget = 1;
		irTargetSize = 1;
		laserScanner = 1;
		laserTarget = 0;
		nvScanner = 0;
		nvTarget = 0;
		radarTarget = 1;
		radarTargetSize = 1;
		radarType = 4;
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
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=8000;
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
		unitInfoType = "RscOptics_CAS_Pilot";
	};
	class JAS_CUP_GR9_AAC : JAS_CUP_B_GR9_GB
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_gr9";
		fir_gr9_custom_skin=1;
		fir_gr9_custom_name="GR9 RAF Green";
		fir_gr9_custom_code="JAS_CUP_GR9_AAC";
		fir_gr9_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\GR9GREEN.paa";
		displayName = "Harrier GR.9J";
		dlc = "CUP_Vehicles";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_GAU12",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_GAU12_300rnd_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Library
		{
			libTextDesc = "The British Aerospace Harrier II is a second-generation vertical/short takeoff and landing (V/STOL) jet aircraft used previously by the Royal Air Force (RAF) and, between 2006 and 2010, the Royal Navy (RN). The aircraft was derived from the McDonnell Douglas AV-8B Harrier II, which itself was a development of the Hawker Siddeley Harrier. Initial deliveries of the Harrier II were designated in service as Harrier GR5; subsequently upgraded airframes were redesignated accordingly as GR7 and GR9.";
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
	};
	class JAS_AV8_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="AV-8b Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_AV8_Loadout";
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
					class hp1_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp1_ecm
					{
						name="ECM Pod";
						value=3;
					};
					class hp1_tgp
					{
						name="Sniper XR TGP";
						value=4;
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
					class hp2_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp2_ecm
					{
						name="ECM Pod";
						value=3;
					};
					class hp2_tgp
					{
						name="Sniper XR TGP";
						value=4;
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
					class hp3_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp3_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp3_APKWS
					{
						name="APKWS x19";
						value=3;
					};
					class hp3_CRV7FAT
					{
						name="CRV-7 FAT x19";
						value=4;
					};
					class hp3_CRV7HE
					{
						name="CRV-7 HE x19";
						value=5;
					};
					class hp3_CRV7KEP
					{
						name="CRV-7 KEP x19";
						value=6;
					};
					class hp3_AGM65D
					{
						name="AGM-65D";
						value=7;
					};
					class hp3_AGM65G
					{
						name="AGM-65G";
						value=8;
					};
					class hp3_AGM65L
					{
						name="AGM-65L";
						value=9;
					};
					class hp3_AGM88
					{
						name="AGM-88 HARM";
						value=10;
					};
					class hp3_10
					{
						name="GBU-10";
						value=11;
					};
					class hp3_12
					{
						name="GBU-12";
						value=12;
					};
					class hp3_E12
					{
						name="EGBU-12 II";
						value=13;
					};
					class hp3_24A
					{
						name="GBU-24A";
						value=14;
					};
					class hp3_24B
					{
						name="GBU-24B";
						value=15;
					};
					class hp3_24118
					{
						name="GBU-24/118";
						value=16;
					};
					class hp3_31
					{
						name="GBU-31";
						value=17;
					};
					class hp3_32
					{
						name="GBU-32";
						value=18;
					};
					class hp3_38
					{
						name="GBU-38";
						value=19;
					};
					class hp3_54
					{
						name="GBU-54";
						value=20;
					};
					class hp3_87
					{
						name="CBU-87 CEM";
						value=21;
					};
					class hp3_89
					{
						name="CBU-89 GATOR";
						value=22;
					};
					class hp3_97
					{
						name="CBU-97 SFW";
						value=23;
					};
					class hp3_103
					{
						name="CBU-103 CEM WCMD";
						value=24;
					};
					class hp3_105
					{
						name="CBU-105 SFW WCMD";
						value=25;
					};
					class hp3_82s
					{
						name="Mk82 Snakeye";
						value=26;
					};
					class hp3_82
					{
						name="Mk82 GPB";
						value=27;
					};
					class hp3_84
					{
						name="Mk84 GPB";
						value=28;
					};
					class hp3_tank
					{
						name="Drop Tank";
						value=29;
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
					class hp4_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp4_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp4_APKWS
					{
						name="APKWS x19";
						value=3;
					};
					class hp4_CRV7FAT
					{
						name="CRV-7 FAT x19";
						value=4;
					};
					class hp4_CRV7HE
					{
						name="CRV-7 HE x19";
						value=5;
					};
					class hp4_CRV7KEP
					{
						name="CRV-7 KEP x19";
						value=6;
					};
					class hp4_AGM65D
					{
						name="AGM-65D";
						value=7;
					};
					class hp4_AGM65G
					{
						name="AGM-65G";
						value=8;
					};
					class hp4_AGM65L
					{
						name="AGM-65L";
						value=9;
					};
					class hp4_AGM88
					{
						name="AGM-88 HARM";
						value=10;
					};
					class hp4_10
					{
						name="GBU-10";
						value=11;
					};
					class hp4_12
					{
						name="GBU-12";
						value=12;
					};
					class hp4_E12
					{
						name="EGBU-12 II";
						value=13;
					};
					class hp4_24A
					{
						name="GBU-24A";
						value=14;
					};
					class hp4_24B
					{
						name="GBU-24B";
						value=15;
					};
					class hp4_24118
					{
						name="GBU-24/118";
						value=16;
					};
					class hp4_31
					{
						name="GBU-31";
						value=17;
					};
					class hp4_32
					{
						name="GBU-32";
						value=18;
					};
					class hp4_38
					{
						name="GBU-38";
						value=19;
					};
					class hp4_54
					{
						name="GBU-54";
						value=20;
					};
					class hp4_87
					{
						name="CBU-87 CEM";
						value=21;
					};
					class hp4_89
					{
						name="CBU-89 GATOR";
						value=22;
					};
					class hp4_97
					{
						name="CBU-97 SFW";
						value=23;
					};
					class hp4_103
					{
						name="CBU-103 CEM WCMD";
						value=24;
					};
					class hp4_105
					{
						name="CBU-105 SFW WCMD";
						value=25;
					};
					class hp4_82s
					{
						name="Mk82 Snakeye";
						value=26;
					};
					class hp4_82
					{
						name="Mk82 GPB";
						value=27;
					};
					class hp4_84
					{
						name="Mk84 GPB";
						value=28;
					};
					class hp4_tank
					{
						name="Drop Tank";
						value=29;
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
					class hp5_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp5_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp5_APKWS
					{
						name="APKWS x19";
						value=3;
					};
					class hp5_CRV7FAT
					{
						name="CRV-7 FAT x19";
						value=4;
					};
					class hp5_CRV7HE
					{
						name="CRV-7 HE x19";
						value=5;
					};
					class hp5_CRV7KEP
					{
						name="CRV-7 KEP x19";
						value=6;
					};
					class hp5_AGM65D
					{
						name="AGM-65D";
						value=7;
					};
					class hp5_AGM65DTER
					{
						name="AGM-65D x3";
						value=8;
					};
					class hp5_AGM65G
					{
						name="AGM-65G";
						value=9;
					};
					class hp5_AGM65GTER
					{
						name="AGM-65G x3";
						value=10;
					};
					class hp5_AGM65L
					{
						name="AGM-65L";
						value=11;
					};
					class hp5_AGM65LTER
					{
						name="AGM-65L x3";
						value=12;
					};
					class hp5_AGM88
					{
						name="AGM-88 HARM";
						value=13;
					};
					class hp5_10
					{
						name="GBU-10";
						value=14;
					};
					class hp5_12
					{
						name="GBU-12";
						value=15;
					};
					class hp5_12TER
					{
						name="GBU-12 x3";
						value=16;
					};
					class hp5_E12
					{
						name="EGBU-12 II";
						value=17;
					};
					class hp5_E12TER
					{
						name="EGBU-12 II x3";
						value=18;
					};
					class hp5_24A
					{
						name="GBU-24A";
						value=19;
					};
					class hp5_24B
					{
						name="GBU-24B";
						value=20;
					};
					class hp5_24118
					{
						name="GBU-24/118";
						value=21;
					};
					class hp5_31
					{
						name="GBU-31";
						value=22;
					};
					class hp5_32
					{
						name="GBU-32";
						value=23;
					};
					class hp5_38
					{
						name="GBU-38";
						value=24;
					};
					class hp5_54
					{
						name="GBU-54";
						value=25;
					};
					class hp5_87
					{
						name="CBU-87 CEM";
						value=26;
					};
					class hp5_89
					{
						name="CBU-89 GATOR";
						value=27;
					};
					class hp5_97
					{
						name="CBU-97 SFW";
						value=28;
					};
					class hp5_103
					{
						name="CBU-103 CEM WCMD";
						value=29;
					};
					class hp5_105
					{
						name="CBU-105 SFW WCMD";
						value=30;
					};
					class hp5_82s
					{
						name="Mk82 Snakeye";
						value=31;
					};
					class hp5_82sTER
					{
						name="Mk82 Snakeye x3";
						value=32;
					};
					class hp5_82
					{
						name="Mk82 GPB";
						value=33;
					};
					class hp5_82TER
					{
						name="Mk82 GPB x3";
						value=34;
					};
					class hp5_84
					{
						name="Mk84 GPB";
						value=35;
					};
					class hp5_tank
					{
						name="Drop Tank";
						value=36;
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
					class hp6_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp6_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp6_APKWS
					{
						name="APKWS x19";
						value=3;
					};
					class hp6_CRV7FAT
					{
						name="CRV-7 FAT x19";
						value=4;
					};
					class hp6_CRV7HE
					{
						name="CRV-7 HE x19";
						value=5;
					};
					class hp6_CRV7KEP
					{
						name="CRV-7 KEP x19";
						value=6;
					};
					class hp6_AGM65D
					{
						name="AGM-65D";
						value=7;
					};
					class hp6_AGM65DTER
					{
						name="AGM-65D x3";
						value=8;
					};
					class hp6_AGM65G
					{
						name="AGM-65G";
						value=9;
					};
					class hp6_AGM65GTER
					{
						name="AGM-65G x3";
						value=10;
					};
					class hp6_AGM65L
					{
						name="AGM-65L";
						value=11;
					};
					class hp6_AGM65LTER
					{
						name="AGM-65L x3";
						value=12;
					};
					class hp6_AGM88
					{
						name="AGM-88 HARM";
						value=13;
					};
					class hp6_10
					{
						name="GBU-10";
						value=14;
					};
					class hp6_12
					{
						name="GBU-12";
						value=15;
					};
					class hp6_12TER
					{
						name="GBU-12 x3";
						value=16;
					};
					class hp6_E12
					{
						name="EGBU-12 II";
						value=17;
					};
					class hp6_E12TER
					{
						name="EGBU-12 II x3";
						value=18;
					};
					class hp6_24A
					{
						name="GBU-24A";
						value=19;
					};
					class hp6_24B
					{
						name="GBU-24B";
						value=20;
					};
					class hp6_24118
					{
						name="GBU-24/118";
						value=21;
					};
					class hp6_31
					{
						name="GBU-31";
						value=22;
					};
					class hp6_32
					{
						name="GBU-32";
						value=23;
					};
					class hp6_38
					{
						name="GBU-38";
						value=24;
					};
					class hp6_54
					{
						name="GBU-54";
						value=25;
					};
					class hp6_87
					{
						name="CBU-87 CEM";
						value=26;
					};
					class hp6_89
					{
						name="CBU-89 GATOR";
						value=27;
					};
					class hp6_97
					{
						name="CBU-97 SFW";
						value=28;
					};
					class hp6_103
					{
						name="CBU-103 CEM WCMD";
						value=29;
					};
					class hp6_105
					{
						name="CBU-105 SFW WCMD";
						value=30;
					};
					class hp6_82s
					{
						name="Mk82 Snakeye";
						value=31;
					};
					class hp6_82sTER
					{
						name="Mk82 Snakeye x3";
						value=32;
					};
					class hp6_82
					{
						name="Mk82 GPB";
						value=33;
					};
					class hp6_82TER
					{
						name="Mk82 GPB x3";
						value=34;
					};
					class hp6_84
					{
						name="Mk84 GPB";
						value=35;
					};
					class hp6_tank
					{
						name="Drop Tank";
						value=36;
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
					class Grey
					{
						name="USMC Grey";
						value=0;
						default=1;
					};
					class Dark
					{
						name="USMC Dark";
						value=1;
					};
					class Aces
					{
						name="VMA-231 'Ace of Spades'";
						value=2;
					};
					class BlackSheep
					{
						name="VMA-214 'Black Sheep'";
						value=3;
					};
					class AAF
					{
						name="Altis Armed Forces";
						value=4;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="AV-8b Loadout Module";
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
	class JAS_GR9_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="GR9 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_GR9_Loadout";
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
					class hp1_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=2;
					};
					class hp1_crv7HE
					{
						name="CRV-7 HE x19";
						value=3;
					};
					class hp1_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=4;
					};
					class hp1_ecm
					{
						name="ECM Pod";
						value=5;
					};
					class hp1_tgp
					{
						name="Sniper XR TGP";
						value=6;
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
					class hp2_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=2;
					};
					class hp2_crv7HE
					{
						name="CRV-7 HE x19";
						value=3;
					};
					class hp2_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=4;
					};
					class hp2_ecm
					{
						name="ECM Pod";
						value=5;
					};
					class hp2_tgp
					{
						name="Sniper XR TGP";
						value=6;
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
					class hp3_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp3_AGM65D
					{
						name="AGM-65D";
						value=2;
					};
					class hp3_AGM65G
					{
						name="AGM-65G";
						value=3;
					};
					class hp3_AGM65L
					{
						name="AGM-65L";
						value=4;
					};
					class hp3_10
					{
						name="GBU-10";
						value=5;
					};
					class hp3_12
					{
						name="GBU-12";
						value=6;
					};
					class hp3_24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp3_24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp3_24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp3_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp3_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp3_84
					{
						name="Mk84 GPB";
						value=12;
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
					class hp4_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp4_AGM65D
					{
						name="AGM-65D";
						value=2;
					};
					class hp4_AGM65G
					{
						name="AGM-65G";
						value=3;
					};
					class hp4_AGM65L
					{
						name="AGM-65L";
						value=4;
					};
					class hp4_10
					{
						name="GBU-10";
						value=5;
					};
					class hp4_12
					{
						name="GBU-12";
						value=6;
					};
					class hp4_24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp4_24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp4_24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp4_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp4_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp4_84
					{
						name="Mk84 GPB";
						value=12;
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
					class hp5_aim9
					{
						name="AIM-9L";
						value=1;
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
					class hp6_aim9
					{
						name="AIM-9L";
						value=1;
					};
				};
			};
			class HP7
			{
				displayName="Hardpoint 7";
				description="Select Weapon for HP7";
				typeName="NUMBER";
				class values
				{
					class hp7_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp7_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp7_agm65d
					{
						name="AGM-65D";
						value=2;
					};
					class hp7_agm65g
					{
						name="AGM-65G";
						value=3;
					};
					class hp7_agm65l
					{
						name="AGM-65L";
						value=4;
					};
					class hp7_gbu10
					{
						name="GBU-10";
						value=5;
					};
					class hp7_gbu12
					{
						name="GBU-12";
						value=6;
					};
					class hp7_gbu24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp7_gbu24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp7_gbu24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp7_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp7_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp7_84
					{
						name="Mk84 GPB";
						value=12;
					};
				};
			};
			class HP8
			{
				displayName="Hardpoint 8";
				description="Select Weapon for HP8";
				typeName="NUMBER";
				class values
				{
					class hp8_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp8_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp8_agm65d
					{
						name="AGM-65D";
						value=2;
					};
					class hp8_agm65g
					{
						name="AGM-65G";
						value=3;
					};
					class hp8_agm65l
					{
						name="AGM-65L";
						value=4;
					};
					class hp8_gbu10
					{
						name="GBU-10";
						value=5;
					};
					class hp8_gbu12
					{
						name="GBU-12";
						value=6;
					};
					class hp8_gbu24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp8_gbu24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp8_gbu24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp8_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp8_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp8_84
					{
						name="Mk84 GPB";
						value=12;
					};
				};
			};
			class HP9
			{
				displayName="Hardpoint 9";
				description="Select Weapon for HP9";
				typeName="NUMBER";
				class values
				{
					class hp9_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp9_tgp
					{
						name="Sniper XR TGP";
						value=1;
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
					class Grey
					{
						name="RAF Grey";
						value=0;
						default=1;
					};
					class Green
					{
						name="RAF Green";
						value=1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="GR9 Loadout Module";
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
