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
/*class CfgFunctions
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
};*/
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
		model="\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		accuracy=1000;
		threat[]={1,0.69999999,1};
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_CMLauncher",
			"JAS_FIR_GAU12"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"JAS_FIR_GAU12_300rnd_M"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_usmc_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_usmc_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_AV8B\data\ui\CUP_AV8B_3DEN_ca.paa";
				class presets
				{
					class EMPTY
					{
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							""
						};
						displayName="Empty";
					};
					class CAP
					{
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM120C_PYLON_M",
							"JAS_FIR_AV8B_Fueltank_R_P_1rnd_M",
							"JAS_FIR_AV8B_Fueltank_L_P_1rnd_M",
							"JAS_FIR_AIM120C_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
						displayName="Combat Air Patrol";
					};
					class FIGHTER
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM120C_PYLON_M",
							"JAS_FIR_AIM120C_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="Fighter Sweep";
					};
					class SEADAR
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="Anti-Radar";
					};
					class SEADGP
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_gbu54_PYLON_M",
							"JAS_FIR_gbu54_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="SEAD";
					};
					class CAS
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_PylonRack_3Rnd_MAV_L",
							"JAS_FIR_GBU12_P_3rnd_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="Multi-Role CAS";
					};
					class CASAT
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M",
							"JAS_PylonRack_3Rnd_MAV_L",
							"JAS_PylonRack_3Rnd_MAV_L",
							"JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="AT CAS";
					};
					class CASBOMB
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_CBU87_PYLON_M",
							"JAS_FIR_CBU89_PYLON_M",
							"JAS_FIR_CBU89_PYLON_M",
							"JAS_FIR_CBU87_PYLON_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="Area Denial CAS";
					};
					class BAI
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_CBU87_PYLON_M",
							"JAS_FIR_GBU12_P_3rnd_M",
							"JAS_FIR_GBU12_P_3rnd_M",
							"JAS_FIR_CBU87_PYLON_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="BAI Infrastructure";
					};
					class BAI2
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_CBU97_PYLON_M",
							"JAS_PylonRack_3Rnd_MAV_D",
							"JAS_PylonRack_3Rnd_MAV_D",
							"JAS_FIR_CBU97_PYLON_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="BAI Tank Buster";
					};
					class BAI3
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_FIR_GBU32_PYLON_M",
							"JAS_FIR_GBU32_PYLON_M",
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="BAI Buildings";
					};
					class BAI4
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_GBU24B_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_GBU24B_PYLON_M",
							"JAS_FIR_Litening_std_P_1rnd_M"
						};
						displayName="BAI Bunker Buster";
					};
				};
				class pylons
				{
					class RightWingOut
					{
						attachment="JAS_FIR_AIM9L_PYLON_M";
						hardpoints[]=
						{
							"JAS_AV8_OUT"
						};
						maxweight=300;
						priority=5;
						UIposition[]=
						{
							"0.3+0.04",
							"0.10+0.0"
						};
					};
					class RightWingMid: RightWingOut
					{
						attachment="JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M";
						hardpoints[]=
						{
							"JAS_AV8_MID",
							"JAS_AV8_FUELR"
						};
						maxweight=1050;
						priority=4;
						UIposition[]=
						{
							"0.3+0.03",
							"0.10+0.05"
						};
					};
					class RightWingIn: RightWingOut
					{
						attachment="JAS_FIR_Mk82_GP_P_3rnd_M";
						hardpoints[]=
						{
							"JAS_AV8_IN",
							"JAS_AV8_FUELR"
						};
						maxweight=1200;
						priority=3;
						UIposition[]=
						{
							"0.3+0.02",
							"0.10+0.10"
						};
					};
					class LeftWingIn: RightWingIn
					{
						mirroredMissilePos=3;
						hardpoints[]=
						{
							"JAS_AV8_IN",
							"JAS_AV8_FUELL"
						};
						UIposition[]=
						{
							"0.3+0.02",
							"0.10+0.24"
						};
					};
					class LeftWingMid: RightWingMid
					{
						attachment="JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M";
						mirroredMissilePos=2;
						hardpoints[]=
						{
							"JAS_AV8_MID",
							"JAS_AV8_FUELL"
						};
						UIposition[]=
						{
							"0.3+0.03",
							"0.10+0.29"
						};
					};
					class LeftWingOut: RightWingOut
					{
						mirroredMissilePos=1;
						attachment="JAS_FIR_AIM9L_PYLON_M";
						UIposition[]=
						{
							"0.3+0.04",
							"0.10+0.34"
						};
					};
				};
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				//topLeft="HUD_top_left";
				//topRight="HUD_top_right";
				//bottomLeft="HUD_bottom_left";
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=1;
				class Bones
				{
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};

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

					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.81089699},
								1
							};
							right[]=
							{
								{0.995,0.81089699},
								1
							};
							down[]=
							{
								{0.935,0.86004299},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.81089699},
								1
							};
							right[]=
							{
								{0.97000003,0.81089699},
								1
							};
							down[]=
							{
								{0.94999999,0.86004299},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.81089699},
								1
							};
							right[]=
							{
								{1.02,0.81089699},
								1
							};
							down[]=
							{
								{0.95999998,0.86004299},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};

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

			/*class statichud
			{
				enableParallax=0;
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.48500001,0.40000001};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0.30000001,0.050000001,0.30000001};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.4975,0.38};
					};
					class Center
					{
						type="fixed";
						pos[]=
						{
							0.4975,
							"(0.383)"
						};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.38299999};
						pos10[]={1.47,1.483};
					};
					class ASL_Instrument
					{
						type="rotational";
						source="altitudeASL";
						center[]={0.89999998,0.340206};
						min=0;
						max=20000;
						minAngle=0;
						maxAngle=72000;
						aspectRatio=1.13402;
					};
					class Speed_Instrument: ASL_Instrument
					{
						source="speed";
						center[]={0.1,0.340206};
						max=555.55603;
						maxAngle=7200;
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.4975,0.38};
						min=-0.52359998;
						max=0.52359998;
						minAngle=159.25;
						maxAngle=200.75;
						aspectRatio=1;
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.40000001};
						pos3[]={0.722,0.40000001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.61000001};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.4975,0.38};
						pos10[]={1.4675,1.48};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class draw
				{
					alpha=0.30000001;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								{-0.079999998,0},
								1
							},
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.015,0.028378399},
								1
							},
							
							{
								"PlaneW",
								{0,0},
								1
							},
							
							{
								"PlaneW",
								{0.015,0.028378399},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{0.079999998,0},
								1
							}
						};
					};
					class HorizonBankRot
					{
						type="line";
						points[]=
						{
							
							{
								"HorizonBankRot",
								{0,0.396907},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.419588},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.419588},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.396907},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0,0};
						clipBR[]={1,1};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.2,0},
										1
									},
									
									{
										"Level0",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.050000001,0},
										1
									},
									
									{
										"Level0",
										{0.2,0},
										1
									}
								};
							};
							class VALM_1_0
							{
								type="text";
								source="static";
								text=0;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									{-0.23,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{-0.13,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{-0.23,0.025},
									1
								};
							};
							class VALM_2_0: VALM_1_0
							{
								align="right";
								pos[]=
								{
									"Level0",
									{0.22,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{0.31999999,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{0.22,0.025},
									1
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM5",
										{-0.2,0},
										1
									},
									
									{
										"LevelM5",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_5: VALM_1_5
							{
								align="right";
								pos[]=
								{
									"LevelM5",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.22,-0.035},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP5",
										{-0.2,0},
										1
									},
									
									{
										"LevelP5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_5: VALP_1_5
							{
								align="right";
								pos[]=
								{
									"LevelP5",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.22,-0.035},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM15",
										{-0.2,0},
										1
									},
									
									{
										"LevelM15",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_15: VALM_1_15
							{
								align="right";
								pos[]=
								{
									"LevelM15",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.22,-0.035},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP15",
										{-0.2,0},
										1
									},
									
									{
										"LevelP15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_15: VALP_1_15
							{
								align="right";
								pos[]=
								{
									"LevelP15",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.22,-0.035},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM25",
										{-0.2,0},
										1
									},
									
									{
										"LevelM25",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_25: VALM_1_25
							{
								align="right";
								pos[]=
								{
									"LevelM25",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.22,-0.035},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP25",
										{-0.2,0},
										1
									},
									
									{
										"LevelP25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_25: VALP_1_25
							{
								align="right";
								pos[]=
								{
									"LevelP25",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.22,-0.035},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM35",
										{-0.2,0},
										1
									},
									
									{
										"LevelM35",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_35: VALM_1_35
							{
								align="right";
								pos[]=
								{
									"LevelM35",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.22,-0.035},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP35",
										{-0.2,0},
										1
									},
									
									{
										"LevelP35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_35: VALP_1_35
							{
								align="right";
								pos[]=
								{
									"LevelP35",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.22,-0.035},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM45",
										{-0.2,0},
										1
									},
									
									{
										"LevelM45",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_45: VALM_1_45
							{
								align="right";
								pos[]=
								{
									"LevelM45",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.22,-0.035},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP45",
										{-0.2,0},
										1
									},
									
									{
										"LevelP45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_45: VALP_1_45
							{
								align="right";
								pos[]=
								{
									"LevelP45",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.22,-0.035},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.22,0.085000001},
									1
								};
							};
						};
					};
					class PlaneHeading
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.0189189},
								1
							},
							
							{
								"Velocity",
								{0.014,-0.0132432},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.014,0.0132432},
								1
							},
							
							{
								"Velocity",
								{0,0.0189189},
								1
							},
							
							{
								"Velocity",
								{-0.014,0.0132432},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.014,-0.0132432},
								1
							},
							
							{
								"Velocity",
								{0,-0.0189189},
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
								{0,-0.0378378},
								1
							},
							
							{
								"Velocity",
								{0,-0.0189189},
								1
							},
							{}
						};
					};
					class Static
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								{0.20999999,0.51999998},
								1
							},
							
							{
								{0.19,0.5},
								1
							},
							
							{
								{0.20999999,0.47999999},
								1
							},
							{},
							
							{
								{0.18000001,0.2},
								1
							},
							
							{
								{0.18000001,0.85000002},
								1
							},
							{},
							
							{
								{0.79000002,0.51999998},
								1
							},
							
							{
								{0.81,0.5},
								1
							},
							
							{
								{0.79000002,0.47999999},
								1
							},
							{},
							
							{
								{0.81999999,0.2},
								1
							},
							
							{
								{0.81999999,0.85000002},
								1
							},
							{},
							
							{
								
								{
									0.51999998,
									"0.08+0.01"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.06+0.01"
								},
								1
							},
							
							{
								
								{
									0.47999999,
									"0.08+0.01"
								},
								1
							},
							{},
							
							{
								
								{
									0.2,
									"0.055+0.01"
								},
								1
							},
							
							{
								
								{
									0.80000001,
									"0.055+0.01"
								},
								1
							},
							{}
						};
					};
					class SpeedNumberbox
					{
						class Text
						{
							type="text";
							source="static";
							text="SPD";
							align="right";
							scale=1;
							pos[]=
							{
								{0.2,0.311856},
								1
							};
							right[]=
							{
								{0.25999999,0.311856},
								1
							};
							down[]=
							{
								{0.2,0.36855701},
								1
							};
						};
						class Box
						{
							type="line";
							points[]=
							{
								
								{
									{0.18000001,0.36855701},
									1
								},
								
								{
									{-1,0.36855701},
									1
								},
								
								{
									{-1,0.311856},
									1
								},
								
								{
									{0.18000001,0.311856},
									1
								},
								
								{
									{0.18000001,0.36855701},
									1
								}
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							{0.1,0.311856},
							1
						};
						right[]=
						{
							{0.16,0.311856},
							1
						};
						down[]=
						{
							{0.1,0.36855701},
							1
						};
					};
					class AltNumberASL
					{
						class Text
						{
							type="text";
							source="static";
							text="ASL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.80000001,0.311856},
								1
							};
							right[]=
							{
								{0.86000001,0.311856},
								1
							};
							down[]=
							{
								{0.80000001,0.36855701},
								1
							};
						};
						class Box
						{
							type="line";
							points[]=
							{
								
								{
									{0.81999999,0.36855701},
									1
								},
								
								{
									{1,0.36855701},
									1
								},
								
								{
									{1,0.311856},
									1
								},
								
								{
									{0.81999999,0.311856},
									1
								},
								
								{
									{0.81999999,0.36855701},
									1
								}
							};
						};
					};
					class AltNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.89999998,0.311856},
							1
						};
						right[]=
						{
							{0.95999998,0.311856},
							1
						};
						down[]=
						{
							{0.89999998,0.36855701},
							1
						};
					};
					class AltNumberAGL
					{
						class Text
						{
							type="text";
							source="static";
							text="AGL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.80000001,0.53865999},
								1
							};
							right[]=
							{
								{0.86000001,0.53865999},
								1
							};
							down[]=
							{
								{0.80000001,0.59536099},
								1
							};
						};
						class Box
						{
							type="line";
							points[]=
							{
								
								{
									{0.81999999,0.59536099},
									1
								},
								
								{
									{1,0.59536099},
									1
								},
								
								{
									{1,0.53865999},
									1
								},
								
								{
									{0.81999999,0.53865999},
									1
								},
								
								{
									{0.81999999,0.59536099},
									1
								}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.89999998,0.53865999},
								1
							};
							right[]=
							{
								{0.95999998,0.53865999},
								1
							};
							down[]=
							{
								{0.89999998,0.59536099},
								1
							};
						};
					};
					class Gear
					{
						condition="ils";
						color[]={0,0.125,0};
						class Text
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.99000001,0.82216501},
								1
							};
							right[]=
							{
								{1.05,0.82216501},
								1
							};
							down[]=
							{
								{0.99000001,0.87886602},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						color[]={0,0.125,0};
						class Text
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.99000001,0.87886602},
								1
							};
							right[]=
							{
								{1.05,0.87886602},
								1
							};
							down[]=
							{
								{0.99000001,0.93556702},
								1
							};
						};
					};
					class Lights
					{
						condition="lights";
						color[]={0,0.125,0};
						class Text
						{
							type="text";
							source="static";
							text="LIGHTS";
							align="right";
							scale=1;
							pos[]=
							{
								{0.0099999998,0.82216501},
								1
							};
							right[]=
							{
								{0.07,0.82216501},
								1
							};
							down[]=
							{
								{0.0099999998,0.87886602},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						color[]={0,0.125,0};
						class Text
						{
							type="text";
							source="static";
							text="ANTI-COL";
							align="right";
							scale=1;
							pos[]=
							{
								{0.0099999998,0.87886602},
								1
							};
							right[]=
							{
								{0.07,0.87886602},
								1
							};
							down[]=
							{
								{0.0099999998,0.93556702},
								1
							};
						};
					};
					class Stall
					{
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.204124},
								1
							};
							right[]=
							{
								{0.56,0.204124},
								1
							};
							down[]=
							{
								{0.5,0.26082501},
								1
							};
						};
					};
					class Ammo
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.82216501},
							1
						};
						right[]=
						{
							{0.56,0.82216501},
							1
						};
						down[]=
						{
							{0.5,0.87886602},
							1
						};
					};
					class Weapons
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.87886602},
							1
						};
						right[]=
						{
							{0.56,0.87886602},
							1
						};
						down[]=
						{
							{0.5,0.93556702},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="Heading";
						sourceScale=0.1;
						top=0.2;
						center=0.5;
						bottom=0.80000001;
						lineXleft=0.102062;
						lineYright=0.0907216;
						lineXleftMajor=0.102062;
						lineYrightMajor=0.079381399;
						majorLineEach=5;
						numberEach=5;
						step=0.2;
						StepSize=0.029999999;
						align="center";
						scale=1;
						pos[]={0.2,0.0198454};
						right[]={0.25999999,0.0198454};
						down[]={0.2,0.076546401};
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
										{0,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0.12,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{-0.12,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.227027},
										1
									},
									
									{
										"ILS_H",
										{0,0.227027},
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
										{0.024,0.113514},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.113514},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.227027},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.227027},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.113514},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.113514},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.227027},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.227027},
										1
									}
								};
							};
						};
					};
				};
			};
			class parallaxhud
			{
				enableParallax=1;
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.48500001,0.40000001};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0.30000001,0.050000001,0.30000001};
				class bones
				{
					class WeaponAim: Pos10Vector
					{
						source="weapon";
					};
					class Target: Pos10Vector
					{
						source="target";
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.40000001};
						pos10[]={1.24,1.1};
					};
				};
				class draw
				{
					class RadarTargets
					{
						type="radar";
						pos0[]={0.48500001,0.40000001};
						pos10[]={1.225,1.1};
						points[]=
						{
							
							{
								{-0.050000001,-0.047297299},
								1
							},
							
							{
								{0.050000001,-0.047297299},
								1
							},
							
							{
								{0.050000001,0.047297299},
								1
							},
							
							{
								{-0.050000001,0.047297299},
								1
							},
							
							{
								{-0.050000001,-0.047297299},
								1
							}
						};
					};
					class MGun
					{
						condition="mgun";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.0094594602},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.0094594602},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,-0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{0,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,-0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.066216201},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.132432},
									1
								},
								
								{
									"WeaponAim",
									{0.07,-0.115216},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0.115216},
									1
								},
								
								{
									"WeaponAim",
									{0,0.132432},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0.115216},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,-0.115216},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.132432},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.132432},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.151351},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,-0.11469},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,-0.131074},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,-0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.14,5.7888099e-009},
									1
								},
								
								{
									"WeaponAim",
									{-0.16,6.6157799e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,0.11469},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,0.131074},
									1
								},
								{},
								
								{
									"WeaponAim",
									{1.22392e-008,0.132432},
									1
								},
								
								{
									"WeaponAim",
									{1.39876e-008,0.151351},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,0.11469},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,0.131074},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.14,-1.57924e-009},
									1
								},
								
								{
									"WeaponAim",
									{0.16,-1.80485e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,-0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,-0.11469},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,-0.131074},
									1
								},
								{}
							};
						};
					};
					class Bomb
					{
						condition="bomb";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.094594598},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,-0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{0,0.094594598},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,-0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.094594598},
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
								},
								{},
								
								{
									"Target",
									{0,-0.066216201},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.066216201},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.066216201},
									1
								}
							};
						};
					};
					class AAMissile
					{
						condition="AAmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.236486},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.205743},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,-0.118243},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,0.118243},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.205743},
									1
								},
								
								{
									"WeaponAim",
									{0,0.236486},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.205743},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,0.118243},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,-0.118243},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.205743},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.236486},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.066216201},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.066216201},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.066216201},
									1
								}
							};
						};
					};
					class ATMissile
					{
						condition="ATmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.17027},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,-0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,-0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{0,0.17027},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{-0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,-0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,-0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.17027},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.066216201},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.066216201},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.066216201},
									1
								}
							};
						};
					};
					class Rockets
					{
						condition="Rocket";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.0094594602},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.0094594602},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.113514},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,-0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,-0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{0,0.113514},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{-0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,-0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,-0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.113514},
									1
								},
								{}
							};
						};
					};
				};
			};
			class HUD_Cockpit
			{
				topLeft="HUD LH2";
				topRight="HUD PH2";
				bottomLeft="HUD LD2";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0.30000001,0.050000001,0.30000001};
				enableParallax=0;
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.48500001,0.40000001};
					pos10[]={1.225,1.1};
				};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.48500001,0.40000001};
					};
					class WeaponAim: Pos10Vector
					{
						source="weapon";
					};
					class Target: Pos10Vector
					{
						source="target";
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.40000001};
						pos10[]={1.24,1.1};
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.40000001};
						pos3[]={0.722,0.40000001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.61000001};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.40000001};
						pos10[]={1.24,1.1};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					alpha=0.30000001;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								{-0.079999998,0},
								1
							},
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.015,0.028378399},
								1
							},
							
							{
								"PlaneW",
								{0,0},
								1
							},
							
							{
								"PlaneW",
								{0.015,0.028378399},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{0.079999998,0},
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.0189189},
								1
							},
							
							{
								"Velocity",
								{0.014,-0.0132432},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.014,0.0132432},
								1
							},
							
							{
								"Velocity",
								{0,0.0189189},
								1
							},
							
							{
								"Velocity",
								{-0.014,0.0132432},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.014,-0.0132432},
								1
							},
							
							{
								"Velocity",
								{0,-0.0189189},
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
								{0,-0.0378378},
								1
							},
							
							{
								"Velocity",
								{0,-0.0189189},
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[]={0,0};
						clipBR[]={1,1};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.2,0},
										1
									},
									
									{
										"Level0",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.050000001,0},
										1
									},
									
									{
										"Level0",
										{0.2,0},
										1
									}
								};
							};
							class VALM_1_0
							{
								type="text";
								source="static";
								text=0;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									{-0.23,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{-0.13,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{-0.23,0.025},
									1
								};
							};
							class VALM_2_0: VALM_1_0
							{
								align="right";
								pos[]=
								{
									"Level0",
									{0.22,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{0.31999999,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{0.22,0.025},
									1
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM5",
										{-0.2,0},
										1
									},
									
									{
										"LevelM5",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_5: VALM_1_5
							{
								align="right";
								pos[]=
								{
									"LevelM5",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.22,-0.035},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP5",
										{-0.2,0},
										1
									},
									
									{
										"LevelP5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_5: VALP_1_5
							{
								align="right";
								pos[]=
								{
									"LevelP5",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.22,-0.035},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM15",
										{-0.2,0},
										1
									},
									
									{
										"LevelM15",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_15: VALM_1_15
							{
								align="right";
								pos[]=
								{
									"LevelM15",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.22,-0.035},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP15",
										{-0.2,0},
										1
									},
									
									{
										"LevelP15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_15: VALP_1_15
							{
								align="right";
								pos[]=
								{
									"LevelP15",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.22,-0.035},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM25",
										{-0.2,0},
										1
									},
									
									{
										"LevelM25",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_25: VALM_1_25
							{
								align="right";
								pos[]=
								{
									"LevelM25",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.22,-0.035},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP25",
										{-0.2,0},
										1
									},
									
									{
										"LevelP25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_25: VALP_1_25
							{
								align="right";
								pos[]=
								{
									"LevelP25",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.22,-0.035},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM35",
										{-0.2,0},
										1
									},
									
									{
										"LevelM35",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_35: VALM_1_35
							{
								align="right";
								pos[]=
								{
									"LevelM35",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.22,-0.035},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP35",
										{-0.2,0},
										1
									},
									
									{
										"LevelP35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_35: VALP_1_35
							{
								align="right";
								pos[]=
								{
									"LevelP35",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.22,-0.035},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM45",
										{-0.2,0},
										1
									},
									
									{
										"LevelM45",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_45: VALM_1_45
							{
								align="right";
								pos[]=
								{
									"LevelM45",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.22,-0.035},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP45",
										{-0.2,0},
										1
									},
									
									{
										"LevelP45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_45: VALP_1_45
							{
								align="right";
								pos[]=
								{
									"LevelP45",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.22,-0.035},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.22,0.085000001},
									1
								};
							};
						};
					};
					class AltScale
					{
						type="scale";
						scale=1;
						source="altitudeASL";
						sourceScale=1;
						align="right";
						pos[]={0.86000001,0.81999999};
						right[]={0.94,0.81999999};
						down[]={0.86000001,0.87};
						lineXleft=0.82499999;
						lineYright=0.83499998;
						lineXleftMajor=0.82499999;
						lineYrightMajor=0.84500003;
						bottom=0.2;
						top=0.85000002;
						center=0.5;
						step=20;
						StepSize="(0.85- 0.2)/20";
						horizontal=0;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class SpeedScale
					{
						type="scale";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						align="right";
						pos[]=
						{
							0.059999999,
							"0.82-0.85+0.2"
						};
						right[]=
						{
							0.14,
							"0.82-0.85+0.2"
						};
						down[]=
						{
							0.059999999,
							"0.87-0.85+0.2"
						};
						lineXleft="0.18 + 0.82 - 0.825";
						lineYright="0.18 + 0.82 - 0.835";
						lineXleftMajor="0.18 + 0.82 - 0.825";
						lineYrightMajor="0.18 + 0.82 - 0.845";
						bottom=0.85000002;
						center=0.5;
						top=0.2;
						step=20;
						StepSize="(0.85- 0.2)/20";
						horizontal=0;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class VspeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="vspeed";
						sourceScale=1;
						pos[]=
						{
							
							{
								0.86000001,
								"0.52-0.4"
							},
							1
						};
						right[]=
						{
							
							{
								0.94,
								"0.52-0.4"
							},
							1
						};
						down[]=
						{
							
							{
								0.86000001,
								"0.57-0.4"
							},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						scale=1;
						source="Heading";
						sourceScale=1;
						align="center";
						pos[]=
						{
							"0.21-0.01",
							0
						};
						right[]=
						{
							"0.29-0.01",
							0
						};
						down[]=
						{
							"0.21-0.01",
							0.050000001
						};
						lineXleft=0.059999999;
						lineYright=0.050000001;
						lineXleftMajor=0.059999999;
						lineYrightMajor=0.039999999;
						bottom=0.80000001;
						center=0.5;
						top=0.2;
						step="18/9";
						StepSize="(0.80- 0.2)/20";
						horizontal=1;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
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
										{0,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0.12,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{-0.12,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.227027},
										1
									},
									
									{
										"ILS_H",
										{0,0.227027},
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
										{0.024,0.113514},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.113514},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.227027},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.227027},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.113514},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.113514},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.227027},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.227027},
										1
									}
								};
							};
						};
					};
				};
			};*/
		};
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
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\jettison\droptanks.sqf"";";
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
			"FIR_CMLauncher"
		};
		magazines[] =
		{
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
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_AV8B\data\ui\CUP_AV8B_3DEN_ca.paa";
				class presets
				{
					class EMPTY
					{
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							"",
							""
						};
						displayName="Empty";
					};
					class FS
					{
						attachment[]=
						{
							"JAS_FIR_SniperXR_2_P_1rnd_M",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="Fighter Sweep";
					};
					class CAP
					{
						attachment[]=
						{
							"JAS_FIR_ECMPod_P_1rnd_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="CAP";
					};
					class CASLIGHT
					{
						attachment[]=
						{
							"JAS_FIR_SniperXR_2_P_1rnd_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="Light CAS";
					};
					class CASHEAVY
					{
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_SniperXR_2_P_1rnd_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="Heavy CAS";
					};
					class CASAT
					{
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_FIR_SniperXR_2_P_1rnd_M",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="AT CAS";
					};
					class STRIKELGB
					{
						attachment[]=
						{
							"JAS_FIR_SniperXR_2_P_1rnd_M",
							"JAS_FIR_GBU24A_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_GBU24A_PYLON_M",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_FIR_GBU24A_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_GBU24A_PYLON_M",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="Strike Bombs";
					};
					class STRIKEFAEB
					{
						attachment[]=
						{
							"JAS_FIR_SniperXR_2_P_1rnd_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_ECMPod_P_1rnd_M"
						};
						displayName="Strike FAEB";
					};
				};
				class pylons
				{
					class RightWingOut
					{
						attachment="JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M";
						hardpoints[]=
						{
							"JAS_GR9_AA"
						};
						maxweight=300;
						priority=5;
						UIposition[]=
						{
							"0.3+0.04",
							"0.01+0.0"
						};
					};
					class RightWingMid: RightWingOut
					{
						attachment="JAS_PylonRack_MAV_L_x1";
						maxweight=1050;
						priority=4;
						hardpoints[]=
						{
							"JAS_GR9_STRIKE"
						};
						UIposition[]=
						{
							"0.3+0.03",
							"0.01+0.05"
						};
					};
					class RightWingGear: RightWingOut
					{
						attachment="JAS_FIR_AIM9L_PYLON_M";
						maxweight=1050;
						priority=3;
						hardpoints[]=
						{
							"JAS_GR9_GEAR"
						};
						UIposition[]=
						{
							"0.3+0.02",
							"0.01+0.10"
						};
					};
					class RightWingIn: RightWingOut
					{
						attachment="JAS_FIR_GBU12_PYLON_M";
						maxweight=1200;
						priority=2;
						hardpoints[]=
						{
							"JAS_GR9_STRIKE"
						};
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.15"
						};
					};
					class Center: RightWingOut
					{
						attachment="JAS_FIR_SniperXR_2_P_1rnd_M";
						maxweight=1200;
						priority=1;
						hardpoints[]=
						{
							"JAS_GR9_CENTRE"
						};
						UIposition[]=
						{
							0.30000001,
							"0.01+0.27"
						};
					};
					class LeftWingIn: RightWingIn
					{
						mirroredMissilePos=4;
						UIposition[]=
						{
							"0.3+0.01",
							"0.01+0.39"
						};
					};
					class LeftWingGear: RightWingGear
					{
						mirroredMissilePos=3;
						UIposition[]=
						{
							"0.3+0.02",
							"0.01+0.44"
						};
					};
					class LeftWingMid: RightWingMid
					{
						mirroredMissilePos=2;
						UIposition[]=
						{
							"0.3+0.03",
							"0.01+0.49"
						};
					};
					class LeftWingOut: RightWingOut
					{
						mirroredMissilePos=1;
						UIposition[]=
						{
							"0.3+0.04",
							"0.01+0.54"
						};
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
			"FIR_CMLauncher"
		};
		magazines[] =
		{
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
	/*class JAS_AV8_Loadout_Module: Module_F
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
	};*/
};
