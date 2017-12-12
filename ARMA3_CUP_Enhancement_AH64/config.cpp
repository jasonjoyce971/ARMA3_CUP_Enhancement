class CfgPatches
{
	class ARMA3_CUP_Enhancement_AH64
	{
		units[]=
		{
			"JAS_CUP_B_AH64D_USA",
			"JAS_CUP_B_AH1_BAF",
			"JAS_CUP_B_AH64D_AAC",
			"JAS_CUP_B_AH1_BAF_AAC",
			"JAS_AH64_Loadout_Module",
			"JAS_AH64UK_Loadout_Module"
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
			"ARMA3_CUP_Enhancement_Weapons",
			"FIR_AirWeaponSystem_US",
			"CUP_BaseData",
			"CUP_BaseConfigs",
			"CUP_AirVehicles_Core",
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
		class ARMA3_CUP_Enhancement_AH64
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_AH64"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_AH64_Init_Function
		{
			class AH64_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AH64\sqs\modules\ah64_loadout_module.sqf";
			};
			class AH64_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AH64\sqs\modules\ah64_loadout_module_set.sqf";
			};
		};
		class JAS_AH64UK_Init_Function
		{
			class AH64UK_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AH64\sqs\modules\ah64UK_loadout_module.sqf";
			};
			class AH64UK_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AH64\sqs\modules\ah64UK_loadout_module_set.sqf";
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
class AH64_GUI
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
			text = "ARMA3_CUP_Enhancement_AH64\ui\AH64_background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64_SaveCustom.sqf""";
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
class AH64UK_GUI
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
			text = "ARMA3_CUP_Enhancement_AH64\ui\AH64_background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64UK_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64UK_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64UK_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64UK_SaveCustom.sqf""";
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

	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class Components;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class Reflectors
		{
			class Right;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class RotorLibHelicopterProperties;
	};
	class CUP_AH64_base: Helicopter_Base_H {};
	class CUP_AH64D_Base: CUP_AH64_base {};
	class CUP_AH64_dynamic_base: CUP_AH64_base {};
	class CUP_AH64D_dynamic_base: CUP_AH64D_Base {};
	class JAS_CUP_B_AH64D_DL_USA: CUP_AH64D_dynamic_base
	{
		scope=1;
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\AirVehicles\CUP_AirVehicles_AH64\CUP_AH64D.p3d";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AH64\data\UI\Picture_ah64d_CA.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AH64\data\UI\Icon_ah64d_CA.paa";
		mapSize=15.5;
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah64d_body_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah64d_details_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah64d_alfa_ca.paa"
		};
		displayName="AH-64D";
		expansion=3;
		dlc="CUP_Vehicles";
		faction="CUP_B_US_Army";
		side=1;
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"CUP_weapon_mastersafe",
					"CUP_Laserdesignator_mounted",
					"CUP_Vacannon_M230_veh"
				};
				magazines[]=
				{
					"CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M",
					"Laserbatteries",
					"CUP_2Rnd_pylonblank_M",
					"CUP_2Rnd_pylonblank_M",
					"CUP_2Rnd_pylonblank_M",
					"CUP_4Rnd_pylonblank_M",
					"CUP_4Rnd_pylonblank_M"
				};
			};
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_AH64\Data\preview\CUP_B_AH64D_NO_USA.jpg";
	};
	class JAS_CUP_B_AH64D_USA: JAS_CUP_B_AH64D_DL_USA
	{
		author="CUP/-{GOL}-Jason";
		displayName="AH-64J";
		allowTabLock = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"FIR_MasterArm",
					"Laserdesignator_mounted",
					"CUP_Vacannon_M230_veh"
				};
				magazines[]=
				{
					"CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M",
					"Laserbatteries"
				};
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=10000;
							maxRange=10000;
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
						range[]={16000,8000,4000,2000};
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
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_AH64\Data\UI\CUP_AH64_3DEN_CA.paa";
				class presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class AntiTank
					{
						displayName="Anti-Tank";
						attachment[]=
						{
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M"
						};
					};
					class KS
					{
						displayName="Killer-Scout";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class KSEAD
					{
						displayName="Killer-Scout (SEAD)";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_AGM122_1rnd_PYLON_M",
							"JAS_AGM122_1rnd_PYLON_M"
						};
					};
					class PCAS
					{
						displayName="Precision Close Air Support";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class ASCAS
					{
						displayName="Anti-Structure Close Air Support";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class RCAS
					{
						displayName="Rocket Close Air Support";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
				};
				class pylons
				{
					class pylonLeft1
					{
						hardpoints[]=
						{
							"JAS_AH64_PYLON"
						};
						attachment="JAS_FIR_Hydra_P_7rnd_M";
						priority=5;
						UIposition[]={0.58999997,0.34999999};
						turret[]={0};
						bay=1;
					};
					class pylonLeft2: pylonLeft1
					{
						UIposition[]={0.56999999,0.40000001};
						priority=4;
						attachment="JAS_FIR_Hellfire_L_1rnd_PYLON_M";
					};
					class pylonRight1: pylonLeft1
					{
						UIposition[]={0.079999998,0.40000001};
						mirroredMissilePos=2;
					};
					class pylonRight2: pylonRight1
					{
						UIposition[]={0.059999999,0.34999999};
						mirroredMissilePos=1;
						priority=4;
					};
					class pylonWingL: pylonLeft1
					{
						hardpoints[]=
						{
							"JAS_AH64_WINGTIP","JAS_SIDEARM_PYLON"
						};
						UIposition[]={0.58999997,0.30000001};
						attachment="";
					};
					class pylonWingR: pylonWingL
					{
						mirroredMissilePos=5;
						UIposition[]=
						{0.059999999,0.30000001};
						attachment="";
					};
				};
			};
		};
		memoryPointDriverOptics="gunnerview";
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
					gunnerOpticsModel="CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
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
					gunnerOpticsModel="CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			//minTurn=-160;
			//maxTurn=160;
			minTurn=-70;
			maxTurn=70;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		editorPreview = "\ARMA3_CUP_Enhancement_AH64\UI\editorpreview\AH64D.jpg";
		class UserActions
		{
			class AH64_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class EventHandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_B_AH1_BAF: JAS_CUP_B_AH64D_DL_USA
	{
		author="CUP/-{GOL}-Jason";
		displayName="AH-1J";
		faction="CUP_B_GB";
		side=1;
		scope=2;
		crew="CUP_B_BAF_Pilot_DDPM";
		typicalCargo[]=
		{
			"CUP_B_BAF_Pilot_DDPM"
		};
		allowTabLock = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"FIR_MasterArm",
					"Laserdesignator_mounted",
					"CUP_Vacannon_M230_veh"
				};
				magazines[]=
				{
					"CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M",
					"Laserbatteries"
				};
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=10000;
							maxRange=10000;
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
						range[]={16000,8000,4000,2000};
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
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_AH64\Data\UI\CUP_AH64_3DEN_CA.paa";
				class presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class AntiTank
					{
						displayName="Anti-Tank";
						attachment[]=
						{
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M",
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M",
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M",
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M"
						};
					};
					class KS
					{
						displayName="Killer-Scout";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M",
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class PCAS
					{
						displayName="Precision Close Air Support";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M",
							"JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class ASCAS
					{
						displayName="Anti-Structure Close Air Support";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class RCAS
					{
						displayName="Rocket Close Air Support";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
				};
				class pylons
				{
					class pylonLeft1
					{
						hardpoints[]=
						{
							"JAS_AH64_PYLON","JAS_WAH64_PYLON"
						};
						attachment="JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M";
						priority=5;
						UIposition[]={0.58999997,0.34999999};
						turret[]={0};
						bay=1;
					};
					class pylonLeft2: pylonLeft1
					{
						UIposition[]={0.56999999,0.40000001};
						priority=4;
						attachment="JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M";
					};
					class pylonRight1: pylonLeft1
					{
						UIposition[]={0.079999998,0.40000001};
						mirroredMissilePos=2;
					};
					class pylonRight2: pylonRight1
					{
						UIposition[]={0.059999999,0.34999999};
						mirroredMissilePos=1;
						priority=4;
					};
					class pylonWingL: pylonLeft1
					{
						hardpoints[]=
						{
							"JAS_WAH64_WINGTIP"
						};
						UIposition[]={0.58999997,0.30000001};
						attachment="";
					};
					class pylonWingR: pylonWingL
					{
						mirroredMissilePos=5;
						UIposition[]=
						{0.059999999,0.30000001};
						attachment="";
					};
				};
			};
		};
		memoryPointDriverOptics="gunnerview";
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
					gunnerOpticsModel="CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
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
					gunnerOpticsModel="CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="CUP\AirVehicles\CUP_AirVehicles_AH1Z\optika_AH1Z.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			//minTurn=-160;
			//maxTurn=160;
			minTurn=-70;
			maxTurn=70;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_body_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_details_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\clear_empty.paa"
		};
		editorPreview = "\ARMA3_CUP_Enhancement_AH64\UI\editorpreview\AH1_BAF.jpg";
		class UserActions
		{
			class AH64UK_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AH64\sqs\loadout\AH64UK_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class EventHandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_B_AH64D_AAC: JAS_CUP_B_AH64D_USA
	{
		author="CUP/-{GOL}-Jason";
		displayName="AH-64J";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		side=1;
		scope=2;
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		editorPreview = "\ARMA3_CUP_Enhancement_AH64\UI\editorpreview\AH64D.jpg";
	};
	class JAS_CUP_B_AH1_BAF_AAC: JAS_CUP_B_AH1_BAF
	{
		author="CUP/-{GOL}-Jason";
		displayName="AH-1J";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		side=1;
		scope=2;
		crew="CUP_B_BAF_Pilot_DDPM";
		typicalCargo[]=
		{
			"CUP_B_BAF_Pilot_DDPM"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_body_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_details_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AH64\data\clear_empty.paa"
		};
		editorPreview = "\ARMA3_CUP_Enhancement_AH64\UI\editorpreview\AH1_BAF.jpg";
	};
	class JAS_CUP_AH64DWreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AH64\CUP_AH64DWreck.p3d";
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
	class JAS_AH64_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="AH-64 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_AH64_Loadout";
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
					class hp3_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp3_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp3_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp3_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp3_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp3_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp3_114C
					{
						name="AGM-114 Mixed";
						value=9;
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
					class hp4_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp4_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp4_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp4_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp4_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp4_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp4_114C
					{
						name="AGM-114 Mixed";
						value=9;
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
					class hp5_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp5_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp5_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp5_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp5_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp5_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp5_114C
					{
						name="AGM-114 Mixed";
						value=9;
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
					class hp6_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp6_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp6_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp6_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp6_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp6_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp6_114C
					{
						name="AGM-114 Mixed";
						value=9;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="AH64 Loadout Module";
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
	class JAS_AH64UK_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="AH-1 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_AH64UK_Loadout";
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
					class hp3_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp3_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp3_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp3_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp3_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp3_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp3_114C
					{
						name="AGM-114 Mixed";
						value=9;
					};
					class hp3_brim
					{
						name="Brimstone";
						value=10;
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
					class hp4_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp4_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp4_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp4_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp4_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp4_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp4_114C
					{
						name="AGM-114 Mixed";
						value=9;
					};
					class hp4_brim
					{
						name="Brimstone";
						value=10;
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
					class hp5_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp5_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp5_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp5_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp5_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp5_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp5_114C
					{
						name="AGM-114 Mixed";
						value=9;
					};
					class hp5_brim
					{
						name="Brimstone";
						value=10;
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
					class hp6_crv7FAT
					{
						name="CRV-7 FAT x19";
						value=3;
					};
					class hp6_crv7HE
					{
						name="CRV-7 HE x19";
						value=4;
					};
					class hp6_crv7KEP
					{
						name="CRV-7 KEP x19";
						value=5;
					};
					class hp6_APKWS
					{
						name="APKWS x7";
						value=6;
					};
					class hp6_114L
					{
						name="AGM-114L";
						value=7;
					};
					class hp6_114N
					{
						name="AGM-114N";
						value=8;
					};
					class hp6_114C
					{
						name="AGM-114 Mixed";
						value=9;
					};
					class hp6_brim
					{
						name="Brimstone";
						value=10;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="AH1 Loadout Module";
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