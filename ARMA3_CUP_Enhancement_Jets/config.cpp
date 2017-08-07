#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class ARMA3_CUP_Enhancement_Jets
	{
		units[]=
		{
			"JAS_B_RAH66_DYNO_F",
			"JAS_B_RAH66_DYNO_AAC",
			"JAS_FIR_A164J_DYNO",
			"JAS_FIR_A164J_DYNO_AAC",
			"JAS_Plane_Fighter_01_Base_F_DYNO",
			"JAS_Plane_Fighter_01_Stealth_F_DYNO",
			"JAS_Plane_Fighter_01_Base_F_DYNO_AAC",
			"JAS_Plane_Fighter_01_Stealth_F_DYNO_AAC",
			"JAS_Plane_Fighter_02_F_DYNO",
			"JAS_Plane_Fighter_02_Stealth_DYNO",
			"JAS_Plane_Fighter_02_F_DYNO_AAC",
			"JAS_Plane_Fighter_02_Stealth_DYNO_AAC",
			"JAS_Plane_Fighter_04_F_DYNO",
			"JAS_Plane_Fighter_04_F_DYNO_AAC",
			"JAS_O_Plane_CAS_02_DYNO",
			"JAS_O_Plane_CAS_02_DYNO_AAC",
			"JAS_FIR_A143R",
			"JAS_FIR_A143R_AAC",
			"JAS_B_B_Heli_Light_01_F_AAC",
			"JAS_O_Heli_Attack_02_dynamicLoadout_F",
			"JAS_O_Heli_Attack_02_dynamicLoadout_F_AAC",
			"JAS_VTOL_02_infantry_dynamicLoadout_F",
			"JAS_VTOL_02_infantry_dynamicLoadout_F_AAC",
			"JAS_VTOL_02_vehicle_dynamicLoadout_F",
			"JAS_VTOL_02_vehicle_dynamicLoadout_F_AAC",
			"JAS_Heli_light_03_dynamicLoadout_F"
		};
		weapons[]=
		{
			
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Heli",
			"A3_Air_F_EPC",
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
		class ARMA3_CUP_Enhancement_Jets
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_Jets"
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
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

// Back to original code
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
class JAS_HELLCAT_GUI
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
			text = "ARMA3_CUP_Enhancement_Jets\UI\hellcat_background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\HELLCAT_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\HELLCAT_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\HELLCAT_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\HELLCAT_SaveCustom.sqf""";
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
class JAS_Y32_GUI
{
	idd=-1;
	movingenable="false";
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
		class RAH66_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_Jets\UI\y32_background.paa";
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
		class RscText_1008 : RscText
		{
			idc = 1008;
			text = "select loadout";
			x = "0.73625 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.11375 * safezoneW";
			h = "0.014 * safezoneH";
		};
		class RAH66_refuel_Button : RscPicture
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
		class RAH66_repair_Button : RscPicture
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
		class RAH66_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Y32_Loadout.sqf""";
		};
		class RAH66_Cancel_Button : RscPicture
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
		class RAH66_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Y32_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Y32_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Y32_SaveCustom.sqf""";
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
class JAS_MI48_GUI
{
	idd=-1;
	movingenable="false";
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
		class RAH66_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_Jets\UI\mi48_background.paa";
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
			text = "Right Inboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Left Inboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
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
		class RscText_1008 : RscText
		{
			idc = 1008;
			text = "select loadout";
			x = "0.73625 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.11375 * safezoneW";
			h = "0.014 * safezoneH";
		};
		class RAH66_refuel_Button : RscPicture
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
		class RAH66_repair_Button : RscPicture
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
		class RAH66_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\MI48_Loadout.sqf""";
		};
		class RAH66_Cancel_Button : RscPicture
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
		class RAH66_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\MI48_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\MI48_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\MI48_SaveCustom.sqf""";
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
/*class JAS_ORCA_GUI
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
			text = "ARMA3_CUP_Enhancement_Jets\UI\AH6_background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ORCA_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ORCA_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ORCA_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ORCA_SaveCustom.sqf""";
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
};*/
/*class JAS_AH9_GUI
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
			text = "ARMA3_CUP_Enhancement_Jets\UI\AH6_background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\AH9_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\AH9_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\AH9_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\AH9_SaveCustom.sqf""";
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
};*/
class JAS_ALCA_GUI
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
			text = "ARMA3_CUP_Enhancement_Jets\ui\a143_background.paa";
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
			text = "Left inboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ALCA_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ALCA_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ALCA_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ALCA_SaveCustom.sqf""";
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
class JAS_YAK_GUI
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
			text = "ARMA3_CUP_Enhancement_Jets\UI\Yak_Background.paa";
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
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Right Wingpit";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Wingpit";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1112 : RscText
		{
			idc = 1112;
			text = "Rockets";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1122 : RscText
		{
			idc = 1122;
			text = "Rockets";
			x = "0.22 * safezoneW + safezoneX";
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
		class hp11 : RscCombo
		{
			idc = 2117;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.546 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp12 : RscCombo
		{
			idc = 2118;
			x = "0.22 * safezoneW + safezoneX";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Yak_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Yak_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Yak_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Yak_SaveCustom.sqf""";
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
class JAS_GRYPHON_GUI
{
	idd=-1;
	movingenable="false";
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
		class RAH66_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_Jets\UI\gryphon_background.paa";
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
		class RAH66_refuel_Button : RscPicture
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
		class RAH66_repair_Button : RscPicture
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
		class RAH66_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Gryphon_Loadout.sqf""";
		};
		class RAH66_Cancel_Button : RscPicture
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
		class RAH66_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Gryphon_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Gryphon_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Gryphon_SaveCustom.sqf""";
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
class JAS_SHKIRA_GUI
{
	idd=-1;
	movingenable="false";
	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
			colorActive[]={1,1,1,1};
		};
		class a164_picture_background: RscPicture
		{
			idc=1200;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			text="ARMA3_CUP_Enhancement_Jets\ui\shkira_background.paa";
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
			text = "Right Nacelle Bay 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Nacelle Bay 1";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Right Nacelle Bay 2";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Left Nacelle Bay 2";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1112 : RscText
		{
			idc = 1112;
			text = "Internal Bay Right";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1122 : RscText
		{
			idc = 1122;
			text = "Internal Bay Left";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_3102 : RscText
		{
			idc = 3102;
			text = "Internal Bay Centre";
			x = "0.43 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp13 : RscCombo
		{
			idc = 3202;
			x = "0.43 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
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
			idc = 2117;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.546 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp12 : RscCombo
		{
			idc = 2118;
			x = "0.22 * safezoneW + safezoneX";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_SaveCustom.sqf""";
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
class JAS_SHKIRA_STEALTH_GUI
{
	idd=-1;
	movingenable="false";
	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
			colorActive[]={1,1,1,1};
		};
		class a164_picture_background: RscPicture
		{
			idc=1200;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			text="ARMA3_CUP_Enhancement_Jets\ui\shkira_background.paa";
		};
		// class rsc1 : RscText
		// {
		// 	idc = 1000;
		// 	text = "Right Wingtip";
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.25 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1101 : RscText
		// {
		// 	idc = 1101;
		// 	text = "Left Wingtip";
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.25 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1001 : RscText
		// {
		// 	idc = 1001;
		// 	text = "Right Outboard";
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.304 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1002 : RscText
		// {
		// 	idc = 1002;
		// 	text = "Left Outboard";
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.304 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1003 : RscText
		// {
		// 	idc = 1003;
		// 	text = "Right Midline";
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.358 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1004 : RscText
		// {
		// 	idc = 1004;
		// 	text = "Left Midline";
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.358 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Right Nacelle Bay 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Nacelle Bay 1";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Right Nacelle Bay 2";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Left Nacelle Bay 2";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1112 : RscText
		{
			idc = 1112;
			text = "Internal Bay Right";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1122 : RscText
		{
			idc = 1122;
			text = "Internal Bay Left";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_3102 : RscText
		{
			idc = 3102;
			text = "Internal Bay Centre";
			x = "0.43 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp13 : RscCombo
		{
			idc = 3202;
			x = "0.43 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		// class hp1 : RscCombo
		// {
		// 	idc = 2100;
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.276 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp2 : RscCombo
		// {
		// 	idc = 2201;
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.276 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp3 : RscCombo
		// {
		// 	idc = 2101;
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.33 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp4 : RscCombo
		// {
		// 	idc = 2102;
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.33 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp5 : RscCombo
		// {
		// 	idc = 2103;
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.384 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp6 : RscCombo
		// {
		// 	idc = 2104;
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.384 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
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
			idc = 2117;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.546 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp12 : RscCombo
		{
			idc = 2118;
			x = "0.22 * safezoneW + safezoneX";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_Stealth_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_Stealth_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_Stealth_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_Stealth_SaveCustom.sqf""";
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
class JAS_WASP_GUI
{
	idd=-1;
	movingenable="false";
	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
			colorActive[]={1,1,1,1};
		};
		class a164_picture_background: RscPicture
		{
			idc=1200;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			text="ARMA3_CUP_Enhancement_Jets\ui\wasp_background.paa";
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
			text = "Right Inboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Left Inboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1003 : RscText
		{
			idc = 1003;
			text = "Right Sidebay";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "Left Sidebay";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Right Internal AAM";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Internal AAM";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Right Internal Bay 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Left Internal Bay 1";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1112 : RscText
		{
			idc = 1112;
			text = "Right Internal Bay 2";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1122 : RscText
		{
			idc = 1122;
			text = "Left Internal Bay 2";
			x = "0.22 * safezoneW + safezoneX";
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
			idc = 2117;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.546 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class hp12 : RscCombo
		{
			idc = 2118;
			x = "0.22 * safezoneW + safezoneX";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_SaveCustom.sqf""";
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
class JAS_WASP_STEALTH_GUI
{
	idd=-1;
	movingenable="false";
	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
			colorActive[]={1,1,1,1};
		};
		class a164_picture_background: RscPicture
		{
			idc=1200;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			text="ARMA3_CUP_Enhancement_Jets\ui\wasp_background.paa";
		};
		class rsc1 : RscText
		{
			idc = 1000;
			text = "Right Internal Bay 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1101 : RscText
		{
			idc = 1101;
			text = "Left Internal Bay 1";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1001 : RscText
		{
			idc = 1001;
			text = "Right Internal Bay 2";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Left Internal Bay 2";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1003 : RscText
		{
			idc = 1003;
			text = "Right Internal Bay 3";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "Left Internal Bay 3";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Right Sidebay";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Sidebay";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		// class RscText_1102 : RscText
		// {
		// 	idc = 1102;
		// 	text = "Right Nacelle";
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.466 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1007 : RscText
		// {
		// 	idc = 1007;
		// 	text = "Left Nacelle";
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.466 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1112 : RscText
		// {
		// 	idc = 1112;
		// 	text = "Front Fuselage";
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.52 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class RscText_1122 : RscText
		// {
		// 	idc = 1122;
		// 	text = "Rear Fuselage";
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.52 * safezoneH + safezoneY";
		// 	w = "0.5 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
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
		// class hp9 : RscCombo
		// {
		// 	idc = 2202;
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.492 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp10 : RscCombo
		// {
		// 	idc = 2107;
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.492 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp11 : RscCombo
		// {
		// 	idc = 2117;
		// 	x = "0.64 * safezoneW + safezoneX";
		// 	y = "0.546 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
		// class hp12 : RscCombo
		// {
		// 	idc = 2118;
		// 	x = "0.22 * safezoneW + safezoneX";
		// 	y = "0.546 * safezoneH + safezoneY";
		// 	w = "0.0875 * safezoneW";
		// 	h = "0.028 * safezoneH";
		// };
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_Stealth_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_Stealth_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_Stealth_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_Stealth_SaveCustom.sqf""";
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
class JAS_A164_GUI
{
	idd=-1;
	movingenable="false";
	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
			colorActive[]={1,1,1,1};
		};
		class a164_picture_background: RscPicture
		{
			idc=1200;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			text="ARMA3_CUP_Enhancement_Jets\ui\a164_background.paa";
		};
		class a164_loadout_pic: RscPicture
		{
			idc=1201;
			text="ARMA3_CUP_Enhancement_Jets\ui\a164_loadout_ca.paa";
			x="0.1675 * safezoneW + safezoneX";
			y="0.206 * safezoneH + safezoneY";
			w="0.56 * safezoneW";
			h="0.392 * safezoneH";
		};
		class rsc1: RscText
		{
			idc=1000;
			text="1";
			x="0.71 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1001: RscText
		{
			idc=1001;
			text="3";
			x="0.61375 * safezoneW + safezoneX";
			y="0.654 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1002: RscText
		{
			idc=1002;
			text="4";
			x="0.54375 * safezoneW + safezoneX";
			y="0.71 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1003: RscText
		{
			idc=1003;
			text="2";
			x="0.4825 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.5 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1004: RscText
		{
			idc=1004;
			text="9";
			x="0.36875 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.5 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1005: RscText
		{
			idc=1005;
			text="7";
			x="0.33375 * safezoneW + safezoneX";
			y="0.71 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1006: RscText
		{
			idc=1006;
			text="8";
			x="0.26375 * safezoneW + safezoneX";
			y="0.654 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1007: RscText
		{
			idc=1007;
			text="10";
			x="0.1675 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1103: RscText
		{
			idc=1103;
			text="5";
			x="0.4825 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1104: RscText
		{
			idc=1104;
			text="6";
			x="0.36875 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp1: RscCombo
		{
			idc=2100;
			x="0.64 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp3: RscCombo
		{
			idc=2101;
			x="0.5875 * safezoneW + safezoneX";
			y="0.682 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp4: RscCombo
		{
			idc=2102;
			x="0.50875 * safezoneW + safezoneX";
			y="0.738 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp5: RscCombo
		{
			idc=2103;
			x="0.45625 * safezoneW + safezoneX";
			y="0.794 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp6: RscCombo
		{
			idc=2104;
			x="0.3425 * safezoneW + safezoneX";
			y="0.794 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp7: RscCombo
		{
			idc=2105;
			x="0.3075 * safezoneW + safezoneX";
			y="0.738 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp8: RscCombo
		{
			idc=2106;
			x="0.2375 * safezoneW + safezoneX";
			y="0.682 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp10: RscCombo
		{
			idc=2107;
			x="0.1675 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp11: RscCombo
		{
			idc=2113;
			x="0.45625 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp12: RscCombo
		{
			idc=2114;
			x="0.3425 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1008: RscText
		{
			idc=1008;
			text="select loadout";
			x="0.73625 * safezoneW + safezoneX";
			y="0.276 * safezoneH + safezoneY";
			w="0.11375 * safezoneW";
			h="0.014 * safezoneH";
		};
		class A164_refuel_Button: RscPicture
		{
			idc=1904;
			text="FIR_AirWeaponSystem_US\ui\button_refuel.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.346 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
		};
		class btn_refuel: RscButton
		{
			idc=1600;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.346 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Refuel the Aircraft";
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\loadout\A164_Refuel.sqf""";
		};
		class A164_repair_Button: RscPicture
		{
			idc=1904;
			text="FIR_AirWeaponSystem_US\ui\button_repair.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.444 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
		};
		class btn_repair: RscButton
		{
			idc=1601;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.444 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Repair the Aircraft";
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\loadout\A164_Repair.sqf""";
		};
		class A164_Apply_Button: RscPicture
		{
			idc=1902;
			text="FIR_AirWeaponSystem_US\ui\button_apply.paa";
			x="0.64 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
		};
		class btn_apply: RscButton
		{
			idc=1602;
			text="";
			x="0.64 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Apply the Current Loadout";
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\A164_Loadout.sqf""";
		};
		class A164_Cancel_Button: RscPicture
		{
			idc=1903;
			text="FIR_AirWeaponSystem_US\ui\button_cancel.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
		};
		class btn_cancel: RscButton
		{
			idc=1603;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Close";
			action="closeDialog 0";
		};
		class a164_custom_save_Buttonpic_1: RscPicture
		{
			idc=1905;
			text="FIR_AirWeaponSystem_US\ui\button_save1_ca.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
		};
		class btn_slot1: RscButton
		{
			idc=1604;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip = "Save Loadout to Custom Slot 1";
			action="_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\a164_SaveCustom.sqf""";
		};
		class a164_custom_save_Buttonpic_2: RscPicture
		{
			idc=1906;
			text="FIR_AirWeaponSystem_US\ui\button_save2_ca.paa";
			x="0.78 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
		};
		class btn_slot2: RscButton
		{
			idc=1605;
			text="";
			x="0.78 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip = "Save Loadout to Custom Slot 2";
			action="_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\a164_SaveCustom.sqf""";
		};
		class a164_custom_save_Buttonpic_3: RscPicture
		{
			idc=1906;
			text="FIR_AirWeaponSystem_US\ui\button_save3_ca.paa";
			x="0.815 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
		};
		class btn_slot3: RscButton
		{
			idc=1606;
			text="";
			x="0.815 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip = "Save Loadout to Custom Slot 3";
			action="_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\a164_SaveCustom.sqf""";
		};
		class loadout_combo: RscCombo
		{
			idc=2108;
			x="0.745 * safezoneW + safezoneX";
			y="0.304 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
	};
};
class JAS_RAH66_GUI
{
	idd=-1;
	movingenable="false";
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
		class RAH66_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_Jets\UI\RAH66_Background.paa";
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
		/*class RscText_1003 : RscText
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
		};*/
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
		/*class hp5 : RscCombo
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
		};*/
		class RscText_1008 : RscText
		{
			idc = 1008;
			text = "select loadout";
			x = "0.73625 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.11375 * safezoneW";
			h = "0.014 * safezoneH";
		};
		class RAH66_refuel_Button : RscPicture
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
		class RAH66_repair_Button : RscPicture
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
		class RAH66_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\RAH66_Loadout.sqf""";
		};
		class RAH66_Cancel_Button : RscPicture
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
		class RAH66_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\RAH66_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\RAH66_SaveCustom.sqf""";
		};
		class RAH66_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\RAH66_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_Vanilla\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_Vanilla\data\ico\ico.paa";
		mapSize = 10;
		cost = 999999999;
		armor = 50;
	};
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
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
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class Helicopter_Base_H: Helicopter_Base_F {};
	class Heli_Attack_01_base_F: Helicopter_Base_F {};
	class B_Heli_Attack_01_F: Heli_Attack_01_base_F {};
	class Heli_Light_01_base_F: Helicopter_Base_H {};
	class Heli_Light_02_base_F: Helicopter_Base_H {};
	class Heli_Light_01_armed_base_F: Heli_Light_01_base_F {};
	class Heli_Attack_02_base_F: Helicopter_Base_F {};
	class Heli_Light_01_dynamicLoadout_base_F: Heli_Light_01_armed_base_F {};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F {};
	class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F {};
	class B_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F {};
	class B_Heli_Attack_01_dynamicLoadout_F: Heli_Attack_01_base_F {};
	class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F {};
	class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F {};
	class Heli_light_03_base_F: Helicopter_Base_F {};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F {};
	class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F {};
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
	};
	class VTOL_base_F: Plane_Base_F {};
	class VTOL_02_base_F: VTOL_base_F {};
	class Plane_CAS_01_base_F: Plane_Base_F {};
	class Plane_Fighter_01_Base_F: Plane_Base_F {};
	class Plane_Fighter_02_Base_F: Plane_Base_F {};
	class Plane_Fighter_04_Base_F: Plane_Base_F {};
	class Plane_CAS_02_base_F: Plane_Base_F{};
	class Plane_Fighter_03_base_F: Plane_Base_F {};
	class VTOL_02_infantry_base_F: VTOL_02_base_F {};
	class VTOL_02_vehicle_base_F: VTOL_02_base_F {};
	class B_Plane_CAS_01_DynamicLoadout_F: Plane_CAS_01_base_F {};
	class I_Plane_Fighter_04_F: Plane_Fighter_04_Base_F {};
	class O_Plane_Fighter_02_F: Plane_Fighter_02_Base_F {};
	class Plane_CAS_02_dynamicLoadout_base_F: Plane_CAS_02_base_F {};
	class O_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F {};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F {};
	class I_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F {};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F{};
	class O_Plane_Fighter_02_Stealth_F: Plane_Fighter_02_Base_F {};
	class VTOL_02_infantry_dynamicLoadout_base_F: VTOL_02_infantry_base_F {};
	class O_T_VTOL_02_infantry_dynamicLoadout_F: VTOL_02_infantry_dynamicLoadout_base_F {};
	class VTOL_02_vehicle_dynamicLoadout_base_F: VTOL_02_vehicle_base_F {};
	class O_T_VTOL_02_vehicle_dynamicLoadout_F: VTOL_02_vehicle_dynamicLoadout_base_F {};

	//////////////////////////////////////////////////////////////////
	// Actual vehicles here
	//////////////////////////////////////////////////////////////////
	class JAS_B_RAH66_DYNO_F: B_Heli_Attack_01_dynamicLoadout_F // Commanche
	{
		author="-{GOL}-Jason";
		displayname="RAH-66J Commanche";
		weapons[]=
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"FIR_CMLauncher",
			"missiles_DAR"
		};
		magazines[]=
		{
			//"FakeMagazine",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"PylonRack_12Rnd_missiles",
			"PylonRack_12Rnd_missiles"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					//"JAS_Master_Arm",
					"FIR_MasterArm",
					"gatling_20mm",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					//"FakeMagazine",
					"1000Rnd_20mm_shells",
					"Laserbatteries"
				};
				/*class MFD
				{
					class MFD_Pilot_10
					{
						topLeft="MFD_10_TL";
						topRight="MFD_10_TR";
						bottomLeft="MFD_10_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0.25,1,0.25};
							condition="on";
							class ReticleGroup
							{
								color[]={1,1,1};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.491429,0.452766},
											1
										},
										
										{
											{0.495,0.452766},
											1
										},
										
										{
											{0.495,0.457802},
											1
										},
										
										{
											{0.491429,0.457802},
											1
										},
										
										{
											{0.491429,0.452766},
											1
										},
										{},
										
										{
											{0.499286,0.45578799},
											1
										},
										
										{
											{0.57714301,0.45578799},
											1
										},
										{},
										
										{
											{0.49285701,0.46283901},
											1
										},
										
										{
											{0.49285701,0.55752701},
											1
										},
										{},
										
										{
											{0.48857099,0.45578799},
											1
										},
										
										{
											{0.41,0.45578799},
											1
										},
										{},
										
										{
											{0.49285701,0.35404801},
											1
										},
										
										{
											{0.49285701,0.446722},
											1
										},
										{},
										
										{
											{0.61000001,0.29965201},
											1
										},
										
										{
											{0.64285702,0.29965201},
											1
										},
										
										{
											{0.64285702,0.342967},
											1
										},
										{},
										
										{
											{0.64285702,0.57565898},
											1
										},
										
										{
											{0.64285702,0.619982},
											1
										},
										
										{
											{0.61071402,0.619982},
											1
										},
										{},
										
										{
											{0.374286,0.619982},
											1
										},
										
										{
											{0.341429,0.619982},
											1
										},
										
										{
											{0.341429,0.57565898},
											1
										},
										{},
										
										{
											{0.374286,0.29965201},
											1
										},
										
										{
											{0.341429,0.29965201},
											1
										},
										
										{
											{0.341429,0.342967},
											1
										}
									};
								};
								class ModeText
								{
									type="text";
									source="static";
									text="Mode: TI WHOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.039999999,0.31999999},
										1
									};
									right[]=
									{
										{0.07,0.31999999},
										1
									};
									down[]=
									{
										{0.039999999,0.345},
										1
									};
								};
								class RangeText
								{
									type="text";
									source="static";
									text="Range:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.36000001,0.81},
										1
									};
									right[]=
									{
										{0.40000001,0.81},
										1
									};
									down[]=
									{
										{0.36000001,0.84500003},
										1
									};
								};
								class Fuel
								{
									type="text";
									source="impactDistance";
									sourceScale=1;
									sourceLength=4;
									align="right";
									scale=1;
									pos[]=
									{
										{0.50999999,0.81},
										1
									};
									right[]=
									{
										{0.55000001,0.81},
										1
									};
									down[]=
									{
										{0.50999999,0.84500003},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_8
					{
						topLeft="MFD_8_TL";
						topRight="MFD_8_TR";
						bottomLeft="MFD_8_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class Time
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.11},
									1
								};
								right[]=
								{
									{0.13,0.11},
									1
								};
								down[]=
								{
									{0.029999999,0.2},
									1
								};
							};
							class Fuel
							{
								type="text";
								source="fuel";
								text="%X";
								sourceScale=2517;
								sourceLength=4;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.31},
									1
								};
								right[]=
								{
									{0.13,0.31},
									1
								};
								down[]=
								{
									{0.029999999,0.40000001},
									1
								};
							};
							class LBSText
							{
								type="text";
								source="static";
								text="LBS";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.30000001,0.31},
									1
								};
								right[]=
								{
									{0.40000001,0.31},
									1
								};
								down[]=
								{
									{0.30000001,0.40000001},
									1
								};
							};
							class GridX
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceOffset=-0.5;
								sourceLength=3;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.61000001},
									1
								};
								right[]=
								{
									{0.13,0.61000001},
									1
								};
								down[]=
								{
									{0.029999999,0.69999999},
									1
								};
							};
							class GridY: GridX
							{
								source="coordinateY";
								pos[]=
								{
									{0.23999999,0.61000001},
									1
								};
								right[]=
								{
									{0.34,0.61000001},
									1
								};
								down[]=
								{
									{0.23999999,0.69999999},
									1
								};
							};
							class GridText
							{
								type="text";
								source="static";
								text="GRID:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.029999999,0.50999999},
									1
								};
								right[]=
								{
									{0.13,0.50999999},
									1
								};
								down[]=
								{
									{0.029999999,0.60000002},
									1
								};
							};
						};
					};
					class MFD_Pilot_9
					{
						topLeft="MFD_9_TL";
						topRight="MFD_9_TR";
						bottomLeft="MFD_9_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={0,0.12,0};
							condition="on";
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="left";
								scale=1;
								pos[]=
								{
									{0.28,0.45199999},
									1
								};
								right[]=
								{
									{0.31999999,0.45199999},
									1
								};
								down[]=
								{
									{0.28,0.49200001},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.75,0.45199999},
									1
								};
								right[]=
								{
									{0.79000002,0.45199999},
									1
								};
								down[]=
								{
									{0.75,0.49200001},
									1
								};
							};
							class CruiseMode
							{
								condition="1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.85000002,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11: MFD_Pilot_10
					{
						topLeft="MFD_11_TL";
						topRight="MFD_11_TR";
						bottomLeft="MFD_11_BL";
						turret[]={0};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class BlackBackgroundGroup
							{
								color[]={0,0,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0,0.1},
												1
											},
											
											{
												{1,0.1},
												1
											},
											
											{
												{1,1},
												1
											},
											
											{
												{0,1},
												1
											}
										}
									};
								};
							};
							class ReticleGroup
							{
								color[]={0,0.12,0};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.43000001,0.49059799},
											1
										},
										
										{
											{0.164,0.49059799},
											1
										},
										
										{
											{0.164,0.49059799},
											1
										},
										
										{
											{0.164,0.630171},
											1
										},
										
										{
											{0.164,0.630171},
											1
										},
										
										{
											{0.43799999,0.630171},
											1
										},
										
										{
											{0.43799999,0.630171},
											1
										},
										
										{
											{0.43799999,0.73239303},
											1
										},
										
										{
											{0.62199998,0.73239303},
											1
										},
										
										{
											{0.62199998,0.630171},
											1
										},
										
										{
											{0.62199998,0.630171},
											1
										},
										
										{
											{0.898,0.630171},
											1
										},
										
										{
											{0.898,0.630171},
											1
										},
										
										{
											{0.898,0.49059799},
											1
										},
										
										{
											{0.63,0.49059799},
											1
										},
										
										{
											{0.63,0.49059799},
											1
										},
										
										{
											{0.616,0.48273501},
											1
										},
										
										{
											{0.616,0.29794899},
											1
										},
										
										{
											{0.59200001,0.29794899},
											1
										},
										
										{
											{0.55800003,0.286154},
											1
										},
										
										{
											{0.55800003,0.27239299},
											1
										},
										
										{
											{0.5,0.27239299},
											1
										},
										
										{
											{0.5,0.286154},
											1
										},
										
										{
											{0.46799999,0.29794899},
											1
										},
										
										{
											{0.44600001,0.29794899},
											1
										},
										
										{
											{0.44600001,0.48273501},
											1
										},
										
										{
											{0.43000001,0.49059799},
											1
										},
										{},
										
										{
											{0.46000001,0.60000002},
											1
										},
										
										{
											{0.60000002,0.60000002},
											1
										},
										
										{
											{0.60000002,0.72000003},
											1
										},
										
										{
											{0.46000001,0.72000003},
											1
										},
										
										{
											{0.46000001,0.60000002},
											1
										},
										{},
										
										{
											{0.039999999,0.80000001},
											1
										},
										
										{
											{0.23999999,0.80000001},
											1
										},
										
										{
											{0.23999999,0.86000001},
											1
										},
										
										{
											{0.039999999,0.86000001},
											1
										},
										
										{
											{0.039999999,0.80000001},
											1
										},
										{},
										
										{
											{-0.059999999,0.82999998},
											1
										},
										
										{
											{0.039999999,0.82999998},
											1
										},
										{},
										
										{
											{0.039999999,0.93000001},
											1
										},
										
										{
											{0.23999999,0.93000001},
											1
										},
										
										{
											{0.23999999,0.99000001},
											1
										},
										
										{
											{0.039999999,0.99000001},
											1
										},
										
										{
											{0.039999999,0.93000001},
											1
										},
										{},
										
										{
											{-0.059999999,0.95999998},
											1
										},
										
										{
											{0.039999999,0.95999998},
											1
										},
										{},
										
										{
											{0.27000001,0.86000001},
											1
										},
										
										{
											{0.82999998,0.86000001},
											1
										},
										
										{
											{0.82999998,0.98000002},
											1
										},
										
										{
											{0.27000001,0.98000002},
											1
										},
										
										{
											{0.27000001,0.86000001},
											1
										},
										{},
										
										{
											{0.23,0.18000001},
											1
										},
										
										{
											{0.37,0.18000001},
											1
										},
										
										{
											{0.37,0.25999999},
											1
										},
										
										{
											{0.23,0.25999999},
											1
										},
										
										{
											{0.23,0.18000001},
											1
										},
										{},
										
										{
											{0.69999999,0.18000001},
											1
										},
										
										{
											{0.83999997,0.18000001},
											1
										},
										
										{
											{0.83999997,0.25999999},
											1
										},
										
										{
											{0.69999999,0.25999999},
											1
										},
										
										{
											{0.69999999,0.18000001},
											1
										},
										{},
										
										{
											{0.23999999,0.28999999},
											1
										},
										
										{
											{0.36000001,0.28999999},
											1
										},
										
										{
											{0.36000001,0.37},
											1
										},
										
										{
											{0.23999999,0.37},
											1
										},
										
										{
											{0.23999999,0.28999999},
											1
										},
										{},
										
										{
											{0.70999998,0.28999999},
											1
										},
										
										{
											{0.82999998,0.28999999},
											1
										},
										
										{
											{0.82999998,0.37},
											1
										},
										
										{
											{0.70999998,0.37},
											1
										},
										
										{
											{0.70999998,0.28999999},
											1
										}
									};
								};
								class SightSelect1
								{
									type="text";
									source="static";
									text="SIGHT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.53-0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.28,0.18700001},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.29",
											0.222
										},
										1
									};
								};
								class SightSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.53-0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.28,0.227},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.29",
											0.26199999
										},
										1
									};
								};
								class AcqSelect1
								{
									type="text";
									source="static";
									text="ACQ";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{
										
										{
											"0.53+0.29",
											0.18700001
										},
										1
									};
									right[]=
									{
										{0.86000001,0.18700001},
										1
									};
									down[]=
									{
										
										{
											"0.53+0.29",
											0.222
										},
										1
									};
								};
								class AcqSelect2
								{
									type="text";
									source="static";
									text="FCR";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{
										
										{
											"0.53+0.29",
											0.227
										},
										1
									};
									right[]=
									{
										{0.86000001,0.227},
										1
									};
									down[]=
									{
										
										{
											"0.53+0.29",
											0.26199999
										},
										1
									};
								};
								class LSTSelect1
								{
									type="text";
									source="static";
									text="LST";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53-0.23",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.34,0.29699999},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.23",
											0.33199999
										},
										1
									};
								};
								class LSTSelect2
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53-0.23",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.34,0.33700001},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.23",
											0.37200001
										},
										1
									};
								};
								class LRFDSelect1
								{
									type="text";
									source="static";
									text="LRFD";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53+0.24",
											0.29699999
										},
										1
									};
									right[]=
									{
										{0.81,0.29699999},
										1
									};
									down[]=
									{
										
										{
											"0.53+0.24",
											0.33199999
										},
										1
									};
								};
								class LRFDSelect2
								{
									type="text";
									source="static";
									text="B";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53+0.24",
											0.33700001
										},
										1
									};
									right[]=
									{
										{0.81,0.33700001},
										1
									};
									down[]=
									{
										
										{
											"0.53+0.24",
											0.37200001
										},
										1
									};
								};
								class PilotText
								{
									type="text";
									source="static";
									text="PILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.53-0.48",
											0.815
										},
										1
									};
									right[]=
									{
										{0.090000004,0.815},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.48",
											0.85000002
										},
										1
									};
								};
								class CopilotText
								{
									type="text";
									source="static";
									text="COPILOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.53-0.48",
											0.94499999
										},
										1
									};
									right[]=
									{
										{0.090000004,0.94499999},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.48",
											0.98000002
										},
										1
									};
								};
								class PylonText6
								{
									type="text";
									source="static";
									text="#6";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53-0.31 + 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.25999999,0.55000001},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.31 + 0.00",
											0.58499998
										},
										1
									};
								};
								class PylonText5
								{
									type="text";
									source="static";
									text="#5";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53-0.31 + 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.34999999,0.55000001},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.31 + 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText4
								{
									type="text";
									source="static";
									text="#4";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53-0.31 + 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.44,0.55000001},
										1
									};
									down[]=
									{
										
										{
											"0.53-0.31 + 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText3
								{
									type="text";
									source="static";
									text="#3";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53+0.31 - 0.09*2",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.69999999,0.55000001},
										1
									};
									down[]=
									{
										
										{
											"0.53+0.31 - 0.09*2",
											0.58499998
										},
										1
									};
								};
								class PylonText2
								{
									type="text";
									source="static";
									text="#2";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53+0.31 - 0.09",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.79000002,0.55000001},
										1
									};
									down[]=
									{
										
										{
											"0.53+0.31 - 0.09",
											0.58499998
										},
										1
									};
								};
								class PylonText1
								{
									type="text";
									source="static";
									text="#1";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										
										{
											"0.53+0.31 - 0.00",
											0.55000001
										},
										1
									};
									right[]=
									{
										{0.88,0.55000001},
										1
									};
									down[]=
									{
										
										{
											"0.53+0.31 - 0.00",
											0.58499998
										},
										1
									};
								};
								class CurrentWeaponText
								{
									type="text";
									source="static";
									text="CURRENT WEAPON";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.55000001,0.81999999},
										1
									};
									right[]=
									{
										{0.58999997,0.81999999},
										1
									};
									down[]=
									{
										{0.55000001,0.85500002},
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
										{0.55000001,0.87},
										1
									};
									right[]=
									{
										{0.58999997,0.87},
										1
									};
									down[]=
									{
										{0.55000001,0.90499997},
										1
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
										{0.55000001,0.92000002},
										1
									};
									right[]=
									{
										{0.58999997,0.92000002},
										1
									};
									down[]=
									{
										{0.55000001,0.95499998},
										1
									};
								};
							};
							class MGun
							{
								class Default
								{
									condition="ammo0 > 0";
									color[]={0,0.12,0};
									class Shape
									{
										type="line";
										width=4;
										points[]=
										{
											
											{
												{0.55599999,0.38641},
												1
											},
											
											{
												{0.50199997,0.38641},
												1
											},
											
											{
												{0.458,0.38641},
												1
											},
											
											{
												{0.458,0.44931599},
												1
											},
											
											{
												{0.60000002,0.44931599},
												1
											},
											
											{
												{0.60000002,0.38641},
												1
											},
											
											{
												{0.55599999,0.38641},
												1
											},
											{},
											
											{
												{0.50199997,0.38641},
												1
											},
											
											{
												{0.50199997,0.32547},
												1
											},
											
											{
												{0.52200001,0.32547},
												1
											},
											
											{
												{0.52200001,0.284188},
												1
											},
											
											{
												{0.54000002,0.284188},
												1
											},
											
											{
												{0.54000002,0.327436},
												1
											},
											
											{
												{0.55599999,0.327436},
												1
											},
											
											{
												{0.55599999,0.38641},
												1
											},
											
											{
												{0.50199997,0.38641},
												1
											}
										};
									};
									class Ammo
									{
										type="text";
										source="ammo";
										sourceIndex=0;
										sourceScale=1;
										sourceLength=4;
										align="center";
										scale=1;
										pos[]=
										{
											{0.52999997,0.41},
											1
										};
										right[]=
										{
											{0.56999999,0.41},
											1
										};
										down[]=
										{
											{0.52999997,0.44499999},
											1
										};
									};
								};
								class Selected: Default
								{
									condition="(mgun +  (ammo0 min 1))/2";
									color[]={0.99000001,0.94,0.58999997};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
									};
								};
								class Empty: Default
								{
									condition="ammo0 <= 0";
									color[]={1,0,0,1};
									class Shape: Shape
									{
									};
									class Ammo: Ammo
									{
										source="static";
										text="EMPTY";
									};
								};
							};
							class Pylon1
							{
								type="pylonicon";
								pos[]=
								{
									{0.81999999,0.5},
									1
								};
								pylon=1;
								name="Heli_Attack_01";
							};
							class Pylon2: Pylon1
							{
								pos[]=
								{
									{0.73000002,0.5},
									1
								};
								pylon=2;
							};
							class Pylon3: Pylon1
							{
								pos[]=
								{
									{0.63999999,0.5},
									1
								};
								pylon=3;
							};
							class Pylon4: Pylon1
							{
								pos[]=
								{
									{0.36000001,0.5},
									1
								};
								pylon=4;
							};
							class Pylon5: Pylon1
							{
								pos[]=
								{
									{0.27000001,0.5},
									1
								};
								pylon=5;
							};
							class Pylon6: Pylon1
							{
								pos[]=
								{
									{0.18000001,0.5},
									1
								};
								pylon=6;
							};
							class ArmBackground
							{
								color[]={0.19,0.039999999,0};
								class BlackBackground
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												
												{
													"0.0+0.48",
													"0.0+0.14"
												},
												1
											},
											
											{
												
												{
													"0.1+0.48",
													"0.0+0.14"
												},
												1
											},
											
											{
												
												{
													"0.1+0.48",
													"0.1+0.14"
												},
												1
											},
											
											{
												
												{
													"0.0+0.48",
													"0.1+0.14"
												},
												1
											}
										}
									};
								};
							};
							class BlackText
							{
								color[]={0.15000001,0.0099999998,0};
								class CMText
								{
									type="text";
									source="static";
									text="ARM";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.52999997,0.17},
										1
									};
									right[]=
									{
										{0.56999999,0.17},
										1
									};
									down[]=
									{
										{0.52999997,0.205},
										1
									};
								};
							};
						};
					};
					class MFD_Pilot_11_CM: MFD_Pilot_11
					{
						turret[]={-1};
						class Draw
						{
							color[]={0,0.12,0};
							condition="on";
							class CMText
							{
								type="text";
								source="static";
								text="CM";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.52999997,0.61000001},
									1
								};
								right[]=
								{
									{0.56999999,0.61000001},
									1
								};
								down[]=
								{
									{0.52999997,0.64499998},
									1
								};
							};
							class CMAmmo
							{
								type="text";
								source="cmammo";
								sourceScale=1;
								sourceLength=3;
								align="center";
								scale=1;
								pos[]=
								{
									{0.52999997,0.66000003},
									1
								};
								right[]=
								{
									{0.56999999,0.66000003},
									1
								};
								down[]=
								{
									{0.52999997,0.69499999},
									1
								};
							};
						};
					};
					class AirplaneHUD
					{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1,1,1,1};
						helmetMountedDisplay=1;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="LucidaConsoleB";
						turret[]={0};
						class Bones
						{
							class HUDCenter
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class WeaponAim
							{
								type="vector";
								source="weapon";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class WeaponAimRelative: WeaponAim
							{
								source="weapontoview";
							};
							class VelocityVector
							{
								type="vector";
								source="velocityToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class ForwardVector
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.234,0.23};
							};
							class HorizonVector
							{
								type="horizontoview";
								pos0[]={0.5,0.5};
								pos10[]={0.83092302,0.825266};
								angle=0;
							};
							class GunnerAim
							{
								type="vector";
								source="weapon";
								pos0[]={0,-0.0024999999};
								pos10[]={0.0099999998,0.0024999999};
							};
							class VerticalSpeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1;
								min=-10;
								max=10;
								minPos[]={0,-0.31999999};
								maxPos[]={0,0.31999999};
							};
							class HorizonBankRot
							{
								type="linear";
								source="horizonBank";
								min=-0.52359998;
								max=0.52359998;
								minPos[]={0.41,0.83999997};
								maxPos[]={0.58999997,0.83999997};
								aspectRatio=1;
							};
							class ImpactPoint
							{
								type="vector";
								source="ImpactPointToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Target
							{
								source="targettoview";
								type="vector";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class LimitWaypoint
							{
								type="limit";
								limits[]={0.2,0.1,0.80000001,0.1};
							};
							class WPPoint
							{
								type="vector";
								source="WPPoint";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class WPPointToView: WPPoint
							{
								source="WPPointToView";
							};
							class RadarHeight
							{
								type="linear";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								min=0;
								max=100;
								minPos[]={0.903,0.18000001};
								maxPos[]={0.903,0.81999999};
							};
							class HorizonBankRotFull
							{
								type="rotational";
								source="horizonBank";
								center[]={0,0};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
						};
						class Draw
						{
							alpha=1;
							color[]={0.25,1,0.25};
							condition="on";
							class Static
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										{0.5,0.11},
										1
									},
									
									{
										{0.5,0.14},
										1
									},
									{},
									
									{
										{0.40000001,0.86000001},
										1
									},
									
									{
										{0.40000001,0.94},
										1
									},
									
									{
										{0.60000002,0.94},
										1
									},
									
									{
										{0.60000002,0.86000001},
										1
									},
									
									{
										{0.40000001,0.86000001},
										1
									},
									{},
									
									{
										{0.40000001,0.88499999},
										1
									},
									
									{
										{0.40799999,0.88499999},
										1
									},
									{},
									
									{
										{0.60000002,0.88499999},
										1
									},
									
									{
										{0.59200001,0.88499999},
										1
									},
									{},
									
									{
										{0.5,0.86000001},
										1
									},
									
									{
										{0.5,0.86799997},
										1
									},
									{},
									
									{
										{0.5,0.94},
										1
									},
									
									{
										{0.5,0.93199998},
										1
									},
									{},
									
									{
										{0.51999998,0.86000001},
										1
									},
									
									{
										{0.51999998,0.81999999},
										1
									},
									{},
									
									{
										{0.47999999,0.86000001},
										1
									},
									
									{
										{0.47999999,0.81999999},
										1
									},
									{},
									
									{
										{0.55000001,0},
										1
									},
									
									{
										{0.55000001,0.039999999},
										1
									},
									
									{
										{0.44999999,0.039999999},
										1
									},
									
									{
										{0.44999999,0},
										1
									},
									
									{
										{0.55000001,0},
										1
									}
								};
							};
							class HeadingNumber
							{
								type="text";
								source="Heading";
								sourceScale=1;
								align="center";
								scale=1;
								pos[]=
								{
									{0.5,0.0060000001},
									1
								};
								right[]=
								{
									{0.55000001,0.0060000001},
									1
								};
								down[]=
								{
									{0.5,0.046},
									1
								};
							};
							class HeadingRotation
							{
								condition="abs(cameraDir-heading)-2";
								class HeadingHeadNumber
								{
									type="text";
									source="cameraDir";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										
										{
											"0.80-0.302",
											"0.082-0.025"
										},
										1
									};
									right[]=
									{
										
										{
											"0.83-0.302",
											"0.082-0.025"
										},
										1
									};
									down[]=
									{
										
										{
											"0.80-0.302",
											"0.113-0.025"
										},
										1
									};
								};
								class HeadingArrow
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0.47799999,0.045000002},
											1
										},
										
										{
											{0.52200001,0.045000002},
											1
										},
										
										{
											{0.55199999,0.07},
											1
										},
										
										{
											{0.52200001,0.094999999},
											1
										},
										
										{
											{0.47799999,0.094999999},
											1
										},
										
										{
											{0.44800001,0.07},
											1
										},
										
										{
											{0.47799999,0.045000002},
											1
										},
										{}
									};
								};
								class HeadingScaleRight
								{
									clipTL[]={0.55000001,0.050000001};
									clipBR[]={0.82999998,0.11};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.5;
										center=0.5;
										bottom=0.85000002;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.49599999,0.050000001};
										right[]={0.53600001,0.050000001};
										down[]={0.49599999,0.090000004};
									};
								};
								class HeadingScaleMidle
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=1;
									width=4;
									top=0.44999999;
									center=0.5;
									bottom=0.55000001;
									lineXleft=0.11;
									lineYright=0.1;
									lineXleftMajor=0.11;
									lineYrightMajor=0.1;
									majorLineEach=2;
									step=22.5;
									stepSize=0.075000003;
									align="center";
									scale=1;
									numberEach=0;
									pos[]={0.47,0.050000001};
									right[]={0.5,0.050000001};
									down[]={0.44999999,0.090000004};
								};
								class HeadingScaleLeft
								{
									clipTL[]={0.18000001,0.050000001};
									clipBR[]={0.44999999,0.11};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.15000001;
										center=0.5;
										bottom=0.55000001;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.146,0.050000001};
										right[]={0.186,0.050000001};
										down[]={0.146,0.090000004};
									};
								};
							};
							class HeadingScaleFull
							{
								condition="3-abs(cameraDir-heading)";
								class HeadingScale
								{
									clipTL[]={0.18000001,0};
									clipBR[]={0.82999998,1};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.15000001;
										center=0.5;
										bottom=0.85000002;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.146,0.050000001};
										right[]={0.186,0.050000001};
										down[]={0.146,0.090000004};
									};
								};
							};
							class HorizonBankRot
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0026047199,-0.0145196},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0051302998,-0.0138544},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0074999998,-0.0127683},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0074999998,-0.0127683},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0096418103,-0.0112942},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0114907,-0.0094769998},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0114907,-0.0094769998},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0129904,-0.0073717898},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0140954,-0.0050426},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0140954,-0.0050426},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0147721,-0.0025601999},
											1
										},
										
										{
											"HorizonBankRot",
											{0.015,6.4446298e-010},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0147721,0.0025601999},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0140954,0.0050426},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0140954,0.0050426},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0129904,0.0073718},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0114907,0.0094769998},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0114907,0.0094769998},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0096418103,0.0112942},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0074999998,0.0127683},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0074999998,0.0127683},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0051302998,0.0138544},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0026047199,0.0145196},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0026047199,0.0145196},
											1
										},
										
										{
											"HorizonBankRot",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.00260473,0.0145196},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.00260473,0.0145196},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0051302998,0.0138544},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0074999998,0.0127683},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0074999998,0.0127683},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0096418103,0.0112942},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0114907,0.0094769998},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0114907,0.0094769998},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0129904,0.0073717898},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0140954,0.0050426},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0140954,0.0050426},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0147721,0.0025601999},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.015,-1.75816e-010},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0147721,-0.0025601999},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0140954,-0.0050426},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0140954,-0.0050426},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0129904,-0.0073718},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0114907,-0.0094769998},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0114907,-0.0094769998},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0096418103,-0.0112942},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0074999998,-0.0127683},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0074999998,-0.0127683},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0051303101,-0.0138544},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0026047199,-0.0145196},
											1
										}
									},
									
									{
										
										{
											"HorizonBankRot",
											1,
											{0,0},
											1
										},
										
										{
											"HorizonBankRot",
											{-0.0026047199,-0.0145196},
											1
										},
										
										{
											"HorizonBankRot",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"HorizonBankRot",
											{0.0026047199,-0.0145196},
											1
										}
									}
								};
							};
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
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
									{0.16,0.47999999},
									1
								};
								right[]=
								{
									{0.22,0.47999999},
									1
								};
								down[]=
								{
									{0.16,0.51999998},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.81,0.47999999},
									1
								};
								right[]=
								{
									{0.87,0.47999999},
									1
								};
								down[]=
								{
									{0.81,0.51999998},
									1
								};
							};
							class HoverMode
							{
								condition="autohover";
								class HoverText
								{
									type="text";
									source="static";
									text="HOVER";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
							};
							class CruiseMode
							{
								condition="((altitudeASL-27) min 1) - autohover";
								class CruiseText
								{
									type="text";
									source="static";
									text="CRUISE";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.87,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
							class TransitionMode
							{
								condition="((27-altitudeASL) min 1) - autohover";
								class TransText
								{
									type="text";
									source="static";
									text="TRANS";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
							};
							class HoverModeHide
							{
								condition="1-autohover";
								class VelocityLine
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										
										{
											"VelocityVector",
											{0.014,-0.0137607},
											1
										},
										
										{
											"VelocityVector",
											{0.02,0},
											1
										},
										
										{
											"VelocityVector",
											{0.014,0.0137607},
											1
										},
										
										{
											"VelocityVector",
											{0,0.0196581},
											1
										},
										
										{
											"VelocityVector",
											{-0.014,0.0137607},
											1
										},
										
										{
											"VelocityVector",
											{-0.02,0},
											1
										},
										
										{
											"VelocityVector",
											{-0.014,-0.0137607},
											1
										},
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										{},
										
										{
											"VelocityVector",
											{0.039999999,0},
											1
										},
										
										{
											"VelocityVector",
											{0.02,0},
											1
										},
										{},
										
										{
											"VelocityVector",
											{-0.039999999,0},
											1
										},
										
										{
											"VelocityVector",
											{-0.02,0},
											1
										},
										{},
										
										{
											"VelocityVector",
											{0,-0.0393162},
											1
										},
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										{}
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
									align="right";
									scale=1;
									pos[]=
									{
										{0.015,0.33418801},
										1
									};
									right[]=
									{
										{0.055,0.33418801},
										1
									};
									down[]=
									{
										{0.015,0.363675},
										1
									};
								};
							};
							class LaserGroup
							{
								condition="laseron";
								class laserText
								{
									type="text";
									source="static";
									text="LASER";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.015,0.37},
										1
									};
									right[]=
									{
										{0.055,0.37},
										1
									};
									down[]=
									{
										{0.015,0.405},
										1
									};
								};
							};
							class RadarGroup
							{
								condition="activeSensorsOn";
								class radarText
								{
									type="text";
									source="static";
									text="RADAR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.015,0.41},
										1
									};
									right[]=
									{
										{0.055,0.41},
										1
									};
									down[]=
									{
										{0.015,0.44499999},
										1
									};
								};
							};
							class VerticalSpeedScale
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"WeaponAimRelative",
										1,
										{-0.029999999,0},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{-0.02,0},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0.02,0},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0.029999999,0},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0,-0.02},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0,-0.029999999},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0,0.02},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0,0.029999999},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{-0.029999999,0},
										1
									},
									
									{
										"HUDCenter",
										1,
										{-0.0099999998,0},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0.0099999998,0},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0.029999999,0},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0,-0.0099999998},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0,-0.029999999},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0,0.0099999998},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0,0.029999999},
										1
									},
									{},
									
									{
										{0.91500002,0.18000001},
										1
									},
									
									{
										{0.935,0.18000001},
										1
									},
									{},
									
									{
										{0.87,0.18000001},
										1
									},
									
									{
										{0.88999999,0.18000001},
										1
									},
									{},
									
									{
										{0.91500002,0.34},
										1
									},
									
									{
										{0.935,0.34},
										1
									},
									{},
									
									{
										{0.87,0.34},
										1
									},
									
									{
										{0.88999999,0.34},
										1
									},
									{},
									
									{
										{0.875,0.37200001},
										1
									},
									
									{
										{0.88499999,0.37200001},
										1
									},
									{},
									
									{
										{0.875,0.40400001},
										1
									},
									
									{
										{0.88499999,0.40400001},
										1
									},
									{},
									
									{
										{0.875,0.43599999},
										1
									},
									
									{
										{0.88499999,0.43599999},
										1
									},
									{},
									
									{
										{0.875,0.46799999},
										1
									},
									
									{
										{0.88499999,0.46799999},
										1
									},
									{},
									
									{
										{0.87,0.5},
										1
									},
									
									{
										{0.88999999,0.5},
										1
									},
									{},
									
									{
										{0.91500002,0.5},
										1
									},
									
									{
										{0.935,0.5},
										1
									},
									{},
									
									{
										{0.91500002,0.66000003},
										1
									},
									
									{
										{0.935,0.66000003},
										1
									},
									{},
									
									{
										{0.87,0.66000003},
										1
									},
									
									{
										{0.88999999,0.66000003},
										1
									},
									{},
									
									{
										{0.875,0.62800002},
										1
									},
									
									{
										{0.88499999,0.62800002},
										1
									},
									{},
									
									{
										{0.875,0.59600002},
										1
									},
									
									{
										{0.88499999,0.59600002},
										1
									},
									{},
									
									{
										{0.875,0.56400001},
										1
									},
									
									{
										{0.88499999,0.56400001},
										1
									},
									{},
									
									{
										{0.875,0.53200001},
										1
									},
									
									{
										{0.88499999,0.53200001},
										1
									},
									{},
									
									{
										{0.92000002,0.69199997},
										1
									},
									
									{
										{0.93000001,0.69199997},
										1
									},
									{},
									
									{
										{0.92000002,0.72399998},
										1
									},
									
									{
										{0.93000001,0.72399998},
										1
									},
									{},
									
									{
										{0.92000002,0.75599998},
										1
									},
									
									{
										{0.93000001,0.75599998},
										1
									},
									{},
									
									{
										{0.92000002,0.78799999},
										1
									},
									
									{
										{0.93000001,0.78799999},
										1
									},
									{},
									
									{
										{0.91500002,0.81999999},
										1
									},
									
									{
										{0.935,0.81999999},
										1
									},
									{},
									
									{
										{0.87,0.81999999},
										1
									},
									
									{
										{0.88999999,0.81999999},
										1
									},
									{}
								};
							};
							class VerticalSpeedArrow
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"VerticalSpeedBone",
											{0.85000002,0.48800001},
											1
										},
										
										{
											"VerticalSpeedBone",
											{0.87,0.5},
											1
										},
										
										{
											"VerticalSpeedBone",
											{0.85000002,0.51200002},
											1
										}
									}
								};
							};
							class RadarAltitude
							{
								condition="101-altitudeAGL";
								class RadarHeight
								{
									type="line";
									width=15;
									points[]=
									{
										
										{
											{0.903,0.81999999},
											1
										},
										
										{
											"RadarHeight",
											{0,0},
											1
										},
										{}
									};
								};
							};
							class HorizonLine
							{
								condition="1-autohover";
								clipTL[]={0.2,0.145};
								clipBR[]={0.80000001,0.85500002};
								class HorizonLineDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"HorizonVector",
											{-0.22499999,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.1875,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{-0.15000001,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.1125,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{-0.075000003,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.037500001,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.037500001,0},
											1
										},
										
										{
											"HorizonVector",
											{0.075000003,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.1125,0},
											1
										},
										
										{
											"HorizonVector",
											{0.15000001,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.1875,0},
											1
										},
										
										{
											"HorizonVector",
											{0.22499999,0},
											1
										}
									};
								};
							};
							class Gunner
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									},
									
									{
										"GunnerAim",
										{0.48500001,0.90799999},
										1
									},
									
									{
										"GunnerAim",
										{0.51499999,0.90799999},
										1
									},
									
									{
										"GunnerAim",
										{0.51499999,0.89200002},
										1
									},
									
									{
										"GunnerAim",
										{0.48500001,0.89200002},
										1
									}
								};
							};
							class WeaponsText
							{
								condition="1- mgun";
								class Weapons
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="left";
									scale=0.5;
									pos[]=
									{
										{0.38,0.86900002},
										1
									};
									right[]=
									{
										{0.41499999,0.86900002},
										1
									};
									down[]=
									{
										{0.38,0.90399998},
										1
									};
								};
							};
							class Ammo
							{
								type="text";
								source="ammo";
								sourceScale=1;
								align="left";
								scale=0.5;
								pos[]=
								{
									{0.38,0.90100002},
									1
								};
								right[]=
								{
									{0.41499999,0.90100002},
									1
								};
								down[]=
								{
									{0.38,0.93599999},
									1
								};
							};
							class MGun
							{
								condition="mgun";
								class Weapons
								{
									type="text";
									source="static";
									text="GUN";
									sourceScale=1;
									align="left";
									scale=0.5;
									pos[]=
									{
										{0.38,0.86900002},
										1
									};
									right[]=
									{
										{0.41499999,0.86900002},
										1
									};
									down[]=
									{
										{0.38,0.90399998},
										1
									};
								};
								class Circle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"ImpactPoint",
											{0.025,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.0099999998,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,0.0245726},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0098290602},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{-0.025,0},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0245726},
											1
										},
										
										{
											"ImpactPoint",
											{0,-0.0098290602},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0098290602},
											1
										},
										
										{
											"ImpactPoint",
											{0.0070000002,-0.0068803402},
											1
										},
										
										{
											"ImpactPoint",
											{0.0099999998,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.0070000002,0.0068803402},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0098290602},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0070000002,0.0068803402},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,0},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0070000002,-0.0068803402},
											1
										},
										
										{
											"ImpactPoint",
											{0,-0.0098290602},
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
									width=4;
									points[]=
									{
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0,-0.245726},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.043400001,-0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.085500002,-0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.125,-0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.16069999,-0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.19149999,-0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2165,-0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.234925,-0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2462,-0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.25,0},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2462,0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.234925,0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2165,0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.19149999,0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.16069999,0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.125,0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.085500002,0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.043400001,0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0,0.245726},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.043400001,0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.085500002,0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.125,0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.16069999,0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.19149999,0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2165,0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.234925,0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2462,0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.25,0},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2462,-0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.234925,-0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2165,-0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.19149999,-0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.16069999,-0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.125,-0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.085500002,-0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.043400001,-0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0,-0.245726},
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
									width=4;
									points[]=
									{
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,-0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,-0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.13,-0.14743599},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.13,0.14743599},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.13,-0.14743599},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.13,0.14743599},
											1
										}
									};
								};
							};
							class Rockets
							{
								condition="rocket";
								class RocketDummy
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"ImpactPoint",
											{0.0099999998,-0.0294872},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,-0.0294872},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0.0099999998,0.0294872},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,0.0294872},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0294872},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0294872},
											1
										},
										{}
									};
								};
							};
							class WP
							{
								condition="wpvalid - autohover";
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
										{0.235,0.77403802},
										1
									};
									right[]=
									{
										{0.27500001,0.77403802},
										1
									};
									down[]=
									{
										{0.235,0.80155998},
										1
									};
								};
								class WPIndex
								{
									type="text";
									source="wpIndex";
									sourceScale=1;
									sourceLength=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.096000001,0.77600402},
										1
									};
									right[]=
									{
										{0.126,0.77600402},
										1
									};
									down[]=
									{
										{0.096000001,0.79959399},
										1
									};
								};
								class WPstatic
								{
									type="text";
									source="static";
									text="W";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.075000003,0.77499998},
										1
									};
									right[]=
									{
										{0.105,0.77499998},
										1
									};
									down[]=
									{
										{0.075000003,0.80000001},
										1
									};
								};
								class WPAuto
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.035",
											0.80000001
										},
										1
									};
									right[]=
									{
										{0.14,0.80000001},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.035",
											0.82499999
										},
										1
									};
								};
								class WPKM
								{
									type="text";
									source="static";
									text="KM";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.16",
											0.77499998
										},
										1
									};
									right[]=
									{
										{0.26499999,0.77499998},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.16",
											0.80299997
										},
										1
									};
								};
								class WPTime
								{
									type="text";
									source="static";
									text="-:--";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.11",
											0.80000001
										},
										1
									};
									right[]=
									{
										{0.215,0.80000001},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.11",
											0.82499999
										},
										1
									};
								};
								class WP
								{
									width=2;
									type="line";
									points[]=
									{
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{-0.02,0.039999999},
											1
										},
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{0,0.02},
											1
										},
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{0.02,0.039999999},
											1
										},
										{}
									};
								};
							};
							class WeaponsLocking
							{
								condition="missilelocking";
								blinkingPattern[]={0.2,0.2};
								blinkingStartsOn=1;
								class Text
								{
									type="text";
									source="static";
									text="LOCKING";
									align="center";
									scale=1;
									pos[]=
									{
										{0.493,0.76666701},
										1
									};
									right[]=
									{
										{0.55299997,0.76666701},
										1
									};
									down[]=
									{
										{0.493,0.81581199},
										1
									};
								};
							};
							class IncomingMissile
							{
								condition="incomingmissile";
								blinkingPattern[]={0.30000001,0.30000001};
								blinkingStartsOn=1;
								class Text
								{
									type="text";
									source="static";
									text="!INCOMING MISSILE!";
									align="center";
									scale=1;
									pos[]=
									{
										{0.48500001,0.21623901},
										1
									};
									right[]=
									{
										{0.54500002,0.21623901},
										1
									};
									down[]=
									{
										{0.48500001,0.265385},
										1
									};
								};
							};
							class RadarTargets
							{
								class RadarBoxes
								{
									type="radartoview";
									pos0[]={0.5,0.5};
									pos10[]={0.73400003,0.73000002};
									width=4;
									points[]=
									{
										
										{
											{-0.0035000001,-0.0034401701},
											1
										},
										
										{
											{0.0035000001,-0.0034401701},
											1
										},
										
										{
											{0.0035000001,0.0034401701},
											1
										},
										
										{
											{-0.0035000001,0.0034401701},
											1
										},
										
										{
											{-0.0035000001,-0.0034401701},
											1
										}
									};
								};
							};
							class TargetDiamond
							{
								class shape
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0074999998,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0125,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0175,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.022500001,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0275,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.032499999,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.037500001,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0425,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.047499999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.052499998,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0074999998,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0125,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0175,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.022500001,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0275,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.032499999,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.037500001,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0425,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.047499999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.052499998,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0073717898},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0122863},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0172009},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0221154},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0270299},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.031944402},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.036858998},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.041773502},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.046688002},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.051602598},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0073717898},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0122863},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0172009},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0221154},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0270299},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.031944402},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.036858998},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.041773502},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.046688002},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.051602598},
											1
										},
										{}
									};
								};
							};
							class TargetLocked
							{
								condition="missilelocked";
								class TargetLockedText
								{
									type="text";
									source="static";
									text="VALID LOCK";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.493,0.77899998},
										1
									};
									right[]=
									{
										{0.53299999,0.77899998},
										1
									};
									down[]=
									{
										{0.493,0.81},
										1
									};
								};
								class TimeOfFlightText
								{
									type="text";
									source="static";
									text="TOF:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.127+0.49",
											0.86900002
										},
										1
									};
									right[]=
									{
										{0.65200001,0.86900002},
										1
									};
									down[]=
									{
										
										{
											"0.127+0.49",
											0.90399998
										},
										1
									};
								};
								class DistanceText
								{
									type="text";
									source="static";
									text="DIST:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.125+0.49",
											0.90100002
										},
										1
									};
									right[]=
									{
										{0.64999998,0.90100002},
										1
									};
									down[]=
									{
										
										{
											"0.125+0.49",
											0.93599999
										},
										1
									};
								};
								class TOF_source
								{
									type="text";
									scale=1;
									sourceScale=1;
									source="missileflighttime";
									align="right";
									pos[]=
									{
										{0.73900002,0.86900002},
										1
									};
									right[]=
									{
										{0.77399999,0.86900002},
										1
									};
									down[]=
									{
										{0.73900002,0.90399998},
										1
									};
								};
								class TargetDistance: TOF_source
								{
									source="targetDist";
									sourceLength=0;
									sourcePrecision=1;
									sourceScale=0.001;
									align="right";
									pos[]=
									{
										{0.73900002,0.90100002},
										1
									};
									right[]=
									{
										{0.77399999,0.90100002},
										1
									};
									down[]=
									{
										{0.73900002,0.93599999},
										1
									};
								};
							};
						};
					};
				};*/
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Beta\Heli_Attack_01\Data\UI\Heli_Attack_01_EDEN_CA.paa";
				class pylons
				{
					class pylonLeft1 // left outboard
					{
						attachment = "";
						bay = 1;
						//hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						hardpoints[] = {"DAR","DAGR","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						priority = 5;
						turret[] = {0};
						UIposition[] = {0.06,0.4};
					};
					class pylonLeft2: pylonLeft1 // left midline
					{
						attachment = "";
						bay = 1;
						//hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						hardpoints[] = {"JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						priority = 4;
						turret[] = {0};
						UIposition[] = {0.08,0.35};
					};
					class pylonLeft3: pylonLeft1 // left inboard
					{
						attachment = "PylonRack_12Rnd_missiles";
						bay = 1;
						//hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						hardpoints[] = {"DAR"};
						priority = 3;
						turret[] = {};
						UIposition[] = {0.1,0.3};
					};
					class pylonRight3: pylonLeft3 // right inboard
					{
						attachment = "PylonRack_12Rnd_missiles";
						bay = 1;
						//hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						hardpoints[] = {"DAR"};
						mirroredMissilePos = 3;
						priority = 3;
						turret[] = {};
						UIposition[] = {0.55,0.3};
					};
					class pylonRight2: pylonLeft2 // right midline
					{
						attachment = "";
						bay = 1;
						//hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						hardpoints[] = {"JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						mirroredMissilePos = 2;
						priority = 4;
						turret[] = {0};
						UIposition[] = {0.57,0.35};
					};
					class pylonRight1: pylonLeft1 // right outboard
					{
						attachment = "";
						bay = 1;
						//hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						hardpoints[] = {"DAR","DAGR","JAS_HELLFIREL_PYLON","JAS_ASRAAM_PYLON"};
						mirroredMissilePos = 1;
						priority = 5;
						turret[] = {0};
						UIposition[] = {0.59,0.4};
					};
				};
				class Bays
				{
					class Bay
					{
						bayOpenTime=1;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=2;
					};
				};
				class presets
				{
					class default
					{
						displayName="Killer/Scout";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M",
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles",
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_N_1rnd_PYLON_M"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M",
							"JAS_FIR_Hellfire_L_1rnd_PYLON_M"
						};
					};
					class ESCORT
					{
						displayName="Escort";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
				};
			};
		};
		class UserActions
		{
			class RAH66_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\RAH66_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_B_RAH66_DYNO_AAC: JAS_B_RAH66_DYNO_F // Commanche AAC
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ZEUS";
	};
	class JAS_FIR_A164J_DYNO: B_Plane_CAS_01_DynamicLoadout_F // Wipeout
	{
		scope=2;
		author="-{GOL}-Jason";
		displayname="A-164J Wipeout";
		weapons[]=
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"JAS_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			//"FakeMagazine",
			"JAS_1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class MFD
		{
			/*class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
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
			};*/
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
			class MFD_Left
			{
				topLeft="MFD_1_top_left";
				topRight="MFD_1_top_right";
				bottomLeft="MFD_1_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0.1;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class PylonAmmo1
					{
						type="linear";
						source="PylonAmmoRelative";
						sourceIndex=1;
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,0};
						maxPos[]={0,0.051757801};
					};
					class PylonAmmo2: PylonAmmo1
					{
						sourceIndex=2;
					};
					class PylonAmmo3: PylonAmmo1
					{
						sourceIndex=3;
					};
					class PylonAmmo4: PylonAmmo1
					{
						sourceIndex=4;
					};
					class PylonAmmo5: PylonAmmo1
					{
						sourceIndex=5;
					};
					class PylonAmmo6: PylonAmmo1
					{
						sourceIndex=6;
					};
					class PylonAmmo7: PylonAmmo1
					{
						sourceIndex=7;
					};
					class PylonAmmo8: PylonAmmo1
					{
						sourceIndex=8;
					};
					class PylonAmmo9: PylonAmmo1
					{
						sourceIndex=9;
					};
					class PylonAmmo10: PylonAmmo1
					{
						sourceIndex=10;
					};
				};
				class Draw
				{
					color[]={0,0.83999997,0,1};
					alpha=1;
					condition="on";
					class PylonSelected6
					{
						condition="PylonSelected6>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative6>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.15763301},
											1
										},
										
										{
											{0.113477,0.24454699},
											1
										},
										
										{
											{0.32246101,0.24454699},
											1
										},
										
										{
											{0.32246101,0.15763301},
											1
										},
										
										{
											{0.113477,0.15763301},
											1
										},
										{},
										
										{
											{0.32234401,0.226969},
											1
										},
										
										{
											{0.35749999,0.226969},
											1
										},
										
										{
											{0.35749999,0.175211},
											1
										},
										
										{
											{0.32234401,0.175211},
											1
										},
										
										{
											{0.32234401,0.226969},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.226969},
											1
										},
										
										{
											{0.35749999,0.226969},
											1
										},
										
										{
											"PylonAmmo6",
											{0.35749999,0.175211},
											1
										},
										
										{
											"PylonAmmo6",
											{0.32234401,0.175211},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=6;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.163727},
									1
								};
								right[]=
								{
									{0.16328099,0.163727},
									1
								};
								down[]=
								{
									{0.127148,0.198883},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=6;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.20372701},
									1
								};
								right[]=
								{
									{0.16328099,0.20372701},
									1
								};
								down[]=
								{
									{0.127148,0.238883},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=6;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.20372701},
									1
								};
								right[]=
								{
									{0.343281,0.20372701},
									1
								};
								down[]=
								{
									{0.30714801,0.238883},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative6<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.226969},
											1
										},
										
										{
											{0.35749999,0.226969},
											1
										},
										
										{
											{0.35749999,0.175211},
											1
										},
										
										{
											{0.32234401,0.175211},
											1
										},
										
										{
											{0.32234401,0.226969},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.15763301},
												1
											},
											
											{
												{0.113477,0.24454699},
												1
											},
											
											{
												{0.32246101,0.24454699},
												1
											},
											
											{
												{0.32246101,0.15763301},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=6;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.16349199},
										1
									};
									right[]=
									{
										{0.14375,0.16349199},
										1
									};
									down[]=
									{
										{0.127148,0.18888301},
										1
									};
								};
							};
						};
					};
					class Pylon6
					{
						condition="PylonSelected6<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative6>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.15763301},
											1
										},
										
										{
											{0.113477,0.24454699},
											1
										},
										
										{
											{0.32246101,0.24454699},
											1
										},
										
										{
											{0.32246101,0.15763301},
											1
										},
										
										{
											{0.113477,0.15763301},
											1
										},
										{},
										
										{
											{0.32234401,0.226969},
											1
										},
										
										{
											{0.35749999,0.226969},
											1
										},
										
										{
											{0.35749999,0.175211},
											1
										},
										
										{
											{0.32234401,0.175211},
											1
										},
										
										{
											{0.32234401,0.226969},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.226969},
											1
										},
										
										{
											{0.35749999,0.226969},
											1
										},
										
										{
											"PylonAmmo6",
											{0.35749999,0.175211},
											1
										},
										
										{
											"PylonAmmo6",
											{0.32234401,0.175211},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=6;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.163727},
									1
								};
								right[]=
								{
									{0.16328099,0.163727},
									1
								};
								down[]=
								{
									{0.127148,0.198883},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=6;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.20372701},
									1
								};
								right[]=
								{
									{0.16328099,0.20372701},
									1
								};
								down[]=
								{
									{0.127148,0.238883},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=6;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.20372701},
									1
								};
								right[]=
								{
									{0.343281,0.20372701},
									1
								};
								down[]=
								{
									{0.30714801,0.238883},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative6<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.226969},
											1
										},
										
										{
											{0.35749999,0.226969},
											1
										},
										
										{
											{0.35749999,0.175211},
											1
										},
										
										{
											{0.32234401,0.175211},
											1
										},
										
										{
											{0.32234401,0.226969},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.15763301},
												1
											},
											
											{
												{0.113477,0.24454699},
												1
											},
											
											{
												{0.32246101,0.24454699},
												1
											},
											
											{
												{0.32246101,0.15763301},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=6;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.16349199},
										1
									};
									right[]=
									{
										{0.14375,0.16349199},
										1
									};
									down[]=
									{
										{0.127148,0.18888301},
										1
									};
								};
							};
						};
					};
					class PylonSelected7
					{
						condition="PylonSelected7>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative7>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.273844},
											1
										},
										
										{
											{0.113477,0.36075801},
											1
										},
										
										{
											{0.32246101,0.36075801},
											1
										},
										
										{
											{0.32246101,0.273844},
											1
										},
										
										{
											{0.113477,0.273844},
											1
										},
										{},
										
										{
											{0.32234401,0.34318},
											1
										},
										
										{
											{0.35749999,0.34318},
											1
										},
										
										{
											{0.35749999,0.29142201},
											1
										},
										
										{
											{0.32234401,0.29142201},
											1
										},
										
										{
											{0.32234401,0.34318},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.34318},
											1
										},
										
										{
											{0.35749999,0.34318},
											1
										},
										
										{
											"PylonAmmo7",
											{0.35749999,0.29142201},
											1
										},
										
										{
											"PylonAmmo7",
											{0.32234401,0.29142201},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=7;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.27993801},
									1
								};
								right[]=
								{
									{0.16328099,0.27993801},
									1
								};
								down[]=
								{
									{0.127148,0.31509399},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=7;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.31993699},
									1
								};
								right[]=
								{
									{0.16328099,0.31993699},
									1
								};
								down[]=
								{
									{0.127148,0.35509399},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=7;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.31993699},
									1
								};
								right[]=
								{
									{0.343281,0.31993699},
									1
								};
								down[]=
								{
									{0.30714801,0.35509399},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative7<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.34318},
											1
										},
										
										{
											{0.35749999,0.34318},
											1
										},
										
										{
											{0.35749999,0.29142201},
											1
										},
										
										{
											{0.32234401,0.29142201},
											1
										},
										
										{
											{0.32234401,0.34318},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.273844},
												1
											},
											
											{
												{0.113477,0.36075801},
												1
											},
											
											{
												{0.32246101,0.36075801},
												1
											},
											
											{
												{0.32246101,0.273844},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=7;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.27970299},
										1
									};
									right[]=
									{
										{0.14375,0.27970299},
										1
									};
									down[]=
									{
										{0.127148,0.305094},
										1
									};
								};
							};
						};
					};
					class Pylon7
					{
						condition="PylonSelected7<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative7>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.273844},
											1
										},
										
										{
											{0.113477,0.36075801},
											1
										},
										
										{
											{0.32246101,0.36075801},
											1
										},
										
										{
											{0.32246101,0.273844},
											1
										},
										
										{
											{0.113477,0.273844},
											1
										},
										{},
										
										{
											{0.32234401,0.34318},
											1
										},
										
										{
											{0.35749999,0.34318},
											1
										},
										
										{
											{0.35749999,0.29142201},
											1
										},
										
										{
											{0.32234401,0.29142201},
											1
										},
										
										{
											{0.32234401,0.34318},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.34318},
											1
										},
										
										{
											{0.35749999,0.34318},
											1
										},
										
										{
											"PylonAmmo7",
											{0.35749999,0.29142201},
											1
										},
										
										{
											"PylonAmmo7",
											{0.32234401,0.29142201},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=7;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.27993801},
									1
								};
								right[]=
								{
									{0.16328099,0.27993801},
									1
								};
								down[]=
								{
									{0.127148,0.31509399},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=7;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.31993699},
									1
								};
								right[]=
								{
									{0.16328099,0.31993699},
									1
								};
								down[]=
								{
									{0.127148,0.35509399},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=7;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.31993699},
									1
								};
								right[]=
								{
									{0.343281,0.31993699},
									1
								};
								down[]=
								{
									{0.30714801,0.35509399},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative7<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.34318},
											1
										},
										
										{
											{0.35749999,0.34318},
											1
										},
										
										{
											{0.35749999,0.29142201},
											1
										},
										
										{
											{0.32234401,0.29142201},
											1
										},
										
										{
											{0.32234401,0.34318},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.273844},
												1
											},
											
											{
												{0.113477,0.36075801},
												1
											},
											
											{
												{0.32246101,0.36075801},
												1
											},
											
											{
												{0.32246101,0.273844},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=7;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.27970299},
										1
									};
									right[]=
									{
										{0.14375,0.27970299},
										1
									};
									down[]=
									{
										{0.127148,0.305094},
										1
									};
								};
							};
						};
					};
					class PylonSelected8
					{
						condition="PylonSelected8>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative8>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.390055},
											1
										},
										
										{
											{0.113477,0.476969},
											1
										},
										
										{
											{0.32246101,0.476969},
											1
										},
										
										{
											{0.32246101,0.390055},
											1
										},
										
										{
											{0.113477,0.390055},
											1
										},
										{},
										
										{
											{0.32234401,0.459391},
											1
										},
										
										{
											{0.35749999,0.459391},
											1
										},
										
										{
											{0.35749999,0.40763301},
											1
										},
										
										{
											{0.32234401,0.40763301},
											1
										},
										
										{
											{0.32234401,0.459391},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.459391},
											1
										},
										
										{
											{0.35749999,0.459391},
											1
										},
										
										{
											"PylonAmmo8",
											{0.35749999,0.40763301},
											1
										},
										
										{
											"PylonAmmo8",
											{0.32234401,0.40763301},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=8;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.396148},
									1
								};
								right[]=
								{
									{0.16328099,0.396148},
									1
								};
								down[]=
								{
									{0.127148,0.43130499},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=8;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.43614799},
									1
								};
								right[]=
								{
									{0.16328099,0.43614799},
									1
								};
								down[]=
								{
									{0.127148,0.47130501},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=8;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.43614799},
									1
								};
								right[]=
								{
									{0.343281,0.43614799},
									1
								};
								down[]=
								{
									{0.30714801,0.47130501},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative8<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.459391},
											1
										},
										
										{
											{0.35749999,0.459391},
											1
										},
										
										{
											{0.35749999,0.40763301},
											1
										},
										
										{
											{0.32234401,0.40763301},
											1
										},
										
										{
											{0.32234401,0.459391},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.390055},
												1
											},
											
											{
												{0.113477,0.476969},
												1
											},
											
											{
												{0.32246101,0.476969},
												1
											},
											
											{
												{0.32246101,0.390055},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=8;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.39591399},
										1
									};
									right[]=
									{
										{0.14375,0.39591399},
										1
									};
									down[]=
									{
										{0.127148,0.421305},
										1
									};
								};
							};
						};
					};
					class Pylon8
					{
						condition="PylonSelected8<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative8>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.390055},
											1
										},
										
										{
											{0.113477,0.476969},
											1
										},
										
										{
											{0.32246101,0.476969},
											1
										},
										
										{
											{0.32246101,0.390055},
											1
										},
										
										{
											{0.113477,0.390055},
											1
										},
										{},
										
										{
											{0.32234401,0.459391},
											1
										},
										
										{
											{0.35749999,0.459391},
											1
										},
										
										{
											{0.35749999,0.40763301},
											1
										},
										
										{
											{0.32234401,0.40763301},
											1
										},
										
										{
											{0.32234401,0.459391},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.459391},
											1
										},
										
										{
											{0.35749999,0.459391},
											1
										},
										
										{
											"PylonAmmo8",
											{0.35749999,0.40763301},
											1
										},
										
										{
											"PylonAmmo8",
											{0.32234401,0.40763301},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=8;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.396148},
									1
								};
								right[]=
								{
									{0.16328099,0.396148},
									1
								};
								down[]=
								{
									{0.127148,0.43130499},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=8;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.43614799},
									1
								};
								right[]=
								{
									{0.16328099,0.43614799},
									1
								};
								down[]=
								{
									{0.127148,0.47130501},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=8;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.43614799},
									1
								};
								right[]=
								{
									{0.343281,0.43614799},
									1
								};
								down[]=
								{
									{0.30714801,0.47130501},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative8<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.459391},
											1
										},
										
										{
											{0.35749999,0.459391},
											1
										},
										
										{
											{0.35749999,0.40763301},
											1
										},
										
										{
											{0.32234401,0.40763301},
											1
										},
										
										{
											{0.32234401,0.459391},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.390055},
												1
											},
											
											{
												{0.113477,0.476969},
												1
											},
											
											{
												{0.32246101,0.476969},
												1
											},
											
											{
												{0.32246101,0.390055},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=8;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.39591399},
										1
									};
									right[]=
									{
										{0.14375,0.39591399},
										1
									};
									down[]=
									{
										{0.127148,0.421305},
										1
									};
								};
							};
						};
					};
					class PylonSelected9
					{
						condition="PylonSelected9>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative9>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.506266},
											1
										},
										
										{
											{0.113477,0.59318},
											1
										},
										
										{
											{0.32246101,0.59318},
											1
										},
										
										{
											{0.32246101,0.506266},
											1
										},
										
										{
											{0.113477,0.506266},
											1
										},
										{},
										
										{
											{0.32234401,0.57560199},
											1
										},
										
										{
											{0.35749999,0.57560199},
											1
										},
										
										{
											{0.35749999,0.523844},
											1
										},
										
										{
											{0.32234401,0.523844},
											1
										},
										
										{
											{0.32234401,0.57560199},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.57560199},
											1
										},
										
										{
											{0.35749999,0.57560199},
											1
										},
										
										{
											"PylonAmmo9",
											{0.35749999,0.523844},
											1
										},
										
										{
											"PylonAmmo9",
											{0.32234401,0.523844},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=9;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.51235902},
									1
								};
								right[]=
								{
									{0.16328099,0.51235902},
									1
								};
								down[]=
								{
									{0.127148,0.54751599},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=9;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.55235898},
									1
								};
								right[]=
								{
									{0.16328099,0.55235898},
									1
								};
								down[]=
								{
									{0.127148,0.58751601},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=9;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.55235898},
									1
								};
								right[]=
								{
									{0.343281,0.55235898},
									1
								};
								down[]=
								{
									{0.30714801,0.58751601},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative9<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.57560199},
											1
										},
										
										{
											{0.35749999,0.57560199},
											1
										},
										
										{
											{0.35749999,0.523844},
											1
										},
										
										{
											{0.32234401,0.523844},
											1
										},
										
										{
											{0.32234401,0.57560199},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.506266},
												1
											},
											
											{
												{0.113477,0.59318},
												1
											},
											
											{
												{0.32246101,0.59318},
												1
											},
											
											{
												{0.32246101,0.506266},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=9;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.51212502},
										1
									};
									right[]=
									{
										{0.14375,0.51212502},
										1
									};
									down[]=
									{
										{0.127148,0.537516},
										1
									};
								};
							};
						};
					};
					class Pylon9
					{
						condition="PylonSelected9<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative9>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.506266},
											1
										},
										
										{
											{0.113477,0.59318},
											1
										},
										
										{
											{0.32246101,0.59318},
											1
										},
										
										{
											{0.32246101,0.506266},
											1
										},
										
										{
											{0.113477,0.506266},
											1
										},
										{},
										
										{
											{0.32234401,0.57560199},
											1
										},
										
										{
											{0.35749999,0.57560199},
											1
										},
										
										{
											{0.35749999,0.523844},
											1
										},
										
										{
											{0.32234401,0.523844},
											1
										},
										
										{
											{0.32234401,0.57560199},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.57560199},
											1
										},
										
										{
											{0.35749999,0.57560199},
											1
										},
										
										{
											"PylonAmmo9",
											{0.35749999,0.523844},
											1
										},
										
										{
											"PylonAmmo9",
											{0.32234401,0.523844},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=9;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.51235902},
									1
								};
								right[]=
								{
									{0.16328099,0.51235902},
									1
								};
								down[]=
								{
									{0.127148,0.54751599},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=9;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.55235898},
									1
								};
								right[]=
								{
									{0.16328099,0.55235898},
									1
								};
								down[]=
								{
									{0.127148,0.58751601},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=9;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.55235898},
									1
								};
								right[]=
								{
									{0.343281,0.55235898},
									1
								};
								down[]=
								{
									{0.30714801,0.58751601},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative9<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.57560199},
											1
										},
										
										{
											{0.35749999,0.57560199},
											1
										},
										
										{
											{0.35749999,0.523844},
											1
										},
										
										{
											{0.32234401,0.523844},
											1
										},
										
										{
											{0.32234401,0.57560199},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.506266},
												1
											},
											
											{
												{0.113477,0.59318},
												1
											},
											
											{
												{0.32246101,0.59318},
												1
											},
											
											{
												{0.32246101,0.506266},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=9;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.51212502},
										1
									};
									right[]=
									{
										{0.14375,0.51212502},
										1
									};
									down[]=
									{
										{0.127148,0.537516},
										1
									};
								};
							};
						};
					};
					class PylonSelected10
					{
						condition="PylonSelected10>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative10>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.62247699},
											1
										},
										
										{
											{0.113477,0.709391},
											1
										},
										
										{
											{0.32246101,0.709391},
											1
										},
										
										{
											{0.32246101,0.62247699},
											1
										},
										
										{
											{0.113477,0.62247699},
											1
										},
										{},
										
										{
											{0.32234401,0.69181299},
											1
										},
										
										{
											{0.35749999,0.69181299},
											1
										},
										
										{
											{0.35749999,0.640055},
											1
										},
										
										{
											{0.32234401,0.640055},
											1
										},
										
										{
											{0.32234401,0.69181299},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.69181299},
											1
										},
										
										{
											{0.35749999,0.69181299},
											1
										},
										
										{
											"PylonAmmo10",
											{0.35749999,0.640055},
											1
										},
										
										{
											"PylonAmmo10",
											{0.32234401,0.640055},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=10;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.62857002},
									1
								};
								right[]=
								{
									{0.16328099,0.62857002},
									1
								};
								down[]=
								{
									{0.127148,0.66372699},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=10;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.66856998},
									1
								};
								right[]=
								{
									{0.16328099,0.66856998},
									1
								};
								down[]=
								{
									{0.127148,0.70372701},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=10;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.66856998},
									1
								};
								right[]=
								{
									{0.343281,0.66856998},
									1
								};
								down[]=
								{
									{0.30714801,0.70372701},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative10<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.69181299},
											1
										},
										
										{
											{0.35749999,0.69181299},
											1
										},
										
										{
											{0.35749999,0.640055},
											1
										},
										
										{
											{0.32234401,0.640055},
											1
										},
										
										{
											{0.32234401,0.69181299},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.62247699},
												1
											},
											
											{
												{0.113477,0.709391},
												1
											},
											
											{
												{0.32246101,0.709391},
												1
											},
											
											{
												{0.32246101,0.62247699},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=10;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.62833601},
										1
									};
									right[]=
									{
										{0.14375,0.62833601},
										1
									};
									down[]=
									{
										{0.127148,0.65372699},
										1
									};
								};
							};
						};
					};
					class Pylon10
					{
						condition="PylonSelected10<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative10>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.113477,0.62247699},
											1
										},
										
										{
											{0.113477,0.709391},
											1
										},
										
										{
											{0.32246101,0.709391},
											1
										},
										
										{
											{0.32246101,0.62247699},
											1
										},
										
										{
											{0.113477,0.62247699},
											1
										},
										{},
										
										{
											{0.32234401,0.69181299},
											1
										},
										
										{
											{0.35749999,0.69181299},
											1
										},
										
										{
											{0.35749999,0.640055},
											1
										},
										
										{
											{0.32234401,0.640055},
											1
										},
										
										{
											{0.32234401,0.69181299},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.32234401,0.69181299},
											1
										},
										
										{
											{0.35749999,0.69181299},
											1
										},
										
										{
											"PylonAmmo10",
											{0.35749999,0.640055},
											1
										},
										
										{
											"PylonAmmo10",
											{0.32234401,0.640055},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=10;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.62857002},
									1
								};
								right[]=
								{
									{0.16328099,0.62857002},
									1
								};
								down[]=
								{
									{0.127148,0.66372699},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=10;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.127148,0.66856998},
									1
								};
								right[]=
								{
									{0.16328099,0.66856998},
									1
								};
								down[]=
								{
									{0.127148,0.70372701},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=10;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.30714801,0.66856998},
									1
								};
								right[]=
								{
									{0.343281,0.66856998},
									1
								};
								down[]=
								{
									{0.30714801,0.70372701},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative10<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.32234401,0.69181299},
											1
										},
										
										{
											{0.35749999,0.69181299},
											1
										},
										
										{
											{0.35749999,0.640055},
											1
										},
										
										{
											{0.32234401,0.640055},
											1
										},
										
										{
											{0.32234401,0.69181299},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.113477,0.62247699},
												1
											},
											
											{
												{0.113477,0.709391},
												1
											},
											
											{
												{0.32246101,0.709391},
												1
											},
											
											{
												{0.32246101,0.62247699},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=10;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.127148,0.62833601},
										1
									};
									right[]=
									{
										{0.14375,0.62833601},
										1
									};
									down[]=
									{
										{0.127148,0.65372699},
										1
									};
								};
							};
						};
					};
					class PylonSelected5
					{
						condition="PylonSelected5>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative5>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.15763301},
											1
										},
										
										{
											{0.70347703,0.24454699},
											1
										},
										
										{
											{0.91246098,0.24454699},
											1
										},
										
										{
											{0.91246098,0.15763301},
											1
										},
										
										{
											{0.70347703,0.15763301},
											1
										},
										{},
										
										{
											{0.66734397,0.226969},
											1
										},
										
										{
											{0.70249999,0.226969},
											1
										},
										
										{
											{0.70249999,0.175211},
											1
										},
										
										{
											{0.66734397,0.175211},
											1
										},
										
										{
											{0.66734397,0.226969},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.226969},
											1
										},
										
										{
											{0.70249999,0.226969},
											1
										},
										
										{
											"PylonAmmo5",
											{0.70249999,0.175211},
											1
										},
										
										{
											"PylonAmmo5",
											{0.66734397,0.175211},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=5;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.163727},
									1
								};
								right[]=
								{
									{0.753281,0.163727},
									1
								};
								down[]=
								{
									{0.71714801,0.198883},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=5;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.20372701},
									1
								};
								right[]=
								{
									{0.753281,0.20372701},
									1
								};
								down[]=
								{
									{0.71714801,0.238883},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=5;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.20372701},
									1
								};
								right[]=
								{
									{0.933281,0.20372701},
									1
								};
								down[]=
								{
									{0.89714801,0.238883},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative5<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.226969},
											1
										},
										
										{
											{0.70249999,0.226969},
											1
										},
										
										{
											{0.70249999,0.175211},
											1
										},
										
										{
											{0.66734397,0.175211},
											1
										},
										
										{
											{0.66734397,0.226969},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.15763301},
												1
											},
											
											{
												{0.70347703,0.24454699},
												1
											},
											
											{
												{0.91246098,0.24454699},
												1
											},
											
											{
												{0.91246098,0.15763301},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=5;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.16349199},
										1
									};
									right[]=
									{
										{0.73374999,0.16349199},
										1
									};
									down[]=
									{
										{0.71714801,0.18888301},
										1
									};
								};
							};
						};
					};
					class Pylon5
					{
						condition="PylonSelected5<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative5>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.15763301},
											1
										},
										
										{
											{0.70347703,0.24454699},
											1
										},
										
										{
											{0.91246098,0.24454699},
											1
										},
										
										{
											{0.91246098,0.15763301},
											1
										},
										
										{
											{0.70347703,0.15763301},
											1
										},
										{},
										
										{
											{0.66734397,0.226969},
											1
										},
										
										{
											{0.70249999,0.226969},
											1
										},
										
										{
											{0.70249999,0.175211},
											1
										},
										
										{
											{0.66734397,0.175211},
											1
										},
										
										{
											{0.66734397,0.226969},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.226969},
											1
										},
										
										{
											{0.70249999,0.226969},
											1
										},
										
										{
											"PylonAmmo5",
											{0.70249999,0.175211},
											1
										},
										
										{
											"PylonAmmo5",
											{0.66734397,0.175211},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=5;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.163727},
									1
								};
								right[]=
								{
									{0.753281,0.163727},
									1
								};
								down[]=
								{
									{0.71714801,0.198883},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=5;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.20372701},
									1
								};
								right[]=
								{
									{0.753281,0.20372701},
									1
								};
								down[]=
								{
									{0.71714801,0.238883},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=5;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.20372701},
									1
								};
								right[]=
								{
									{0.933281,0.20372701},
									1
								};
								down[]=
								{
									{0.89714801,0.238883},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative5<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.226969},
											1
										},
										
										{
											{0.70249999,0.226969},
											1
										},
										
										{
											{0.70249999,0.175211},
											1
										},
										
										{
											{0.66734397,0.175211},
											1
										},
										
										{
											{0.66734397,0.226969},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.15763301},
												1
											},
											
											{
												{0.70347703,0.24454699},
												1
											},
											
											{
												{0.91246098,0.24454699},
												1
											},
											
											{
												{0.91246098,0.15763301},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=5;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.16349199},
										1
									};
									right[]=
									{
										{0.73374999,0.16349199},
										1
									};
									down[]=
									{
										{0.71714801,0.18888301},
										1
									};
								};
							};
						};
					};
					class PylonSelected4
					{
						condition="PylonSelected4>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative4>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.273844},
											1
										},
										
										{
											{0.70347703,0.36075801},
											1
										},
										
										{
											{0.91246098,0.36075801},
											1
										},
										
										{
											{0.91246098,0.273844},
											1
										},
										
										{
											{0.70347703,0.273844},
											1
										},
										{},
										
										{
											{0.66734397,0.34318},
											1
										},
										
										{
											{0.70249999,0.34318},
											1
										},
										
										{
											{0.70249999,0.29142201},
											1
										},
										
										{
											{0.66734397,0.29142201},
											1
										},
										
										{
											{0.66734397,0.34318},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.34318},
											1
										},
										
										{
											{0.70249999,0.34318},
											1
										},
										
										{
											"PylonAmmo4",
											{0.70249999,0.29142201},
											1
										},
										
										{
											"PylonAmmo4",
											{0.66734397,0.29142201},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=4;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.27993801},
									1
								};
								right[]=
								{
									{0.753281,0.27993801},
									1
								};
								down[]=
								{
									{0.71714801,0.31509399},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=4;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.31993699},
									1
								};
								right[]=
								{
									{0.753281,0.31993699},
									1
								};
								down[]=
								{
									{0.71714801,0.35509399},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=4;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.31993699},
									1
								};
								right[]=
								{
									{0.933281,0.31993699},
									1
								};
								down[]=
								{
									{0.89714801,0.35509399},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative4<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.34318},
											1
										},
										
										{
											{0.70249999,0.34318},
											1
										},
										
										{
											{0.70249999,0.29142201},
											1
										},
										
										{
											{0.66734397,0.29142201},
											1
										},
										
										{
											{0.66734397,0.34318},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.273844},
												1
											},
											
											{
												{0.70347703,0.36075801},
												1
											},
											
											{
												{0.91246098,0.36075801},
												1
											},
											
											{
												{0.91246098,0.273844},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=4;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.27970299},
										1
									};
									right[]=
									{
										{0.73374999,0.27970299},
										1
									};
									down[]=
									{
										{0.71714801,0.305094},
										1
									};
								};
							};
						};
					};
					class Pylon4
					{
						condition="PylonSelected4<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative4>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.273844},
											1
										},
										
										{
											{0.70347703,0.36075801},
											1
										},
										
										{
											{0.91246098,0.36075801},
											1
										},
										
										{
											{0.91246098,0.273844},
											1
										},
										
										{
											{0.70347703,0.273844},
											1
										},
										{},
										
										{
											{0.66734397,0.34318},
											1
										},
										
										{
											{0.70249999,0.34318},
											1
										},
										
										{
											{0.70249999,0.29142201},
											1
										},
										
										{
											{0.66734397,0.29142201},
											1
										},
										
										{
											{0.66734397,0.34318},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.34318},
											1
										},
										
										{
											{0.70249999,0.34318},
											1
										},
										
										{
											"PylonAmmo4",
											{0.70249999,0.29142201},
											1
										},
										
										{
											"PylonAmmo4",
											{0.66734397,0.29142201},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=4;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.27993801},
									1
								};
								right[]=
								{
									{0.753281,0.27993801},
									1
								};
								down[]=
								{
									{0.71714801,0.31509399},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=4;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.31993699},
									1
								};
								right[]=
								{
									{0.753281,0.31993699},
									1
								};
								down[]=
								{
									{0.71714801,0.35509399},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=4;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.31993699},
									1
								};
								right[]=
								{
									{0.933281,0.31993699},
									1
								};
								down[]=
								{
									{0.89714801,0.35509399},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative4<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.34318},
											1
										},
										
										{
											{0.70249999,0.34318},
											1
										},
										
										{
											{0.70249999,0.29142201},
											1
										},
										
										{
											{0.66734397,0.29142201},
											1
										},
										
										{
											{0.66734397,0.34318},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.273844},
												1
											},
											
											{
												{0.70347703,0.36075801},
												1
											},
											
											{
												{0.91246098,0.36075801},
												1
											},
											
											{
												{0.91246098,0.273844},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=4;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.27970299},
										1
									};
									right[]=
									{
										{0.73374999,0.27970299},
										1
									};
									down[]=
									{
										{0.71714801,0.305094},
										1
									};
								};
							};
						};
					};
					class PylonSelected3
					{
						condition="PylonSelected3>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative3>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.390055},
											1
										},
										
										{
											{0.70347703,0.476969},
											1
										},
										
										{
											{0.91246098,0.476969},
											1
										},
										
										{
											{0.91246098,0.390055},
											1
										},
										
										{
											{0.70347703,0.390055},
											1
										},
										{},
										
										{
											{0.66734397,0.459391},
											1
										},
										
										{
											{0.70249999,0.459391},
											1
										},
										
										{
											{0.70249999,0.40763301},
											1
										},
										
										{
											{0.66734397,0.40763301},
											1
										},
										
										{
											{0.66734397,0.459391},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.459391},
											1
										},
										
										{
											{0.70249999,0.459391},
											1
										},
										
										{
											"PylonAmmo3",
											{0.70249999,0.40763301},
											1
										},
										
										{
											"PylonAmmo3",
											{0.66734397,0.40763301},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=3;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.396148},
									1
								};
								right[]=
								{
									{0.753281,0.396148},
									1
								};
								down[]=
								{
									{0.71714801,0.43130499},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=3;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.43614799},
									1
								};
								right[]=
								{
									{0.753281,0.43614799},
									1
								};
								down[]=
								{
									{0.71714801,0.47130501},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=3;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.43614799},
									1
								};
								right[]=
								{
									{0.933281,0.43614799},
									1
								};
								down[]=
								{
									{0.89714801,0.47130501},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative3<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.459391},
											1
										},
										
										{
											{0.70249999,0.459391},
											1
										},
										
										{
											{0.70249999,0.40763301},
											1
										},
										
										{
											{0.66734397,0.40763301},
											1
										},
										
										{
											{0.66734397,0.459391},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.390055},
												1
											},
											
											{
												{0.70347703,0.476969},
												1
											},
											
											{
												{0.91246098,0.476969},
												1
											},
											
											{
												{0.91246098,0.390055},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=3;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.39591399},
										1
									};
									right[]=
									{
										{0.73374999,0.39591399},
										1
									};
									down[]=
									{
										{0.71714801,0.421305},
										1
									};
								};
							};
						};
					};
					class Pylon3
					{
						condition="PylonSelected3<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative3>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.390055},
											1
										},
										
										{
											{0.70347703,0.476969},
											1
										},
										
										{
											{0.91246098,0.476969},
											1
										},
										
										{
											{0.91246098,0.390055},
											1
										},
										
										{
											{0.70347703,0.390055},
											1
										},
										{},
										
										{
											{0.66734397,0.459391},
											1
										},
										
										{
											{0.70249999,0.459391},
											1
										},
										
										{
											{0.70249999,0.40763301},
											1
										},
										
										{
											{0.66734397,0.40763301},
											1
										},
										
										{
											{0.66734397,0.459391},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.459391},
											1
										},
										
										{
											{0.70249999,0.459391},
											1
										},
										
										{
											"PylonAmmo3",
											{0.70249999,0.40763301},
											1
										},
										
										{
											"PylonAmmo3",
											{0.66734397,0.40763301},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=3;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.396148},
									1
								};
								right[]=
								{
									{0.753281,0.396148},
									1
								};
								down[]=
								{
									{0.71714801,0.43130499},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=3;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.43614799},
									1
								};
								right[]=
								{
									{0.753281,0.43614799},
									1
								};
								down[]=
								{
									{0.71714801,0.47130501},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=3;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.43614799},
									1
								};
								right[]=
								{
									{0.933281,0.43614799},
									1
								};
								down[]=
								{
									{0.89714801,0.47130501},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative3<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.459391},
											1
										},
										
										{
											{0.70249999,0.459391},
											1
										},
										
										{
											{0.70249999,0.40763301},
											1
										},
										
										{
											{0.66734397,0.40763301},
											1
										},
										
										{
											{0.66734397,0.459391},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.390055},
												1
											},
											
											{
												{0.70347703,0.476969},
												1
											},
											
											{
												{0.91246098,0.476969},
												1
											},
											
											{
												{0.91246098,0.390055},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=3;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.39591399},
										1
									};
									right[]=
									{
										{0.73374999,0.39591399},
										1
									};
									down[]=
									{
										{0.71714801,0.421305},
										1
									};
								};
							};
						};
					};
					class PylonSelected2
					{
						condition="PylonSelected2>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative2>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.506266},
											1
										},
										
										{
											{0.70347703,0.59318},
											1
										},
										
										{
											{0.91246098,0.59318},
											1
										},
										
										{
											{0.91246098,0.506266},
											1
										},
										
										{
											{0.70347703,0.506266},
											1
										},
										{},
										
										{
											{0.66734397,0.57560199},
											1
										},
										
										{
											{0.70249999,0.57560199},
											1
										},
										
										{
											{0.70249999,0.523844},
											1
										},
										
										{
											{0.66734397,0.523844},
											1
										},
										
										{
											{0.66734397,0.57560199},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.57560199},
											1
										},
										
										{
											{0.70249999,0.57560199},
											1
										},
										
										{
											"PylonAmmo2",
											{0.70249999,0.523844},
											1
										},
										
										{
											"PylonAmmo2",
											{0.66734397,0.523844},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=2;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.51235902},
									1
								};
								right[]=
								{
									{0.753281,0.51235902},
									1
								};
								down[]=
								{
									{0.71714801,0.54751599},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=2;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.55235898},
									1
								};
								right[]=
								{
									{0.753281,0.55235898},
									1
								};
								down[]=
								{
									{0.71714801,0.58751601},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=2;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.55235898},
									1
								};
								right[]=
								{
									{0.933281,0.55235898},
									1
								};
								down[]=
								{
									{0.89714801,0.58751601},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative2<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.57560199},
											1
										},
										
										{
											{0.70249999,0.57560199},
											1
										},
										
										{
											{0.70249999,0.523844},
											1
										},
										
										{
											{0.66734397,0.523844},
											1
										},
										
										{
											{0.66734397,0.57560199},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.506266},
												1
											},
											
											{
												{0.70347703,0.59318},
												1
											},
											
											{
												{0.91246098,0.59318},
												1
											},
											
											{
												{0.91246098,0.506266},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=2;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.51212502},
										1
									};
									right[]=
									{
										{0.73374999,0.51212502},
										1
									};
									down[]=
									{
										{0.71714801,0.537516},
										1
									};
								};
							};
						};
					};
					class Pylon2
					{
						condition="PylonSelected2<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative2>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.506266},
											1
										},
										
										{
											{0.70347703,0.59318},
											1
										},
										
										{
											{0.91246098,0.59318},
											1
										},
										
										{
											{0.91246098,0.506266},
											1
										},
										
										{
											{0.70347703,0.506266},
											1
										},
										{},
										
										{
											{0.66734397,0.57560199},
											1
										},
										
										{
											{0.70249999,0.57560199},
											1
										},
										
										{
											{0.70249999,0.523844},
											1
										},
										
										{
											{0.66734397,0.523844},
											1
										},
										
										{
											{0.66734397,0.57560199},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.57560199},
											1
										},
										
										{
											{0.70249999,0.57560199},
											1
										},
										
										{
											"PylonAmmo2",
											{0.70249999,0.523844},
											1
										},
										
										{
											"PylonAmmo2",
											{0.66734397,0.523844},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=2;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.51235902},
									1
								};
								right[]=
								{
									{0.753281,0.51235902},
									1
								};
								down[]=
								{
									{0.71714801,0.54751599},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=2;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.55235898},
									1
								};
								right[]=
								{
									{0.753281,0.55235898},
									1
								};
								down[]=
								{
									{0.71714801,0.58751601},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=2;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.55235898},
									1
								};
								right[]=
								{
									{0.933281,0.55235898},
									1
								};
								down[]=
								{
									{0.89714801,0.58751601},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative2<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.57560199},
											1
										},
										
										{
											{0.70249999,0.57560199},
											1
										},
										
										{
											{0.70249999,0.523844},
											1
										},
										
										{
											{0.66734397,0.523844},
											1
										},
										
										{
											{0.66734397,0.57560199},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.506266},
												1
											},
											
											{
												{0.70347703,0.59318},
												1
											},
											
											{
												{0.91246098,0.59318},
												1
											},
											
											{
												{0.91246098,0.506266},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=2;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.51212502},
										1
									};
									right[]=
									{
										{0.73374999,0.51212502},
										1
									};
									down[]=
									{
										{0.71714801,0.537516},
										1
									};
								};
							};
						};
					};
					class PylonSelected1
					{
						condition="PylonSelected1>0";
						class NotEmpty
						{
							color[]={0.58999997,0.30000001,0,1};
							condition="PylonAmmoRelative1>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.62247699},
											1
										},
										
										{
											{0.70347703,0.709391},
											1
										},
										
										{
											{0.91246098,0.709391},
											1
										},
										
										{
											{0.91246098,0.62247699},
											1
										},
										
										{
											{0.70347703,0.62247699},
											1
										},
										{},
										
										{
											{0.66734397,0.69181299},
											1
										},
										
										{
											{0.70249999,0.69181299},
											1
										},
										
										{
											{0.70249999,0.640055},
											1
										},
										
										{
											{0.66734397,0.640055},
											1
										},
										
										{
											{0.66734397,0.69181299},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.69181299},
											1
										},
										
										{
											{0.70249999,0.69181299},
											1
										},
										
										{
											"PylonAmmo1",
											{0.70249999,0.640055},
											1
										},
										
										{
											"PylonAmmo1",
											{0.66734397,0.640055},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=1;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.62857002},
									1
								};
								right[]=
								{
									{0.753281,0.62857002},
									1
								};
								down[]=
								{
									{0.71714801,0.66372699},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=1;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.66856998},
									1
								};
								right[]=
								{
									{0.753281,0.66856998},
									1
								};
								down[]=
								{
									{0.71714801,0.70372701},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=1;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.66856998},
									1
								};
								right[]=
								{
									{0.933281,0.66856998},
									1
								};
								down[]=
								{
									{0.89714801,0.70372701},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative1<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.69181299},
											1
										},
										
										{
											{0.70249999,0.69181299},
											1
										},
										
										{
											{0.70249999,0.640055},
											1
										},
										
										{
											{0.66734397,0.640055},
											1
										},
										
										{
											{0.66734397,0.69181299},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.62247699},
												1
											},
											
											{
												{0.70347703,0.709391},
												1
											},
											
											{
												{0.91246098,0.709391},
												1
											},
											
											{
												{0.91246098,0.62247699},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=1;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.62833601},
										1
									};
									right[]=
									{
										{0.73374999,0.62833601},
										1
									};
									down[]=
									{
										{0.71714801,0.65372699},
										1
									};
								};
							};
						};
					};
					class Pylon1
					{
						condition="PylonSelected1<=0";
						class NotEmpty
						{
							color[]={0,0.83999997,0,1};
							condition="PylonAmmoRelative1>0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.70347703,0.62247699},
											1
										},
										
										{
											{0.70347703,0.709391},
											1
										},
										
										{
											{0.91246098,0.709391},
											1
										},
										
										{
											{0.91246098,0.62247699},
											1
										},
										
										{
											{0.70347703,0.62247699},
											1
										},
										{},
										
										{
											{0.66734397,0.69181299},
											1
										},
										
										{
											{0.70249999,0.69181299},
											1
										},
										
										{
											{0.70249999,0.640055},
											1
										},
										
										{
											{0.66734397,0.640055},
											1
										},
										
										{
											{0.66734397,0.69181299},
											1
										}
									};
								};
							};
							class PolyBar
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0.66734397,0.69181299},
											1
										},
										
										{
											{0.70249999,0.69181299},
											1
										},
										
										{
											"PylonAmmo1",
											{0.70249999,0.640055},
											1
										},
										
										{
											"PylonAmmo1",
											{0.66734397,0.640055},
											1
										}
									}
								};
							};
							class WeapName
							{
								type="text";
								source="PylonMagazineName";
								sourceindex=1;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.62857002},
									1
								};
								right[]=
								{
									{0.753281,0.62857002},
									1
								};
								down[]=
								{
									{0.71714801,0.66372699},
									1
								};
							};
							class MagName
							{
								type="text";
								source="PylonMagazineNameShort";
								sourceindex=1;
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.71714801,0.66856998},
									1
								};
								right[]=
								{
									{0.753281,0.66856998},
									1
								};
								down[]=
								{
									{0.71714801,0.70372701},
									1
								};
							};
							class MagCount
							{
								type="text";
								source="PylonAmmo";
								sourceindex=1;
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.89714801,0.66856998},
									1
								};
								right[]=
								{
									{0.933281,0.66856998},
									1
								};
								down[]=
								{
									{0.89714801,0.70372701},
									1
								};
							};
						};
						class Empty
						{
							color[]={1,0,0,1};
							condition="PylonAmmoRelative1<=0";
							class Static
							{
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.66734397,0.69181299},
											1
										},
										
										{
											{0.70249999,0.69181299},
											1
										},
										
										{
											{0.70249999,0.640055},
											1
										},
										
										{
											{0.66734397,0.640055},
											1
										},
										
										{
											{0.66734397,0.69181299},
											1
										}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0.70347703,0.62247699},
												1
											},
											
											{
												{0.70347703,0.709391},
												1
											},
											
											{
												{0.91246098,0.709391},
												1
											},
											
											{
												{0.91246098,0.62247699},
												1
											}
										}
									};
								};
							};
							class black
							{
								color[]={1,0,0,1};
								class MagName
								{
									type="text";
									source="PylonMagazineNameShort";
									sourceindex=1;
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.71714801,0.62833601},
										1
									};
									right[]=
									{
										{0.73374999,0.62833601},
										1
									};
									down[]=
									{
										{0.71714801,0.65372699},
										1
									};
								};
							};
						};
					};
					class Gatling_Ammo
					{
						type="text";
						source="ammo";
						sourceIndex=0;
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.435,0.86000001},
							1
						};
						right[]=
						{
							{0.47499999,0.86000001},
							1
						};
						down[]=
						{
							{0.435,0.89099997},
							1
						};
					};
					class CM_Name
					{
						type="text";
						source="CMWeapon";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72500002,0.82999998},
							1
						};
						right[]=
						{
							{0.76499999,0.82999998},
							1
						};
						down[]=
						{
							{0.72500002,0.861},
							1
						};
					};
					class CM_Ammo
					{
						type="text";
						source="CMAmmo";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72500002,0.86000001},
							1
						};
						right[]=
						{
							{0.76499999,0.86000001},
							1
						};
						down[]=
						{
							{0.72500002,0.89099997},
							1
						};
					};
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class pylons
				{
					class pylons1 
					{
						hardpoints[]=
						{
							"JAS_ASRAAM_PYLON","DAR","DAGR","JAS_SUU_25","JAS_NATO_BOMB"
						};
						attachment="";
						priority=5;
						maxweight=300;
						UIposition[]={0.34999999,0};
					};
					class pylons2: pylons1
					{
						priority=4;
						hardpoints[]=
						{
							"DAR","DAGR","JAS_NATO_BOMB"
						};
						attachment="";
						maxweight=500;
						UIposition[]={0.345,0.050000001};
					};
					class pylons3: pylons1 
					{
						priority=3;
						hardpoints[]=
						{
							"DAR","DAGR","JAS_NATO_BOMB","JAS_NATO_JDAM"
						};
						attachment="";
						maxweight=1050;
						UIposition[]={0.34,0.1};
					};
					class pylons4: pylons1
					{
						hardpoints[]=
						{
							"DAR","DAGR","JAS_NATO_BOMB","JAS_NATO_JDAM"
						};
						priority=2;
						attachment="";
						maxweight=1200;
						UIposition[]={0.33000001,0.2};
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"DAR","DAGR","JAS_NATO_BOMB","JAS_NATO_JDAM"
						};
						priority=1;
						attachment="";
						maxweight=1200;
						UIposition[]={0.33000001,0.25};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class pylons7: pylons4
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class pylons8: pylons3
					{
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class pylons9: pylons2
					{
						attachment="PylonRack_7Rnd_Rocket_04_AP_F";
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class pylons10: pylons1
					{
						UIposition[]={0.34999999,0.55000001};
						mirroredMissilePos=1;
					};
				};
				class presets
				{
					class empty
					{
						displayName="empty";
						attachment[]={};
					};
					class default
					{
						displayName="Strike";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_PylonRack_3Rnd_MAV_D",
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_FIR_GBU31_PYLON_M",
							"JAS_FIR_GBU31_PYLON_M",
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_PylonRack_3Rnd_MAV_D",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"JAS_FIR_SUU25_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_PylonRack_3Rnd_MAV_L",
							"JAS_FIR_GBU10_PYLON_M",
							"JAS_FIR_CBU103_PYLON_M",
							"JAS_FIR_CBU103_PYLON_M",
							"JAS_FIR_GBU10_PYLON_M",
							"JAS_PylonRack_3Rnd_MAV_L",
							"JAS_FIR_GBU12_PYLON_M",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class BOMB
					{
						displayName="Bomber";
						attachment[]=
						{
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU10_PYLON_M",
							"JAS_FIR_GBU24A_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_GBU24A_BLU118_PYLON_M",
							"JAS_FIR_GBU24A_PYLON_M",
							"JAS_FIR_GBU10_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_PylonRack_3Rnd_MAV_D",
							"JAS_PylonRack_3Rnd_MAV_D",
							"JAS_PylonRack_3Rnd_MAV_L",
							"JAS_PylonRack_3Rnd_MAV_L",
							"JAS_PylonRack_3Rnd_MAV_D",
							"JAS_PylonRack_3Rnd_MAV_D",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
				};
			};
		};
		class UserActions
		{
			class ECM_ON
			{
				displayName="ECM JAMMER ON";
				position="pos cano";
				radius=15;
				shortcut="User4";
				condition="this getvariable ""ECMJAMMER"" == ""yes"";";
				statement="[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer="False";
			};
			class A164_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\A164_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
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
			class Plane_CAS_01_Eject
			{
				condition = "player in this and isengineon this";
				displayName = "Eject";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				priority = 0.05;
				radius = 10;
				shortcut = "Eject";
				showWindow = 0;
				statement = "[this] spawn BIS_fnc_planeEjection";
			};
		};
		class eventhandlers
		{
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\init.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_FIR_A164J_DYNO_AAC: JAS_FIR_A164J_DYNO // Wipeout AAC
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
	};	
	class JAS_Plane_Fighter_01_Base_F_DYNO: Plane_Fighter_01_Base_F // Wasp
	{
		scope=2;
		author="-{GOL}-Jason";
		displayname="F/A-181J Black Wasp II";
		hiddenSelectionsTextures[] = 
		{
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_Camo_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_Camo_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
		weapons[]=
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"weapon_Fighter_Gun20mm_AA",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			//"FakeMagazine",
			"magazine_Fighter01_Gun20mm_AA_x450",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					// Wingtips
					class pylon1
					{
						attachment = "";
						hardpoints[] = 
						{
							"JAS_NATO_AAM",
							"JAS_NATO_NAVY_STRIKE"
						};
						maxweight = 300;
						priority = 12;
						UIposition[] = {0.05,0.45};
					};
					class pylon2: pylon1
					{
						attachment = "";
						hardpoints[] = 
						{
							"JAS_NATO_AAM",
							"JAS_NATO_NAVY_STRIKE"
						};
						maxweight = 300;
						priority = 11;
						UIposition[] = {0.6,0.45};
					};
					//Midlines
					class pylon3: pylon1
					{
						attachment = "";
						hardpoints[] = 
						{
							"JAS_NATO_AAM",
							"JAS_NATO_NAVY_STRIKE",
							"JAS_JDAM_PYLON"
						};
						maxweight = 1050;
						priority = 10;
						UIposition[] = {0.55,0.35};
					};
					class pylon4: pylon3
					{
						attachment = "";
						hardpoints[] = 
						{
							"JAS_NATO_AAM",
							"JAS_NATO_NAVY_STRIKE",
							"JAS_JDAM_PYLON"
						};
						maxweight = 1050;
						priority = 9;
						UIposition[] = {0.1,0.35};
					};
					// Internal bays
					class pylonBayCenter1: pylon4
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INT"};
						maxweight = 1200;
						priority = 6;
						UIposition[] = {0.33,0.3};
					};
					class pylonBayCenter2: pylon3
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INT"};
						maxweight = 1200;
						priority = 5;
						UIposition[] = {0.33,0.35};
					};
					class pylonBayCenter3: pylon2
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INT","JAS_NATO_NAVY_BOMB"};
						maxweight = 1200;
						priority = 4;
						UIposition[] = {0.33,0.4};
					};
					class pylonBayCenter4
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INT","JAS_NATO_NAVY_BOMB"};
						maxweight = 1200;
						priority = 3;
						UIposition[] = {0.33,0.45};
					};
					class pylonBayCenter5
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INT","JAS_NATO_NAVY_BOMB"};
						maxweight = 1200;
						priority = 2;
						UIposition[] = {0.33,0.5};
					};
					class pylonBayCenter6
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INT","JAS_NATO_NAVY_BOMB"};
						maxweight = 1200;
						priority = 1;
						UIposition[] = {0.33,0.55};
					};
					class pylonBayRight1 : pylon1
					{
						attachment = "";
						bay = 1; // Original == 2
						hardpoints[] = {"JAS_NATO_AAM_INT"};
						maxweight = 1200;
						priority = 8;
						UIposition[] = {0.16,0.25};
					};
					class pylonBayLeft1 : pylonBayRight1
					{
						attachment = "";
						bay = 2;
						hardpoints[] = {"JAS_NATO_AAM_INT"};
						maxweight = 1200;
						priority = 7;
						UIposition[] = {0.5,0.25};
					};
				};
				class presets
				{
					class empty
					{
						displayName="empty";
						attachment[]={};
					};
					class default
					{
						displayName="Strike";
						attachment[]=
						{
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_FIR_AGM84SLAM_PYLON_M",
							"JAS_FIR_AGM84SLAM_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AGM154A_PYLON_M",
							"JAS_FIR_AGM154A_PYLON_M",
							"JAS_FIR_GBU32_PYLON_M",
							"JAS_FIR_GBU32_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_PylonRack_MAV_L_x2",
							"JAS_PylonRack_MAV_L_x2",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class AA
					{
						displayName="CAP";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_Mx2",
							"JAS_FIR_AIM9L_PYLON_Mx2",
							"JAS_FIR_AIM7_PYLON_M",
							"JAS_FIR_AIM7_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class SEAD
					{
						displayName="SEAD";
						attachment[]=
						{
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_FIR_GBU38_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AGM88_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
				};
				class Bays
				{
					class BayRight1
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1; // Original == 0 suspect 1 means bay will be open prior to firing
					};
					class BayLeft1
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1; // Original == 0 suspect 1 means bay will be open prior to firing
					};
					class BayCenter1
					{
						autoCloseWhenEmptyDelay = 4.5;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1; // Original == 0 suspect 1 means bay will be open prior to firing
					};
				};
			};
		};
		class UserActions
		{
			class ECM_ON
			{
				displayName="ECM JAMMER ON";
				position="pos cano";
				radius=15;
				shortcut="User4";
				condition="this getvariable ""ECMJAMMER"" == ""yes"";";
				statement="[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer="False";
			};
			class A164_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
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
			class Plane_CAS_01_Eject
			{
				condition = "player in this and isengineon this";
				displayName = "Eject";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				priority = 0.05;
				radius = 10;
				shortcut = "Eject";
				showWindow = 0;
				statement = "[this] spawn BIS_fnc_planeEjection";
			};
			class Plane_Fighter_01_fold_wings
			{
				condition = "this animationPhase ""wing_fold_l"" < 0.1 and (speed this) < 40 and player in this";
				displayName = "Fold Wings";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 5;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""wing_fold_l"",1]; this animate [""wing_fold_r"",1]; this animate [""wing_fold_cover_l"",1]; this animate [""wing_fold_cover_r"",1]; this say3D ""Plane_Fighter_01_foldwing_sound""";
			};
			class Plane_Fighter_01_tailhook_down
			{
				condition = "this animationPhase ""tailhook"" > 0.1  and {speed this > 100}";
				displayName = "Tailhook Down";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 10;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""tailhook"",0]; this animate [""tailhook_door_l"",0]; this animate [""tailhook_door_r"",0]; this say ""Plane_Fighter_01_tailhook_down_sound""; this say3D ""Plane_Fighter_01_tailhook_down_sound"";this SetUserMFDvalue [0,1]; [this] spawn BIS_fnc_AircraftTailhook;";
			};
			class Plane_Fighter_01_tailhook_up
			{
				condition = "this animationPhase ""tailhook"" < 0.1";
				displayName = "Tailhook Up";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 10;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""tailhook"",1]; this animate [""tailhook_door_l"",1]; this animate [""tailhook_door_r"",1]; this say ""Plane_Fighter_01_tailhook_up_sound""; this SetUserMFDvalue [0,0];this say3D ""Plane_Fighter_01_tailhook_up_sound""";
			};
			class Plane_Fighter_01_unfold_wings
			{
				condition = "this animationPhase ""wing_fold_l"" > 0.9 and (speed this) < 40 and player in this";
				displayName = "Unfold Wings";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 5;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""wing_fold_l"",0]; this animate [""wing_fold_r"",0]; this animate [""wing_fold_cover_l"",0]; this animate [""wing_fold_cover_r"",0]; this say3D ""Plane_Fighter_01_foldwing_sound""";
			};
		};
		class eventhandlers
		{
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";_this call BIS_fnc_AircraftSystemsInit";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			Hit = "_this call BIS_fnc_PlaneAiEject";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_Plane_Fighter_01_Stealth_F_DYNO: B_Plane_Fighter_01_Stealth_F // Wasp Stealth
	{
		weapons[]=
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"weapon_Fighter_Gun20mm_AA",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			//"FakeMagazine",
			"magazine_Fighter01_Gun20mm_AA_x450",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelectionsTextures[] = 
		{
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_Camo_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_Camo_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
		class TextureSources
		{
			class DarkGrey
			{
				author = "Bravo Zero One Studios";
				displayName = "Dark Grey";
				factions[] = {"BLU_F"};
				textures[] = {"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"};
			};
			class DarkGreyCamo
			{
				author = "Bravo Zero One Studios";
				displayName = "Dark Grey [Camo]";
				factions[] = {"BLU_F"};
				textures[] = {"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_Camo_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_Camo_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class Bays
				{
					class BayRight1
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayLeft1
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayCenter1
					{
						autoCloseWhenEmptyDelay = 4.5;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
				};
				class pylons
				{
					// Dummy Pylons for wings
					class pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy2: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy3: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy4: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					// Internal bays
					class pylonBayRight1
					{
						attachment = "";
						bay = 2;
						hardpoints[] = {"JAS_NATO_AAM_INT"};
						maxweight = 500;
						priority = 10;
						UIposition[] = {0.16,0.25};
					};
					class pylonBayLeft1 : pylonBayRight1
					{
						attachment = "";
						bay = 1;
						hardpoints[] = {"JAS_NATO_AAM_INT"};
						maxweight = 500;
						priority = 10;
						mirroredMissilePos = 5;
						UIposition[] = {0.5,0.25};
					};
					class pylonBayCenter1
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INTBAY","JAS_NATO_NAVY_BOMB_INT"};
						maxweight = 500;
						priority = 9;
						UIposition[] = {0.33,0.3};
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INTBAY","JAS_NATO_NAVY_BOMB_INT"};
						maxweight = 500;
						priority = 9;
						mirroredMissilePos = 7;
						UIposition[] = {0.33,0.35};
					};
					class pylonBayCenter3
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INTBAY"};
						maxweight = 500;
						priority = 7;
						UIposition[] = {0.33,0.4};
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INTBAY"};
						maxweight = 500;
						priority = 7;
						mirroredMissilePos = 9;
						UIposition[] = {0.33,0.45};
					};
					class pylonBayCenter5
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INTBAY","JAS_NATO_NAVY_BOMB_INT"};
						maxweight = 500;
						priority = 5;
						UIposition[] = {0.33,0.5};
					};
					class pylonBayCenter6: pylonBayCenter5
					{
						attachment = "";
						bay = 3;
						hardpoints[] = {"JAS_NATO_AAM_INTBAY","JAS_NATO_NAVY_BOMB_INT"};
						maxweight = 500;
						priority = 5;
						mirroredMissilePos = 11;
						UIposition[] = {0.33,0.55};
					};
				};
				class presets
				{
					class empty
					{
						displayName="empty";
						attachment[]={};
					};
					class default
					{
						displayName="Strike";
						attachment[]=
						{
							"", //12
							"",
							"",
							"",
							"JAS_FIR_AGM154A_PYLON_M",
							"JAS_FIR_AGM154A_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AGM154C_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
					class AA
					{
						displayName="CAP";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM120_PYLON_M_int",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M"
						};
					};
				};
			};
		};
		class UserActions
		{
			class ECM_ON
			{
				displayName="ECM JAMMER ON";
				position="pos cano";
				radius=15;
				shortcut="User4";
				condition="this getvariable ""ECMJAMMER"" == ""yes"";";
				statement="[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer="False";
			};
			class A164_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Wasp_Stealth_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
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
			class Plane_CAS_01_Eject
			{
				condition = "player in this and isengineon this";
				displayName = "Eject";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				priority = 0.05;
				radius = 10;
				shortcut = "Eject";
				showWindow = 0;
				statement = "[this] spawn BIS_fnc_planeEjection";
			};
			class Plane_Fighter_01_fold_wings
			{
				condition = "this animationPhase ""wing_fold_l"" < 0.1 and (speed this) < 40 and player in this";
				displayName = "Fold Wings";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 5;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""wing_fold_l"",1]; this animate [""wing_fold_r"",1]; this animate [""wing_fold_cover_l"",1]; this animate [""wing_fold_cover_r"",1]; this say3D ""Plane_Fighter_01_foldwing_sound""";
			};
			class Plane_Fighter_01_tailhook_down
			{
				condition = "this animationPhase ""tailhook"" > 0.1  and {speed this > 100}";
				displayName = "Tailhook Down";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 10;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""tailhook"",0]; this animate [""tailhook_door_l"",0]; this animate [""tailhook_door_r"",0]; this say ""Plane_Fighter_01_tailhook_down_sound""; this say3D ""Plane_Fighter_01_tailhook_down_sound"";this SetUserMFDvalue [0,1]; [this] spawn BIS_fnc_AircraftTailhook;";
			};
			class Plane_Fighter_01_tailhook_up
			{
				condition = "this animationPhase ""tailhook"" < 0.1";
				displayName = "Tailhook Up";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 10;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""tailhook"",1]; this animate [""tailhook_door_l"",1]; this animate [""tailhook_door_r"",1]; this say ""Plane_Fighter_01_tailhook_up_sound""; this SetUserMFDvalue [0,0];this say3D ""Plane_Fighter_01_tailhook_up_sound""";
			};
			class Plane_Fighter_01_unfold_wings
			{
				condition = "this animationPhase ""wing_fold_l"" > 0.9 and (speed this) < 40 and player in this";
				displayName = "Unfold Wings";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				radius = 5;
				shortcut = "";
				showWindow = 0;
				statement = "this animate [""wing_fold_l"",0]; this animate [""wing_fold_r"",0]; this animate [""wing_fold_cover_l"",0]; this animate [""wing_fold_cover_r"",0]; this say3D ""Plane_Fighter_01_foldwing_sound""";
			};
		};
		class eventhandlers
		{
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";_this call BIS_fnc_AircraftSystemsInit";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			Hit = "_this call BIS_fnc_PlaneAiEject";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_Plane_Fighter_01_Base_F_DYNO_AAC: JAS_Plane_Fighter_01_Base_F_DYNO // Wasp AAC
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
	};
	class JAS_Plane_Fighter_01_Stealth_F_DYNO_AAC: JAS_Plane_Fighter_01_Stealth_F_DYNO // Wasp Stealth AAC
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
	};
	class JAS_Plane_Fighter_02_F_DYNO : O_Plane_Fighter_02_F // Shkira
	{
		weapons[]=
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"weapon_Fighter_Gun_30mm",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			//"FakeMagazine",
			"magazine_Fighter02_Gun30mm_AA_x180",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class Bays
				{
					class BayLeft1
					{
						autoCloseWhenEmptyDelay = 1;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayRight1
					{
						autoCloseWhenEmptyDelay = 1;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayLeft2
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayRight2
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayCenter1
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						attachment = "";
						priority = 13;
						maxweight = 300;
						UIposition[] = {0.6,0.45};
					};
					class pylons2
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						attachment = "";
						priority = 12;
						maxweight = 300;
						UIposition[] = {0.05,0.45};
					};
					class pylons3
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						attachment = "";
						priority = 11;
						maxweight = 1050;
						UIposition[] = {0.55,0.35};
					};
					class pylons4
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						attachment = "";
						priority = 10;
						maxweight = 1050;
						UIposition[] = {0.1,0.35};
					};
					class pylons5
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						attachment = "";
						priority = 9;
						maxweight = 1200;
						UIposition[] = {0.5,0.25};
					};
					class pylons6
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						attachment = "";
						priority = 8;
						maxweight = 1200;
						UIposition[] = {0.15,0.25};
					};
					class pylonBayRight1
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 7;
						attachment = "";
						maxweight = 300;
						UIposition[] = {0.2,0.15};
						bay = 2;
					};
					class pylonBayLeft1
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 6;
						attachment = "";
						maxweight = 300;
						UIposition[] = {0.45,0.15};
						bay = 1;
					};
					class pylonBayRight2
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 5;
						attachment = "";
						maxweight = 750;
						UIposition[] = {0.33,0.3};
						bay = 4;
					};
					class pylonBayLeft2
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 4;
						attachment = "";
						maxweight = 750;
						UIposition[] = {0.33,0.35};
						bay = 3;
					};
					class pylonBayCenter1
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						priority = 3;
						attachment = "";
						maxweight = 750;
						UIposition[] = {0.33,0.45};
						bay = 5;
					};
					class pylonBayCenter2
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						priority = 2;
						attachment = "";
						maxweight = 750;
						UIposition[] = {0.33,0.5};
						bay = 5;
					};
					class pylonBayCenter3
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						priority = 1;
						attachment = "";
						maxweight = 1200;
						UIposition[] = {0.33,0.55};
						bay = 5;
					};
				};
				class presets
				{
					class empty
					{
						displayName="empty";
						attachment[]={};
					};
					class default
					{
						displayName="Strike";
						attachment[]=
						{
							"JAS_R73_PYLON_M",		// 1
							"JAS_R73_PYLON_M",		// 2
							"JAS_KH25MS_x1",		// 3
							"JAS_KH25MS_x1",		// 4
							"JAS_KH25MS_x1",	// 5
							"JAS_KH25MS_x1",	// 6
							"JAS_R77_PYLON_M",		// BayRight 1
							"JAS_R77_PYLON_M",		// BayLeft 1
							"JAS_R73_PYLON_M",		// BayRight 2
							"JAS_R73_PYLON_M",		// BayLeft 2
							"JAS_FIR_KAB500SE_x1",		// BayCentre 1
							"JAS_FIR_KAB500SE_x1",		// BayCentre 2
							"JAS_FIR_KAB500SE_x1"	// BayCentre 3
						};
					};
					class CAS
					{
						displayName="CAS Bomber";
						attachment[]=
						{
							"JAS_R73_PYLON_M",		// 1
							"JAS_R73_PYLON_M",		// 2
							"JAS_FIR_KAB500KR_x1",	// 3
							"JAS_FIR_KAB500KR_x1",	// 4
							"JAS_FIR_KAB500L_x1",	// 5
							"JAS_FIR_KAB500L_x1",	// 6
							"JAS_R77_PYLON_M",		// BayRight 1
							"JAS_R77_PYLON_M",		// BayLeft 1
							"JAS_R73_PYLON_M",		// BayRight 2
							"JAS_R73_PYLON_M",		// BayLeft 2
							"JAS_FIR_KAB500L_x1",		// BayCentre 1
							"JAS_FIR_KAB500L_x1",		// BayCentre 2
							"JAS_FIR_KAB500L_x1"	// BayCentre 3
						};
					};
					class CAS2
					{
						displayName="CAS Missile";
						attachment[]=
						{
							"JAS_R73_PYLON_M",	// 1
							"JAS_R73_PYLON_M",	// 2
							"JAS_KH25MTP_x1",	// 3
							"JAS_KH25MTP_x1",	// 4
							"JAS_KH25MT_x1",	// 5
							"JAS_KH25MT_x1",	// 6
							"JAS_R77_PYLON_M",	// BayRight 1
							"JAS_R77_PYLON_M",	// BayLeft 1
							"JAS_R73_PYLON_M",	// BayRight 2
							"JAS_R73_PYLON_M",	// BayLeft 2
							"JAS_KH25ML_x1",	// BayCentre 1
							"JAS_KH25ML_x1",	// BayCentre 2
							"JAS_KH25ML_x1"		// BayCentre 3
						};
					};
					class CAP
					{
						displayName="CAP";
						attachment[]=
						{
							"JAS_R73_PYLON_M",	// 1
							"JAS_R73_PYLON_M",	// 2
							"JAS_R73_PYLON_M",	// 3
							"JAS_R73_PYLON_M",	// 4
							"JAS_R77_PYLON_M",	// 5
							"JAS_R77_PYLON_M",	// 6
							"JAS_R77_PYLON_M",	// BayRight 1
							"JAS_R77_PYLON_M",	// BayLeft 1
							"JAS_R73_PYLON_M",	// BayRight 2
							"JAS_R73_PYLON_M",	// BayLeft 2
							"JAS_R77_PYLON_M",	// BayCentre 1
							"JAS_R77_PYLON_M",	// BayCentre 2
							"JAS_R77_PYLON_M"	// BayCentre 3
						};
					};
					class SEAD
					{
						displayName="SEAD";
						attachment[]=
						{
							"JAS_R73_PYLON_M",	// 1
							"JAS_R73_PYLON_M",	// 2
							"JAS_KH25MPU_x1",	// 3
							"JAS_KH25MPU_x1",	// 4
							"JAS_KH25MPU_x1",	// 5
							"JAS_KH25MPU_x1",	// 6
							"JAS_R77_PYLON_M",	// BayRight 1
							"JAS_R77_PYLON_M",	// BayLeft 1
							"JAS_R73_PYLON_M",	// BayRight 2
							"JAS_R73_PYLON_M",	// BayLeft 2
							"JAS_FIR_KAB500SE_x1",	// BayCentre 1
							"JAS_FIR_KAB500SE_x1",	// BayCentre 2
							"JAS_FIR_KAB500SE_x1"	// BayCentre 3
						};
					};
				};
			};
		};
		class UserActions
		{
			class Plane_Fighter_02_Eject
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Eject";
				condition = "player in this";
				statement = "[this] spawn BIS_fnc_planeEjection";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
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
			class A164_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
		class Eventhandlers
		{
			Hit = "_this call BIS_fnc_PlaneAiEject";
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\init.sqf"";";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class RHS_DefaultEventhandlers
			{
				hitpart = "_this call rhs_fnc_hitPart";
			};
			class CBA_Extended_EventHandlers
			{
				init = "call cba_xeh_fnc_init";
				fired = "call cba_xeh_fnc_fired";
				animChanged = "call cba_xeh_fnc_animChanged";
				animDone = "call cba_xeh_fnc_animDone";
				animStateChanged = "call cba_xeh_fnc_animStateChanged";
				containerClosed = "call cba_xeh_fnc_containerClosed";
				containerOpened = "call cba_xeh_fnc_containerOpened";
				controlsShifted = "call cba_xeh_fnc_controlsShifted";
				dammaged = "call cba_xeh_fnc_dammaged";
				engine = "call cba_xeh_fnc_engine";
				epeContact = "call cba_xeh_fnc_epeContact";
				epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
				epeContactStart = "call cba_xeh_fnc_epeContactStart";
				explosion = "call cba_xeh_fnc_explosion";
				firedNear = "call cba_xeh_fnc_firedNear";
				fuel = "call cba_xeh_fnc_cba_xeh_fuel";
				gear = "call cba_xeh_fnc_gear";
				getIn = "call cba_xeh_fnc_getIn";
				getInMan = "call cba_xeh_fnc_getInMan";
				getOut = "call cba_xeh_fnc_getOut";
				getOutMan = "call cba_xeh_fnc_getOutMan";
				handleHeal = "call cba_xeh_fnc_handleHeal";
				hit = "call cba_xeh_fnc_hit";
				hitPart = "call cba_xeh_fnc_hitPart";
				incomingMissile = "call cba_xeh_fnc_incomingMissile";
				inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
				inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
				killed = "call cba_xeh_fnc_killed";
				landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
				landedStopped = "call cba_xeh_fnc_landedStopped";
				local = "call cba_xeh_fnc_local";
				respawn = "call cba_xeh_fnc_respawn";
				put = "call cba_xeh_fnc_put";
				take = "call cba_xeh_fnc_take";
				seatSwitched = "call cba_xeh_fnc_seatSwitched";
				seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
				soundPlayed = "call cba_xeh_fnc_soundPlayed";
				weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
				weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
				weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
				weaponRested = "call cba_xeh_fnc_weaponRested";
				reloaded = "call cba_xeh_fnc_reloaded";
				firedMan = "call cba_xeh_fnc_firedMan";
				turnIn = "call cba_xeh_fnc_turnIn";
				turnOut = "call cba_xeh_fnc_turnOut";
				deleted = "call cba_xeh_fnc_deleted";
			};
		};
	};
	class JAS_Plane_Fighter_02_Stealth_DYNO : O_Plane_Fighter_02_Stealth_F // Shkira Stealth
	{
		weapons[]=
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"weapon_Fighter_Gun_30mm",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			//"FakeMagazine",
			"magazine_Fighter02_Gun30mm_AA_x180",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class Bays
				{
					class BayLeft1
					{
						autoCloseWhenEmptyDelay = 1;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayRight1
					{
						autoCloseWhenEmptyDelay = 1;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayLeft2
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayRight2
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
					class BayCenter1
					{
						autoCloseWhenEmptyDelay = 2;
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 1;
					};
				};
				class pylons
				{
					class pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy2: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy3: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy4: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy5: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonDummy6: pylonDummy1
					{
						attachment = "";
						UIposition[] = {10,10};
					};
					class pylonBayRight1
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 7;
						attachment = "JAS_R73_PYLON_M";
						maxweight = 300;
						UIposition[] = {0.2,0.15};
						bay = 2;
					};
					class pylonBayLeft1
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 6;
						attachment = "JAS_R73_PYLON_M";
						maxweight = 300;
						UIposition[] = {0.45,0.15};
						bay = 1;
					};
					class pylonBayRight2
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 5;
						attachment = "JAS_R77_PYLON_M";
						maxweight = 750;
						UIposition[] = {0.33,0.3};
						bay = 4;
					};
					class pylonBayLeft2
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 4;
						attachment = "JAS_R77_PYLON_M";
						maxweight = 750;
						UIposition[] = {0.33,0.35};
						bay = 3;
					};
					class pylonBayCenter1
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 3;
						attachment = "JAS_R77_PYLON_M";
						maxweight = 750;
						UIposition[] = {0.33,0.45};
						bay = 5;
					};
					class pylonBayCenter2
					{
						hardpoints[] = {"JAS_RUS_AAM"};
						priority = 2;
						attachment = "JAS_R77_PYLON_M";
						maxweight = 750;
						UIposition[] = {0.33,0.5};
						bay = 5;
					};
					class pylonBayCenter3
					{
						hardpoints[] = {"JAS_RUS_AAM","JAS_RUS_KH25","JAS_RUS_BOMB"};
						priority = 1;
						attachment = "JAS_FIR_KAB500L_x1";
						maxweight = 1200;
						UIposition[] = {0.33,0.55};
						bay = 5;
					};
				};
				class presets
				{
					class empty
					{
						displayName="empty";
						attachment[]={};
					};
					class default
					{
						displayName="Strike";
						attachment[]=
						{
							"",		// 1
							"",		// 2
							"",		// 3
							"",		// 4
							"",	// 5
							"",	// 6
							"JAS_R77_PYLON_M",		// BayRight 1
							"JAS_R77_PYLON_M",		// BayLeft 1
							"JAS_R73_PYLON_M",		// BayRight 2
							"JAS_R73_PYLON_M",		// BayLeft 2
							"JAS_KH25MS_x1",		// BayCentre 1
							"JAS_KH25MS_x1",		// BayCentre 2
							"JAS_FIR_KAB500SE_x1"	// BayCentre 3
						};
					};
					class CAS
					{
						displayName="CAS Bomber";
						attachment[]=
						{
							"",		// 1
							"",		// 2
							"",	// 3
							"",	// 4
							"",	// 5
							"",	// 6
							"JAS_R77_PYLON_M",		// BayRight 1
							"JAS_R77_PYLON_M",		// BayLeft 1
							"JAS_R73_PYLON_M",		// BayRight 2
							"JAS_R73_PYLON_M",		// BayLeft 2
							"JAS_FIR_KAB500L_x1",		// BayCentre 1
							"JAS_FIR_KAB500L_x1",		// BayCentre 2
							"JAS_FIR_KAB500L_x1"	// BayCentre 3
						};
					};
					class CAS2
					{
						displayName="CAS Missile";
						attachment[]=
						{
							"",	// 1
							"",	// 2
							"",	// 3
							"",	// 4
							"",	// 5
							"",	// 6
							"JAS_R77_PYLON_M",	// BayRight 1
							"JAS_R77_PYLON_M",	// BayLeft 1
							"JAS_R73_PYLON_M",	// BayRight 2
							"JAS_R73_PYLON_M",	// BayLeft 2
							"JAS_KH25ML_x1",	// BayCentre 1
							"JAS_KH25ML_x1",	// BayCentre 2
							"JAS_KH25ML_x1"		// BayCentre 3
						};
					};
					class CAP
					{
						displayName="CAP";
						attachment[]=
						{
							"",	// 1
							"",	// 2
							"",	// 3
							"",	// 4
							"",	// 5
							"",	// 6
							"JAS_R77_PYLON_M",	// BayRight 1
							"JAS_R77_PYLON_M",	// BayLeft 1
							"JAS_R73_PYLON_M",	// BayRight 2
							"JAS_R73_PYLON_M",	// BayLeft 2
							"JAS_R77_PYLON_M",	// BayCentre 1
							"JAS_R77_PYLON_M",	// BayCentre 2
							"JAS_R77_PYLON_M"	// BayCentre 3
						};
					};
					class SEAD
					{
						displayName="SEAD";
						attachment[]=
						{
							"",	// 1
							"",	// 2
							"",	// 3
							"",	// 4
							"",	// 5
							"",	// 6
							"JAS_R77_PYLON_M",	// BayRight 1
							"JAS_R77_PYLON_M",	// BayLeft 1
							"JAS_R73_PYLON_M",	// BayRight 2
							"JAS_R73_PYLON_M",	// BayLeft 2
							"JAS_KH25MPU_x1",	// BayCentre 1
							"JAS_KH25MPU_x1",	// BayCentre 2
							"JAS_KH25MPU_x1"	// BayCentre 3
						};
					};
				};
			};
		};
		class UserActions
		{
			class Plane_Fighter_02_Eject
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Eject";
				condition = "player in this";
				statement = "[this] spawn BIS_fnc_planeEjection";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
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
			class A164_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Shkira_Stealth_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
		class Eventhandlers
		{
			Hit = "_this call BIS_fnc_PlaneAiEject";
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\init.sqf"";";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class RHS_DefaultEventhandlers
			{
				hitpart = "_this call rhs_fnc_hitPart";
			};
			class CBA_Extended_EventHandlers
			{
				init = "call cba_xeh_fnc_init";
				fired = "call cba_xeh_fnc_fired";
				animChanged = "call cba_xeh_fnc_animChanged";
				animDone = "call cba_xeh_fnc_animDone";
				animStateChanged = "call cba_xeh_fnc_animStateChanged";
				containerClosed = "call cba_xeh_fnc_containerClosed";
				containerOpened = "call cba_xeh_fnc_containerOpened";
				controlsShifted = "call cba_xeh_fnc_controlsShifted";
				dammaged = "call cba_xeh_fnc_dammaged";
				engine = "call cba_xeh_fnc_engine";
				epeContact = "call cba_xeh_fnc_epeContact";
				epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
				epeContactStart = "call cba_xeh_fnc_epeContactStart";
				explosion = "call cba_xeh_fnc_explosion";
				firedNear = "call cba_xeh_fnc_firedNear";
				fuel = "call cba_xeh_fnc_cba_xeh_fuel";
				gear = "call cba_xeh_fnc_gear";
				getIn = "call cba_xeh_fnc_getIn";
				getInMan = "call cba_xeh_fnc_getInMan";
				getOut = "call cba_xeh_fnc_getOut";
				getOutMan = "call cba_xeh_fnc_getOutMan";
				handleHeal = "call cba_xeh_fnc_handleHeal";
				hit = "call cba_xeh_fnc_hit";
				hitPart = "call cba_xeh_fnc_hitPart";
				incomingMissile = "call cba_xeh_fnc_incomingMissile";
				inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
				inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
				killed = "call cba_xeh_fnc_killed";
				landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
				landedStopped = "call cba_xeh_fnc_landedStopped";
				local = "call cba_xeh_fnc_local";
				respawn = "call cba_xeh_fnc_respawn";
				put = "call cba_xeh_fnc_put";
				take = "call cba_xeh_fnc_take";
				seatSwitched = "call cba_xeh_fnc_seatSwitched";
				seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
				soundPlayed = "call cba_xeh_fnc_soundPlayed";
				weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
				weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
				weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
				weaponRested = "call cba_xeh_fnc_weaponRested";
				reloaded = "call cba_xeh_fnc_reloaded";
				firedMan = "call cba_xeh_fnc_firedMan";
				turnIn = "call cba_xeh_fnc_turnIn";
				turnOut = "call cba_xeh_fnc_turnOut";
				deleted = "call cba_xeh_fnc_deleted";
			};
		};
	};
	class JAS_Plane_Fighter_02_F_DYNO_AAC: JAS_Plane_Fighter_02_F_DYNO // Shkira AAC
	{
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
	};
	class JAS_Plane_Fighter_02_Stealth_DYNO_AAC: JAS_Plane_Fighter_02_Stealth_DYNO // Shkira Stealth AAC
	{
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
	};
	class JAS_Plane_Fighter_04_F_DYNO : I_Plane_Fighter_04_F // Gryphon
	{
		magazines[] = 
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"magazine_Fighter04_Gun20mm_AA_x250",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = 
		{
			//"FakeMagazine",
			"weapon_Fighter_Gun20mm_AA",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_04\Data\UI\Fighter_04_3DEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[] = {"JAS_INDEP_AAM"};
						attachment = "";
						priority = 5;
						maxweight = 300;
						UIposition[] = {0.55,0.4};
					};
					class pylon2
					{
						UIposition[] = {0.1,0.4};
						mirroredMissilePos = 1;
						hardpoints[] = {"JAS_INDEP_AAM"};
						attachment = "";
						priority = 5;
						maxweight = 300;
					};
					class pylon3
					{
						hardpoints[] = {"JAS_INDEP_AAM","JAS_INDEP_AGM"};
						priority = 4;
						attachment = "";
						maxweight = 750;
						UIposition[] = {0.5,0.35};
					};
					class Pylon4
					{
						UIposition[] = {0.15,0.35};
						mirroredMissilePos = 3;
						hardpoints[] = {"JAS_INDEP_AAM","JAS_INDEP_AGM"};
						priority = 4;
						attachment = "";
						maxweight = 750;
					};
					class pylon5
					{
						hardpoints[] = {"JAS_INDEP_AAM","JAS_INDEP_AGM","JAS_INDEP_BOMB"};
						priority = 3;
						attachment = "";
						maxweight = 1200;
						UIposition[] = {0.45,0.3};
					};
					class Pylon6
					{
						UIposition[] = {0.2,0.3};
						mirroredMissilePos = 5;
						hardpoints[] = {"JAS_INDEP_AAM","JAS_INDEP_AGM","JAS_INDEP_BOMB"};
						priority = 3;
						attachment = "";
						maxweight = 1200;
					};
				};
				class presets
				{
					class empty
					{
						displayName="empty";
						attachment[]={};
					};
					class default
					{
						displayName="Strike";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_PylonRack_MAV_L_x2",
							"JAS_PylonRack_MAV_L_x2",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_FIR_GBU12_PYLON_M"
						};
					};
					class AT
					{
						displayName="Anti-Tank";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_FIR_AIM9L_PYLON_M",
							"JAS_PylonRack_MAV_L_x2",
							"JAS_PylonRack_MAV_L_x2",
							"JAS_PylonRack_MAV_D_x2",
							"JAS_PylonRack_MAV_D_x2"
						};
					};
					class AA
					{
						displayName="CAP (US)";
						attachment[]=
						{
							"JAS_FIR_AIM9L_PYLON_Mx2",
							"JAS_FIR_AIM9L_PYLON_Mx2",
							"JAS_FIR_AIM120C_PYLON_Mx2",
							"JAS_FIR_AIM120C_PYLON_Mx2",
							"JAS_FIR_AIM120C_PYLON_Mx2",
							"JAS_FIR_AIM120C_PYLON_Mx2"
						};
					};
					class AA2
					{
						displayName="CAP (MBDA)";
						attachment[]=
						{
							"JAS_FIR_IRIS_T_PYLON_M",
							"JAS_FIR_IRIS_T_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M",
							"JAS_FIR_Meteor_PYLON_M"
						};
					};
				};
			};
		};
		class UserActions
		{
			class Plane_Fighter_04_Eject
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Eject";
				condition = "player in this";
				statement = "[this] spawn BIS_fnc_planeEjection";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			class A164_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Gryphon_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
		class TextureSources
		{
			class DigitalCamoGreen
			{
				displayName = "Digital Green [Camo]";
				author = "Bravo Zero One Studios";
				textures[] = {"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_green_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_green_co.paa","a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"};
				factions[] = {"IND_F"};
			};
			class DigitalCamoGrey
			{
				displayName = "Digital Grey [Camo]";
				author = "Bravo Zero One Studios";
				textures[] = {"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_gray_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_gray_co.paa","a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"};
				factions[] = {"IND_F"};
			};
			class CamoGrey
			{
				displayName = "Grey";
				author = "Bravo Zero One Studios";
				textures[] = {"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"};
				factions[] = {"IND_F"};
			};
		};
		class Eventhandlers
		{
			Hit = "_this call BIS_fnc_PlaneAiEject";
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\init.sqf"";";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class RHS_DefaultEventhandlers
			{
				hitpart = "_this call rhs_fnc_hitPart";
			};
			class CBA_Extended_EventHandlers
			{
				init = "call cba_xeh_fnc_init";
				fired = "call cba_xeh_fnc_fired";
				animChanged = "call cba_xeh_fnc_animChanged";
				animDone = "call cba_xeh_fnc_animDone";
				animStateChanged = "call cba_xeh_fnc_animStateChanged";
				containerClosed = "call cba_xeh_fnc_containerClosed";
				containerOpened = "call cba_xeh_fnc_containerOpened";
				controlsShifted = "call cba_xeh_fnc_controlsShifted";
				dammaged = "call cba_xeh_fnc_dammaged";
				engine = "call cba_xeh_fnc_engine";
				epeContact = "call cba_xeh_fnc_epeContact";
				epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
				epeContactStart = "call cba_xeh_fnc_epeContactStart";
				explosion = "call cba_xeh_fnc_explosion";
				firedNear = "call cba_xeh_fnc_firedNear";
				fuel = "call cba_xeh_fnc_cba_xeh_fuel";
				gear = "call cba_xeh_fnc_gear";
				getIn = "call cba_xeh_fnc_getIn";
				getInMan = "call cba_xeh_fnc_getInMan";
				getOut = "call cba_xeh_fnc_getOut";
				getOutMan = "call cba_xeh_fnc_getOutMan";
				handleHeal = "call cba_xeh_fnc_handleHeal";
				hit = "call cba_xeh_fnc_hit";
				hitPart = "call cba_xeh_fnc_hitPart";
				incomingMissile = "call cba_xeh_fnc_incomingMissile";
				inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
				inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
				killed = "call cba_xeh_fnc_killed";
				landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
				landedStopped = "call cba_xeh_fnc_landedStopped";
				local = "call cba_xeh_fnc_local";
				respawn = "call cba_xeh_fnc_respawn";
				put = "call cba_xeh_fnc_put";
				take = "call cba_xeh_fnc_take";
				seatSwitched = "call cba_xeh_fnc_seatSwitched";
				seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
				soundPlayed = "call cba_xeh_fnc_soundPlayed";
				weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
				weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
				weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
				weaponRested = "call cba_xeh_fnc_weaponRested";
				reloaded = "call cba_xeh_fnc_reloaded";
				firedMan = "call cba_xeh_fnc_firedMan";
				turnIn = "call cba_xeh_fnc_turnIn";
				turnOut = "call cba_xeh_fnc_turnOut";
				deleted = "call cba_xeh_fnc_deleted";
			};
		};
	};
	class JAS_Plane_Fighter_04_F_DYNO_AAC: JAS_Plane_Fighter_04_F_DYNO // Gryphon AAC
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_BANSHEE";
	};
	class JAS_O_Plane_CAS_02_DYNO: O_Plane_CAS_02_dynamicLoadout_F // Yak
	{
		author="Bohemia Interactive/-{GOL}-Jason";
		scope=2;
		displayName="YAK-131J";
		side=0;
		faction="OPF_F";
		weapons[]=
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"JAS_Cannon_30mm_Plane_CAS_02_F",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			//"FakeMagazine",
			"JAS_500Rnd_Gatling_30mm_Plane_CAS_02_F",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_3DEN_CA.paa";
				class pylons
				{
					class pylons1 
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 150;
						priority = 5;
						UIposition[] = {0.35,0};
					};
					class pylons2: pylons1
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 500;
						priority = 4;
						UIposition[] = {0.345,0.05};
					};
					class pylons3: pylons1 
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 1050;
						priority = 3;
						UIposition[] = {0.34,0.1};
					};
					class pylons4: pylons1
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 1200;
						priority = 2;
						UIposition[] = {0.33,0.2};
					};
					class pylons5: pylons1
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 1200;
						priority = 1;
						UIposition[] = {0.33,0.25};
					};
					class pylons6: pylons5
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 1200;
						mirroredMissilePos = 5;
						priority = 1;
						UIposition[] = {0.33,0.3};
					};
					class pylons7: pylons4
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 1200;
						mirroredMissilePos = 4;
						priority = 2;
						UIposition[] = {0.33,0.35};
					};
					class pylons8: pylons3
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 1050;
						mirroredMissilePos = 3;
						priority = 3;
						UIposition[] = {0.34,0.45};
					};
					class pylons9: pylons2
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 500;
						mirroredMissilePos = 2;
						priority = 4;
						UIposition[] = {0.345,0.5};
					};
					class pylons10: pylons1
					{
						attachment = "";
						hardpoints[] = {"JAS_YAK_AAM"};
						maxweight = 150;
						mirroredMissilePos = 1;
						priority = 5;
						UIposition[] = {0.35,0.55};
					};
				};
				class presets
				{
					class empty
					{
						displayName="empty";
						attachment[]={};
					};
					class default
					{
						displayName="Strike";
						attachment[]=
						{
							"JAS_R73_PYLON_M",
							"JAS_19Rnd_Rocket_Skyfire",
							"JAS_KH25MS_x1",
							"JAS_4Rnd_LG_scalpel",
							"JAS_1Rnd_Bomb_03_F_PYLON",
							"JAS_1Rnd_Bomb_03_F_PYLON",
							"JAS_4Rnd_LG_scalpel",
							"JAS_KH25MS_x1",
							"JAS_19Rnd_Rocket_Skyfire",
							"JAS_R73_PYLON_M"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"JAS_R73_PYLON_M",
							"JAS_20Rnd_Rocket_03_HE_F",
							"JAS_KH25ML_x1",
							"JAS_4Rnd_LG_scalpel",
							"JAS_1Rnd_Bomb_03_F_RBK",
							"JAS_1Rnd_Bomb_03_F_RBK",
							"JAS_4Rnd_LG_scalpel",
							"JAS_KH25ML_x1",
							"JAS_20Rnd_Rocket_03_HE_F",
							"JAS_R73_PYLON_M"
						};
					};
					class BOMB
					{
						displayName="Bomber";
						attachment[]=
						{
							"JAS_R73_PYLON_M",
							"JAS_1Rnd_Bomb_03_F_PYLON",
							"JAS_1Rnd_Bomb_03_F_PYLON",
							"JAS_1Rnd_Bomb_03_F_RBK",
							"JAS_1Rnd_Bomb_03_F_RBK",
							"JAS_1Rnd_Bomb_03_F_RBK",
							"JAS_1Rnd_Bomb_03_F_RBK",
							"JAS_1Rnd_Bomb_03_F_PYLON",
							"JAS_1Rnd_Bomb_03_F_PYLON",
							"JAS_R73_PYLON_M"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"JAS_R73_PYLON_M",
							"JAS_KH25MTP_x1",
							"JAS_KH25MTP_x1",
							"JAS_KH25R_x1",
							"JAS_KH25R_x1",
							"JAS_KH25R_x1",
							"JAS_KH25R_x1",
							"JAS_KH25MTP_x1",
							"JAS_KH25MTP_x1",
							"JAS_R73_PYLON_M"
						};
					};
					class SEAD
					{
						displayName="SEAD";
						attachment[]=
						{
							"JAS_R73_PYLON_M",
							"JAS_KH25MTP_x1",
							"JAS_KH25MTP_x1",
							"JAS_KH25MPU_x1",
							"JAS_KH25MPU_x1",
							"JAS_KH25MPU_x1",
							"JAS_KH25MPU_x1",
							"JAS_KH25MTP_x1",
							"JAS_KH25MTP_x1",
							"JAS_R73_PYLON_M"
						};
					};
				};
			};
		};
		class UserActions
		{
			class Yak_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Yak_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
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
			class Plane_CAS_02_Eject
			{
				condition = "player in this and isengineon this";
				displayName = "Eject";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				priority = 0.05;
				radius = 10;
				shortcut = "Eject";
				showWindow = 0;
				statement = "[this] spawn BIS_fnc_planeEjection";
			};
		};
		class eventhandlers
		{
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_O_Plane_CAS_02_DYNO_AAC: JAS_O_Plane_CAS_02_DYNO // Yak AAC
	{
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
	};
	class JAS_FIR_A143R: I_Plane_Fighter_03_dynamicLoadout_F // ALCA/Buzzard
	{
		scope = 2;
		author = "Bohimia Interactive /Firewill/-{GOL}-Jason";
		displayname = "A-143J Buzzard-E";
		hiddenselectionstextures[] = 
		{
			"ARMA3_CUP_Enhancement_Vanilla\skin\plane_fighter_03_body_1_aaf_co.paa",
			"ARMA3_CUP_Enhancement_Vanilla\skin\plane_fighter_03_body_2_aaf_co.paa"
		};
		weapons[] = 
		{
			//"JAS_Master_Arm",
			"FIR_MasterArm",
			"Laserdesignator_pilotCamera",
			"FIR_CMLauncher"
		};	
		magazines[] = 
		{
			//"FakeMagazine",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"JAS_ALCA_AAM"
						};
						attachment="";
						priority=5;
						maxweight=200;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						hardpoints[]=
						{
							"JAS_ALCA_AAM","DAGR","JAS_ALCA_AGM","JAS_CRV7"
						};
						priority=4;
						attachment="";
						maxweight=320;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]=
						{
							"JAS_ALCA_GPOD","DAGR","JAS_ALCA_AGM","JAS_CRV7"
						};
						priority=3;
						attachment="";
						maxweight=400;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						priority=2;
						attachment="";
						maxweight=500;
						UIposition[]={0.30000001,0.2};
						hardpoints[]=
						{
							"JAS_ALCA_GPOD","JAS_ALCA_AGM"
						};
					};
					class Pylons5: Pylons3
					{
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=3;
					};
					class Pylons6: Pylons2
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=2;
					};
					class Pylons7: Pylons1
					{
						UIposition[]={0.34,0.40000001};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_PylonRack_MAV_D_x1",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class AA
					{
						displayName="AA";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"JAS_FIR_AIM120C_PYLON_M",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_PylonWeapon_300Rnd_20mm_shells",
							"JAS_FIR_AIM120C_PYLON_M",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"JAS_FIR_AIM132_1rnd_PYLON_M",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_PylonRack_MAV_L_x1",
							"JAS_FIR_GBU12_PYLON_M",
							"JAS_PylonRack_MAV_L_x1",
							"PylonRack_12Rnd_PG_missiles",
							"JAS_FIR_AIM132_1rnd_PYLON_M"
						};
					};
				};
			};
		};
		class UserActions
		{
			class Yak_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ALCA_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
			class Plane_Fighter_03_Eject
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Eject";
				condition = "player in this";
				statement = "[this] spawn BIS_fnc_planeEjection";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
		};
		class eventhandlers
	    {
			Hit = "_this call BIS_fnc_PlaneAiEject";
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class RHS_DefaultEventhandlers
			{
				hitpart = "_this call rhs_fnc_hitPart";
			};
			class CBA_Extended_EventHandlers
			{
				init = "call cba_xeh_fnc_init";
				fired = "call cba_xeh_fnc_fired";
				animChanged = "call cba_xeh_fnc_animChanged";
				animDone = "call cba_xeh_fnc_animDone";
				animStateChanged = "call cba_xeh_fnc_animStateChanged";
				containerClosed = "call cba_xeh_fnc_containerClosed";
				containerOpened = "call cba_xeh_fnc_containerOpened";
				controlsShifted = "call cba_xeh_fnc_controlsShifted";
				dammaged = "call cba_xeh_fnc_dammaged";
				engine = "call cba_xeh_fnc_engine";
				epeContact = "call cba_xeh_fnc_epeContact";
				epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
				epeContactStart = "call cba_xeh_fnc_epeContactStart";
				explosion = "call cba_xeh_fnc_explosion";
				firedNear = "call cba_xeh_fnc_firedNear";
				fuel = "call cba_xeh_fnc_cba_xeh_fuel";
				gear = "call cba_xeh_fnc_gear";
				getIn = "call cba_xeh_fnc_getIn";
				getInMan = "call cba_xeh_fnc_getInMan";
				getOut = "call cba_xeh_fnc_getOut";
				getOutMan = "call cba_xeh_fnc_getOutMan";
				handleHeal = "call cba_xeh_fnc_handleHeal";
				hit = "call cba_xeh_fnc_hit";
				hitPart = "call cba_xeh_fnc_hitPart";
				incomingMissile = "call cba_xeh_fnc_incomingMissile";
				inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
				inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
				killed = "call cba_xeh_fnc_killed";
				landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
				landedStopped = "call cba_xeh_fnc_landedStopped";
				local = "call cba_xeh_fnc_local";
				respawn = "call cba_xeh_fnc_respawn";
				put = "call cba_xeh_fnc_put";
				take = "call cba_xeh_fnc_take";
				seatSwitched = "call cba_xeh_fnc_seatSwitched";
				seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
				soundPlayed = "call cba_xeh_fnc_soundPlayed";
				weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
				weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
				weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
				weaponRested = "call cba_xeh_fnc_weaponRested";
				reloaded = "call cba_xeh_fnc_reloaded";
				firedMan = "call cba_xeh_fnc_firedMan";
				turnIn = "call cba_xeh_fnc_turnIn";
				turnOut = "call cba_xeh_fnc_turnOut";
				deleted = "call cba_xeh_fnc_deleted";
			};
        };
	};
	class JAS_FIR_A143R_AAC: JAS_FIR_A143R // ALCA/Buzzard AAC
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_BANSHEE";
	};
	/*class JAS_B_AH9_DYNO_AAC: B_Heli_Light_01_dynamicLoadout_F // AH-9 AAC
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ANGEL";
		class UserActions
		{
			class AH9_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\AH9_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
	};*/
	class JAS_B_B_Heli_Light_01_F_AAC: B_Heli_Light_01_F // MH-9 AAC
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		displayname="MH-9 Littlebird";
	};
	/*class JAS_O_Orca_DYNO_AAC: O_Heli_Light_02_dynamicLoadout_F // Orca AAC
	{
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		magazines[] = 
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = 
		{
			"FIR_CMLauncher"
		};
		class UserActions
		{
			class ORCA_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\ORCA_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
	};*/
	class JAS_O_Heli_Attack_02_dynamicLoadout_F: Heli_Attack_02_base_F // Mi-48
	{
		scope=2;
		side=0;
		faction="OPF_F";
		crew="O_helipilot_F";
		typicalCargo[]=
		{
			"O_helipilot_F"
		};
		displayName="Mi-48J Kajman";
		accuracy=1.5;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_CO.paa",
			"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_CO.paa"
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Transport"
		};
		magazines[] = 
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = 
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"FIR_MasterArm",
					"gatling_30mm"
				};
				magazines[]=
				{
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"250Rnd_30mm_APDS_shells_Tracer_Green"
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Beta\Heli_Attack_02\Data\UI\Heli_Attack_02_3DEN_CA.paa";
				class pylons
				{
					class pylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL",
							"JAS_RUS_KH25_MI48",
							"JAS_RUS_BOMB"
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class pylonLeft2: pylonLeft1
					{
						attachment="PylonRack_19Rnd_Rocket_Skyfire";
						priority=4;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL",
							"JAS_RUS_KH25_MI48",
							"JAS_RUS_BOMB"
						};
						UIposition[]={0.079999998,0.34999999};
					};
					class pylonRight2: pylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.56999999,0.34999999};
					};
					class pylonRight1: pylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.58999997,0.40000001};
					};
				};
				class presets
				{
					class empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class HAT
					{
						displayName="Heavy AT";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_19Rnd_Rocket_Skyfire"
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideWeapons
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
		};
		class UserActions
		{
			/*class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fir_aws_mfd_n_open_chopper.sqf""";
				onlyforplayer = "false";
			};*/
			class MI48_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\MI48_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
		class eventhandlers
	    {
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class RHS_DefaultEventhandlers
			{
				hitpart = "_this call rhs_fnc_hitPart";
			};
			class CBA_Extended_EventHandlers
			{
				init = "call cba_xeh_fnc_init";
				fired = "call cba_xeh_fnc_fired";
				animChanged = "call cba_xeh_fnc_animChanged";
				animDone = "call cba_xeh_fnc_animDone";
				animStateChanged = "call cba_xeh_fnc_animStateChanged";
				containerClosed = "call cba_xeh_fnc_containerClosed";
				containerOpened = "call cba_xeh_fnc_containerOpened";
				controlsShifted = "call cba_xeh_fnc_controlsShifted";
				dammaged = "call cba_xeh_fnc_dammaged";
				engine = "call cba_xeh_fnc_engine";
				epeContact = "call cba_xeh_fnc_epeContact";
				epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
				epeContactStart = "call cba_xeh_fnc_epeContactStart";
				explosion = "call cba_xeh_fnc_explosion";
				firedNear = "call cba_xeh_fnc_firedNear";
				fuel = "call cba_xeh_fnc_cba_xeh_fuel";
				gear = "call cba_xeh_fnc_gear";
				getIn = "call cba_xeh_fnc_getIn";
				getInMan = "call cba_xeh_fnc_getInMan";
				getOut = "call cba_xeh_fnc_getOut";
				getOutMan = "call cba_xeh_fnc_getOutMan";
				handleHeal = "call cba_xeh_fnc_handleHeal";
				hit = "call cba_xeh_fnc_hit";
				hitPart = "call cba_xeh_fnc_hitPart";
				incomingMissile = "call cba_xeh_fnc_incomingMissile";
				inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
				inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
				killed = "call cba_xeh_fnc_killed";
				landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
				landedStopped = "call cba_xeh_fnc_landedStopped";
				local = "call cba_xeh_fnc_local";
				respawn = "call cba_xeh_fnc_respawn";
				put = "call cba_xeh_fnc_put";
				take = "call cba_xeh_fnc_take";
				seatSwitched = "call cba_xeh_fnc_seatSwitched";
				seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
				soundPlayed = "call cba_xeh_fnc_soundPlayed";
				weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
				weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
				weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
				weaponRested = "call cba_xeh_fnc_weaponRested";
				reloaded = "call cba_xeh_fnc_reloaded";
				firedMan = "call cba_xeh_fnc_firedMan";
				turnIn = "call cba_xeh_fnc_turnIn";
				turnOut = "call cba_xeh_fnc_turnOut";
				deleted = "call cba_xeh_fnc_deleted";
			};
        };
	};
	class JAS_O_Heli_Attack_02_dynamicLoadout_F_AAC: JAS_O_Heli_Attack_02_dynamicLoadout_F // Mi-48 AAC
	{
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_ZEUS";
	};
	class JAS_VTOL_02_infantry_dynamicLoadout_F: O_T_VTOL_02_infantry_dynamicLoadout_F // Y-32
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL",
							"JAS_RUS_KH25",
							"JAS_RUS_BOMB"
						};
						turret[]={0};
						UIposition[]={0.34999999,0.16};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_19Rnd_Rocket_Skyfire";
						priority=4;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL",
							"JAS_RUS_KH25",
							"JAS_RUS_BOMB"
						};
						UIposition[]={0.33000001,0.20999999};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.33000001,0.34};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.34999999,0.38999999};
					};
				};
				class presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class CAS
					{
						displayName="$STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP";
						attachment[]=
						{
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_19Rnd_Rocket_Skyfire"
						};
					};
					class HAT
					{
						displayName="$STR_A3_Heavy_AT_preset_displayName";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
				};
			};
		};
		class UserActions
		{
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
			class Y32_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Y32_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
		class eventhandlers
	    {
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class RHS_DefaultEventhandlers
			{
				hitpart = "_this call rhs_fnc_hitPart";
			};
			class CBA_Extended_EventHandlers
			{
				init = "call cba_xeh_fnc_init";
				fired = "call cba_xeh_fnc_fired";
				animChanged = "call cba_xeh_fnc_animChanged";
				animDone = "call cba_xeh_fnc_animDone";
				animStateChanged = "call cba_xeh_fnc_animStateChanged";
				containerClosed = "call cba_xeh_fnc_containerClosed";
				containerOpened = "call cba_xeh_fnc_containerOpened";
				controlsShifted = "call cba_xeh_fnc_controlsShifted";
				dammaged = "call cba_xeh_fnc_dammaged";
				engine = "call cba_xeh_fnc_engine";
				epeContact = "call cba_xeh_fnc_epeContact";
				epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
				epeContactStart = "call cba_xeh_fnc_epeContactStart";
				explosion = "call cba_xeh_fnc_explosion";
				firedNear = "call cba_xeh_fnc_firedNear";
				fuel = "call cba_xeh_fnc_cba_xeh_fuel";
				gear = "call cba_xeh_fnc_gear";
				getIn = "call cba_xeh_fnc_getIn";
				getInMan = "call cba_xeh_fnc_getInMan";
				getOut = "call cba_xeh_fnc_getOut";
				getOutMan = "call cba_xeh_fnc_getOutMan";
				handleHeal = "call cba_xeh_fnc_handleHeal";
				hit = "call cba_xeh_fnc_hit";
				hitPart = "call cba_xeh_fnc_hitPart";
				incomingMissile = "call cba_xeh_fnc_incomingMissile";
				inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
				inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
				killed = "call cba_xeh_fnc_killed";
				landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
				landedStopped = "call cba_xeh_fnc_landedStopped";
				local = "call cba_xeh_fnc_local";
				respawn = "call cba_xeh_fnc_respawn";
				put = "call cba_xeh_fnc_put";
				take = "call cba_xeh_fnc_take";
				seatSwitched = "call cba_xeh_fnc_seatSwitched";
				seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
				soundPlayed = "call cba_xeh_fnc_soundPlayed";
				weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
				weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
				weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
				weaponRested = "call cba_xeh_fnc_weaponRested";
				reloaded = "call cba_xeh_fnc_reloaded";
				firedMan = "call cba_xeh_fnc_firedMan";
				turnIn = "call cba_xeh_fnc_turnIn";
				turnOut = "call cba_xeh_fnc_turnOut";
				deleted = "call cba_xeh_fnc_deleted";
			};
        };
	};
	class JAS_VTOL_02_infantry_dynamicLoadout_F_AAC: JAS_VTOL_02_infantry_dynamicLoadout_F // Y-32 AAC
	{
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_CONDOR";
	};
	class JAS_VTOL_02_vehicle_dynamicLoadout_F: O_T_VTOL_02_vehicle_dynamicLoadout_F // Y-32 ViV
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL",
							"JAS_RUS_KH25",
							"JAS_RUS_BOMB"
						};
						turret[]={0};
						UIposition[]={0.34999999,0.16};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_19Rnd_Rocket_Skyfire";
						priority=4;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"UNI_SCALPEL",
							"JAS_RUS_KH25",
							"JAS_RUS_BOMB"
						};
						UIposition[]={0.33000001,0.20999999};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.33000001,0.34};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.34999999,0.38999999};
					};
				};
				class presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class CAS
					{
						displayName="$STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP";
						attachment[]=
						{
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_19Rnd_Rocket_Skyfire"
						};
					};
					class HAT
					{
						displayName="$STR_A3_Heavy_AT_preset_displayName";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
				};
			};
		};
		class UserActions
		{
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
			class Y32_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\Y32_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
	};
	class JAS_VTOL_02_vehicle_dynamicLoadout_F_AAC: JAS_VTOL_02_vehicle_dynamicLoadout_F // Y-32 ViV AAC
	{
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_CONDOR";
	};
	class JAS_Heli_light_03_dynamicLoadout_F: I_Heli_light_03_dynamicLoadout_F // Hellcat AAC
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
		magazines[] = 
		{
			"5000Rnd_762x51_Yellow_Belt",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = 
		{
			"FIR_MasterArm",
			"M134_minigun",
			"FIR_CMLauncher"
		};
		class UserActions
		{
			class HELLCAT_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Jets\sqs\loadout\HELLCAT_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
	};
};
