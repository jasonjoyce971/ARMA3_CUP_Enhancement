class CfgPatches
{
	class ARMA3_CUP_Enhancement_MI24
	{
		units[]=
		{
			"JAS_CUP_B_Mi24_D_CDF",
			"JAS_CUP_B_Mi24_D_AAC",
			"JAS_CUP_O_Mi24_D_TK",
			"JAS_CUP_O_Mi24_D_AAC",
			"JAS_CUP_I_Mi24_D_UN",
			"JAS_CUP_I_Mi24_D_AAF",
			"JAS_CUP_I_Mi24_D_ION",
			"JAS_CUP_O_Mi24_P_RU",
			"JAS_CUP_O_Mi24_P_AAC",
			"JAS_CUP_O_Mi24_V_RU",
			"JAS_CUP_O_Mi24_V_AAC",
			"JAS_CUP_B_Mi35_CZ",
			"JAS_CUP_B_Mi35_CZ_Des",
			"JAS_CUP_B_Mi35_CZ_Ram",
			"JAS_CUP_B_Mi35_CZ_Tiger",
			"JAS_CUP_B_Mi35_CZ_Dark",
			"JAS_CUP_B_Mi35_AAC",
			"JAS_CUP_I_Mi24_Mk3_ION",
			"JAS_CUP_I_Mi24_Mk4_ION",
			"JAS_CUP_I_Mi24_Mk3_AAC",
			"JAS_CUP_I_Mi24_Mk4_AAC",
			"JAS_MI24D_Loadout_Module",
			"JAS_MI24P_Loadout_Module",
			"JAS_MI24V_Loadout_Module",
			"JAS_MI35_Loadout_Module",
			"JAS_MI24III_Loadout_Module"
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
		class ARMA3_CUP_Enhancement_MI24
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_MI24"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_MI24D_Init_Function
		{
			class MI24D_Loadout
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24d_loadout_module.sqf";
			};
			class MI24D_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24d_loadout_module_set.sqf";
			};
		};
		class JAS_MI24P_Init_Function
		{
			class MI24P_Loadout
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24p_loadout_module.sqf";
			};
			class MI24P_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24p_loadout_module_set.sqf";
			};
		};
		class JAS_MI24V_Init_Function
		{
			class MI24V_Loadout
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24v_loadout_module.sqf";
			};
			class MI24V_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24v_loadout_module_set.sqf";
			};
		};
		class JAS_MI35_Init_Function
		{
			class MI35_Loadout
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi35_loadout_module.sqf";
			};
			class MI35_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi35_loadout_module_set.sqf";
			};
		};
		class JAS_MI24III_Init_Function
		{
			class MI24III_Loadout
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24iii_loadout_module.sqf";
			};
			class MI24III_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_MI24\sqs\modules\mi24iii_loadout_module_set.sqf";
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
class 24D_GUI
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
			text = "ARMA3_CUP_Enhancement_MI24\ui\MI24D_Background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24D_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24D_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24D_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24D_SaveCustom.sqf""";
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
class 24P_GUI
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
			text = "ARMA3_CUP_Enhancement_MI24\ui\MI24D_Background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24P_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24P_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24P_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24P_SaveCustom.sqf""";
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
class 24V_GUI
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
			text = "ARMA3_CUP_Enhancement_MI24\ui\MI24D_Background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24V_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24V_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24V_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24V_SaveCustom.sqf""";
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
class MI35_GUI
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
			text = "ARMA3_CUP_Enhancement_MI24\ui\MI24D_Background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\Mi35_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\Mi35_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\Mi35_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\Mi35_SaveCustom.sqf""";
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
class 24III_GUI
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
			text = "ARMA3_CUP_Enhancement_MI24\ui\MI24D_Background.paa";
		};
		class rsc1 : RscText
		{
			idc = 1000;
			text = "Right Midline";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1101 : RscText
		{
			idc = 1101;
			text = "Left Midline";
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
			text = "AT9 Mount";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "AT9 Mount";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24III_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24III_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24III_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24III_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_MI24\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_MI24\data\ico\ico.paa";
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
	class JAS_CUP_Mi24_Base: Helicopter_Base_H
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
		expansion=3;
		dlc="CUP_Vehicles";
		destrType="DestructWreck";
		scope=0;
		picture="\cup\airvehicles\cup_airvehicles_mi24\data\UI\Picture_mi24_CA.paa";
		icon="\cup\airvehicles\cup_airvehicles_mi24\data\UI\Icon_mi24_CA.paa";
		author="CUP/-{GOL}-Jason";
		mapSize=20;
		accuracy=0.5;
		cost=10000000;
		memoryPointGun="machinegun_2";
		weapons[]=
		{
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		model="\cup\airvehicles\cup_airvehicles_mi24\cup_mi24_v.p3d";
		displayName="Mi-24";
		vehicleClass="Air";
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		transportMaxBackpacks=10;
		driveOnComponent[]=
		{
			"gear_1_1_damper",
			"gear_2_1",
			"gear_2_2"
		};
		mainBladeCenter="main_rotor_center";
		mainBladeRadius=7.3000002;
		tailBladeCenter="tail_rotor_center";
		tailBladeRadius=1;
		driverLeftHandAnimName="stick_pilot";
		driverRightHandAnimName="stick_pilot";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=1;
				body="mainTurret";
				gun="mainGun";
				minElev=-60;
				maxElev=20;
				initElev=0;
				minTurn=-60;
				maxTurn=60;
				initTurn=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				memoryPointGun="machinegun";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				gunnerLeftHandAnimName="stick_copilot";
				gunnerRightHandAnimName="stick_copilot";
				weapons[]=
				{
					"CUP_Vacannon_Yakb_veh",
					"LaserDesignator_mounted"
				};
				magazines[]=
				{
					"CUP_1470Rnd_TE1_127x108_YakB_AP_M",
					"LaserBatteries"
				};
				gunnerName="Gunner";
				gunnerOpticsModel="\a3\weapons_f\reticle\optics_empty";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerAction="CUP_HIND_Gunner";
				gunnerInAction="CUP_HIND_Gunner";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				primaryGunner=1;
				turretInfoType="RscOptics_Heli_Attack_02_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex=5;
				showHMD=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.155;
					minFov=0.046999998;
					maxFov=0.155;
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.69999999;
						minFov=0.2;
						maxFov=0.80000001;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class Gatling_1
			{
				source="revolving";
				weapon="CUP_Vacannon_Yakb_veh";
			};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
				sound="ServoDoorsSound";
			};
			class Muzzle_rot_YakB
			{
				source="ammorandom";
				weapon="CUP_Vacannon_Yakb_veh";
			};
			class Muzzle_rot_Gsh302
			{
				source="ammorandom";
				weapon="CUP_Vacannon_GSh302K_veh";
			};
			class Muzzle_rot_Upk23_1
			{
				source="ammorandom";
				weapon="FakeWeapon";
			};
			class Muzzle_rot_Upk23_2
			{
				source="ammorandom";
				weapon="FakeWeapon";
			};
			class Muzzle_hide_Gsh302
			{
				source="reload";
				weapon="CUP_Vacannon_GSh302K_veh";
			};
			class Muzzle_hide_Upk23_1
			{
				source="reload";
				weapon="FakeWeapon";
			};
			class Muzzle_hide_Upk23_2
			{
				source="reload";
				weapon="FakeWeapon";
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=1;
				material=51;
				name="trup";
				visual="trup";
				passThrough=1;
			};
			class HitEngine
			{
				armor=0.5;
				material=51;
				name="motor";
				visual="motor";
				passThrough=1;
			};
			class HitAvionics
			{
				armor=0.30000001;
				material=51;
				name="elektronika";
				visual="elektronika";
				passThrough=1;
			};
			class HitVRotor
			{
				armor=0.5;
				material=51;
				name="mala vrtule";
				visual="mala vrtule staticka";
				passThrough=0.30000001;
			};
			class HitHRotor
			{
				armor=0.5;
				material=51;
				name="velka vrtule";
				visual="velka vrtule staticka";
				passThrough=0.1;
			};
			class HitGlass1
			{
				armor=2;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
			};
			class HitGlass2
			{
				armor=2;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=0;
			};
			class HitGlass3
			{
				armor=2;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=0;
			};
			class HitGlass4
			{
				armor=2;
				material=-1;
				name="glass4";
				visual="glass4";
				passThrough=0;
			};
		};
		armor=60;
		damageResistance=0.00138;
		irScanRangeMin=0;
		irScanRangeMax=4000;
		driverAction="CUP_HIND_Pilot";
		driverInAction="CUP_HIND_Pilot";
		cargoAction[]=
		{
			"CUP_HIND_Cargo"
		};
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		hideWeaponsCargo=1;
		transportSoldier=8;
		crew="O_helipilot_F";
		typicalCargo[]=
		{
			"O_helipilot_F",
			"O_helipilot_F",
			"O_helipilot_F",
			"O_helipilot_F"
		};
		transportAmmo=0;
		transportMaxMagazines=150;
		transportMaxWeapons=30;
		supplyRadius=2.5;
		initCargoAngleY=10;
		minCargoAngleY=-60;
		maxCargoAngleY=120;
		gunnerUsesPilotView=0;
		cargoIsCoDriver[]={0,0};
		driverCanSee=31;
		gunnerCanSee=31;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_sklo.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_sklo_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_sklo_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_sklo_interier.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_sklo_interier_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_sklo_interier_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_001.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_002.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_003.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_003_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_mi24\data\mi35_003_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24v_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24v_002_co.paa"
		};
		dammageHalf[]={};
		dammageFull[]={};
		viewDriverShadow=1;
		viewGunnerShadow=1;
		viewCargoShadow=1;
		gearRetracting=1;
		gearUpTime=2;
		gearDownTime=2;
		maxSpeed=310;
		mainRotorSpeed=1.2;
		backRotorSpeed=6.0999999;
		slingLoadMaxCargoMass=1500;
		selectionhrotormove="velka vrtule blur";
		selectionhrotorstill="velka vrtule staticka";
		selectionvrotormove="mala vrtule blur";
		selectionvrotorstill="mala vrtule staticka";
		memoryPointsGetInCargo[]=
		{
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir"
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="L svetlo";
				direction="L svetlo konec";
				hitpoint="L svetlo";
				selection="L svetlo";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=300;
				};
			};
		};
		minFireTime=30;
		threat[]={0.80000001,1,0.60000002};
		class UserActions
		{
			class OpenDoors
			{
				displayName="Open Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",1]; this animate [""dvere_l_spod"",1]; this animate [""dvere_p_vrch"",1]; this animate [""dvere_p_spod"",1];";
				userActionID=50;
			};
			class CloseDoors
			{
				displayName="Close Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",0]; this animate [""dvere_l_spod"",0]; this animate [""dvere_p_vrch"",0]; this animate [""dvere_p_spod"",0];";
				userActionID=50;
			};
		};
		insideSoundCoef=0.30000001;
		attenuationEffectType="SemiOpenHeliAttenuation";
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
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\open_close",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\open_close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_start_int",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_start_ext",
			1.9952624,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_stop_int",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_stop_ext",
			1.9952624,
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
			1,
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
			300
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
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
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
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN",
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
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT",
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
					"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_engine_ext_2",
					1.4125376,
					1,
					800
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_rotor_ext_1",
					1,
					1,
					1500
				};
				frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_01\rotor_swist",
					1,
					1,
					400
				};
				frequency=1;
				volume="camPos * (rotorThrust factor [0.7, 0.9])";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_engine_int_1",
					1,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[]=
				{
					"cup\airvehicles\cup_airvehicles_mi24\sound\uh1h_rotor_int_1",
					0.50118721,
					1
				};
				frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
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
					0.70794576,
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
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
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
				volume="(1-camPos)*(speed factor[40,80])";
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
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine",
						1.4125376,
						1,
						800
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_rotor",
						1,
						1,
						1500
					};
					frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\rotor_swist",
						1,
						1,
						400
					};
					frequency=1;
					volume="camPos * (rotorThrust factor [0.7, 0.9])";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine",
						1,
						1
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_rotor",
						0.50118721,
						1
					};
					frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
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
						0.70794576,
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
						"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
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
					volume="(1-camPos)*(speed factor[40,80])";
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		class MFD
		{
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="ARMA3_CUP_Enhancement_MI24\rotorLib\hind-genheli600-desktopsim.xml";
			maxTorque=10000;
			maxMainRotorStress=250000;
			maxTailRotorStress=30000;
			maxHorizontalStabilizerLeftStress=12000;
			maxHorizontalStabilizerRightStress=12000;
			maxVerticalStabilizerStress=8000;
			defaultCollective=0.75;
			starterBatteryDrain=12;
			electricityBatteryDrain=0.12;
			engineBatteryRecharge=0.44999999;
			hasAPU=1;
			APUOn=5;
			APUOff=5;
			starterTime=6;
			throttleOffToIdle=17;
			throttleIdleToOff=20;
			throttleIdleToFull=14;
			throttleFullToIdle=24;
			autoHoverCorrection[]={6,-1,0};
			retreatBladeStallWarningSpeed=93.056;
			horizontalWingsAngleCollMin=-12.5;
			horizontalWingsAngleCollMax=7.5;
		};
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,9,-1.89};
		LESH_WheelOffset[]={0,1};
	};
	class JAS_CUP_Mi24_D_Base: JAS_CUP_Mi24_Base
	{
		scope=0;
		accuracy=1000;
		model="\cup\airvehicles\cup_airvehicles_mi24\cup_mi35.p3d";
		displayName="Mi-24D";
		vehicleClass="Air";
		crew="B_Helipilot_F";
		faction="CUP_B_CDF";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F",
			"B_Helipilot_F",
			"B_Helipilot_F",
			"B_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_co.paa"
		};
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		author="CUP/-{GOL}-Jason";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"FIR_MasterArm",
					"CUP_Vacannon_Yakb_veh",
					"LaserDesignator_mounted"
				};
				magazines[]=
				{
					"CUP_1470Rnd_TE1_127x108_YakB_AP_M",
					"LaserBatteries"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1;
			class Doors;
		};
		class UserActions
		{
			class OpenDoors
			{
				displayName="Open Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",1]; this animate [""dvere_l_spod"",1]; this animate [""dvere_p_vrch"",1]; this animate [""dvere_p_spod"",1];";
				userActionID=50;
			};
			class CloseDoors
			{
				displayName="Close Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",0]; this animate [""dvere_l_spod"",0]; this animate [""dvere_p_vrch"",0]; this animate [""dvere_p_spod"",0];";
				userActionID=50;
			};
			class MI24D_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24D_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class Library
		{
			libTextDesc="$STR_LIB_MI24_D";
		};
	};
	class JAS_CUP_B_Mi24_D_CDF: JAS_CUP_Mi24_D_Base
	{
		scope=2;
		side=1;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_B_CDF_Pilot";
		fir_MI24D_custom_skin=1;
		fir_MI24D_custom_name="Mi-24D Chernarussian Defence Force";
		fir_MI24D_custom_code="JAS_CUP_B_Mi24_D_CDF";
		fir_MI24D_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\24D_CDF.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24CDF.jpg";
		typicalCargo[]=
		{
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot"
		};
		faction="CUP_B_CDF";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_co.paa"
		};
	};
	class JAS_CUP_B_Mi24_D_AAC: JAS_CUP_Mi24_D_Base
	{
		scope=2;
		side=1;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_B_CDF_Pilot";
		fir_MI24D_custom_skin=0;
		fir_MI24D_custom_name="Mi-24D Chernarussian Defence Force";
		fir_MI24D_custom_code="JAS_CUP_B_Mi24_D_CDF";
		fir_MI24D_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\USGreyShark.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24CDF.jpg";
		typicalCargo[]=
		{
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot"
		};
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_co.paa"
		};
	};
	class JAS_CUP_O_Mi24_D_TK: JAS_CUP_Mi24_D_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_O_TK_Pilot";
		fir_MI24D_custom_skin=1;
		fir_MI24D_custom_name="Mi-24D Takistani Army";
		fir_MI24D_custom_code="JAS_CUP_O_Mi24_D_TK";
		fir_MI24D_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\24D_TKA.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24TK.jpg";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot"
		};
		faction="CUP_O_TK";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_ind_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_ind_co.paa"
		};
	};
	class JAS_CUP_O_Mi24_D_AAC: JAS_CUP_Mi24_D_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_O_TK_Pilot";
		fir_MI24D_custom_skin=0;
		fir_MI24D_custom_name="Mi-24D Takistani Army";
		fir_MI24D_custom_code="JAS_CUP_O_Mi24_D_TK";
		fir_MI24D_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\USGreyShark.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24CDF.jpg";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot"
		};
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_ind_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_ind_co.paa"
		};
	};
	class JAS_CUP_I_Mi24_D_UN: JAS_CUP_Mi24_D_Base
	{
		scope=2;
		side=2;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_I_UN_CDF_Pilot";
		fir_MI24D_custom_skin=1;
		fir_MI24D_custom_name="Mi-24D United Nations";
		fir_MI24D_custom_code="JAS_CUP_I_Mi24_D_UN";
		fir_MI24D_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\24D_UN.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24UN.jpg";
		typicalCargo[]=
		{
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot"
		};
		faction="CUP_I_UN";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\unitednations_white_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\unitednations_white_002_co.paa"
		};
	};
	class JAS_CUP_I_Mi24_D_AAF: JAS_CUP_Mi24_D_Base
	{
		scope=2;
		side=2;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="I_Helipilot_F";
		fir_MI24D_custom_skin=1;
		fir_MI24D_custom_name="Mi-24D Altis Armed Forces";
		fir_MI24D_custom_code="JAS_CUP_I_Mi24_D_AAF";
		fir_MI24D_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\24D_AAF.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24AAF.jpg";
		typicalCargo[]=
		{
			"I_Helipilot_F",
			"I_Helipilot_F",
			"I_Helipilot_F",
			"I_Helipilot_F",
			"I_Helipilot_F"
		};
		faction="IND_F";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\aaf_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\aaf_002_co.paa"
		};
	};
	class JAS_CUP_I_Mi24_D_ION: JAS_CUP_Mi24_D_Base
	{
		scope=2;
		side=2;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_I_PMC_Pilot";
		fir_MI24D_custom_skin=1;
		fir_MI24D_custom_name="Mi-24D ION PMC";
		fir_MI24D_custom_code="JAS_CUP_I_Mi24_D_ION";
		fir_MI24D_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\24D_ION.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24ION.jpg";
		typicalCargo[]=
		{
			"CUP_I_PMC_Pilot",
			"CUP_I_PMC_Pilot",
			"CUP_I_PMC_Pilot",
			"CUP_I_PMC_Pilot",
			"CUP_I_PMC_Pilot"
		};
		faction="CUP_I_PMC_ION";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ion_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ion_002_co.paa"
		};
	};
	class JAS_CUP_Mi24_P_Base: JAS_CUP_Mi24_Base
	{
		scope=0;
		accuracy=1000;
		model="\cup\airvehicles\cup_airvehicles_mi24\cup_mi24_p.p3d";
		displayName="Mi-24P";
		vehicleClass="Air";
		author="CUP/-{GOL}-Jason";
		class Library
		{
			libTextDesc="$STR_LIB_MI24_P";
		};
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_CMLauncher",
			"CUP_Vacannon_GSh302K_veh"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"CUP_750Rnd_TE1_30mm_GSh302K_HE_M"
		};
		memoryPointGun="machinegun";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"FIR_MasterArm",
					"LaserDesignator_mounted"
				};
				magazines[]=
				{
					"LaserBatteries"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_002_co.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayName="Open Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",1]; this animate [""dvere_l_spod"",1]; this animate [""dvere_p_vrch"",1]; this animate [""dvere_p_spod"",1];";
				userActionID=50;
			};
			class CloseDoors
			{
				displayName="Close Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",0]; this animate [""dvere_l_spod"",0]; this animate [""dvere_p_vrch"",0]; this animate [""dvere_p_spod"",0];";
				userActionID=50;
			};
			class MI24P_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24P_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
	};
	class JAS_CUP_O_Mi24_P_RU: JAS_CUP_Mi24_P_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_O_RU_Pilot";
		fir_MI24P_custom_skin=0;
		fir_MI24P_custom_name="Mi-24P Russian Federation";
		fir_MI24P_custom_code="JAS_CUP_O_Mi24_P_RU";
		fir_MI24P_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\USGreyShark.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24RU.jpg";
		typicalCargo[]=
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		faction="CUP_O_RU";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_002_co.paa"
		};
	};
	class JAS_CUP_O_Mi24_P_AAC: JAS_CUP_Mi24_P_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_O_RU_Pilot";
		fir_MI24P_custom_skin=0;
		fir_MI24P_custom_name="Mi-24P Russian Federation";
		fir_MI24P_custom_code="JAS_CUP_O_Mi24_P_RU";
		fir_MI24P_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\USGreyShark.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24RU.jpg";
		typicalCargo[]=
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_002_co.paa"
		};
	};
	class JAS_CUP_Mi24_V_Base: JAS_CUP_Mi24_Base
	{
		scope=0;
		accuracy=1000;
		displayName="Mi-24V";
		class Library
		{
			libTextDesc="$STR_LIB_MI24_V";
		};
		author="CUP/-{GOL}-Jason";
		class UserActions
		{
			class OpenDoors
			{
				displayName="Open Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",1]; this animate [""dvere_l_spod"",1]; this animate [""dvere_p_vrch"",1]; this animate [""dvere_p_spod"",1];";
				userActionID=50;
			};
			class CloseDoors
			{
				displayName="Close Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",0]; this animate [""dvere_l_spod"",0]; this animate [""dvere_p_vrch"",0]; this animate [""dvere_p_spod"",0];";
				userActionID=50;
			};
			class MI24P_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24V_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
	};
	class JAS_CUP_O_Mi24_V_RU: JAS_CUP_Mi24_V_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_O_RU_Pilot";
		fir_MI24V_custom_skin=0;
		fir_MI24V_custom_name="Mi-24V Russian Federation";
		fir_MI24V_custom_code="JAS_CUP_O_Mi24_V_RU";
		fir_MI24V_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\USGreyShark.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24RU.jpg";
		typicalCargo[]=
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		faction="CUP_O_RU";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_002_co.paa"
		};
	};
	class JAS_CUP_O_Mi24_V_AAC: JAS_CUP_Mi24_V_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_O_RU_Pilot";
		fir_MI24V_custom_skin=0;
		fir_MI24V_custom_name="Mi-24V Russian Federation";
		fir_MI24V_custom_code="JAS_CUP_O_Mi24_V_RU";
		fir_MI24V_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\USGreyShark.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\24RU.jpg";
		typicalCargo[]=
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_002_co.paa"
		};
	};
	class JAS_CUP_Mi35_Base: JAS_CUP_Mi24_Base
	{
		scope=0;
		accuracy=1000;
		model="\cup\airvehicles\cup_airvehicles_mi24\cup_mi35.p3d";
		displayName="Mi-35";
		vehicleClass="Air";
		crew="B_Helipilot_F";
		faction="CUP_B_CZ";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F",
			"B_Helipilot_F",
			"B_Helipilot_F",
			"B_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_1_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_2_co.paa"
		};
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		author="CUP/-{GOL}-Jason";
		class UserActions
		{
			class OpenDoors
			{
				displayName="Open Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",1]; this animate [""dvere_l_spod"",1]; this animate [""dvere_p_vrch"",1]; this animate [""dvere_p_spod"",1];";
				userActionID=50;
			};
			class CloseDoors
			{
				displayName="Close Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""dvere_p_vrch"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""dvere_l_vrch"",0]; this animate [""dvere_l_spod"",0]; this animate [""dvere_p_vrch"",0]; this animate [""dvere_p_spod"",0];";
				userActionID=50;
			};
			class MI35_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\Mi35_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"FIR_MasterArm",
					"CUP_Vacannon_Yakb_veh",
					"LaserDesignator_mounted"
				};
				magazines[]=
				{
					"CUP_1470Rnd_TE1_127x108_YakB_AP_M",
					"LaserBatteries"
				};
			};
		};
		class Library
		{
			libTextDesc="$STR_LIB_MI24_D";
		};
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,9,-1.89};
		LESH_WheelOffset[]={0,1};
	};
	class JAS_CUP_B_Mi35_CZ: JAS_CUP_Mi35_Base
	{
		scope=2;
		side=1;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_B_CZ_Pilot";
		fir_MI35_custom_skin=1;
		fir_MI35_custom_name="Mi-35 ACR Basic";
		fir_MI35_custom_code="JAS_CUP_B_Mi35_CZ";
		fir_MI35_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\35_BASE.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\35CZ.jpg";
		typicalCargo[]=
		{
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot"
		};
		faction="CUP_B_CZ";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_1_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_2_co.paa"
		};
	};
	class JAS_CUP_B_Mi35_CZ_Des: JAS_CUP_B_Mi35_CZ
	{
		displayName="Mi-35J (Desert)";
		author="CUP/-{GOL}-Jason";
		fir_MI35_custom_skin=1;
		fir_MI35_custom_name="Mi-35 ACR Desert";
		fir_MI35_custom_code="JAS_CUP_B_Mi35_CZ_Des";
		fir_MI35_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\35_DES.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\35Des.jpg";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_desert_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_desert_002_co.paa"
		};
	};
	class JAS_CUP_B_Mi35_CZ_Ram: JAS_CUP_B_Mi35_CZ
	{
		displayName="Mi-35J (Ram)";
		author="CUP/-{GOL}-Jason";
		fir_MI35_custom_skin=1;
		fir_MI35_custom_name="Mi-35 ACR Ram";
		fir_MI35_custom_code="JAS_CUP_B_Mi35_CZ_Ram";
		fir_MI35_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\35_RAM.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\35Ram.jpg";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_experimantalram_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_experimantalram_002_co.paa"
		};
	};
	class JAS_CUP_B_Mi35_CZ_Tiger: JAS_CUP_B_Mi35_CZ
	{
		displayName="Mi-35J (Tiger)";
		author="CUP/-{GOL}-Jason";
		fir_MI35_custom_skin=1;
		fir_MI35_custom_name="Mi-35 ACR Tiger";
		fir_MI35_custom_code="JAS_CUP_B_Mi35_CZ_Tiger";
		fir_MI35_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\35_TIGER.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\35Tiger.jpg";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_tiger_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_tiger_002_co.paa"
		};
	};
	class JAS_CUP_B_Mi35_CZ_Dark: JAS_CUP_B_Mi35_CZ
	{
		displayName="Mi-35J (Dark)";
		author="CUP/-{GOL}-Jason";
		fir_MI35_custom_skin=1;
		fir_MI35_custom_name="Mi-35 ACR Dark";
		fir_MI35_custom_code="JAS_CUP_B_Mi35_CZ_Dark";
		fir_MI35_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\35_DARK.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\35Dark.jpg";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_dark_001_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_dark_002_co.paa"
		};
	};
	class JAS_CUP_B_Mi35_AAC: JAS_CUP_Mi35_Base
	{
		scope=2;
		side=1;
		accuracy=1000;
		author="CUP/-{GOL}-Jason";
		crew="CUP_B_CZ_Pilot";
		fir_MI35_custom_skin=2;
		fir_MI35_custom_name="Mi-35 ACR Basic";
		fir_MI35_custom_code="JAS_CUP_B_Mi35_CZ";
		fir_MI35_custom_preview_pic="\ARMA3_CUP_Enhancement_MI24\UI\preview\USGreyShark.paa";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\35CZ.jpg";
		typicalCargo[]=
		{
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot"
		};
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_ZEUS";
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_1_co.paa",
			"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_2_co.paa"
		};
	};
	class JAS_CUP_MI35_TOH_Base: JAS_CUP_Mi24_Base
	{
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=0;
		accuracy=0.5;
		picture="CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\UI\Picture_mi35_ca.paa";
		icon="CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\UI\icon_mi35_ca.paa";
		model="CUP\AirVehicles\CUP_AirVehicles_Mi35\CUP_SuperHIND.p3d";
		mapSize=0;
		scope=0;
		selectionHRotorStill="main rotor static";
		selectionHRotorMove="main rotor blur";
		selectionVRotorStill="tail rotor static";
		selectionVRotorMove="tail rotor blur";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\mi24sh_001_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\mi24sh_002_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\mi35_sh_co.paa"
		};
		mainBladeCenter="main_rotor_center";
		mainBladeRadius=7.3000002;
		tailBladeCenter="tail_rotor_center";
		tailBladeRadius=1;
		transportSoldier=8;
		cargoCanEject=1;
		usePreciseGetInAction=1;
		preciseGetOut=1;
		preciseGetInOut=1;
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="pedall";
		driverRightLegAnimName="pedalr";
		memoryPointsGetInDriverPrecise="GetIn_Pilot";
		driverAction="CUP_Hind_R_H";
		getInAction="CUP_Hind_R_In_H";
		getOutAction="CUP_Hind_R_Out_H";
		driverDoor="DoorR1_Open";
		cargoAction[]=
		{
			"CUP_Hind_C_H"
		};
		cargoDoors[]=
		{
			"DoorR2_Open",
			"DoorL2_Open",
			"DoorR2_Open",
			"DoorL2_Open",
			"DoorR2_Open",
			"DoorL2_Open",
			"DoorR2_Open",
			"DoorL2_Open"
		};
		memoryPointsGetInCargo[]=
		{
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir"
		};
		memoryPointsGetInCargoPrecise[]=
		{
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir"
		};
		cargoGetInAction[]=
		{
			"CUP_Hind_C_R_In_H",
			"CUP_Hind_C_L_In_H",
			"CUP_Hind_C_R_In_H",
			"CUP_Hind_C_L_In_H",
			"CUP_Hind_C_R_In_H",
			"CUP_Hind_C_L_In_H",
			"CUP_Hind_C_R_In_H",
			"CUP_Hind_C_L_In_H"
		};
		cargoGetOutAction[]=
		{
			"CUP_Hind_C_R_Out_H",
			"CUP_Hind_C_L_Out_H",
			"CUP_Hind_C_R_Out_H",
			"CUP_Hind_C_L_Out_H",
			"CUP_Hind_C_R_Out_H",
			"CUP_Hind_C_L_Out_H",
			"CUP_Hind_C_R_Out_H",
			"CUP_Hind_C_L_Out_H"
		};
		cargoPreciseGetInOut[]={2};
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		selectionFireAnim="muzzleFlashi";
		memoryPointGun[]=
		{
			"muzzle03",
			"muzzle04",
			"muzzle05",
			"muzzle06"
		};
		gunBeg[]=
		{
			"muzzle03",
			"muzzle04",
			"muzzle05",
			"muzzle06"
		};
		gunEnd[]=
		{
			"chamber03",
			"chamber04",
			"chamber05",
			"chamber06"
		};
		class AnimationSources: AnimationSources
		{
			class Muzzle_rot_GI2
			{
				source="ammorandom";
				weapon="CUP_Vacannon_GI2_veh";
			};
			class muzzle_rot_gsh
			{
				source="ammorandom";
				weapon="CUP_Vacannon_GSh23L_in_veh";
			};
			class hideAirfilter
			{
				displayName="Hide Air Filters";
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
			class hideExhaustcooler
			{
				displayName="Hide Exhaust Coolers";
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
			class DoorR1_Open
			{
				source="door";
				animPeriod=1;
				initPhase=0;
				sound="ServoDoorsSound";
			};
			class DoorL1_Open
			{
				source="door";
				animPeriod=1;
				initPhase=0;
				sound="ServoDoorsSound";
			};
			class DoorR2_Open
			{
				source="user";
				animPeriod=1;
				initPhase=0;
				sound="ServoDoorsSound";
				soundPosition="pos Cargo R dir";
			};
			class DoorL2_Open
			{
				source="user";
				animPeriod=1;
				initPhase=0;
				sound="ServoDoorsSound";
				soundPosition="pos Cargo L dir";
			};
			class Inspect_Panel1_1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
				sound="ServoDoorsSound";
			};
			class Inspect_Panel2_1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
				sound="ServoDoorsSound";
			};
			class hideAtaka
			{
				displayName="Hide Ataka";
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
			class hideGunnerMFD
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="CUP\AirVehicles\CUP_AirVehicles_Mi35\HIND-GenHeli600-DesktopSim.xml";
			maxTorque=10000;
			maxMainRotorStress=250000;
			maxTailRotorStress=30000;
			maxHorizontalStabilizerLeftStress=12000;
			maxHorizontalStabilizerRightStress=12000;
			maxVerticalStabilizerStress=8000;
			defaultCollective=0.75;
			starterBatteryDrain=12;
			electricityBatteryDrain=0.12;
			engineBatteryRecharge=0.44999999;
			hasAPU=1;
			APUOn=5;
			APUOff=5;
			starterTime=6;
			throttleOffToIdle=17;
			throttleIdleToOff=20;
			throttleIdleToFull=14;
			throttleFullToIdle=24;
			autoHoverCorrection[]={6,-1,0};
			retreatBladeStallWarningSpeed=93.056;
			horizontalWingsAngleCollMin=-12.5;
			horizontalWingsAngleCollMax=7.5;
		};
		class UserActions: UserActions
		{
			class OpenDoors
			{
				displayName="Open Cargo Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""DoorL2_Upper_Open"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""DoorL2_Upper_Open"",1]; this animate [""DoorL2_Lower_Open"",1]; this animate [""DoorR2_Upper_Open"",1]; this animate [""DoorR2_Lower_Open"",1];";
				userActionID=50;
			};
			class CloseDoors
			{
				displayName="Close Cargo Doors";
				position="";
				radius=3;
				onlyForplayer=1;
				condition="this animationPhase ""DoorL2_Upper_Open"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""DoorL2_Upper_Open"",0]; this animate [""DoorL2_Lower_Open"",0]; this animate [""DoorR2_Upper_Open"",0]; this animate [""DoorR2_Lower_Open"",0];";
				userActionID=50;
			};
			class GunnerMFDSwitch
			{
				displayName="Toggle MFD";
				position="";
				radius=3;
				onlyForPlayer=1;
				condition="player == gunner this AND alive this";
				statement="if (this animationPhase ""hideGunnerMFD"" > 0.5) then {this animate [""hideGunnerMFD"", 0];} else {this animate [""hideGunnerMFD"", 1];};";
			};
			class PILOTMFDSwitch
			{
				displayName="Toggle MFD";
				position="";
				radius=3;
				onlyForPlayer=1;
				condition="player == driver this AND alive this";
				statement="if (this animationPhase ""hidePilotMFD"" > 0.5) then {this animate [""hidePilotMFD"", 0];} else {this animate [""hidePilotMFD"", 1];};";
			};
			class MI24III_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_MI24\sqs\loadout\24III_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				GunnerDoor="DoorL1_Open";
				gunnerGetInAction="CUP_Hind_L_In_H";
				gunnerGetOutAction="CUP_Hind_L_Out_H";
				memoryPointsGetInGunnerPrecise="GetIn_Gunner";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerLeftLegAnimName="pedalL_copilot";
				gunnerRightLegAnimName="pedalR_copilot";
				preciseGetInOut=1;
				body="Gun_HRot";
				gun="Gun_VRot";
				animationSourceBody="Gun_HRot";
				animationSourceGun="Gun_VRot";
				weapons[]=
				{
					"FIR_MasterArm",
					"CUP_Vacannon_GI2_veh",
					"LaserDesignator_mounted"
				};
				magazines[]=
				{
					"CUP_750Rnd_TE1_Green_Tracer_GI2_20mm_AP_M",
					"LaserBatteries"
				};
				selectionFireAnim="zasleh";
				minElev=-15;
				maxElev=20;
				minTurn=-120;
				maxTurn=120;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				allowTabLock=0;
				showAllTargets=1;
				turretInfoType="RscOptics_Heli_Attack_02_gunner";
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=2;
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsModel="\a3\weapons_f\reticle\optics_empty";
				class OpticsIn
				{
					class Wide: Viewoptics
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular: Viewoptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				gunBeg="z_gun_muzzle";
				gunEnd="z_gun_chamber";
				memoryPointGun="z_gun_muzzle";
				memoryPointGunnerOptics="z_gun_gunnerview";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="landinglight01_pos";
				direction="landinglight01_dir";
				hitpoint="light";
				selection="landinglight01";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=300;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
				position="exhaust1";
			};
			class Exhaust2
			{
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
				position="exhaust2";
			};
			class Exhaust3
			{
				direction="exhaust3_dir";
				effect="ExhaustsEffectHeliBig";
				position="exhaust3";
			};
			class Exhaust4
			{
				direction="exhaust4_dir";
				effect="ExhaustsEffectHeliBig";
				position="exhaust4";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name="pos_light_still_white";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class RedStill
			{
				name="pos_light_still_red";
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
				name="pos_light_still_green";
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
			class RedBlinking
			{
				name="pos_light_blink_red";
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=75;
				blinking=1;
				blinkingStartsOn=0;
				blinkingPattern[]={1.9,0.1};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class WhiteBlinking
			{
				name="pos_light_blink_red2";
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,1.9};
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
		};
		class RenderTargets
		{
			class TadsView
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="z_flir_pos";
					pointDirection="z_flir_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.50199997,0.49000001};
					pos10[]={1.112,1.03};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.50199997,0.49000001};
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
						pos0[]={0.50199997,0.49000001};
						pos10[]={0.56300002,0.54400003};
					};
					class SpdMove2
					{
						source="speed";
						min=0;
						max=138.88901;
						type="linear";
						minPos[]=
						{
							0,
							"0.15*0.65"
						};
						maxPos[]=
						{
							0,
							"0.65*0.65"
						};
					};
					class AGLMove
					{
						type="linear";
						source="altitudeAGL";
						min=0;
						max=50;
						minPos[]=
						{
							0,
							"0.15*0.65"
						};
						maxPos[]=
						{
							0,
							"0.65*0.65"
						};
					};
					class Heading
					{
						type="linear";
						source="Heading";
						min=-36;
						max=36;
						minPos[]={0,0};
						maxPos[]={1,0};
					};
					class TargetDistanceMissile
					{
						type="rotational";
						source="targetDist";
						center[]={0,0};
						min=100;
						max=3000;
						minAngle=-120;
						maxAngle=120;
					};
					class vspeed
					{
						source="vspeed";
						type="linear";
						min=-30;
						max=30;
						minPos[]=
						{
							0,
							"0.15*0.4"
						};
						maxPos[]=
						{
							0,
							"0.75*0.4"
						};
					};
					class HorizonBankMGun
					{
						type="rotational";
						source="HorizonBank";
						center[]={0,0};
						min=-6.2831898;
						max=6.2831898;
						minAngle=-360;
						maxAngle=360;
						aspectRatio=0.88524598;
					};
					class HorizonDive
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.50199997,2.49};
						maxPos[]={0.50199997,-1.51};
					};
				};
				class Draw
				{
					alpha=0.40000001;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					clipTL[]={0,0};
					clipBR[]={1,1};
					class PlaneW
					{
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{-0.079999998,0},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{-0.0348,-0.0177049},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{-0.02,-0.030806599},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{0,-0.035409801},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{0.02,-0.030806599},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{0.0348,-0.0177049},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{0.039999999,0},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{0.079999998,0},
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[]={0.30000001,0.30000001};
						clipBR[]={0.69999999,0.69999999};
						class Vector
						{
							type="line";
							points[]=
							{
								
								{
									"Velocity",
									0.001,
									"PlaneW",
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
					class Static
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"SpdMove2",
								
								{
									0.27000001,
									"0.1+0.01"
								},
								1
							},
							
							{
								"SpdMove2",
								
								{
									0.255,
									"0.1+0.0"
								},
								1
							},
							
							{
								"SpdMove2",
								
								{
									0.27000001,
									"0.1-0.01"
								},
								1
							},
							
							{
								"SpdMove2",
								
								{
									0.27000001,
									"0.1+0.01"
								},
								1
							},
							{},
							
							{
								
								{
									0.25,
									"0.1+0.15*0.65"
								},
								1
							},
							
							{
								
								{
									0.25,
									"0.1+0.65*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									0.25,
									"0.1+0.15*0.65"
								},
								1
							},
							
							{
								
								{
									0.23,
									"0.1+0.15*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									0.245,
									"0.1+0.65*0.65"
								},
								1
							},
							
							{
								
								{
									0.23,
									"0.1+0.65*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									0.245,
									"0.1+0.25*0.65"
								},
								1
							},
							
							{
								
								{
									0.23,
									"0.1+0.25*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									0.245,
									"0.1+0.35*0.65"
								},
								1
							},
							
							{
								
								{
									0.23,
									"0.1+0.35*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									0.245,
									"0.1+0.45*0.65"
								},
								1
							},
							
							{
								
								{
									0.23,
									"0.1+0.45*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									0.2455,
									"0.1+0.55*0.65"
								},
								1
							},
							
							{
								
								{
									0.23,
									"0.1+0.55*0.65"
								},
								1
							},
							{},
							
							{
								"AGLMove",
								
								{
									"1-0.27",
									"0.1+0.01"
								},
								1
							},
							
							{
								"AGLMove",
								
								{
									"1-0.255",
									"0.1+0.0"
								},
								1
							},
							
							{
								"AGLMove",
								
								{
									"1-0.27",
									"0.1-0.01"
								},
								1
							},
							
							{
								"AGLMove",
								
								{
									"1-0.27",
									"0.1+0.01"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.25",
									"0.1+0.15*0.65"
								},
								1
							},
							
							{
								
								{
									"1-0.25",
									"0.1+0.65*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.25",
									"0.1+0.15*0.65"
								},
								1
							},
							
							{
								
								{
									"1-0.23",
									"0.1+0.15*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245-0.03",
									"0.1+0.65*0.65"
								},
								1
							},
							
							{
								
								{
									"1-0.23+0.005",
									"0.1+0.65*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245",
									"0.1+0.25*0.65"
								},
								1
							},
							
							{
								
								{
									"1-0.23",
									"0.1+0.25*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245",
									"0.1+0.35*0.65"
								},
								1
							},
							
							{
								
								{
									"1-0.23",
									"0.1+0.35*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245",
									"0.1+0.45*0.65"
								},
								1
							},
							
							{
								
								{
									"1-0.23",
									"0.1+0.45*0.65"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245",
									"0.1+0.55*0.65"
								},
								1
							},
							
							{
								
								{
									"1-0.23",
									"0.1+0.55*0.65"
								},
								1
							},
							{},
							
							{
								"vspeed",
								
								{
									"0.27-0.05",
									"0.55+0.01"
								},
								1
							},
							
							{
								"vspeed",
								
								{
									"0.255-0.05",
									"0.55+0.0"
								},
								1
							},
							
							{
								"vspeed",
								
								{
									"0.27-0.05",
									"0.55-0.01"
								},
								1
							},
							
							{
								"vspeed",
								
								{
									"0.27-0.05",
									"0.55+0.01"
								},
								1
							},
							{},
							
							{
								
								{
									"0.25-0.05",
									"0.55+0.12*0.40"
								},
								1
							},
							
							{
								
								{
									"0.25-0.05",
									"0.55+0.58*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"0.25-0.05",
									"0.55+0.15*0.40"
								},
								1
							},
							
							{
								
								{
									"0.23-0.05",
									"0.55+0.15*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"0.245-0.05",
									"0.55+0.55*0.40"
								},
								1
							},
							
							{
								
								{
									"0.23-0.05",
									"0.55+0.55*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"0.245-0.05",
									"0.55+0.25*0.40"
								},
								1
							},
							
							{
								
								{
									"0.23-0.05",
									"0.55+0.25*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"0.245-0.05",
									"0.55+0.35*0.40"
								},
								1
							},
							
							{
								
								{
									"0.23-0.05",
									"0.55+0.35*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"0.245-0.05",
									"0.55+0.45*0.40"
								},
								1
							},
							
							{
								
								{
									"0.23-0.05",
									"0.55+0.45*0.40"
								},
								1
							},
							{},
							
							{
								"vspeed",
								
								{
									"1-0.27+0.05",
									"0.55+0.01"
								},
								1
							},
							
							{
								"vspeed",
								
								{
									"1-0.255+0.05",
									"0.55+0.0"
								},
								1
							},
							
							{
								"vspeed",
								
								{
									"1-0.27+0.05",
									"0.55-0.01"
								},
								1
							},
							
							{
								"vspeed",
								
								{
									"1-0.27+0.05",
									"0.55+0.01"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.25 +0.05",
									"0.55+0.12*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.25+0.05",
									"0.55+0.78*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.25 +0.05",
									"0.55+0.15*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.22+0.05",
									"0.55+0.15*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245+0.05",
									"0.55+0.75*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.22+0.05",
									"0.55+0.75*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245+0.05",
									"0.55+0.25*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.23+0.05",
									"0.55+0.25*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245+0.05",
									"0.55+0.35*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.23+0.05",
									"0.55+0.35*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245+0.05",
									"0.55+0.45*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.22+0.05",
									"0.55+0.45*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245+0.05",
									"0.55+0.55*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.23+0.05",
									"0.55+0.55*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									"1-0.245+0.05",
									"0.55+0.65*0.40"
								},
								1
							},
							
							{
								
								{
									"1-0.23+0.05",
									"0.55+0.65*0.40"
								},
								1
							},
							{},
							
							{
								
								{
									0.51999998,
									"0.08+0.01+0.05"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.06+0.01+0.05"
								},
								1
							},
							
							{
								
								{
									0.47999999,
									"0.08+0.01+0.05"
								},
								1
							},
							{},
							
							{
								
								{
									0.30000001,
									"0.055+0.01+0.05"
								},
								1
							},
							
							{
								
								{
									0.69999999,
									"0.055+0.01+0.05"
								},
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[]={0.25,0.25};
						clipBR[]={0.75,0.75};
						class Dimmed
						{
							class Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										{-0.2,0},
										1
									},
									
									{
										"HorizonDive",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"HorizonDive",
										{-0.0099999998,0},
										1
									},
									
									{
										"HorizonDive",
										{0.0099999998,0},
										1
									},
									{},
									
									{
										"HorizonDive",
										{0.15000001,0},
										1
									},
									
									{
										"HorizonDive",
										{0.2,0},
										1
									}
								};
							};
							class Level2M5: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*5*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*5*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*5*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*5*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_5
							{
								type="text";
								source="static";
								text=5;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
							};
							class Level2P5: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*5*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*5*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*5*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*5*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
							};
							class Level2M10: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*10*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*10*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*10*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*10*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_10
							{
								type="text";
								source="static";
								text=10;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
							};
							class Level2P10: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*10*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*10*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*10*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*10*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
							};
							class Level2M15: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*15*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*15*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*15*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*15*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_15
							{
								type="text";
								source="static";
								text=15;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
							};
							class Level2P15: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*15*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*15*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*15*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*15*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
							};
							class Level2M20: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*20*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*20*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*20*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*20*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_20
							{
								type="text";
								source="static";
								text=20;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
							};
							class Level2P20: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*20*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*20*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*20*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*20*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
							};
							class Level2M25: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*25*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*25*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*25*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*25*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_25
							{
								type="text";
								source="static";
								text=25;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
							};
							class Level2P25: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*25*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*25*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*25*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*25*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
							};
							class Level2M30: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*30*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*30*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*30*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*30*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_30
							{
								type="text";
								source="static";
								text=30;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
							};
							class Level2P30: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*30*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*30*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*30*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*30*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
							};
							class Level2M35: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*35*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*35*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*35*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*35*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_35
							{
								type="text";
								source="static";
								text=35;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
							};
							class Level2P35: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*35*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*35*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*35*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*35*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
							};
							class Level2M40: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*40*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*40*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*40*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*40*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_40
							{
								type="text";
								source="static";
								text=40;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
							};
							class Level2P40: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*40*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*40*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*40*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*40*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
							};
							class Level2M45: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*45*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*45*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*45*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*45*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_45
							{
								type="text";
								source="static";
								text=45;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
							};
							class Level2P45: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*45*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*45*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*45*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*45*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
							};
							class Level2M50: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"-0.54/10*50*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"-0.54/10*50*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"-0.54/10*50*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"-0.54/10*50*2/3"
										},
										1
									}
								};
							};
							class VALM2_1_50
							{
								type="text";
								source="static";
								text=50;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
							};
							class Level2P50: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.2,
											"+0.54/10*50*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.1,
											"+0.54/10*50*2/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.1,
											"+0.54/10*50*2/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.2,
											"+0.54/10*50*2/3"
										},
										1
									}
								};
							};
							class VALP2_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*50*2/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*50*2/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*50*2/3"
									},
									1
								};
							};
						};
					};
					class Target
					{
						type="line";
						points[]=
						{
							
							{
								"Target",
								{0,0.057541002},
								1
							},
							
							{
								"Target",
								{0.032499999,0.050060701},
								1
							},
							
							{
								"Target",
								
								{
									0.05655,
									"+0.50*0.065/(0.61/0.54)"
								},
								1
							},
							
							{
								"Target",
								{0.064999998,0},
								1
							},
							
							{
								"Target",
								{0.05655,-0.028770501},
								1
							},
							
							{
								"Target",
								
								{
									0.032499999,
									"-0.87*0.065/(0.61/0.54)"
								},
								1
							},
							
							{
								"Target",
								{0,-0.057541002},
								1
							},
							
							{
								"Target",
								{-0.032499999,-0.050060701},
								1
							},
							
							{
								"Target",
								
								{
									-0.05655,
									"-0.50*0.065/(0.61/0.54)"
								},
								1
							},
							
							{
								"Target",
								{-0.064999998,0},
								1
							},
							
							{
								"Target",
								{-0.05655,0.028770501},
								1
							},
							
							{
								"Target",
								
								{
									-0.032499999,
									"+0.87*0.065/(0.61/0.54)"
								},
								1
							},
							
							{
								"Target",
								{0,0.057541002},
								1
							}
						};
					};
					class SpeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							
							{
								"0.06+0.1",
								0.07
							},
							1
						};
						right[]=
						{
							
							{
								"0.14+0.1",
								0.07
							},
							1
						};
						down[]=
						{
							
							{
								"0.06+0.1",
								0.12
							},
							1
						};
						format="+%3.0fp";
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeAGL";
						sourceScale=1;
						pos[]=
						{
							
							{
								"0.86-0.1",
								0.07
							},
							1
						};
						right[]=
						{
							
							{
								"0.94-0.1",
								0.07
							},
							1
						};
						down[]=
						{
							
							{
								"0.86-0.1",
								0.12
							},
							1
						};
						format="%3.0f";
					};
					class VspeedNumber: SpeedNumber
					{
						source="vspeed";
						sourceScale=1;
						align="left";
						pos[]=
						{
							
							{
								"0.86-0.05",
								"0.52+0.03"
							},
							1
						};
						right[]=
						{
							
							{
								"0.94-0.05",
								"0.52+0.03"
							},
							1
						};
						down[]=
						{
							
							{
								"0.86-0.05",
								"0.57+0.03"
							},
							1
						};
					};
					class VspeedNumberStaticP30
					{
						type="text";
						source="static";
						text="+30";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.9-0.05",
								"0.54+0.15*0.4"
							},
							1
						};
						right[]=
						{
							
							{
								"0.95-0.05",
								"0.54+0.15*0.4"
							},
							1
						};
						down[]=
						{
							
							{
								"0.9-0.05",
								"0.54+0.15*0.4+0.05*5/8"
							},
							1
						};
					};
					class VspeedNumberStaticM30: VspeedNumberStaticP30
					{
						text="-30";
						pos[]=
						{
							
							{
								"0.9-0.05",
								"0.54+0.75*0.4"
							},
							1
						};
						right[]=
						{
							
							{
								"0.95-0.05",
								"0.54+0.75*0.4"
							},
							1
						};
						down[]=
						{
							
							{
								"0.9-0.05",
								"0.54+0.75*0.4+0.05*5/8"
							},
							1
						};
					};
					class VspeedNumberStaticZERO: VspeedNumberStaticP30
					{
						text=" 0";
						pos[]=
						{
							
							{
								"0.9-0.05",
								"0.54+0.45*0.4"
							},
							1
						};
						right[]=
						{
							
							{
								"0.95-0.05",
								"0.54+0.45*0.4"
							},
							1
						};
						down[]=
						{
							
							{
								"0.9-0.05",
								"0.54+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class AltStatic50: VspeedNumberStaticP30
					{
						text="50";
						pos[]=
						{
							
							{
								"0.9-0.11",
								"0.08+0.15*0.65"
							},
							1
						};
						right[]=
						{
							
							{
								"0.95-0.11",
								"0.08+0.15*0.65"
							},
							1
						};
						down[]=
						{
							
							{
								"0.9-0.11",
								"0.08+0.15*0.65+0.05*5/8"
							},
							1
						};
					};
					class SpeedStatic500: VspeedNumberStaticP30
					{
						text="500";
						align="left";
						pos[]=
						{
							
							{
								"0.1+0.1",
								"0.08+0.15*0.65"
							},
							1
						};
						right[]=
						{
							
							{
								"0.15+0.1",
								"0.08+0.15*0.65"
							},
							1
						};
						down[]=
						{
							
							{
								"0.1+0.1",
								"0.08+0.15*0.65+0.05*5/8"
							},
							1
						};
					};
					class SpeedStaticZERO: SpeedStatic500
					{
						text="0";
						pos[]=
						{
							
							{
								"0.1+0.1",
								"0.08+0.65*0.65"
							},
							1
						};
						right[]=
						{
							
							{
								"0.15+0.1",
								"0.08+0.65*0.65"
							},
							1
						};
						down[]=
						{
							
							{
								"0.1+0.1",
								"0.08+0.65*0.65+0.05*5/8"
							},
							1
						};
					};
					class NevimStaticZERO: SpeedStatic500
					{
						text="0";
						pos[]=
						{
							
							{
								"0.1+0.07",
								"0.54+0.45*0.4"
							},
							1
						};
						right[]=
						{
							
							{
								"0.15+0.07",
								"0.54+0.45*0.4"
							},
							1
						};
						down[]=
						{
							
							{
								"0.1+0.07",
								"0.54+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class NevimStatic1: NevimStaticZERO
					{
						text="1";
						pos[]=
						{
							
							{
								"0.1+0.07",
								"0.58+0.45*0.4"
							},
							1
						};
						right[]=
						{
							
							{
								"0.15+0.07",
								"0.58+0.45*0.4"
							},
							1
						};
						down[]=
						{
							
							{
								"0.1+0.07",
								"0.58+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class NevimStatic3: NevimStaticZERO
					{
						text="3";
						pos[]=
						{
							
							{
								"0.1+0.07",
								"0.42+0.45*0.4"
							},
							1
						};
						right[]=
						{
							
							{
								"0.15+0.07",
								"0.42+0.45*0.4"
							},
							1
						};
						down[]=
						{
							
							{
								"0.1+0.07",
								"0.42+0.45*0.4+0.05*5/8"
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
							"0.32-0.01",
							"0.0+0.05"
						};
						right[]=
						{
							"0.38-0.01",
							"0.0+0.05"
						};
						down[]=
						{
							"0.32-0.01",
							"0.04+0.05"
						};
						lineXleft="0.06+0.05";
						lineYright="0.05+0.05";
						lineXleftMajor="0.06+0.05";
						lineYrightMajor="0.04+0.05";
						bottom=0.69999999;
						center=0.5;
						top=0.30000001;
						step="18/9";
						StepSize="(0.70- 0.3)/15";
						horizontal=1;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
				};
			};
		};
	};
	class JAS_CUP_SUPERHINDIII_Base: JAS_CUP_MI35_TOH_Base
	{
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		accuracy=1000;
		displayName="Mi-24 Superhind Mk.III";
		class EventHandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		weapons[]=
		{
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"CUP_750Rnd_TE1_Green_Tracer_GI2_20mm_AP_M",
					"LaserBatteries"
				};
			};
		};
	};
	class JAS_CUP_I_Mi24_Mk3_ION: JAS_CUP_SUPERHINDIII_Base
	{
		scope=2;
		curatorScope=2;
		side=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		accuracy=1000;
		crew="CUP_I_PMC_Pilot";
		typicalCargo[]=
		{
			"CUP_I_PMC_Pilot"
		};
		faction="CUP_I_PMC_ION";
		displayName="Mi-24 Superhind Mk.III";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\Super3.jpg";
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ION_001_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ION_002_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ION_003_co.paa"
		};
		animationList[]=
		{
			"hideAirfilter",
			1,
			"hideExhaustcooler",
			1,
			"hideAtaka",
			0
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class JAS_CUP_I_Mi24_Mk4_ION: JAS_CUP_I_Mi24_Mk3_ION
	{
		scope=2;
		curatorScope=2;
		side=2;
		author="Community Upgrade Project";
		dlc="CUP_Vehicles";
		displayName="Mi-24 Superhind Mk.IV";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\Super4.jpg";
		animationList[]=
		{
			"hideAirfilter",
			0,
			"hideExhaustcooler",
			0,
			"hideAtaka",
			0
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class JAS_CUP_I_Mi24_Mk3_AAC: JAS_CUP_SUPERHINDIII_Base
	{
		scope=2;
		curatorScope=2;
		side=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		accuracy=1000;
		crew="CUP_I_PMC_Pilot";
		typicalCargo[]=
		{
			"CUP_I_PMC_Pilot"
		};
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_ZEUS";
		displayName="Mi-24 Superhind Mk.III";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\Super3.jpg";
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ION_001_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ION_002_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi35\Data\skins\27_ION_003_co.paa"
		};
		animationList[]=
		{
			"hideAirfilter",
			1,
			"hideExhaustcooler",
			1,
			"hideAtaka",
			0
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class JAS_CUP_I_Mi24_Mk4_AAC: JAS_CUP_I_Mi24_Mk3_ION
	{
		scope=2;
		curatorScope=2;
		side=2;
		author="Community Upgrade Project";
		dlc="CUP_Vehicles";
		displayName="Mi-24 Superhind Mk.IV";
		editorPreview="\ARMA3_CUP_Enhancement_MI24\UI\editorpreview\Super4.jpg";
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_ZEUS";
		animationList[]=
		{
			"hideAirfilter",
			0,
			"hideExhaustcooler",
			0,
			"hideAtaka",
			0
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class JAS_CUP_Mi24Wreck: HelicopterWreck
	{
		model="\cup\airvehicles\cup_airvehicles_mi24\cup_Mi24Wreck.p3d";
		scope=1;
		author="CUP/-{GOL}-Jason";
		class Armory
		{
			disabled=1;
		};
		class Eventhandlers
		{
		};
	};
	class JAS_MI24D_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Mi-24D Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_MI24D_Loadout";
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
					class hp1_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp1_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp1_phalanga
					{
						name="9M17 Phalanga";
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
					class hp2_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp2_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp2_phalanga
					{
						name="9M17 Phalanga";
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
					class hp3_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp3_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp3_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp3_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp3_KAB
					{
						name="KAB-250";
						value=5;
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
					class hp4_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp4_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp4_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp4_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp4_KAB
					{
						name="KAB-250";
						value=5;
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
					class hp5_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp5_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp5_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp5_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp5_KAB
					{
						name="KAB-250";
						value=5;
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
					class hp6_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp6_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp6_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp6_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp6_KAB
					{
						name="KAB-250";
						value=5;
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
					class CDF
					{
						name="Chernarussian Defence Force";
						value=0;
						default=1;
					};
					class TKA
					{
						name="Takistani Army";
						value=1;
					};
					class UN
					{
						name="United Nations";
						value=2;
					};
					class AAF
					{
						name="Altis Armed Forces";
						value=3;
					};
					class ION
					{
						name="ION Private Military Contractors";
						value=4;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="MI24D Loadout Module";
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
	class JAS_MI24P_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Mi-24P Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_MI24P_Loadout";
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
					class hp1_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp1_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp1_shturm
					{
						name="9K114 Shturm";
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
					class hp2_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp2_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp2_shturm
					{
						name="9K114 Shturm";
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
					class hp3_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp3_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp3_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp3_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp3_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp3_shturm
					{
						name="9K114 Shturm";
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
					class hp4_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp4_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp4_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp4_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp4_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp4_shturm
					{
						name="9K114 Shturm";
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
					class hp5_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp5_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp5_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp5_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp5_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp5_shturm
					{
						name="9K114 Shturm";
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
					class hp6_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp6_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp6_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp6_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp6_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp6_shturm
					{
						name="9K114 Shturm";
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
					class RUS
					{
						name="Russian Federation";
						value=0;
						default=1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="MI24P Loadout Module";
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
	class JAS_MI24V_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Mi-24V Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_MI24V_Loadout";
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
					class hp1_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp1_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp1_shturm
					{
						name="9K114 Shturm";
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
					class hp2_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp2_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp2_shturm
					{
						name="9K114 Shturm";
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
					class hp3_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp3_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp3_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp3_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp3_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp3_shturm
					{
						name="9K114 Shturm";
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
					class hp4_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp4_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp4_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp4_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp4_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp4_shturm
					{
						name="9K114 Shturm";
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
					class hp5_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp5_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp5_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp5_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp5_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp5_shturm
					{
						name="9K114 Shturm";
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
					class hp6_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp6_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp6_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp6_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp6_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp6_shturm
					{
						name="9K114 Shturm";
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
					class RUS
					{
						name="Russian Federation";
						value=0;
						default=1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="MI24V Loadout Module";
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
	class JAS_MI35_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Mi-35 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_MI35_Loadout";
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
					class hp1_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp1_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp1_shturm
					{
						name="9K114 Shturm";
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
					class hp2_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp2_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp2_shturm
					{
						name="9K114 Shturm";
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
					class hp3_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp3_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp3_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp3_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp3_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp3_shturm
					{
						name="9K114 Shturm";
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
					class hp4_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp4_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp4_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp4_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp4_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp4_shturm
					{
						name="9K114 Shturm";
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
					class hp5_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp5_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp5_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp5_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp5_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp5_shturm
					{
						name="9K114 Shturm";
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
					class hp6_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp6_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp6_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp6_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp6_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp6_shturm
					{
						name="9K114 Shturm";
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
					class ACR
					{
						name="ACR Basic";
						value=0;
						default=1;
					};
					class DES
					{
						name="ACR Desert";
						value=1;
					};
					class RAM
					{
						name="ACR Ram";
						value=2;
					};
					class TIGER
					{
						name="ACR Tiger";
						value=3;
					};
					class DARK
					{
						name="ACR Dark";
						value=4;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="MI35 Loadout Module";
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
	class JAS_MI24III_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Mi-24III Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_MI24III_Loadout";
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
					class hp1_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp1_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp1_shturm
					{
						name="9K114 Shturm";
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
					class hp2_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp2_igla
					{
						name="IGLA Pod";
						value=2;
					};
					class hp2_shturm
					{
						name="9K114 Shturm";
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
					class hp3_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp3_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp3_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp3_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp3_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp3_shturm
					{
						name="9K114 Shturm";
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
					class hp4_gsh23
					{
						name="GSh-23 Gun Pod";
						value=1;
					};
					class hp4_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp4_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp4_FAB
					{
						name="FAB-250";
						value=4;
					};
					class hp4_KAB
					{
						name="KAB-250";
						value=5;
					};
					class hp4_shturm
					{
						name="9K114 Shturm";
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
					class hp5_at9
					{
						name="AT-9 Pod";
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
					class hp6_at9
					{
						name="AT-9 Pod";
						value=1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="MI24III Loadout Module";
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
