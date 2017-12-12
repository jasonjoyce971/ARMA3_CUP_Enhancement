class CfgPatches
{
	class ARMA3_CUP_Enhancement_H6
	{
		units[]=
		{
			"JAS_CUP_I_MH6J_AAC",
			"JAS_CUP_I_MH6J_RACS",
			"JAS_CUP_B_MH6J_AAC",
			"JAS_CUP_B_MH6J_USA",
			"JAS_CUP_I_AH6M_AAC",
			"JAS_CUP_I_AH6M_RACS",
			"JAS_CUP_B_AH6M_AAC",
			"JAS_CUP_B_AH6M_USA"
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
		class ARMA3_CUP_Enhancement_H6
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_H6"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_AH6_Init_Function
		{
			class AH6_Loadout
			{
				file="\ARMA3_CUP_Enhancement_H6\sqs\modules\ah6_loadout_module.sqf";
			};
			class AH6_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_H6\sqs\modules\ah6_loadout_module_set.sqf";
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
class Components;
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
class AH6_GUI
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
			text = "ARMA3_CUP_Enhancement_H6\UI\AH6_background.paa";
		};
		/*class AH1_Skin_Button: RscPicture
		{
			idc=1610;
			text="FIR_AirWeaponSystem_US\ui\button_skin.paa";
			x="0.75 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.0875109 * safezoneW";
			h="0.0699973 * safezoneH";
		};*/
		/*class AH1_Skin_Button2: RscButton
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
		};*/
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
		class RscText_1008 : RscText
		{
			idc = 1008;
			text = "select loadout";
			x = "0.73625 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.11375 * safezoneW";
			h = "0.014 * safezoneH";
		};
		class AH6_refuel_Button : RscPicture
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
		class AH6_repair_Button : RscPicture
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
		class AH6_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\AH6_Loadout.sqf""";
		};
		class AH6_Cancel_Button : RscPicture
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
		class AH6_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\AH6_SaveCustom.sqf""";
		};
		class AH6_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\AH6_SaveCustom.sqf""";
		};
		class AH6_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\AH6_SaveCustom.sqf""";
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
class MH6_GUI
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
			text = "ARMA3_CUP_Enhancement_H6\UI\AH6_background.paa";
		};
		/*class AH1_Skin_Button: RscPicture
		{
			idc=1610;
			text="FIR_AirWeaponSystem_US\ui\button_skin.paa";
			x="0.75 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.0875109 * safezoneW";
			h="0.0699973 * safezoneH";
		};*/
		/*class AH1_Skin_Button2: RscButton
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
		};*/
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Configuration";
			x = "0.43 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
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
		class AH6_refuel_Button : RscPicture
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
		class AH6_repair_Button : RscPicture
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
		class AH6_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\MH6_Loadout.sqf""";
		};
		class AH6_Cancel_Button : RscPicture
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
		/*class loadout_combo : RscCombo
		{
			idc = 2108;
			x = "0.745 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};*/
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
	class JAS_CUP_AH6_BASE : Helicopter_Base_H
	{
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
			RTDconfig = "ARMA3_CUP_Enhancement_H6\rotorLib\rtd_cup_ah6.xml";
			autoHoverCorrection[]={-1,2,0};
			defaultCollective=0.63499999;
			maxTorque=900;
			stressDamagePerSec=0.0033333299;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=31000;
			maxTailRotorStress=5200;
			retreatBladeStallWarningSpeed=77.222;
			/*
			autoHoverCorrection[] = { 0.28, 2.88, 0 };
			defaultCollective = 0.635;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			retreatBladeStallWarningSpeed = 77.222;

			// Edits
			//maxMainRotorStress = 31000;
			maxMainRotorStress=45000;
			//maxTailRotorStress = 5200;
			maxTailRotorStress=20200;
			//maxTorque = 900;
			maxTorque = 1200;

			// MELB Features
			throttleOffToIdle=8;
			throttleIdleToOff=6;
			throttleIdleToFull=12;
			throttleFullToIdle=6;
			rtd_center="rtd_center";
			*/
		};
		expansion = 1;
		scope = 0;
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH6\CUP_ah6j.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Picture_ah6j_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Icon_ah6j_CA.paa";
		mapSize = 9;
		displayName = "AH-6J Base";
		destrType = "DestructWreck";
		side = 1;
		//faction = "CUP_B_US_Army";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 1400;
		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.2;
		slingLoadOperator = 1;
		memoryPointDriverOptics = "slingCamera";
		vehicleClass = "Air";
		accuracy = 0.5;
		occludeSoundsWhenIn = "db-5";
		obstructSoundsWhenIn = "db-10";
		driverAction = "CUP_AH6M_Pilot";
		cargoIsCoDriver[] = { 1, 0 };
		ejectDeadCargo = 1;
		cargoAction[] =
		{
			"CUP_AH6j_Cargo",
			"passenger_bench_1"
		};
		Author = "CUP/-{GOL}-Jason";
		class MFD
		{
		};
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		gunnerUsesPilotView = 1;
		castCargoShadow = 1;
		extCameraPosition[] = { 0, 2, -15 };
		transportSoldier = 0;
		threat[] = { 0.60000002, 0.40000001, 0.1 };
		gunBeg[] =
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[] =
		{
			"chamber_1",
			"chamber_2"
		};
		cartridgePos[] =
		{
			"muzzle_1",
			"muzzle_2"
		};
		cartridgeVel[] =
		{
			"chamber_1",
			"chamber_2"
		};
		radarType = 4;
		maxSpeed = 235;
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -86;
			maxAngleY = 86;
			initFov = 0.1;
			minFov = 0.029999999;
			maxFov = 1.2;
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
		armor = 25;
		damageResistance = 0.01039;
		cost = 10000000;
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
				position = "landinglight01_pos";
				direction = "landinglight01_dir";
				hitpoint = "light";
				selection = "Light_L";
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
		};
		class MarkerLights
		{
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
			class GreenBlinking
			{
				name = "pos_light_blink_green";
				color[] = { 0, 0.80000001, 0 };
				ambient[] = { 0, 0.079999998, 0 };
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = { 0.1, 1.9 };
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.079999998;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliBig";
				position = "exhaust1";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_AH6";
		};
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
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_merge1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_merge1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_merge1_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_merge2.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_merge2.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_merge2_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\mh6_skla.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\mh6_skla_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\mh6_skla_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\mh6_skla_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\mh6_skla_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\mh6_skla_in_damage.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		weapons[] =
		{
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"168Rnd_CMFlare_Chaff_Magazine"
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
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 0;
		crew = "CUP_B_US_Pilot";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot"
		};
		transportMaxBackpacks = 6;
		irScanRangeMin = 500;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa"
		};
		selectionFireAnim = "minigunMuzzleFlash";
		class Turrets : Turrets
		{
			class CopilotTurret : MainTurret
			{
				isCopilot = 1;
				weapons[] =
				{
					"Laserdesignator_mounted"
				};
				magazines[] =
				{
					"Laserbatteries"
				};
				body = "FLIR_turret";
				gun = "FLIR_gun";
				animationSourceBody = "FLIR_turret";
				animationSourceGun = "FLIR_gun";
				memoryPointGunnerOptics = "FLIR_end";
				gunBeg = "FLIR_end";
				gunEnd = "FLIR_begin";
				memoryPointGun = "FLIR_end";
				gunnerOpticsEffect[] = {};
				gunnerOpticsModel = "";
				proxyType = "CPGunner";
				turretInfoType = "RscOptics_UAV_gunner";
				minTurn = -89;
				maxTurn = 89;
				initTurn = 0;
				minElev = -89;
				maxElev = 30;
				initElev = 0;
				enableManualFire = 1;
				stabilizedInAxes = 3;
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
						minAngleX = -100;
						maxAngleX = 100;
						initAngleY = 0;
						minAngleY = -89;
						maxAngleY = 89;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] =
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[] = {};
					};
				};
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "CUP_AH6j_Pilot";
				gunnerInAction = "CUP_AH6j_Pilot";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedall";
				gunnerRightLegAnimName = "pedalr";
				proxyIndex = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				slingLoadOperator = 1;
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 0;
			};
		};
		class AnimationSources : AnimationSources
		{
			class hideBench
			{
				displayName="Hide Bench";
				author="CUP_AUTHOR_STRING";
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
				lockCargoAnimationPhase=0;
				lockCargo[]={};
				forceAnimatePhase=0;
				forceAnimate[]={};
				onPhaseChanged="(_this select 0) call compile preprocessFileLineNumbers ""\CUP\AirVehicles\CUP_AirVehicles_AH6\cargoLock.sqf"";";
				mass=5;
			};
			class hideFries
			{
				displayName="Hide Fries";
				author="CUP_AUTHOR_STRING";
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
				lockCargoAnimationPhase=0;
				lockCargo[]={};
				forceAnimatePhase=0;
				forceAnimate[]={};
				mass=5;
			};
			class hideFLIR
			{
				displayName="Hide FLIR";
				author="CUP_AUTHOR_STRING";
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
				lockCargoAnimationPhase=0;
				lockCargo[]={};
				forceAnimatePhase=0;
				forceAnimate[]={};
				mass=5;
			};
			class hideUSARMY
			{
				displayName="Hide USARMY Tail Marking";
				author="CUP_AUTHOR_STRING";
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
				lockCargoAnimationPhase=0;
				lockCargo[]={};
				forceAnimatePhase=0;
				forceAnimate[]={};
				mass=5;
			};
			class hideRACS
			{
				displayName="Hide RACS Tail Marking";
				author="CUP_AUTHOR_STRING";
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=1;
				lockCargoAnimationPhase=0;
				lockCargo[]={};
				forceAnimatePhase=0;
				forceAnimate[]={};
				mass=5;
			};
			class FLIR_turret
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class FLIR_gun
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class stowMonitorPilot
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=1;
			};
			class stowMonitorCopilot
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=1;
			};
			class monitorPilotDisplayOff
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=0;
			};
			class monitorCopilotDisplayOff
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=0;
			};
			class monitorPilotDisplayOn
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class monitorCoilotDisplayOn
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class hidemRotor
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class hidejRotor
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
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
			class FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class Medikit
			{
				name = "Medikit";
				count = 2;
			};
			class Toolkit
			{
				name = "Toolkit";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class B_Parachute
			{
				backpack = "B_Parachute";
				count = 8;
			};
		};
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "cyclic_1";
		driverLeftLegAnimName = "pedall";
		driverRightLegAnimName = "pedalr";
		attenuationEffectType = "HeliAttenuation";
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
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_get_in2",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_get_out2",
			0.79432821,
			1,
			20
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_ext_1",
			3.1622777,
			1
		};
		soundEngineOnInt[]=
		{
			"ARMA3_CUP_Enhancement_H6\Sound\Int_Start",
			0.40000001,
			1
		};
		soundEngineOnExt[]=
		{
			"ARMA3_CUP_Enhancement_H6\Sound\Ext_Start",
			0.79432821,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"ARMA3_CUP_Enhancement_H6\Sound\Int_Off",
			0.40000001,
			1
		};
		soundEngineOffExt[]=
		{
			"ARMA3_CUP_Enhancement_H6\Sound\Ext_Off",
			0.79432821,
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
			0.69999999,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
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
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
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
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
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
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Ext_Idle",
					1.2889254,
					1,
					400
				};
				frequency="1.3*rotorSpeed";
				volume="2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Ext_Low",
					1.2589254,
					1,
					500
				};
				frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume="camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
			};
			class RotorSwist
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Close",
					1.2,
					1,
					600
				};
				frequency="1.3*rotorspeed";
				volume="camPos * (gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]) * (rotorThrust factor [0.7, 0.9])";
			};
			class EngineInt
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Int_Idle",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*2*(0 max (rotorSpeed-0.4))";
			};
			class RotorInt
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Int_Low",
					1.2818383,
					1
				};
				frequency="1*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume="(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
			};
			class RotorBench
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Ext_Low",
					1.2589254,
					1,
					500
				};
				frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineBench
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Ext_Idle",
					1.2818383,
					1
				};
				frequency="1.3*rotorSpeed";
				volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
			};
			class WindBench
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_open_out",
					0.56234133,
					1,
					50
				};
				frequency=1;
				volume="4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
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
			class RotorNoiseExt
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Rotor_Fast",
					1.2818383,
					1,
					200
				};
				frequency=1.5;
				volume="(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[]={1.6,3.1400001,2,0.94999999};
			};
			class FarDistance
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\Distance",
					2.0918384,
					1.1,
					1100
				};
				frequency="rotorSpeed";
				volume="2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class FarDistanceRotor
			{
				sound[]=
				{
					"ARMA3_CUP_Enhancement_H6\Sound\tail_rotor",
					2.0918384,
					1,
					1000
				};
				frequency="rotorSpeed";
				volume="2 * camPos * (0 max (rotorSpeed-0.4))";
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
					0.2238721,
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
					0.2238721,
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
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
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
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
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
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
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
					"A3\Sounds_F\vehicles\air\noises\wind_open_int",
					1.1220185,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class WindLateralMovementInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",
					1.9952624,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.11622776,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
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
						"ARMA3_CUP_Enhancement_H6\Sound\Ext_Idle",
						1.2889254,
						1,
						400
					};
					frequency="1.3*rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Ext_Low",
						1.2589254,
						1,
						500
					};
					frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume="camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
				};
				class RotorSwist
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Close",
						1.2,
						1,
						600
					};
					frequency="1.3*rotorspeed";
					volume="camPos * (gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]) * (rotorThrust factor [0.7, 0.9])";
				};
				class EngineInt
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Int_Idle",
						1,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*2*(0 max (rotorSpeed-0.4))";
				};
				class RotorInt
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Int_Low",
						1.2818383,
						1
					};
					frequency="(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume="(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
				};
				class RotorBench
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Ext_Low",
						1.2589254,
						1,
						500
					};
					frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class EngineBench
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Ext_Idle",
						1.2818383,
						1
					};
					frequency="1.3*rotorSpeed";
					volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
				};
				class WindBench
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_open_out",
						0.56234133,
						1,
						50
					};
					frequency=1;
					volume="4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
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
				class RotorNoiseExt
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Rotor_Fast",
						1.2818383,
						1,
						200
					};
					frequency=1;
					volume="(camPos*(rotorSpeed factor [0.6, 0.85]))";
					cone[]={1.6,3.1400001,2,0.94999999};
				};
				class FarDistance
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\Distance",
						2.0918384,
						1.1,
						1100
					};
					frequency="rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class FarDistanceRotor
				{
					sound[]=
					{
						"ARMA3_CUP_Enhancement_H6\Sound\tail_rotor",
						2.0918384,
						1,
						1000
					};
					frequency="rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
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
						0.2238721,
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
						0.2238721,
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
						"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
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
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
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
						"A3\Sounds_F\vehicles\noises\rain1_int_open",
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
						"A3\Sounds_F\vehicles\air\noises\wind_open_int",
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class WindLateralMovementInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",
						1.9952624,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
						0.11622776,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		class textureSources
		{
			class Black
			{
				displayname="Default Black";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_co.paa",
					"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa"
				};
				factions[]={};
			};
			class RACS
			{
				displayname="RACS";
				author="Community Upgrade Project";
				textures[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_racs_co.paa",
					"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa"
				};
				factions[]={};
			};
			class ION
			{
				displayname="ION Services";
				author="Community Upgrade Project";
				textures[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_ion_co.paa",
					"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa"
				};
				factions[]={};
			};
		};
		class EventHandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {(_this select 0) call compile preprocessFileLineNumbers ""\CUP\AirVehicles\CUP_AirVehicles_AH6\cargoLock.sqf""; [(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		ace_refuel_fuelCapacity=242;
		class UserActions
		{
			class PilotStowMonitor
			{
				userActionID=50;
				displayName="Stow Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorPilot"" <0.5 && driver this == player AND Alive(this)";
				statement="this animate [""stowMonitorPilot"",1]; this animate [""monitorPilotDisplayOff"", 0]; this animate [""monitorPilotDisplayOn"", 1];";
			};
			class PilotUnStowMonitor
			{
				userActionID=50;
				displayName="Open Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorPilot"" > 0.5 && driver this == player AND Alive(this)";
				statement="this animate [""stowMonitorPilot"",0]; this animate [""monitorPilotDisplayOff"", 1]; this animate [""monitorPilotDisplayOn"", 0];";
			};
			class CopilotStowMonitor
			{
				userActionID=50;
				displayName="Stow Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorCopilot"" <0.5 && gunner this == player AND Alive(this)";
				statement="this animate [""stowMonitorCopilot"",1]; this animate [""monitorCopilotDisplayOff"", 0]; this animate [""monitorCopilotDisplayOn"", 1];";
			};
			class CopilotUnStowMonitor
			{
				userActionID=50;
				displayName="Open Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorCopilot"" > 0.5 && gunner this == player AND Alive(this)";
				statement="this animate [""stowMonitorCopilot"",0]; this animate [""monitorCopilotDisplayOff"", 1]; this animate [""monitorCopilotDisplayOn"", 0];";
			};
		};
	};

	class JAS_CUP_B_AH6M_USA : JAS_CUP_AH6_BASE
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "CUP_B_US_Army";
		displayName = "AH-6M/J";
		crew = "CUP_B_US_Pilot";
		fir_ah6US_custom_skin=1;
		fir_ah6US_custom_name="AH-6 US Army";
		fir_ah6US_custom_code="JAS_CUP_B_AH6M_USA";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\AH6US.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\AH6US.jpg";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot"
		};
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_CMLauncher",
			"CUP_Vlmg_TwinM134_veh"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M"
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				weapons[] =
				{
					"Laserdesignator_mounted"
				};
				magazines[] =
				{
					"Laserbatteries"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class hideGauL
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
			class hideGauR
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
			class hideM134L
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class hideM134R
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class m134BarrelL
			{
				source="revolving";
				weapon="CUP_Vlmg_TwinM134_veh";
			};
			class m134BarrelR: m134BarrelL
			{
			};
			class m134MuzzleRotL
			{
				source="ammorandom";
				weapon="CUP_Vlmg_TwinM134_veh";
			};
			class m134MuzzleRotR: m134MuzzleRotL
			{
			};
			class m134MuzzleL
			{
				source="reload";
				weapon="CUP_Vlmg_TwinM134_veh";
			};
			class m134MuzzleR
			{
				source="reload";
				weapon="CUP_Vlmg_TwinM134_veh";
			};
			class gauBarrelL
			{
				source="revolving";
				weapon="CUP_Vhmg_TwinGAU19_veh";
			};
			class gauBarrelLSingle
			{
				source="revolving";
				weapon="CUP_Vhmg_GAU19_veh";
			};
			class gauBarrelR
			{
				source="revolving";
				weapon="CUP_Vhmg_TwinGAU19_veh";
			};
			class gau19MuzzleRotL
			{
				source="ammoRandom";
				weapon="CUP_Vhmg_TwinGAU19_veh";
			};
			class gau19MuzzleRotR
			{
				source="ammoRandom";
				weapon="CUP_Vhmg_TwinGAU19_veh";
			};
			class gau19MuzzleRotSingle
			{
				source="ammoRandom";
				weapon="CUP_Vhmg_GAU19_veh";
			};
			class gau19MuzzleL
			{
				source="reload";
				weapon="CUP_Vhmg_TwinGAU19_veh";
			};
			class gau19MuzzleR
			{
				source="reload";
				weapon="CUP_Vhmg_TwinGAU19_veh";
			};
			class gau19MuzzleSingle
			{
				source="reload";
				weapon="CUP_Vhmg_GAU19_veh";
			};
			class rocket_revolving
			{
				source="revolving";
				weapon="CUP_Vmlauncher_FFAR_veh_19Out";
			};
			class rocket_s_revolving
			{
				source="revolving";
				weapon="CUP_Vmlauncher_FFAR_veh_7Out";
			};
			class rocket_right_revolving
			{
				source="revolving";
				weapon="CUP_Vmlauncher_FFAR_veh_19Right";
			};
			class rocket_sright_revolving
			{
				source="revolving";
				weapon="CUP_Vmlauncher_FFAR_veh_7Right";
			};
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo_weapons"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_weapons_co.paa"
		};
		class UserActions
		{
			class AH6J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\AH6_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class PilotStowMonitor
			{
				userActionID=50;
				displayName="Stow Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorPilot"" <0.5 && driver this == player AND Alive(this)";
				statement="this animate [""stowMonitorPilot"",1]; this animate [""monitorPilotDisplayOff"", 0]; this animate [""monitorPilotDisplayOn"", 1];";
			};
			class PilotUnStowMonitor
			{
				userActionID=50;
				displayName="Open Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorPilot"" > 0.5 && driver this == player AND Alive(this)";
				statement="this animate [""stowMonitorPilot"",0]; this animate [""monitorPilotDisplayOff"", 1]; this animate [""monitorPilotDisplayOn"", 0];";
			};
			class CopilotStowMonitor
			{
				userActionID=50;
				displayName="Stow Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorCopilot"" <0.5 && gunner this == player AND Alive(this)";
				statement="this animate [""stowMonitorCopilot"",1]; this animate [""monitorCopilotDisplayOff"", 0]; this animate [""monitorCopilotDisplayOn"", 1];";
			};
			class CopilotUnStowMonitor
			{
				userActionID=50;
				displayName="Open Monitor";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""hideFLIR"" < 0.5 && this animationPhase ""stowMonitorCopilot"" > 0.5 && gunner this == player AND Alive(this)";
				statement="this animate [""stowMonitorCopilot"",0]; this animate [""monitorCopilotDisplayOff"", 1]; this animate [""monitorCopilotDisplayOn"", 0];";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
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
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_AH6\Data\UI\CUP_AH6_3DEN_CA.paa";
				class presets
				{
					class Empty
					{
						displayName="M134 only";
						attachment[]={};
					};
					class CAS1
					{
						displayName="Light CAS";
						attachment[]=
						{
							"JAS_FIR_Hydra_P_7rnd_M",
							"JAS_FIR_Hydra_P_7rnd_M"
						};
					};
					class CAS2
					{
						displayName="Heavy CAS";
						attachment[]=
						{
							"JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
					class CAS3
					{
						displayName="Precision CAS";
						attachment[]=
						{
							"JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M",
							"JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M"
						};
					};
					class MultiRole
					{
						displayName="Killer-Scout";
						attachment[]=
						{
							"JAS_CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M",
							"JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
					class AntiTank
					{
						displayName="Anti-Tank";
						attachment[]=
						{
							"JAS_CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M",
							"JAS_CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M"
						};
					};
					class AntiStructure
					{
						displayName="Anti-Structure";
						attachment[]=
						{
							"JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M",
							"JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M"
						};
					};
				};
				class pylons
				{
					class pylonLeft1
					{
						hardpoints[]=
						{
							"JAS_AH6_PYLON",
							"JAS_AH6_PYLON_L"
						};
						attachment="";
						priority=5;
						UIposition[]={0.58999997,0.40000001};
						turret[]={0};
					};
					class pylonRight1: pylonLeft1
					{
						hardpoints[]=
						{
							"JAS_AH6_PYLON",
							"JAS_AH6_PYLON_R"
						};
						UIposition[]={0.059999999,0.40000001};
						mirroredMissilePos=1;
					};
				};
			};
		};
	};
	class JAS_CUP_B_AH6M_AAC : JAS_CUP_B_AH6M_USA
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ANGEL";
		fir_ah6US_custom_skin=2;
		fir_ah6US_custom_name="AH-6 US Army";
		fir_ah6US_custom_code="JAS_CUP_B_AH6J_USA";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\USGrey.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\AH6SOAR.jpg";
	};
	class JAS_CUP_I_AH6M_RACS : JAS_CUP_B_AH6M_USA
	{
		scope = 2;
		side = 2;
		faction = "CUP_I_RACS";
		displayName = "AH-6M/J";
		crew = "CUP_I_RACS_Pilot";
		fir_ah6US_custom_skin=1;
		fir_ah6US_custom_name="AH-6 RACS";
		fir_ah6US_custom_code="JAS_CUP_I_AH6J_RACS";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\AH6RACS.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\AH6RACS.jpg";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo_weapons"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_racs_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_weapons_co.paa"
		};
	};
	class JAS_CUP_I_AH6M_AAC : JAS_CUP_B_AH6M_USA
	{
		scope = 2;
		side = 2;
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_ANGEL";
		displayName = "AH-6M/J";
		crew = "CUP_I_RACS_Pilot";
		fir_ah6US_custom_skin=0;
		fir_ah6US_custom_name="AH-6 RACS";
		fir_ah6US_custom_code="JAS_CUP_I_AH6J_RACS";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\AH6RACS.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\AH6RACS.jpg";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo_weapons"
		};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_racs_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\Data\ah6_weapons_co.paa"
		};
	};

	class JAS_CUP_B_MH6J_USA : JAS_CUP_AH6_BASE
	{
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		crew = "CUP_B_US_Pilot";
		faction = "CUP_B_US_Army";
		fir_ah6US_custom_skin=2;
		fir_ah6US_custom_name="MH-6 US Army";
		fir_ah6US_custom_code="JAS_CUP_B_MH6J_USA";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\USGrey.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\MH6US.jpg";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot"
		};
		scope = 2;
		displayName = "MH-6J/J US Army";
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH6\CUP_mh6j.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Picture_mh6j_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Icon_mh6j_CA.paa";
		side = 1;
		transportSoldier = 0;
		weapons[] =
		{
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				weapons[] =
				{
					"Laserdesignator_mounted"
				};
				magazines[] =
				{
					"Laserbatteries"
				};
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 1";
				memoryPointsGetInGunnerDir = "pos cargo dir right 1";
				gunnerName = "Passenger (Right Bench 1)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -87;
				maxTurn = 105;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 2";
				memoryPointsGetInGunnerDir = "pos cargo dir right 2";
				gunnerName = "Passenger (Right Bench 2)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_03 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 3";
				memoryPointsGetInGunnerDir = "pos cargo dir right 3";
				gunnerName = "Passenger (Right Bench 3)";
				proxyIndex = 3;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_04 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 1";
				memoryPointsGetInGunnerDir = "pos cargo dir left 1";
				gunnerName = "Passenger (Left Bench 1)";
				proxyIndex = 4;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -105;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_05 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 2";
				memoryPointsGetInGunnerDir = "pos cargo dir left 2";
				gunnerName = "Passenger (Left Bench 2)";
				proxyIndex = 5;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_06 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 3";
				memoryPointsGetInGunnerDir = "pos cargo dir left 3";
				gunnerName = "Passenger (Left Bench 3)";
				proxyIndex = 6;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_bench"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_benches_co.paa"
		};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.15,1.0,0.25},{-1.15,1.0,0.25}};
		class eventhandlers
		{
			Init = "AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_MH6J_USA',[[1.15,1.0,0.25],[-1.15,1.0,0.25]]]];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class UserActions
		{
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Mode Selection</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\MH6_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
	};
	class JAS_CUP_B_MH6J_AAC : JAS_CUP_AH6_BASE
	{
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		crew = "CUP_B_US_Pilot";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		fir_ah6US_custom_skin=2;
		fir_ah6US_custom_name="MH-6 US Army";
		fir_ah6US_custom_code="JAS_CUP_B_MH6J_USA";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\USGrey.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\MH6SOAR.jpg";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot"
		};
		scope = 2;
		scopeCurator = 2;
		displayName = "MH-6J/J Littlebird";
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH6\CUP_mh6j.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Picture_mh6j_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Icon_mh6j_CA.paa";
		side = 1;
		transportSoldier = 0;
		weapons[] =
		{
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				weapons[] =
				{
					"Laserdesignator_mounted"
				};
				magazines[] =
				{
					"Laserbatteries"
				};
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 1";
				memoryPointsGetInGunnerDir = "pos cargo dir right 1";
				gunnerName = "Passenger (Right Bench 1)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -87;
				maxTurn = 105;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 2";
				memoryPointsGetInGunnerDir = "pos cargo dir right 2";
				gunnerName = "Passenger (Right Bench 2)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_03 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 3";
				memoryPointsGetInGunnerDir = "pos cargo dir right 3";
				gunnerName = "Passenger (Right Bench 3)";
				proxyIndex = 3;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_04 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 1";
				memoryPointsGetInGunnerDir = "pos cargo dir left 1";
				gunnerName = "Passenger (Left Bench 1)";
				proxyIndex = 4;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -105;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_05 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 2";
				memoryPointsGetInGunnerDir = "pos cargo dir left 2";
				gunnerName = "Passenger (Left Bench 2)";
				proxyIndex = 5;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_06 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 3";
				memoryPointsGetInGunnerDir = "pos cargo dir left 3";
				gunnerName = "Passenger (Left Bench 3)";
				proxyIndex = 6;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_bench"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_benches_co.paa"
		};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.15,1.0,0.25},{-1.15,1.0,0.25}};
		class eventhandlers
		{
			Init = "AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_MH6J_AAC',[[1.15,1.0,0.25],[-1.15,1.0,0.25]]]];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class UserActions
		{
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Mode Selection</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\MH6_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
	};
	class JAS_CUP_I_MH6J_RACS : JAS_CUP_AH6_BASE
	{
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 2;
		faction = "CUP_I_RACS";
		crew = "CUP_I_RACS_Pilot";
		fir_ah6US_custom_skin=2;
		fir_ah6US_custom_name="MH-6 RACS";
		fir_ah6US_custom_code="JAS_CUP_I_MH6J_RACS";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\USGrey.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\MH6RACS.jpg";
		typicalCargo[] =
		{
			"CUP_I_RACS_Pilot"
		};
		scope = 2;
		displayName = "MH-6J/J Littlebird";
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH6\CUP_mh6j.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Picture_mh6j_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Icon_mh6j_CA.paa";
		transportSoldier = 0;
		weapons[] =
		{
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				weapons[] =
				{
					"Laserdesignator_mounted"
				};
				magazines[] =
				{
					"Laserbatteries"
				};
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 1";
				memoryPointsGetInGunnerDir = "pos cargo dir right 1";
				gunnerName = "Passenger (Right Bench 1)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -87;
				maxTurn = 105;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 2";
				memoryPointsGetInGunnerDir = "pos cargo dir right 2";
				gunnerName = "Passenger (Right Bench 2)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_03 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 3";
				memoryPointsGetInGunnerDir = "pos cargo dir right 3";
				gunnerName = "Passenger (Right Bench 3)";
				proxyIndex = 3;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_04 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 1";
				memoryPointsGetInGunnerDir = "pos cargo dir left 1";
				gunnerName = "Passenger (Left Bench 1)";
				proxyIndex = 4;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -105;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_05 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 2";
				memoryPointsGetInGunnerDir = "pos cargo dir left 2";
				gunnerName = "Passenger (Left Bench 2)";
				proxyIndex = 5;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_06 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 3";
				memoryPointsGetInGunnerDir = "pos cargo dir left 3";
				gunnerName = "Passenger (Left Bench 3)";
				proxyIndex = 6;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_bench"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_racs_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_benches_co.paa"
		};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.15,1.0,0.25},{-1.15,1.0,0.25}};
		class eventhandlers
		{
			Init = "AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_MH6J_RACS',[[1.15,1.0,0.25],[-1.15,1.0,0.25]]]];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class UserActions
		{
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Mode Selection</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\MH6_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
	};
	class JAS_CUP_I_MH6J_AAC : JAS_CUP_AH6_BASE
	{
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		side = 2;
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
		crew = "CUP_I_RACS_Pilot";
		fir_ah6US_custom_skin=0;
		fir_ah6US_custom_name="MH-6 RACS";
		fir_ah6US_custom_code="JAS_CUP_I_MH6J_RACS";
		fir_ah6US_custom_preview_pic="\ARMA3_CUP_Enhancement_H6\UI\preview\USGrey.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_H6\UI\editorpreview\MH6RACS.jpg";
		typicalCargo[] =
		{
			"CUP_I_RACS_Pilot"
		};
		scope = 2;
		displayName = "MH-6J/J Littlebird";
		model = "\CUP\AirVehicles\CUP_AirVehicles_AH6\CUP_mh6j.p3d";
		picture = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Picture_mh6j_CA.paa";
		icon = "\CUP\AirVehicles\CUP_AirVehicles_AH6\data\UI\Icon_mh6j_CA.paa";
		transportSoldier = 0;
		weapons[] =
		{
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				weapons[] =
				{
					"Laserdesignator_mounted"
				};
				magazines[] =
				{
					"Laserbatteries"
				};
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 1";
				memoryPointsGetInGunnerDir = "pos cargo dir right 1";
				gunnerName = "Passenger (Right Bench 1)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -87;
				maxTurn = 105;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 2";
				memoryPointsGetInGunnerDir = "pos cargo dir right 2";
				gunnerName = "Passenger (Right Bench 2)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_03 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment8";
				memoryPointsGetInGunner = "pos cargo right 3";
				memoryPointsGetInGunnerDir = "pos cargo dir right 3";
				gunnerName = "Passenger (Right Bench 3)";
				proxyIndex = 3;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_04 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 1";
				memoryPointsGetInGunnerDir = "pos cargo dir left 1";
				gunnerName = "Passenger (Left Bench 1)";
				proxyIndex = 4;
				maxElev = 15;
				minElev = -87;
				maxTurn = 60;
				minTurn = -105;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_05 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 2";
				memoryPointsGetInGunnerDir = "pos cargo dir left 2";
				gunnerName = "Passenger (Left Bench 2)";
				proxyIndex = 5;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
			class CargoTurret_06 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment7";
				memoryPointsGetInGunner = "pos cargo left 3";
				memoryPointsGetInGunnerDir = "pos cargo dir left 3";
				gunnerName = "Passenger (Left Bench 3)";
				proxyIndex = 6;
				maxElev = 15;
				minElev = -87;
				maxTurn = 90;
				minTurn = -60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo_bench"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_hull_racs_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_benches_co.paa"
		};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.15,1.0,0.25},{-1.15,1.0,0.25}};
		class eventhandlers
		{
			Init = "AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_MH6J_RACS',[[1.15,1.0,0.25],[-1.15,1.0,0.25]]]];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class UserActions
		{
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Mode Selection</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_H6\sqs\loadout\MH6_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
	};

	class JAS_AH6_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="AH-6 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_AH6_Loadout";
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
					class hp1_GAU
					{
						name="GAU-19";
						value=1;
					};
					class hp1_hydra7
					{
						name="HYDRA x7";
						value=2;
					};
					class hp1_hydra19
					{
						name="HYDRA x19";
						value=3;
					};
					class hp1_APKWS
					{
						name="APKWS x7";
						value=4;
					};
					class hp1_AGM114K
					{
						name="AGM-114K x2";
						value=5;
					};
					class hp1_AGM114N
					{
						name="AGM-114N x2";
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
					class hp2_GAU
					{
						name="GAU-19";
						value=1;
					};
					class hp2_hydra7
					{
						name="HYDRA x7";
						value=2;
					};
					class hp2_hydra19
					{
						name="HYDRA x19";
						value=3;
					};
					class hp2_APKWS
					{
						name="APKWS x7";
						value=4;
					};
					class hp2_AGM114K
					{
						name="AGM-114K x2";
						value=5;
					};
					class hp2_AGM114N
					{
						name="AGM-114N x2";
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
					class SOAR
					{
						name="160 SOAR";
						value=0;
						default=1;
					};
					class US
					{
						name="US Army";
						value=1;
					};
					class RACS
					{
						name="Royal Army Corps of Sahrani";
						value=2;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="AH6 Loadout Module";
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
