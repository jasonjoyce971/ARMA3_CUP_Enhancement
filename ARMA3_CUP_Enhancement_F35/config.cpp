class CfgPatches
{
	class ARMA3_CUP_Enhancement_F35
	{
		units[]=
		{
			"JAS_CUP_B_F35B_USMC",
			"JAS_CUP_B_F35B_RAF",
			"JAS_CUP_B_F35B_USMC_AAC",
			"JAS_CUP_B_F35B_RAF_AAC"
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
			"CUP_AirVehicles_F35",
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
		class ARMA3_CUP_Enhancement_F35
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_F35"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_F35RAF_Init_Function
		{
			class F35RAF_Loadout
			{
				file="\ARMA3_CUP_Enhancement_F35\sqs\modules\f35RAF_loadout_module.sqf";
			};
			class F35RAF_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_F35\sqs\modules\f35RAF_loadout_module_set.sqf";
			};
		};
		class JAS_F35_Init_Function
		{
			class F35_Loadout
			{
				file="\ARMA3_CUP_Enhancement_F35\sqs\modules\f35_loadout_module.sqf";
			};
			class F35_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_F35\sqs\modules\f35_loadout_module_set.sqf";
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
class f35_GUI
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
			text = "ARMA3_CUP_Enhancement_F35\ui\f35_background.paa";
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
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Internal 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Internal 2";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Internal 3";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Internal 4";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_11001 : RscText
		{
			idc = 11001;
			text = "Belly Centreline";
			x = "0.43 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
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
			x = "0.64 * safezoneW + safezoneX";
			y = "0.492 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp10 : RscCombo
		{
			idc = 2107;
			x = "0.22 * safezoneW + safezoneX";
			y = "0.492 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp11 : RscCombo
		{
			idc = 21008;
			x = "0.43 * safezoneW + safezoneX";
			y = "0.546 * safezoneH + safezoneY";
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
		class f35_refuel_Button : RscPicture
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
		class f35_repair_Button : RscPicture
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
		class f35_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35_Loadout.sqf""";
		};
		class f35_Cancel_Button : RscPicture
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
		class f35_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35_SaveCustom.sqf""";
		};
		class f35_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35_SaveCustom.sqf""";
		};
		class f35_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35_SaveCustom.sqf""";
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
class f35RAF_GUI
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
			text = "ARMA3_CUP_Enhancement_F35\ui\f35_background.paa";
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
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Internal 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Internal 2";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Internal 3";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Internal 4";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_11001 : RscText
		{
			idc = 11001;
			text = "Belly Centreline";
			x = "0.43 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
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
			x = "0.64 * safezoneW + safezoneX";
			y = "0.492 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp10 : RscCombo
		{
			idc = 2107;
			x = "0.22 * safezoneW + safezoneX";
			y = "0.492 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp11 : RscCombo
		{
			idc = 21008;
			x = "0.43 * safezoneW + safezoneX";
			y = "0.546 * safezoneH + safezoneY";
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
		class f35_refuel_Button : RscPicture
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
		class f35_repair_Button : RscPicture
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
		class f35_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35RAF_Loadout.sqf""";
		};
		class f35_Cancel_Button : RscPicture
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
		class f35_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35RAF_SaveCustom.sqf""";
		};
		class f35_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35RAF_SaveCustom.sqf""";
		};
		class f35_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35RAF_SaveCustom.sqf""";
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
	class Strategic;
	class thingX;
	class Motorcycle;
	class EAWS_TRD_target : Strategic
	{
		scope = 1;
		vehicleClass = "misc";
		displayName = "EAWS TRD Target";
		destrType = "DestructNo";
		model = "\ARMA3_CUP_Enhancement_F35\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_F35\data\ico\ico.paa";
		mapSize = 10;
		cost = 999999999;
		armor = 50;
	};

	/*class CUP_F35B_base;
	class JAS_CUP_B_F35B_USMC : CUP_F35B_base
	{
		scope = 2;
		author = "Bohimia Interactive /CUP /-{GOL}-Jason";
		displayname = "F-35B-J Lightning II (USMC)";
		crew = "B_pilot_F";
		side = 1;
		faction = "CUP_B_USMC";
		editorPreview = "\ARMA3_CUP_Enhancement_F35\UI\editorpreview\F35B_USMC.jpg";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
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
			minTurn=-160;
			maxTurn=160;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=true;
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
		radarTargetSize = 0.8;
		radarType = 4;
		canUseScanners = 1;
		commanderCanSee = 31;
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
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
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
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=100000;
							maxRange=100000;
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
						maxTrackableSpeed=1725;
						angleRangeHorizontal=160;
						angleRangeVertical=160;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=0;
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
		memoryPointDriverOptics="gau22_start";
		//unitInfoType="RscOptics_AV_pilot";
		unitInfoType = "RscOptics_CAS_Pilot";
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = { 0, 4.5, -1.1 };
		LESH_WheelOffset[] = { 0, -4.5 };
		weapons[] =
		{
			"FIR_MasterArm",
			"JAS_CUP_Vacannon_GAU22_veh",
			"FIR_CMLauncher",
			"Laserdesignator_mounted"
		};
		magazines[] =
		{
			"JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_co.paa"
		};
		class UserActions
		{
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
			class f35_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 25) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class CUP_F35B_Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>Pull Ejection Cord</t>";
				condition = "player in this and isengineon this";
				statement = "[this, false] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_OpenWeaponBay
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Open Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 1)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydooropen.sqf"";";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_CloseWeaponBay : CUP_F35B_OpenWeaponBay
			{
				displayName = "Close Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 0)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydoorclose.sqf"";";
			};
			class CUP_F35B_VTOLON
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Vertical Take-off Mode (On)";
				condition = "player in this and isengineon this and ((getpos this) select 2 < 5) and !(this getvariable ['CUP_AirVehicles_VTOL',false])";
				statement = "[this, true] call CUP_fnc_VTOL;";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_VTOLOFF : CUP_F35B_VTOLON
			{
				displayName = "Vertical Take-off Mode (Off)";
				condition = "player in this and isengineon this and (this getvariable ['CUP_AirVehicles_VTOL',false]);";
				statement = "[this, false] call CUP_fnc_VTOL;";
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
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				//condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_B_F35B_RAF : CUP_F35B_base
	{
		scope = 2;
		author = "Bohimia Interactive /CUP /-{GOL}-Jason";
		displayname = "F-35B-J Lightning II (RAF/RN)";
		crew = "B_pilot_F";
		side = 1;
		faction="CUP_B_GB";
		editorPreview = "\ARMA3_CUP_Enhancement_F35\UI\editorpreview\F35B_RAF.jpg";
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
			minTurn=-160;
			maxTurn=160;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=true;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 100000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 1725;
						angleRangeHorizontal = 160;
						angleRangeVertical = 160;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 0;
						allowsMarking= 1;
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
		memoryPointDriverOptics="gau22_start";
		unitInfoType="RscOptics_AV_pilot";
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = { 0, 4.5, -1.1 };
		LESH_WheelOffset[] = { 0, -4.5 };
		weapons[] =
		{
			"FIR_MasterArm",
			"JAS_CUP_Vacannon_GAU22_veh",
			"FIR_CMLauncher",
			"Laserdesignator_mounted"
		};
		magazines[] =
		{
			"JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa"
		};
		class UserActions
		{
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
			class f35_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 25) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35RAF_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class CUP_F35B_Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>Pull Ejection Cord</t>";
				condition = "player in this and isengineon this";
				statement = "[this, false] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_OpenWeaponBay
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Open Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 1)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydooropen.sqf"";";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_CloseWeaponBay : CUP_F35B_OpenWeaponBay
			{
				displayName = "Close Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 0)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydoorclose.sqf"";";
			};
			class CUP_F35B_VTOLON
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Vertical Take-off Mode (On)";
				condition = "player in this and isengineon this and ((getpos this) select 2 < 5) and !(this getvariable ['CUP_AirVehicles_VTOL',false])";
				statement = "[this, true] call CUP_fnc_VTOL;";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_VTOLOFF : CUP_F35B_VTOLON
			{
				displayName = "Vertical Take-off Mode (Off)";
				condition = "player in this and isengineon this and (this getvariable ['CUP_AirVehicles_VTOL',false]);";
				statement = "[this, false] call CUP_fnc_VTOL;";
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
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				//condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};*/

	class CUP_F35B_dynamic_base;
	class JAS_CUP_B_F35B_USMC : CUP_F35B_dynamic_base
	{
		scope = 2;
		author = "Bohimia Interactive /CUP /-{GOL}-Jason";
		displayname = "F-35B-J Lightning II (USMC)";
		crew = "B_pilot_F";
		side = 1;
		faction = "CUP_B_USMC";
		editorPreview = "\ARMA3_CUP_Enhancement_F35\UI\editorpreview\F35B_USMC.jpg";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
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
			minTurn=-160;
			maxTurn=160;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=true;
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
		radarTargetSize = 0.8;
		radarType = 4;
		canUseScanners = 1;
		commanderCanSee = 31;
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
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
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
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=100000;
							maxRange=100000;
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
						maxTrackableSpeed=1725;
						angleRangeHorizontal=160;
						angleRangeVertical=160;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=0;
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
			class TransportPylonsComponent
			{
				uiPicture="\CUP\AirVehicles\CUP_AirVehicles_F35\data\UI\CUP_F35_3DEN_ca.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"JAS_F35_OUT"
						};
						attachment="JAS_FIR_AIM9L_PYLON_M";
						priority=5;
						maxweight=200;
						UIposition[]=
						{
							"0.3+0.04",
							"0.01+0.0"
						};
					};
					class Pylons2: Pylons1
					{
						hardpoints[]=
						{
							"JAS_F35_MID"
						};
						priority=4;
						attachment="JAS_FIR_AIM120_PYLON_M";
						maxweight=500;
						UIposition[]=
						{
							"0.3+0.03",
							"0.01+0.05"
						};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]=
						{
							"JAS_F35_IN"
						};
						priority=3;
						attachment="JAS_FIR_AGM154A_PYLON_M";
						maxweight=1100;
						UIposition[]=
						{
							"0.3+0.02",
							"0.01+0.10"
						};
					};
					class Pylons4: Pylons1 // Internal
					{
						hardpoints[]=
						{
							"JAS_F35_INT"
						};
						priority=2;
						attachment="JAS_FIR_GBU53_P_4rnd_M";
						maxweight=1500;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.17"
						};
						bay=2;
					};
					class Pylons5: Pylons1 // Internal
					{
						hardpoints[]=
						{
							"JAS_F35_INTAA"
						};
						priority=1;
						attachment="JAS_FIR_AIM120_PYLON_M";
						maxweight=1500;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.22"
						};
						bay=2;
					};
					class Pylons6: Pylons1 // Belly Centreline
					{
						priority=2;
						attachment="CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M";
						maxweight=1500;
						UIposition[]=
						{
							"0.3-0.03",
							"0.01+0.27"
						};
						hardpoints[]=
						{
							"CUP_F35_CENTER_PYLON"
						};
					};
					class Pylons7: Pylons5 // Internal
					{
						bay=1;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.32"
						};
						mirroredMissilePos=5;
					};
					class Pylons8: Pylons4 // Internal
					{
						bay=1;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.37"
						};
						mirroredMissilePos=4;
					};
					class Pylons9: Pylons3
					{
						UIposition[]=
						{
							"0.3+0.02",
							"0.01+0.44"
						};
						mirroredMissilePos=3;
					};
					class Pylons10: Pylons2
					{
						UIposition[]=
						{
							"0.3+0.03",
							"0.01+0.49"
						};
						mirroredMissilePos=2;
					};
					class Pylons11: Pylons1
					{
						UIposition[]=
						{
							"0.3+0.04",
							"0.01+0.54"
						};
						mirroredMissilePos=1;
					};
				};
				class Bays
				{
					class Bay1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=2;
					};
					class Bay2: Bay1
					{
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class MR
					{
						displayName="Multi-Role";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_CBU103_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_AIM120_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_CBU103_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class CAP
					{
						displayName="Combat Air Patrol";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class CAS
					{
						displayName="Close Air Support";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_AIM120_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class PGM
					{
						displayName="Precision Strike";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_AIM120_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class PGM2
					{
						displayName="Stand Off Strike";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_AIM120_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class SEAD
					{
						displayName="SEAD";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_AIM120_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
				};
			};
		};
		memoryPointDriverOptics="gau22_start";
		//unitInfoType="RscOptics_AV_pilot";
		unitInfoType = "RscOptics_CAS_Pilot";
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = { 0, 4.5, -1.1 };
		LESH_WheelOffset[] = { 0, -4.5 };
		weapons[] =
		{
			"FIR_MasterArm",
			//"JAS_CUP_Vacannon_GAU22_veh",
			"FIR_CMLauncher",
			"Laserdesignator_mounted"
		};
		magazines[] =
		{
			//"JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_co.paa"
		};
		class UserActions
		{
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
			class f35_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 25) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class CUP_F35B_Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>Pull Ejection Cord</t>";
				condition = "player in this and isengineon this";
				statement = "[this, false] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			/*class CUP_F35B_OpenWeaponBay
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Open Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 1)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydooropen.sqf"";";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_CloseWeaponBay : CUP_F35B_OpenWeaponBay
			{
				displayName = "Close Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 0)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydoorclose.sqf"";";
			};
			class CUP_F35B_VTOLON
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Vertical Take-off Mode (On)";
				condition = "player in this and isengineon this and ((getpos this) select 2 < 5) and !(this getvariable ['CUP_AirVehicles_VTOL',false])";
				statement = "[this, true] call CUP_fnc_VTOL;";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_VTOLOFF : CUP_F35B_VTOLON
			{
				displayName = "Vertical Take-off Mode (Off)";
				condition = "player in this and isengineon this and (this getvariable ['CUP_AirVehicles_VTOL',false]);";
				statement = "[this, false] call CUP_fnc_VTOL;";
			};/*
			/*class FindRadarTGT
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
			class Fueltank_Jettison
			{
				displayName = "Jettison Fueltanks";
				position = "pos cano";
				radius = 15;
				shortcut = "User8";
				condition = "player in this and isengineon this";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\Jettison\droptanks.sqf"";";
				onlyforplayer = "False";
			};*/
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				//condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		/*class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.024599999,0.018999999,0.1};
				helmetRight[]={0.050000001,0,0};
				helmetDown[]={0,-0.050000001,0};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.498,0.38};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.498,0.38};
						pos10[]={1.298,1.38};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.498,0.38};
						pos10[]={1.298,1.38};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.498,0.38};
						pos10[]={1.298,1.38};
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.60500002,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.60500002};
					};
					class Level0
					{
						type="horizon";
						pos0[]=
						{
							0.5,
							"0.38+0.00"
						};
						pos10[]={1.3,1.38};
						angle=0;
					};
					class VerticalSpeed
					{
						type="linear";
						source="vspeed";
						sourceScale=1;
						min=-100;
						max=100;
						minPos[]={0,0.15000001};
						maxPos[]={0,-0.15000001};
					};
					class HorizonIndicatorBank
					{
						type="rotational";
						source="horizonBank";
						sourceScale=1;
						center[]={0.064999998,0.12};
						min=-3.1415901;
						max=3.1415901;
						minAngle=0;
						maxAngle=360;
						aspectRatio="1 / (0.8 /1)";
					};
					class HorizonIndicatorDive: HorizonIndicatorBank
					{
						source="horizonDive";
						min="-3.14159265359 / 2";
						max="3.14159265359 / 2";
						minAngle=90;
						maxAngle=-90;
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					condition="on";
					class PlaneOrientationCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{0,-0.025},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0099999998,-0.02165},
								1
							},
							
							{
								"PlaneOrientation",
								{0.01732,-0.0125},
								1
							},
							
							{
								"PlaneOrientation",
								{0.02,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.01732,0.0125},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0099999998,0.02165},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0.025},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0099999998,0.02165},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.01732,0.0125},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.02,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.01732,-0.0125},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0099999998,-0.02165},
								1
							},
							
							{
								"PlaneOrientation",
								{0,-0.025},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{0,0.025},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.050000001},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							{}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="mgun";
						class MachineGunCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									
									{
										0,
										"-0.05/(0.8 /1)"
									},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0,
										"-0.015/(0.8 /1)"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									
									{
										-0.050000001,
										"0.0/(0.8 /1)"
									},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.015,
										"0.0/(0.8 /1)"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									
									{
										0,
										"0.05/(0.8 /1)"
									},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0,
										"0.015/(0.8 /1)"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									
									{
										0.050000001,
										"0.0/(0.8 /1)"
									},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.015,
										"0.0/(0.8 /1)"
									},
									1
								}
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.3125},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,0.3125},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.3125},
									1
								}
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.15000001,
										"-0.15+0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.15000001,
										"0.15-0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.15000001,
										"-0.15+0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.15000001,
										"0.15-0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.15+0.02",
										-0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.15+0.02",
										0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.15-0.02",
										-0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.15-0.02",
										0.15000001
									},
									1
								}
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.125},
									1
								},
								
								{
									"WeaponAim",
									{0.01736,-0.1231},
									1
								},
								
								{
									"WeaponAim",
									{0.034200002,-0.117463},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.10825},
									1
								},
								
								{
									"WeaponAim",
									{0.064280003,-0.095749997},
									1
								},
								
								{
									"WeaponAim",
									{0.0766,-0.080349997},
									1
								},
								
								{
									"WeaponAim",
									{0.086599998,-0.0625},
									1
								},
								
								{
									"WeaponAim",
									{0.093970001,-0.042750001},
									1
								},
								
								{
									"WeaponAim",
									{0.098480001,-0.0217},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.098480001,0.0217},
									1
								},
								
								{
									"WeaponAim",
									{0.093970001,0.042750001},
									1
								},
								
								{
									"WeaponAim",
									{0.086599998,0.0625},
									1
								},
								
								{
									"WeaponAim",
									{0.0766,0.080349997},
									1
								},
								
								{
									"WeaponAim",
									{0.064280003,0.095749997},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.10825},
									1
								},
								
								{
									"WeaponAim",
									{0.034200002,0.117463},
									1
								},
								
								{
									"WeaponAim",
									{0.01736,0.1231},
									1
								},
								
								{
									"WeaponAim",
									{0,0.125},
									1
								},
								
								{
									"WeaponAim",
									{-0.01736,0.1231},
									1
								},
								
								{
									"WeaponAim",
									{-0.034200002,0.117463},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.10825},
									1
								},
								
								{
									"WeaponAim",
									{-0.064280003,0.095749997},
									1
								},
								
								{
									"WeaponAim",
									{-0.0766,0.080349997},
									1
								},
								
								{
									"WeaponAim",
									{-0.086599998,0.0625},
									1
								},
								
								{
									"WeaponAim",
									{-0.093970001,0.042750001},
									1
								},
								
								{
									"WeaponAim",
									{-0.098480001,0.0217},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.098480001,-0.0217},
									1
								},
								
								{
									"WeaponAim",
									{-0.093970001,-0.042750001},
									1
								},
								
								{
									"WeaponAim",
									{-0.086599998,-0.0625},
									1
								},
								
								{
									"WeaponAim",
									{-0.0766,-0.080349997},
									1
								},
								
								{
									"WeaponAim",
									{-0.064280003,-0.095749997},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.10825},
									1
								},
								
								{
									"WeaponAim",
									{-0.034200002,-0.117463},
									1
								},
								
								{
									"WeaponAim",
									{-0.01736,-0.1231},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.125},
									1
								},
								{},
								
								{
									"Velocity",
									0.001,
									"WeaponAim",
									{0,0},
									1
								},
								
								{
									"Velocity",
									{0,0},
									1
								}
							};
						};
					};
					class WeaponName
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.02,0.85000002},
							1
						};
						right[]=
						{
							{0.059999999,0.85000002},
							1
						};
						down[]=
						{
							{0.02,0.88999999},
							1
						};
					};
					class AmmoCount
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.95999998,0.85000002},
							1
						};
						right[]=
						{
							{1,0.85000002},
							1
						};
						down[]=
						{
							{0.95999998,0.88999999},
							1
						};
					};
					class FlapsGroup
					{
						type="group";
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									0.090000004,
									"0.455+0*0.045"
								},
								1
							};
							right[]=
							{
								
								{
									0.13,
									"0.455+0*0.045"
								},
								1
							};
							down[]=
							{
								
								{
									0.090000004,
									"0.495+0*0.045"
								},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								
								{
									0.093000002,
									"0.50+0*0.045"
								},
								1
							};
							right[]=
							{
								
								{
									0.133,
									"0.50+0*0.045"
								},
								1
							};
							down[]=
							{
								
								{
									0.093000002,
									"0.54+0*0.045"
								},
								1
							};
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							
							{
								0.13,
								"0.225+1*0.045"
							},
							1
						};
						right[]=
						{
							
							{
								0.17,
								"0.225+1*0.045"
							},
							1
						};
						down[]=
						{
							
							{
								0.13,
								"0.265+1*0.045"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="PITCH";
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								0.092,
								"0.225+1*0.045"
							},
							1
						};
						right[]=
						{
							
							{
								0.132,
								"0.225+1*0.045"
							},
							1
						};
						down[]=
						{
							
							{
								0.092,
								"0.265+1*0.045"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							
							{
								0.13,
								"0.27+1*0.045"
							},
							1
						};
						right[]=
						{
							
							{
								0.17,
								"0.27+1*0.045"
							},
							1
						};
						down[]=
						{
							
							{
								0.13,
								"0.31+1*0.045"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="ROLL";
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								0.096000001,
								"0.27+1*0.045"
							},
							1
						};
						right[]=
						{
							
							{
								0.13600001,
								"0.27+1*0.045"
							},
							1
						};
						down[]=
						{
							
							{
								0.096000001,
								"0.31+1*0.045"
							},
							1
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.36000001},
							1
						};
						right[]=
						{
							{0.17,0.36000001},
							1
						};
						down[]=
						{
							{0.13,0.40000001},
							1
						};
					};
					class SpeedText
					{
						type="text";
						source="static";
						text="SPEED";
						align="left";
						scale=1;
						pos[]=
						{
							{0.090999998,0.36000001},
							1
						};
						right[]=
						{
							{0.131,0.36000001},
							1
						};
						down[]=
						{
							{0.090999998,0.40000001},
							1
						};
					};
					class SpeedSeparator
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								
								{
									0.121,
									"0.36-2*0.045"
								},
								1
							},
							
							{
								
								{
									0.121,
									"0.543+0*0.045"
								},
								1
							}
						};
					};
					class Climb
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"VerticalSpeed",
								
								{
									0.875,
									"0.38-0.16"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.875,
									"0.38+0.16"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.86799997,
									"0.38-0.15"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38-0.15"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38-0.12"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38-0.12"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38-0.09"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38-0.09"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38-0.06"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38-0.06"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38-0.03"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38-0.03"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.85699999,0.38},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.38},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38+0.03"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38+0.03"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38+0.06"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38+0.06"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38+0.09"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38+0.09"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38+0.12"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.866,
									"0.38+0.12"
								},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								
								{
									0.87400001,
									"0.38+0.15"
								},
								1
							},
							
							{
								"VerticalSpeed",
								
								{
									0.86799997,
									"0.38+0.15"
								},
								1
							}
						};
					};
					class ClimbMinGroup
					{
						type="group";
						clipTL[]={0.81999999,0.40000001};
						clipBR[]={0.88,0.69};
						class ClimbMin
						{
							type="text";
							source="static";
							text=-100;
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.86000001,0.50999999},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.88499999,0.50999999},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.86000001,0.54000002},
								1
							};
						};
					};
					class ClimbMaxGroup
					{
						type="group";
						clipTL[]={0.81999999,0.059999999};
						clipBR[]={0.88,0.36000001};
						class ClimbMax
						{
							type="text";
							source="static";
							text=100;
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.86000001,0.20999999},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.88499999,0.20999999},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.86000001,0.23999999},
								1
							};
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="CLIMB";
						align="left";
						scale=1;
						pos[]=
						{
							{0.85000002,0.72000003},
							1
						};
						right[]=
						{
							{0.875,0.72000003},
							1
						};
						down[]=
						{
							{0.85000002,0.75},
							1
						};
					};
					class AltitudeNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.82999998,0.36000001},
							1
						};
						right[]=
						{
							{0.87,0.36000001},
							1
						};
						down[]=
						{
							{0.82999998,0.40000001},
							1
						};
					};
					class AltitudeText
					{
						type="text";
						source="static";
						text="AGL";
						align="right";
						scale=1;
						pos[]=
						{
							{0.88,0.72000003},
							1
						};
						right[]=
						{
							{0.92000002,0.72000003},
							1
						};
						down[]=
						{
							{0.88,0.75999999},
							1
						};
					};
					class AltitudeArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								
								{
									"0.875-0.018",
									"0.38-0.016"
								},
								1
							},
							
							{
								{0.875,0.38},
								1
							},
							
							{
								
								{
									"0.875-0.018",
									"0.38+0.016"
								},
								1
							},
							{},
							
							{
								
								{
									"0.88+0.018",
									"0.38-0.016"
								},
								1
							},
							
							{
								{0.88,0.38},
								1
							},
							
							{
								
								{
									"0.88+0.018",
									"0.38+0.016"
								},
								1
							}
						};
					};
					class AltitudeScale
					{
						type="scale";
						horizontal=0;
						source="altitudeAGL";
						sourceScale=1;
						width=4;
						top=0.70999998;
						center=0.38;
						bottom=0.050000001;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=5;
						numberEach=10;
						step=10;
						stepSize=0.025;
						align="right";
						scale=1;
						pos[]={0.91000003,0.69};
						right[]={0.94999999,0.69};
						down[]={0.91000003,0.73000002};
					};
					class HeadingArrows
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								
								{
									"0.5-0.016",
									"0.915-0.018"
								},
								1
							},
							
							{
								{0.5,0.91500002},
								1
							},
							
							{
								
								{
									"0.5+0.016",
									"0.915-0.018"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5-0.016",
									"0.98+0.018"
								},
								1
							},
							
							{
								{0.5,0.98000002},
								1
							},
							
							{
								
								{
									"0.5+0.016",
									"0.98+0.018"
								},
								1
							}
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=4;
						top=0.050000001;
						center=0.5;
						bottom=0.94999999;
						lineXleft=0.93000001;
						lineYright=0.92000002;
						lineXleftMajor=0.94;
						lineYrightMajor=0.92000002;
						majorLineEach=3;
						numberEach=9;
						step=5;
						stepSize=0.02;
						align="center";
						scale=1;
						pos[]={0.050000001,0.94};
						right[]={0.090000004,0.94};
						down[]={0.050000001,0.98000002};
					};
					class HorizontalLine
					{
						clipTL[]={0.2,0};
						clipBR[]={0.80000001,0.75999999};
						class HorizontalLineDraw
						{
							type="line";
							source="Level0";
							points[]=
							{
								
								{
									"Level0",
									
									{
										"-6*0.075/2",
										0
									},
									1
								},
								
								{
									"Level0",
									
									{
										"-5*0.075/2",
										0
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"-4*0.075/2",
										0
									},
									1
								},
								
								{
									"Level0",
									
									{
										"-3*0.075/2",
										0
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"-2*0.075/2",
										0
									},
									1
								},
								
								{
									"Level0",
									
									{
										"-1*0.075/2",
										0
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"1*0.075/2",
										0
									},
									1
								},
								
								{
									"Level0",
									
									{
										"2*0.075/2",
										0
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"3*0.075/2",
										0
									},
									1
								},
								
								{
									"Level0",
									
									{
										"4*0.075/2",
										0
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"5*0.075/2",
										0
									},
									1
								},
								
								{
									"Level0",
									
									{
										"6*0.075/2",
										0
									},
									1
								}
							};
						};
					};
					class HorizonIndicatorBackground
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								
								{
									"-1.4*0.046+0.065",
									"0.0000*0.046+0.12"
								},
								1
							},
							
							{
								
								{
									"1.4*0.046+0.065",
									"0.0000*0.046+0.12"
								},
								1
							}
						};
					};
					class HorizonIndicator
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"HorizonIndicatorBank",
								
								{
									"-1.2000*0.046",
									"0.0000*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-1.0000*0.046",
									"0.0000*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.9877*0.046",
									"0.1736*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.9397*0.046",
									"0.3420*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.8660*0.046",
									"0.5000*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.7660*0.046",
									"0.6428*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.6428*0.046",
									"0.7660*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.5000*0.046",
									"0.8660*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.3420*0.046",
									"0.9397*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.1736*0.046",
									"0.9877*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"-0.0000*0.046",
									"1.0000*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.1736*0.046",
									"0.9877*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.3420*0.046",
									"0.9397*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.5000*0.046",
									"0.8660*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.6428*0.046",
									"0.7660*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.7660*0.046",
									"0.6428*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.8660*0.046",
									"0.5000*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.9397*0.046",
									"0.3420*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"0.9877*0.046",
									"0.1736*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"1.0000*0.046",
									"0.0000*0.046"
								},
								1
							},
							
							{
								"HorizonIndicatorBank",
								
								{
									"1.2000*0.046",
									"0.0000*0.046"
								},
								1
							}
						};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,0.0272165},
										1
									},
									
									{
										"ILS_W",
										{0,-0.0272165},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,0.0272165},
										1
									},
									
									{
										"ILS_W",
										{0.12,-0.0272165},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,0.0272165},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,-0.0272165},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,0.0272165},
										1
									},
									
									{
										"ILS_W",
										{-0.12,-0.0272165},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,0.0272165},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,-0.0272165},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.272165},
										1
									},
									
									{
										"ILS_H",
										{0,0.272165},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.13608199},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.13608199},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.272165},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.272165},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.13608199},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.13608199},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.272165},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.272165},
										1
									}
								};
							};
						};
					};
				};
			};
		};*/
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				//topLeft="HUD LH";
				//topRight="HUD PH";
				//bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=1;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.024599999,0.018999999,0.1};
				helmetRight[]={0.050000001,0,0};
				helmetDown[]={0,-0.050000001,0};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.498,0.38};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class TargetingPodTarget
					{
						source="pilotcamera";
						type="vector";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPoint";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=1.25;
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
						angle=0;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class VerticalSpeed
					{
						type="linear";
						source="vspeed";
						sourceScale=1;
						min=-100;
						max=100;
						minPos[]={0,0.15000001};
						maxPos[]={0,-0.15000001};
					};
					class HorizonIndicatorBank
					{
						type="rotational";
						source="horizonBank";
						sourceScale=1;
						center[]={0.064999998,0.12};
						min=-3.1415927;
						max=3.1415927;
						minAngle=0;
						maxAngle=360;
						aspectRatio=1.25;
					};
					class HorizonIndicatorDive: HorizonIndicatorBank
					{
						source="horizonDive";
						min=-1.5707999;
						max=1.5707999;
						minAngle=90;
						maxAngle=-90;
					};
					class TerrainBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=200;
						minPos[]={0,0.88};
						maxPos[]={0,0.38};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=1.25;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.38};
						pos3[]={0.70039999,0.38};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.63050002};
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					condition="on";
					class PlaneOrientationCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.0099999998,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0099999998,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0,-0.0125},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0.0125},
								1
							},
							{}
						};
					};
					class PlaneMovementCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{0,0.025},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.050000001},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							{}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="mgun";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.079999998},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.3125},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,0.3125},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.3125},
									1
								}
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.025},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.025},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.050000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.079999998},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponName
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.050000001,0.85000002},
							1
						};
						right[]=
						{
							{0.090000004,0.85000002},
							1
						};
						down[]=
						{
							{0.050000001,0.88999999},
							1
						};
					};
					class AmmoCount
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.94999999,0.85000002},
							1
						};
						right[]=
						{
							{0.99000001,0.85000002},
							1
						};
						down[]=
						{
							{0.94999999,0.88999999},
							1
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.22499999},
							1
						};
						right[]=
						{
							{0.17,0.22499999},
							1
						};
						down[]=
						{
							{0.13,0.26499999},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="PITCH";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.22499999},
							1
						};
						right[]=
						{
							{0.15000001,0.22499999},
							1
						};
						down[]=
						{
							{0.11,0.26499999},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.27000001},
							1
						};
						right[]=
						{
							{0.17,0.27000001},
							1
						};
						down[]=
						{
							{0.13,0.31},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="ROLL";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.27000001},
							1
						};
						right[]=
						{
							{0.15000001,0.27000001},
							1
						};
						down[]=
						{
							{0.11,0.31},
							1
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.36000001},
							1
						};
						right[]=
						{
							{0.17,0.36000001},
							1
						};
						down[]=
						{
							{0.13,0.40000001},
							1
						};
					};
					class SpeedText
					{
						type="text";
						source="static";
						text="SPEED";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.36000001},
							1
						};
						right[]=
						{
							{0.15000001,0.36000001},
							1
						};
						down[]=
						{
							{0.11,0.40000001},
							1
						};
					};
					class SpeedSeparator
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								{0.12,0.22499999},
								1
							},
							
							{
								{0.12,0.63300002},
								1
							}
						};
					};
					class FlapsGroup
					{
						type="group";
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.44999999},
								1
							};
							right[]=
							{
								{0.15000001,0.44999999},
								1
							};
							down[]=
							{
								{0.11,0.49000001},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.495},
								1
							};
							right[]=
							{
								{0.15000001,0.495},
								1
							};
							down[]=
							{
								{0.11,0.53500003},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.029999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.022500001},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.022500001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{0,0.029999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.022500001},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.022500001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.029999999},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0,0.30000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.30000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.15000001},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.15000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,0.15000001},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.15000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.30000001},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class LightsGroup
					{
						type="group";
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LLS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.54000002},
								1
							};
							right[]=
							{
								{0.15000001,0.54000002},
								1
							};
							down[]=
							{
								{0.11,0.57999998},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type="group";
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.58499998},
								1
							};
							right[]=
							{
								{0.15000001,0.58499998},
								1
							};
							down[]=
							{
								{0.11,0.625},
								1
							};
						};
					};
					class Climb
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								"VerticalSpeed",
								{0.875,0.22},
								1
							},
							
							{
								"VerticalSpeed",
								{0.875,0.54000002},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86900002,0.23},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.23},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.25999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.25999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.28999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.28999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.31999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.31999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.34999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.34999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.85500002,0.38},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.38},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.41},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.41},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.44},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.44},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.47},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.47},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.5},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.5},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.52999997},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86900002,0.52999997},
								1
							}
						};
					};
					class ClimbMinGroup
					{
						type="group";
						clipTL[]={0,0.40000001};
						clipBR[]={1,0.75999999};
						class ClimbMin
						{
							type="text";
							source="static";
							text="-100";
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.866,0.51749998},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.89099997,0.51749998},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.866,0.54250002},
								1
							};
						};
					};
					class ClimbMaxGroup
					{
						type="group";
						clipTL[]={0,0};
						clipBR[]={1,0.36000001};
						class ClimbMax
						{
							type="text";
							source="static";
							text="100";
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.866,0.2175},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.89099997,0.2175},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.866,0.24250001},
								1
							};
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="CLIMB";
						align="left";
						scale=1;
						pos[]=
						{
							{0.87,0.72100002},
							1
						};
						right[]=
						{
							{0.89499998,0.72100002},
							1
						};
						down[]=
						{
							{0.87,0.74599999},
							1
						};
					};
					class TerrainGroup
					{
						type="group";
						clipTL[]={0,0};
						clipBR[]={1,0.69999999};
						class TerrainLine
						{
							type="line";
							width=1;
							points[]=
							{
								
								{
									"TerrainBone",
									{0.74000001,0},
									1
								},
								
								{
									"TerrainBone",
									{0.90899998,0},
									1
								}
							};
						};
						class TerrainText
						{
							type="text";
							source="static";
							text="TERRAIN";
							align="right";
							scale=1;
							pos[]=
							{
								"TerrainBone",
								{0.74000001,0.003},
								1
							};
							right[]=
							{
								"TerrainBone",
								{0.76499999,0.003},
								1
							};
							down[]=
							{
								"TerrainBone",
								{0.74000001,0.028000001},
								1
							};
						};
						class TerrainNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								"TerrainBone",
								{0.74000001,-0.043000001},
								1
							};
							right[]=
							{
								"TerrainBone",
								{0.77999997,-0.043000001},
								1
							};
							down[]=
							{
								"TerrainBone",
								{0.74000001,-0.003},
								1
							};
						};
					};
					class AltitudeNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.84500003,0.36000001},
							1
						};
						right[]=
						{
							{0.88499999,0.36000001},
							1
						};
						down[]=
						{
							{0.84500003,0.40000001},
							1
						};
					};
					class AltitudeText
					{
						type="text";
						source="static";
						text="ASL";
						align="right";
						scale=1;
						pos[]=
						{
							{0.88,0.72000003},
							1
						};
						right[]=
						{
							{0.92000002,0.72000003},
							1
						};
						down[]=
						{
							{0.88,0.75999999},
							1
						};
					};
					class AltitudeArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.85699999,0.36399999},
								1
							},
							
							{
								{0.875,0.38},
								1
							},
							
							{
								{0.85699999,0.396},
								1
							},
							{},
							
							{
								{0.898,0.36399999},
								1
							},
							
							{
								{0.88,0.38},
								1
							},
							
							{
								{0.898,0.396},
								1
							}
						};
					};
					class AltitudeScale
					{
						type="scale";
						horizontal=0;
						source="altitudeASL";
						sourceScale=1;
						min=0;
						width=4;
						top=0.70999998;
						center=0.38;
						bottom=0.050000001;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=5;
						numberEach=10;
						step=10;
						stepSize=0.025;
						align="right";
						scale=1;
						pos[]={0.91000003,0.69};
						right[]={0.94999999,0.69};
						down[]={0.91000003,0.73000002};
					};
					class HeadingArrows
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.484,0.89700001},
								1
							},
							
							{
								{0.5,0.91500002},
								1
							},
							
							{
								{0.51599997,0.89700001},
								1
							},
							{},
							
							{
								{0.484,0.99800003},
								1
							},
							
							{
								{0.5,0.98000002},
								1
							},
							
							{
								{0.51599997,0.99800003},
								1
							}
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=4;
						top=0.050000001;
						center=0.5;
						bottom=0.94999999;
						lineXleft=0.93000001;
						lineYright=0.92000002;
						lineXleftMajor=0.94;
						lineYrightMajor=0.92000002;
						majorLineEach=3;
						numberEach=9;
						step=5;
						stepSize=0.02;
						align="center";
						scale=1;
						pos[]={0.050000001,0.94};
						right[]={0.090000004,0.94};
						down[]={0.050000001,0.98000002};
					};
					class HorizontalLine
					{
						clipTL[]={0.2,0};
						clipBR[]={0.80000001,0.75999999};
						class HorizontalLineDraw
						{
							type="line";
							source="Level0";
							points[]=
							{
								
								{
									"Level0",
									{-0.22499999,0},
									1
								},
								
								{
									"Level0",
									{-0.1875,0},
									1
								},
								{},
								
								{
									"Level0",
									{-0.15000001,0},
									1
								},
								
								{
									"Level0",
									{-0.1125,0},
									1
								},
								{},
								
								{
									"Level0",
									{-0.075000003,0},
									1
								},
								
								{
									"Level0",
									{-0.037500001,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.037500001,0},
									1
								},
								
								{
									"Level0",
									{0.075000003,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.1125,0},
									1
								},
								
								{
									"Level0",
									{0.15000001,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.1875,0},
									1
								},
								
								{
									"Level0",
									{0.22499999,0},
									1
								}
							};
						};
					};
					class HorizonIndicatorBackground
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								{0.00059999502,0.12},
								1
							},
							
							{
								{0.1294,0.12},
								1
							}
						};
					};
					class HorizonIndicator
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"HorizonIndicatorBank",
								{-0.055199999,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.046,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.045434199,0.0079856003},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.043226201,0.015732},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.039836001,0.023},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.035236001,0.029568801},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.029568801,0.035236001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.023,0.039836001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.015732,0.043226201},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.0079856003,0.045434199},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0,0.046},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.0079856003,0.045434199},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.015732,0.043226201},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.023,0.039836001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.029568801,0.035236001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.035236001,0.029568801},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.039836001,0.023},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.043226201,0.015732},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.045434199,0.0079856003},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.046,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.055199999,0},
								1
							}
						};
					};
					class RadarBoxes
					{
						type="radar";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0024999999},
								1
							},
							
							{
								{0.0020000001,-0.0024999999},
								1
							},
							
							{
								{0.0020000001,0.0024999999},
								1
							},
							
							{
								{-0.0020000001,0.0024999999},
								1
							},
							
							{
								{-0.0020000001,-0.0024999999},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.025},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.037500001},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.037500001},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.037500001},
									1
								}
							};
						};
					};
					class TargetingPodDir
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,0.0051731099},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,-0.0051731099},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,-0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,-0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,-0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041384902,-0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,-0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,-0.0147318},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.020805599,-0.0051731099},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.020805599,0.0051731202},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041384902,0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,0.0147318},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,0.0051731002},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,-0.0051731202},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,-0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,-0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,-0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041385,-0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,-0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,-0.0147318},
								1
							},
							{},
							{}
						};
					};
					class LAR
					{
						type="group";
						condition="AAmissile";
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.23,0.25},
									1
								},
								
								{
									{0.20999999,0.25},
									1
								},
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.23,0.55000001},
									1
								},
								{},
								
								{
									{0.23,0.47499999},
									1
								},
								
								{
									{0.20999999,0.47499999},
									1
								},
								{},
								
								{
									{0.23,0.40000001},
									1
								},
								
								{
									{0.20999999,0.40000001},
									1
								},
								{},
								
								{
									{0.23,0.32499999},
									1
								},
								
								{
									{0.20999999,0.32499999},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.19,0.56999999},
									1
								},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.20999999,0.55000001},
									1
								},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.19,0.52999997},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.30000001,
										{0.211,0.55000001},
										1
									},
									
									{
										"LarAmmoMax",
										-0.30000001,
										{0.211,0.55000001},
										1
									},
									
									{
										"LarAmmoMax",
										-0.30000001,
										{0.228,0.55000001},
										1
									},
									
									{
										"LarAmmoMin",
										-0.30000001,
										{0.228,0.55000001},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25-0.02)"
								},
								1
							};
							right[]=
							{
								
								{
									"_EVAL(0.21+0.07)",
									"_EVAL(0.25-0.02)"
								},
								1
							};
							down[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25+0.02)"
								},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25-0.02+0.3*0.5)"
								},
								1
							};
							right[]=
							{
								
								{
									"_EVAL(0.21+0.07)",
									"_EVAL(0.25-0.02+0.3*0.5)"
								},
								1
							};
							down[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25+0.02+0.3*0.5)"
								},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.18000001,0.52999997},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.22,0.52999997},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.18000001,0.56999999},
								1
							};
						};
					};
				};
			};
		};
	};
	class JAS_CUP_B_F35B_RAF : CUP_F35B_dynamic_base
	{
		scope = 2;
		author = "Bohimia Interactive /CUP /-{GOL}-Jason";
		displayname = "F-35B-J Lightning II (RAF/RN)";
		crew = "B_pilot_F";
		side = 1;
		faction="CUP_B_GB";
		editorPreview = "\ARMA3_CUP_Enhancement_F35\UI\editorpreview\F35B_RAF.jpg";
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
			minTurn=-160;
			maxTurn=160;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=true;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 100000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 1725;
						angleRangeHorizontal = 160;
						angleRangeVertical = 160;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 0;
						allowsMarking= 1;
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
			class TransportPylonsComponent
			{
				uiPicture="\CUP\AirVehicles\CUP_AirVehicles_F35\data\UI\CUP_F35_3DEN_ca.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"JAS_F35RAF_OUT"
						};
						attachment="JAS_FIR_AIM132_1rnd_PYLON_M";
						priority=5;
						maxweight=200;
						UIposition[]=
						{
							"0.3+0.04",
							"0.01+0.0"
						};
					};
					class Pylons2: Pylons1
					{
						hardpoints[]=
						{
							"JAS_F35RAF_MID"
						};
						priority=4;
						attachment="JAS_FIR_BRIMSTONE_JET2_PYLON_M";
						maxweight=500;
						UIposition[]=
						{
							"0.3+0.03",
							"0.01+0.05"
						};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]=
						{
							"JAS_F35RAF_IN"
						};
						priority=3;
						attachment="JAS_STORMSHADOW_PYLON_M";
						maxweight=1100;
						UIposition[]=
						{
							"0.3+0.02",
							"0.01+0.10"
						};
					};
					class Pylons4: Pylons1 // Internal
					{
						hardpoints[]=
						{
							"JAS_F35RAF_INT"
						};
						priority=2;
						attachment="JAS_FIR_GBU53_P_4rnd_M";
						maxweight=1500;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.17"
						};
						bay=2;
					};
					class Pylons5: Pylons1 // Internal
					{
						hardpoints[]=
						{
							"JAS_F35RAF_INTAA"
						};
						priority=1;
						attachment="JAS_FIR_Meteor_PYLON_M";
						maxweight=1500;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.22"
						};
						bay=2;
					};
					class Pylons6: Pylons1 // Belly Centreline
					{
						priority=2;
						attachment="CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M";
						maxweight=1500;
						UIposition[]=
						{
							"0.3-0.03",
							"0.01+0.27"
						};
						hardpoints[]=
						{
							"CUP_F35_CENTER_PYLON"
						};
					};
					class Pylons7: Pylons5 // Internal
					{
						bay=1;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.32"
						};
						mirroredMissilePos=5;
					};
					class Pylons8: Pylons4 // Internal
					{
						bay=1;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.37"
						};
						mirroredMissilePos=4;
					};
					class Pylons9: Pylons3
					{
						UIposition[]=
						{
							"0.3+0.02",
							"0.01+0.44"
						};
						mirroredMissilePos=3;
					};
					class Pylons10: Pylons2
					{
						UIposition[]=
						{
							"0.3+0.03",
							"0.01+0.49"
						};
						mirroredMissilePos=2;
					};
					class Pylons11: Pylons1
					{
						UIposition[]=
						{
							"0.3+0.04",
							"0.01+0.54"
						};
						mirroredMissilePos=1;
					};
				};
				class Bays
				{
					class Bay1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=2;
					};
					class Bay2: Bay1
					{
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class MR
					{
						displayName="Multi-Role";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_Meteor_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class CAP
					{
						displayName="Combat Air Patrol";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class CAS
					{
						displayName="Close Air Support";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_Meteor_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class PGM
					{
						displayName="Precision Strike";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_Meteor_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class PGM2
					{
						displayName="Stand Off Strike";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_STORMSHADOW_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_Meteor_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_STORMSHADOW_PYLON_M",
							"JAS_FIR_BRIMSTONE_JET2_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class HSTRIKE
					{
						displayName="Heavy Strike";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_EGBU12_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class SEAD
					{
						displayName="SEAD";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_Meteor_PYLON_M",
							"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_GBU53_P_4rnd_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
				};
			};
		};
		memoryPointDriverOptics="gau22_start";
		unitInfoType="RscOptics_AV_pilot";
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = { 0, 4.5, -1.1 };
		LESH_WheelOffset[] = { 0, -4.5 };
		weapons[] =
		{
			"FIR_MasterArm",
			//"JAS_CUP_Vacannon_GAU22_veh",
			"FIR_CMLauncher",
			"Laserdesignator_mounted"
		};
		magazines[] =
		{
			//"JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa"
		};
		class UserActions
		{
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
			class f35_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 25) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_F35\sqs\loadout\f35RAF_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class CUP_F35B_Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>Pull Ejection Cord</t>";
				condition = "player in this and isengineon this";
				statement = "[this, false] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			/*class CUP_F35B_OpenWeaponBay
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Open Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 1)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydooropen.sqf"";";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_CloseWeaponBay : CUP_F35B_OpenWeaponBay
			{
				displayName = "Close Weapon Bay";
				condition = "player in this and isengineon this and (this animationphase 'Hatch_Weaponbay_1_1' != 0)";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_F35\sqs\F35\baydoorclose.sqf"";";
			};
			class CUP_F35B_VTOLON
			{
				priority = 1.5;
				shortcut = "";
				displayName = "Vertical Take-off Mode (On)";
				condition = "player in this and isengineon this and ((getpos this) select 2 < 5) and !(this getvariable ['CUP_AirVehicles_VTOL',false])";
				statement = "[this, true] call CUP_fnc_VTOL;";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class CUP_F35B_VTOLOFF : CUP_F35B_VTOLON
			{
				displayName = "Vertical Take-off Mode (Off)";
				condition = "player in this and isengineon this and (this getvariable ['CUP_AirVehicles_VTOL',false]);";
				statement = "[this, false] call CUP_fnc_VTOL;";
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
			class Fueltank_Jettison
			{
				displayName = "Jettison Fueltanks";
				position = "pos cano";
				radius = 15;
				shortcut = "User8";
				condition = "player in this and isengineon this";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\Jettison\droptanks.sqf"";";
				onlyforplayer = "False";
			};*/
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				//condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				//topLeft="HUD LH";
				//topRight="HUD PH";
				//bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.024599999,0.018999999,0.1};
				helmetRight[]={0.050000001,0,0};
				helmetDown[]={0,-0.050000001,0};
				enableParallax=1;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.498,0.38};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class TargetingPodTarget
					{
						source="pilotcamera";
						type="vector";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPoint";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=1.25;
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
						angle=0;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class VerticalSpeed
					{
						type="linear";
						source="vspeed";
						sourceScale=1;
						min=-100;
						max=100;
						minPos[]={0,0.15000001};
						maxPos[]={0,-0.15000001};
					};
					class HorizonIndicatorBank
					{
						type="rotational";
						source="horizonBank";
						sourceScale=1;
						center[]={0.064999998,0.12};
						min=-3.1415927;
						max=3.1415927;
						minAngle=0;
						maxAngle=360;
						aspectRatio=1.25;
					};
					class HorizonIndicatorDive: HorizonIndicatorBank
					{
						source="horizonDive";
						min=-1.5707999;
						max=1.5707999;
						minAngle=90;
						maxAngle=-90;
					};
					class TerrainBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=200;
						minPos[]={0,0.88};
						maxPos[]={0,0.38};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=1.25;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.38};
						pos3[]={0.70039999,0.38};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.63050002};
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					condition="on";
					class PlaneOrientationCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.0099999998,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0099999998,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0,-0.0125},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0.0125},
								1
							},
							{}
						};
					};
					class PlaneMovementCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{0,0.025},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.050000001},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							{}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="mgun";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.079999998},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.3125},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,0.3125},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.3125},
									1
								}
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.025},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.025},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.050000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.079999998},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponName
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.050000001,0.85000002},
							1
						};
						right[]=
						{
							{0.090000004,0.85000002},
							1
						};
						down[]=
						{
							{0.050000001,0.88999999},
							1
						};
					};
					class AmmoCount
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.94999999,0.85000002},
							1
						};
						right[]=
						{
							{0.99000001,0.85000002},
							1
						};
						down[]=
						{
							{0.94999999,0.88999999},
							1
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.22499999},
							1
						};
						right[]=
						{
							{0.17,0.22499999},
							1
						};
						down[]=
						{
							{0.13,0.26499999},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="PITCH";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.22499999},
							1
						};
						right[]=
						{
							{0.15000001,0.22499999},
							1
						};
						down[]=
						{
							{0.11,0.26499999},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.27000001},
							1
						};
						right[]=
						{
							{0.17,0.27000001},
							1
						};
						down[]=
						{
							{0.13,0.31},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="ROLL";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.27000001},
							1
						};
						right[]=
						{
							{0.15000001,0.27000001},
							1
						};
						down[]=
						{
							{0.11,0.31},
							1
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.36000001},
							1
						};
						right[]=
						{
							{0.17,0.36000001},
							1
						};
						down[]=
						{
							{0.13,0.40000001},
							1
						};
					};
					class SpeedText
					{
						type="text";
						source="static";
						text="SPEED";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.36000001},
							1
						};
						right[]=
						{
							{0.15000001,0.36000001},
							1
						};
						down[]=
						{
							{0.11,0.40000001},
							1
						};
					};
					class SpeedSeparator
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								{0.12,0.22499999},
								1
							},
							
							{
								{0.12,0.63300002},
								1
							}
						};
					};
					class FlapsGroup
					{
						type="group";
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.44999999},
								1
							};
							right[]=
							{
								{0.15000001,0.44999999},
								1
							};
							down[]=
							{
								{0.11,0.49000001},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.495},
								1
							};
							right[]=
							{
								{0.15000001,0.495},
								1
							};
							down[]=
							{
								{0.11,0.53500003},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.029999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.022500001},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.022500001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{0,0.029999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.022500001},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.022500001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.029999999},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0,0.30000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.30000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.15000001},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.15000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,0.15000001},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.15000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.30000001},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class LightsGroup
					{
						type="group";
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LLS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.54000002},
								1
							};
							right[]=
							{
								{0.15000001,0.54000002},
								1
							};
							down[]=
							{
								{0.11,0.57999998},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type="group";
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.58499998},
								1
							};
							right[]=
							{
								{0.15000001,0.58499998},
								1
							};
							down[]=
							{
								{0.11,0.625},
								1
							};
						};
					};
					class Climb
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								"VerticalSpeed",
								{0.875,0.22},
								1
							},
							
							{
								"VerticalSpeed",
								{0.875,0.54000002},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86900002,0.23},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.23},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.25999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.25999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.28999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.28999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.31999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.31999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.34999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.34999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.85500002,0.38},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.38},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.41},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.41},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.44},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.44},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.47},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.47},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.5},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.5},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.52999997},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86900002,0.52999997},
								1
							}
						};
					};
					class ClimbMinGroup
					{
						type="group";
						clipTL[]={0,0.40000001};
						clipBR[]={1,0.75999999};
						class ClimbMin
						{
							type="text";
							source="static";
							text="-100";
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.866,0.51749998},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.89099997,0.51749998},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.866,0.54250002},
								1
							};
						};
					};
					class ClimbMaxGroup
					{
						type="group";
						clipTL[]={0,0};
						clipBR[]={1,0.36000001};
						class ClimbMax
						{
							type="text";
							source="static";
							text="100";
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.866,0.2175},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.89099997,0.2175},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.866,0.24250001},
								1
							};
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="CLIMB";
						align="left";
						scale=1;
						pos[]=
						{
							{0.87,0.72100002},
							1
						};
						right[]=
						{
							{0.89499998,0.72100002},
							1
						};
						down[]=
						{
							{0.87,0.74599999},
							1
						};
					};
					class TerrainGroup
					{
						type="group";
						clipTL[]={0,0};
						clipBR[]={1,0.69999999};
						class TerrainLine
						{
							type="line";
							width=1;
							points[]=
							{
								
								{
									"TerrainBone",
									{0.74000001,0},
									1
								},
								
								{
									"TerrainBone",
									{0.90899998,0},
									1
								}
							};
						};
						class TerrainText
						{
							type="text";
							source="static";
							text="TERRAIN";
							align="right";
							scale=1;
							pos[]=
							{
								"TerrainBone",
								{0.74000001,0.003},
								1
							};
							right[]=
							{
								"TerrainBone",
								{0.76499999,0.003},
								1
							};
							down[]=
							{
								"TerrainBone",
								{0.74000001,0.028000001},
								1
							};
						};
						class TerrainNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								"TerrainBone",
								{0.74000001,-0.043000001},
								1
							};
							right[]=
							{
								"TerrainBone",
								{0.77999997,-0.043000001},
								1
							};
							down[]=
							{
								"TerrainBone",
								{0.74000001,-0.003},
								1
							};
						};
					};
					class AltitudeNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.84500003,0.36000001},
							1
						};
						right[]=
						{
							{0.88499999,0.36000001},
							1
						};
						down[]=
						{
							{0.84500003,0.40000001},
							1
						};
					};
					class AltitudeText
					{
						type="text";
						source="static";
						text="ASL";
						align="right";
						scale=1;
						pos[]=
						{
							{0.88,0.72000003},
							1
						};
						right[]=
						{
							{0.92000002,0.72000003},
							1
						};
						down[]=
						{
							{0.88,0.75999999},
							1
						};
					};
					class AltitudeArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.85699999,0.36399999},
								1
							},
							
							{
								{0.875,0.38},
								1
							},
							
							{
								{0.85699999,0.396},
								1
							},
							{},
							
							{
								{0.898,0.36399999},
								1
							},
							
							{
								{0.88,0.38},
								1
							},
							
							{
								{0.898,0.396},
								1
							}
						};
					};
					class AltitudeScale
					{
						type="scale";
						horizontal=0;
						source="altitudeASL";
						sourceScale=1;
						min=0;
						width=4;
						top=0.70999998;
						center=0.38;
						bottom=0.050000001;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=5;
						numberEach=10;
						step=10;
						stepSize=0.025;
						align="right";
						scale=1;
						pos[]={0.91000003,0.69};
						right[]={0.94999999,0.69};
						down[]={0.91000003,0.73000002};
					};
					class HeadingArrows
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.484,0.89700001},
								1
							},
							
							{
								{0.5,0.91500002},
								1
							},
							
							{
								{0.51599997,0.89700001},
								1
							},
							{},
							
							{
								{0.484,0.99800003},
								1
							},
							
							{
								{0.5,0.98000002},
								1
							},
							
							{
								{0.51599997,0.99800003},
								1
							}
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=4;
						top=0.050000001;
						center=0.5;
						bottom=0.94999999;
						lineXleft=0.93000001;
						lineYright=0.92000002;
						lineXleftMajor=0.94;
						lineYrightMajor=0.92000002;
						majorLineEach=3;
						numberEach=9;
						step=5;
						stepSize=0.02;
						align="center";
						scale=1;
						pos[]={0.050000001,0.94};
						right[]={0.090000004,0.94};
						down[]={0.050000001,0.98000002};
					};
					class HorizontalLine
					{
						clipTL[]={0.2,0};
						clipBR[]={0.80000001,0.75999999};
						class HorizontalLineDraw
						{
							type="line";
							source="Level0";
							points[]=
							{
								
								{
									"Level0",
									{-0.22499999,0},
									1
								},
								
								{
									"Level0",
									{-0.1875,0},
									1
								},
								{},
								
								{
									"Level0",
									{-0.15000001,0},
									1
								},
								
								{
									"Level0",
									{-0.1125,0},
									1
								},
								{},
								
								{
									"Level0",
									{-0.075000003,0},
									1
								},
								
								{
									"Level0",
									{-0.037500001,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.037500001,0},
									1
								},
								
								{
									"Level0",
									{0.075000003,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.1125,0},
									1
								},
								
								{
									"Level0",
									{0.15000001,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.1875,0},
									1
								},
								
								{
									"Level0",
									{0.22499999,0},
									1
								}
							};
						};
					};
					class HorizonIndicatorBackground
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								{0.00059999502,0.12},
								1
							},
							
							{
								{0.1294,0.12},
								1
							}
						};
					};
					class HorizonIndicator
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"HorizonIndicatorBank",
								{-0.055199999,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.046,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.045434199,0.0079856003},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.043226201,0.015732},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.039836001,0.023},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.035236001,0.029568801},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.029568801,0.035236001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.023,0.039836001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.015732,0.043226201},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.0079856003,0.045434199},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0,0.046},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.0079856003,0.045434199},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.015732,0.043226201},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.023,0.039836001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.029568801,0.035236001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.035236001,0.029568801},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.039836001,0.023},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.043226201,0.015732},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.045434199,0.0079856003},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.046,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.055199999,0},
								1
							}
						};
					};
					class RadarBoxes
					{
						type="radar";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0024999999},
								1
							},
							
							{
								{0.0020000001,-0.0024999999},
								1
							},
							
							{
								{0.0020000001,0.0024999999},
								1
							},
							
							{
								{-0.0020000001,0.0024999999},
								1
							},
							
							{
								{-0.0020000001,-0.0024999999},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.025},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.037500001},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.037500001},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.037500001},
									1
								}
							};
						};
					};
					class TargetingPodDir
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,0.0051731099},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,-0.0051731099},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,-0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,-0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,-0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041384902,-0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,-0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,-0.0147318},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.020805599,-0.0051731099},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.020805599,0.0051731202},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041384902,0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,0.0147318},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,0.0051731002},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,-0.0051731202},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,-0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,-0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,-0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041385,-0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,-0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,-0.0147318},
								1
							},
							{},
							{}
						};
					};
					class LAR
					{
						type="group";
						condition="AAmissile";
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.23,0.25},
									1
								},
								
								{
									{0.20999999,0.25},
									1
								},
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.23,0.55000001},
									1
								},
								{},
								
								{
									{0.23,0.47499999},
									1
								},
								
								{
									{0.20999999,0.47499999},
									1
								},
								{},
								
								{
									{0.23,0.40000001},
									1
								},
								
								{
									{0.20999999,0.40000001},
									1
								},
								{},
								
								{
									{0.23,0.32499999},
									1
								},
								
								{
									{0.20999999,0.32499999},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.19,0.56999999},
									1
								},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.20999999,0.55000001},
									1
								},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.19,0.52999997},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.30000001,
										{0.211,0.55000001},
										1
									},
									
									{
										"LarAmmoMax",
										-0.30000001,
										{0.211,0.55000001},
										1
									},
									
									{
										"LarAmmoMax",
										-0.30000001,
										{0.228,0.55000001},
										1
									},
									
									{
										"LarAmmoMin",
										-0.30000001,
										{0.228,0.55000001},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25-0.02)"
								},
								1
							};
							right[]=
							{
								
								{
									"_EVAL(0.21+0.07)",
									"_EVAL(0.25-0.02)"
								},
								1
							};
							down[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25+0.02)"
								},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25-0.02+0.3*0.5)"
								},
								1
							};
							right[]=
							{
								
								{
									"_EVAL(0.21+0.07)",
									"_EVAL(0.25-0.02+0.3*0.5)"
								},
								1
							};
							down[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25+0.02+0.3*0.5)"
								},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.18000001,0.52999997},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.22,0.52999997},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.18000001,0.56999999},
								1
							};
						};
					};
				};
			};
		};
	};

	class JAS_CUP_B_F35B_USMC_AAC : JAS_CUP_B_F35B_USMC
	{
		scope = 2;
		author = "Bohimia Interactive /CUP /-{GOL}-Jason";
		displayname = "F-35J Lightning II (USMC)";
		crew = "B_pilot_F";
		side = 1;
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
		editorPreview = "\ARMA3_CUP_Enhancement_F35\UI\editorpreview\F35B_USMC.jpg";
	};
	class JAS_CUP_B_F35B_RAF_AAC : JAS_CUP_B_F35B_RAF
	{
		scope = 2;
		author = "Bohimia Interactive /CUP /-{GOL}-Jason";
		displayname = "F-35B-J Lightning II (RAF/RN)";
		editorPreview = "\ARMA3_CUP_Enhancement_F35\UI\editorpreview\F35B_RAF.jpg";
		crew = "B_pilot_F";
		side = 1;
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
	};

	/*class JAS_F35_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="F-35 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_F35_Loadout";
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
						name="AIM-9X";
						value=1;
					};
					class hp1_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp1_TGP
					{
						name="Sniper XR Pod";
						value=3;
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
						name="AIM-9X";
						value=1;
					};
					class hp2_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp2_TGP
					{
						name="Sniper XR Pod";
						value=3;
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
					class hp3_AIM9
					{
						name="AIM-9X";
						value=1;
					};
					class hp3_AIM120
					{
						name="AIM-120";
						value=2;
					};
					class hp3_65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp3_65G
					{
						name="AGM-65G";
						value=4;
					};
					class hp3_65L
					{
						name="AGM-65L";
						value=5;
					};
					class hp3_88
					{
						name="AGM-88 HARM";
						value=6;
					};
					class hp3_10
					{
						name="GBU-10";
						value=7;
					};
					class hp3_12
					{
						name="GBU-12";
						value=8;
					};
					class hp3_E12
					{
						name="EGBU-12 II";
						value=9;
					};
					class hp3_24A
					{
						name="GBU-24A";
						value=10;
					};
					class hp3_24B
					{
						name="GBU-24B";
						value=11;
					};
					class hp3_24118
					{
						name="GBU-24/118";
						value=12;
					};
					class hp3_31
					{
						name="GBU-31";
						value=13;
					};
					class hp3_32
					{
						name="GBU-32";
						value=14;
					};
					class hp3_38
					{
						name="GBU-38";
						value=15;
					};
					class hp3_54
					{
						name="GBU-54";
						value=16;
					};
					class hp3_87
					{
						name="CBU-87 CEM";
						value=17;
					};
					class hp3_89
					{
						name="CBU-89 GATOR";
						value=18;
					};
					class hp3_97
					{
						name="CBU-97 SFW";
						value=19;
					};
					class hp3_103
					{
						name="CBU-103 CEM WCMD";
						value=20;
					};
					class hp3_105
					{
						name="CBU-105 SFW WCMD";
						value=21;
					};
					class hp3_154A
					{
						name="AGM-154A JSOW";
						value=22;
					};
					class hp3_154C
					{
						name="AGM-154C JSOW";
						value=23;
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
					class hp4_AIM9
					{
						name="AIM-9X";
						value=1;
					};
					class hp4_AIM120
					{
						name="AIM-120";
						value=2;
					};
					class hp4_65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp4_65G
					{
						name="AGM-65G";
						value=4;
					};
					class hp4_65L
					{
						name="AGM-65L";
						value=5;
					};
					class hp4_88
					{
						name="AGM-88 HARM";
						value=6;
					};
					class hp4_10
					{
						name="GBU-10";
						value=7;
					};
					class hp4_12
					{
						name="GBU-12";
						value=8;
					};
					class hp4_E12
					{
						name="EGBU-12 II";
						value=9;
					};
					class hp4_24A
					{
						name="GBU-24A";
						value=10;
					};
					class hp4_24B
					{
						name="GBU-24B";
						value=11;
					};
					class hp4_24118
					{
						name="GBU-24/118";
						value=12;
					};
					class hp4_31
					{
						name="GBU-31";
						value=13;
					};
					class hp4_32
					{
						name="GBU-32";
						value=14;
					};
					class hp4_38
					{
						name="GBU-38";
						value=15;
					};
					class hp4_54
					{
						name="GBU-54";
						value=16;
					};
					class hp4_87
					{
						name="CBU-87 CEM";
						value=17;
					};
					class hp4_89
					{
						name="CBU-89 GATOR";
						value=18;
					};
					class hp4_97
					{
						name="CBU-97 SFW";
						value=19;
					};
					class hp4_103
					{
						name="CBU-103 CEM WCMD";
						value=20;
					};
					class hp4_105
					{
						name="CBU-105 SFW WCMD";
						value=21;
					};
					class hp4_154A
					{
						name="AGM-154A JSOW";
						value=22;
					};
					class hp4_154C
					{
						name="AGM-154C JSOW";
						value=23;
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
					class hp5_AIM9
					{
						name="AIM-9X";
						value=1;
					};
					class hp5_AIM120
					{
						name="AIM-120";
						value=2;
					};
					class hp5_65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp5_65G
					{
						name="AGM-65G";
						value=4;
					};
					class hp5_65L
					{
						name="AGM-65L";
						value=5;
					};
					class hp5_88
					{
						name="AGM-88 HARM";
						value=6;
					};
					class hp5_10
					{
						name="GBU-10";
						value=7;
					};
					class hp5_12
					{
						name="GBU-12";
						value=8;
					};
					class hp5_E12
					{
						name="EGBU-12 II";
						value=9;
					};
					class hp5_24A
					{
						name="GBU-24A";
						value=10;
					};
					class hp5_24B
					{
						name="GBU-24B";
						value=11;
					};
					class hp5_24118
					{
						name="GBU-24/118";
						value=12;
					};
					class hp5_31
					{
						name="GBU-31";
						value=13;
					};
					class hp5_32
					{
						name="GBU-32";
						value=14;
					};
					class hp5_38
					{
						name="GBU-38";
						value=15;
					};
					class hp5_54
					{
						name="GBU-54";
						value=16;
					};
					class hp5_87
					{
						name="CBU-87 CEM";
						value=17;
					};
					class hp5_89
					{
						name="CBU-89 GATOR";
						value=18;
					};
					class hp5_97
					{
						name="CBU-97 SFW";
						value=19;
					};
					class hp5_103
					{
						name="CBU-103 CEM WCMD";
						value=20;
					};
					class hp5_105
					{
						name="CBU-105 SFW WCMD";
						value=21;
					};
					class hp5_droptank
					{
						name="Fuel Tank";
						value=22;
					};
					class hp5_154A
					{
						name="AGM-154A JSOW";
						value=23;
					};
					class hp5_154C
					{
						name="AGM-154C JSOW";
						value=24;
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
					class hp6_AIM9
					{
						name="AIM-9X";
						value=1;
					};
					class hp6_AIM120
					{
						name="AIM-120";
						value=2;
					};
					class hp6_65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp6_65G
					{
						name="AGM-65G";
						value=4;
					};
					class hp6_65L
					{
						name="AGM-65L";
						value=5;
					};
					class hp6_88
					{
						name="AGM-88 HARM";
						value=6;
					};
					class hp6_10
					{
						name="GBU-10";
						value=7;
					};
					class hp6_12
					{
						name="GBU-12";
						value=8;
					};
					class hp6_E12
					{
						name="EGBU-12 II";
						value=9;
					};
					class hp6_24A
					{
						name="GBU-24A";
						value=10;
					};
					class hp6_24B
					{
						name="GBU-24B";
						value=11;
					};
					class hp6_24118
					{
						name="GBU-24/118";
						value=12;
					};
					class hp6_31
					{
						name="GBU-31";
						value=13;
					};
					class hp6_32
					{
						name="GBU-32";
						value=14;
					};
					class hp6_38
					{
						name="GBU-38";
						value=15;
					};
					class hp6_54
					{
						name="GBU-54";
						value=16;
					};
					class hp6_87
					{
						name="CBU-87 CEM";
						value=17;
					};
					class hp6_89
					{
						name="CBU-89 GATOR";
						value=18;
					};
					class hp6_97
					{
						name="CBU-97 SFW";
						value=19;
					};
					class hp6_103
					{
						name="CBU-103 CEM WCMD";
						value=20;
					};
					class hp6_105
					{
						name="CBU-105 SFW WCMD";
						value=21;
					};
					class hp6_droptank
					{
						name="Fuel Tank";
						value=22;
					};
					class hp6_154A
					{
						name="AGM-154A JSOW";
						value=23;
					};
					class hp6_154C
					{
						name="AGM-154C JSOW";
						value=24;
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
					class hp7_120
					{
						name="AIM-120";
						value=1;
					};
					class hp7_12
					{
						name="GBU-12";
						value=2;
					};
					class hp7_E12
					{
						name="EGBU-12 II";
						value=3;
					};
					class hp7_38
					{
						name="GBU-38";
						value=4;
					};
					class hp7_54
					{
						name="GBU-54";
						value=5;
					};
					class hp7_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp7_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp7_87
					{
						name="CBU-87 CEM";
						value=8;
					};
					class hp7_89
					{
						name="CBU-89 GATOR";
						value=9;
					};
					class hp7_97
					{
						name="CBU-97 SFW";
						value=10;
					};
					class hp7_103
					{
						name="CBU-103 CEM WCMD";
						value=11;
					};
					class hp7_105
					{
						name="CBU-105 SFW WCMD";
						value=12;
					};
					class hp7_39
					{
						name="GBU-39 SDB";
						value=13;
					};
					class hp7_53
					{
						name="GBU-53 SDB";
						value=14;
					};
					class hp7_154A
					{
						name="AGM-154A JSOW";
						value=15;
					};
					class hp7_154C
					{
						name="AGM-154C JSOW";
						value=16;
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
					class hp8_120
					{
						name="AIM-120";
						value=1;
					};
					class hp8_12
					{
						name="GBU-12";
						value=2;
					};
					class hp8_E12
					{
						name="EGBU-12 II";
						value=3;
					};
					class hp8_38
					{
						name="GBU-38";
						value=4;
					};
					class hp8_54
					{
						name="GBU-54";
						value=5;
					};
					class hp8_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp8_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp8_87
					{
						name="CBU-87 CEM";
						value=8;
					};
					class hp8_89
					{
						name="CBU-89 GATOR";
						value=9;
					};
					class hp8_97
					{
						name="CBU-97 SFW";
						value=10;
					};
					class hp8_103
					{
						name="CBU-103 CEM WCMD";
						value=11;
					};
					class hp8_105
					{
						name="CBU-105 SFW WCMD";
						value=12;
					};
					class hp8_39
					{
						name="GBU-39 SDB";
						value=13;
					};
					class hp8_53
					{
						name="GBU-53 SDB";
						value=14;
					};
					class hp8_154A
					{
						name="AGM-154A JSOW";
						value=15;
					};
					class hp8_154C
					{
						name="AGM-154C JSOW";
						value=16;
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
					class hp9_120
					{
						name="AIM-120";
						value=1;
					};
					class hp9_12
					{
						name="GBU-12";
						value=2;
					};
					class hp9_E12
					{
						name="EGBU-12 II";
						value=3;
					};
					class hp9_38
					{
						name="GBU-38";
						value=4;
					};
					class hp9_54
					{
						name="GBU-54";
						value=5;
					};
					class hp9_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp9_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp9_87
					{
						name="CBU-87 CEM";
						value=8;
					};
					class hp9_89
					{
						name="CBU-89 GATOR";
						value=9;
					};
					class hp9_97
					{
						name="CBU-97 SFW";
						value=10;
					};
					class hp9_103
					{
						name="CBU-103 CEM WCMD";
						value=11;
					};
					class hp9_105
					{
						name="CBU-105 SFW WCMD";
						value=12;
					};
					class hp9_39
					{
						name="GBU-39 SDB";
						value=13;
					};
					class hp9_53
					{
						name="GBU-53 SDB";
						value=14;
					};
					class hp9_154A
					{
						name="AGM-154A JSOW";
						value=15;
					};
					class hp9_154C
					{
						name="AGM-154C JSOW";
						value=16;
					};
				};
			};
			class HP10
			{
				displayName="Hardpoint 10";
				description="Select Weapon for HP10";
				typeName="NUMBER";
				class values
				{
					class hp10_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp10_120
					{
						name="AIM-120";
						value=1;
					};
					class hp10_12
					{
						name="GBU-12";
						value=2;
					};
					class hp10_E12
					{
						name="EGBU-12 II";
						value=3;
					};
					class hp10_38
					{
						name="GBU-38";
						value=4;
					};
					class hp10_54
					{
						name="GBU-54";
						value=5;
					};
					class hp10_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp10_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp10_87
					{
						name="CBU-87 CEM";
						value=8;
					};
					class hp10_89
					{
						name="CBU-89 GATOR";
						value=9;
					};
					class hp10_97
					{
						name="CBU-97 SFW";
						value=10;
					};
					class hp10_103
					{
						name="CBU-103 CEM WCMD";
						value=11;
					};
					class hp10_105
					{
						name="CBU-105 SFW WCMD";
						value=12;
					};
					class hp10_39
					{
						name="GBU-39 SDB";
						value=13;
					};
					class hp10_53
					{
						name="GBU-53 SDB";
						value=14;
					};
					class hp10_154A
					{
						name="AGM-154A JSOW";
						value=15;
					};
					class hp10_154C
					{
						name="AGM-154C JSOW";
						value=16;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="F-35 Loadout Module";
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
	class JAS_F35RAF_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="F-35 RAF Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_F35RAF_Loadout";
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
						name="ASRAAM";
						value=1;
					};
					class hp1_aim120
					{
						name="Meteor";
						value=2;
					};
					class hp1_brim
					{
						name="Brimstone";
						value=3;
					};
					class hp1_TGP
					{
						name="Sniper XR Pod";
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
						name="ASRAAM";
						value=1;
					};
					class hp2_aim120
					{
						name="Meteor";
						value=2;
					};
					class hp2_brim
					{
						name="Brimstone";
						value=3;
					};
					class hp2_TGP
					{
						name="Sniper XR Pod";
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
					class hp3_AIM9
					{
						name="ASRAAM";
						value=1;
					};
					class hp3_AIM120
					{
						name="Meteor";
						value=2;
					};
					class hp3_brim
					{
						name="Brimstone";
						value=3;
					};
					class hp3_88
					{
						name="AGM-88 HARM";
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
					class hp3_E12
					{
						name="EGBU-12 IV";
						value=7;
					};
					class hp3_24A
					{
						name="GBU-24A";
						value=8;
					};
					class hp3_24B
					{
						name="GBU-24B";
						value=9;
					};
					class hp3_24118
					{
						name="GBU-24/118";
						value=10;
					};
					class hp3_31
					{
						name="GBU-31";
						value=11;
					};
					class hp3_32
					{
						name="GBU-32";
						value=12;
					};
					class hp3_38
					{
						name="GBU-38";
						value=13;
					};
					class hp3_54
					{
						name="GBU-54";
						value=14;
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
					class hp4_AIM9
					{
						name="ASRAAM";
						value=1;
					};
					class hp4_AIM120
					{
						name="Meteor";
						value=2;
					};
					class hp4_brim
					{
						name="Brimstone";
						value=3;
					};
					class hp4_88
					{
						name="AGM-88 HARM";
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
					class hp4_E12
					{
						name="EGBU-12 IV";
						value=7;
					};
					class hp4_24A
					{
						name="GBU-24A";
						value=8;
					};
					class hp4_24B
					{
						name="GBU-24B";
						value=9;
					};
					class hp4_24118
					{
						name="GBU-24/118";
						value=10;
					};
					class hp4_31
					{
						name="GBU-31";
						value=11;
					};
					class hp4_32
					{
						name="GBU-32";
						value=12;
					};
					class hp4_38
					{
						name="GBU-38";
						value=13;
					};
					class hp4_54
					{
						name="GBU-54";
						value=14;
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
					class hp5_AIM9
					{
						name="ASRAAM";
						value=1;
					};
					class hp5_AIM120
					{
						name="Meteor";
						value=2;
					};
					class hp5_brim
					{
						name="Brimstone";
						value=3;
					};
					class hp5_88
					{
						name="AGM-88 HARM";
						value=4;
					};
					class hp5_10
					{
						name="GBU-10";
						value=5;
					};
					class hp5_12
					{
						name="GBU-12";
						value=6;
					};
					class hp5_E12
					{
						name="EGBU-12 IV";
						value=7;
					};
					class hp5_24A
					{
						name="GBU-24A";
						value=8;
					};
					class hp5_24B
					{
						name="GBU-24B";
						value=9;
					};
					class hp5_24118
					{
						name="GBU-24/118";
						value=10;
					};
					class hp5_31
					{
						name="GBU-31";
						value=11;
					};
					class hp5_32
					{
						name="GBU-32";
						value=12;
					};
					class hp5_38
					{
						name="GBU-38";
						value=13;
					};
					class hp4_54
					{
						name="GBU-54";
						value=14;
					};
					class hp5_droptank
					{
						name="Fuel Tank";
						value=15;
					};
					class hp5_storm
					{
						name="Storm Shadow";
						value=16;
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
					class hp6_AIM9
					{
						name="ASRAAM";
						value=1;
					};
					class hp6_AIM120
					{
						name="Meteor";
						value=2;
					};
					class hp6_brim
					{
						name="Brimstone";
						value=3;
					};
					class hp6_88
					{
						name="AGM-88 HARM";
						value=4;
					};
					class hp6_10
					{
						name="GBU-10";
						value=5;
					};
					class hp6_12
					{
						name="GBU-12";
						value=6;
					};
					class hp6_E12
					{
						name="EGBU-12 IV";
						value=7;
					};
					class hp6_24A
					{
						name="GBU-24A";
						value=8;
					};
					class hp6_24B
					{
						name="GBU-24B";
						value=9;
					};
					class hp6_24118
					{
						name="GBU-24/118";
						value=10;
					};
					class hp6_31
					{
						name="GBU-31";
						value=11;
					};
					class hp6_32
					{
						name="GBU-32";
						value=12;
					};
					class hp6_38
					{
						name="GBU-38";
						value=13;
					};
					class hp6_54
					{
						name="GBU-54";
						value=14;
					};
					class hp6_droptank
					{
						name="Fuel Tank";
						value=15;
					};
					class hp6_storm
					{
						name="Storm Shadow";
						value=16;
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
					class hp7_ASRAAM
					{
						name="ASRAAM";
						value=1;
					};
					class hp7_12
					{
						name="GBU-12";
						value=2;
					};
					class hp7_E12
					{
						name="EGBU-12 IV";
						value=3;
					};
					class hp7_38
					{
						name="GBU-38";
						value=4;
					};
					class hp7_54
					{
						name="GBU-54";
						value=5;
					};
					class hp7_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp7_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp7_39
					{
						name="GBU-39 SDB";
						value=8;
					};
					class hp7_53
					{
						name="GBU-53 SDB";
						value=9;
					};
					class hp7_brim
					{
						name="Brimstone";
						value=10;
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
					class hp8_ASRAAM
					{
						name="ASRAAM";
						value=1;
					};
					class hp8_12
					{
						name="GBU-12";
						value=2;
					};
					class hp8_E12
					{
						name="EGBU-12 IV";
						value=3;
					};
					class hp8_38
					{
						name="GBU-38";
						value=4;
					};
					class hp8_54
					{
						name="GBU-54";
						value=5;
					};
					class hp8_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp8_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp8_39
					{
						name="GBU-39 SDB";
						value=8;
					};
					class hp8_53
					{
						name="GBU-53 SDB";
						value=9;
					};
					class hp8_brim
					{
						name="Brimstone";
						value=10;
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
					class hp9_ASRAAM
					{
						name="ASRAAM";
						value=1;
					};
					class hp9_12
					{
						name="GBU-12";
						value=2;
					};
					class hp9_E12
					{
						name="EGBU-12 IV";
						value=3;
					};
					class hp9_38
					{
						name="GBU-38";
						value=4;
					};
					class hp9_54
					{
						name="GBU-54";
						value=5;
					};
					class hp9_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp9_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp9_39
					{
						name="GBU-39 SDB";
						value=8;
					};
					class hp9_53
					{
						name="GBU-53 SDB";
						value=9;
					};
					class hp9_brim
					{
						name="Brimstone";
						value=10;
					};
				};
			};
			class HP10
			{
				displayName="Hardpoint 10";
				description="Select Weapon for HP10";
				typeName="NUMBER";
				class values
				{
					class hp10_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp10_ASRAAM
					{
						name="ASRAAM";
						value=1;
					};
					class hp10_12
					{
						name="GBU-12";
						value=2;
					};
					class hp10_E12
					{
						name="EGBU-12 IV";
						value=3;
					};
					class hp10_38
					{
						name="GBU-38";
						value=4;
					};
					class hp10_54
					{
						name="GBU-54";
						value=5;
					};
					class hp10_82s
					{
						name="Mk82 Snakeye";
						value=6;
					};
					class hp10_82
					{
						name="Mk82 GPB";
						value=7;
					};
					class hp10_39
					{
						name="GBU-39 SDB";
						value=8;
					};
					class hp10_53
					{
						name="GBU-53 SDB";
						value=9;
					};
					class hp10_brim
					{
						name="Brimstone";
						value=10;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="F-35 RAF Loadout Module";
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
	};*/
};
