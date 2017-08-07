class CfgPatches
{
	class ARMA3_CUP_Enhancement_MI8
	{
		units[]=
		{
			"JAS_CUP_O_Mi8_CHDKZ",
			"JAS_CUP_O_Mi8_AAC",
			"JAS_CUP_B_Mi17_CDF",
			"JAS_CUP_I_Mi17_UN",
			"JAS_CUP_I_Mi17_UN_AAC",
			"JAS_CUP_O_Mi17_TK",
			"JAS_CUP_O_Mi17_AAC",
			"JAS_CUP_B_Mi171Sh_ACR",
			"JAS_CUP_O_Mi8_SLA_2",
			"JAS_CUP_O_Mi8_RU",
			"JAS_CUP_B_Mi17_AAC",
			"JAS_MI8_Loadout_Module",
			"JAS_MI17_Loadout_Module"
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
		class ARMA3_CUP_Enhancement_MI8
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_MI8"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_MI8_Init_Function
		{
			class MI8_Loadout
			{
				file="\ARMA3_CUP_Enhancement_MI8\sqs\modules\mi8_loadout_module.sqf";
			};
			class MI8_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_MI8\sqs\modules\mi8_loadout_module_set.sqf";
			};
		};
		class MI17_Init_Function
		{
			class MI17_Loadout
			{
				file="\ARMA3_CUP_Enhancement_MI8\sqs\modules\mi17_loadout_module.sqf";
			};
			class MI17_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_MI8\sqs\modules\mi17_loadout_module_set.sqf";
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
class MI8_GUI
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
		class MI8_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_MI8\ui\Mi8_background.paa";
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
		class MI8_refuel_Button : RscPicture
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
		class MI8_repair_Button : RscPicture
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
		class MI8_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi8_Loadout.sqf""";
		};
		class MI8_Cancel_Button : RscPicture
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
		class MI8_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi8_SaveCustom.sqf""";
		};
		class MI8_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi8_SaveCustom.sqf""";
		};
		class MI8_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi8_SaveCustom.sqf""";
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
class MI17_GUI
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
		class MI17_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_MI8\ui\Mi8_background.paa";
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
		class MI17_refuel_Button : RscPicture
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
		class MI17_repair_Button : RscPicture
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
		class MI17_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi17_Loadout.sqf""";
		};
		class MI17_Cancel_Button : RscPicture
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
		class MI17_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi17_SaveCustom.sqf""";
		};
		class MI17_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi17_SaveCustom.sqf""";
		};
		class MI17_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi17_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_MI8\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_MI8\data\ico\ico.paa";
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
	class JAS_CUP_Mi8_base: Helicopter_Base_H
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
		scope=0;
		displayName="Mi-8";
		destrType="DestructWreck";
		vehicleClass="Air";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MI8\rotorLib\RTD_Hip.xml";
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
		model="\CUP\AirVehicles\CUP_AirVehicles_Mi8\model\CUP_Mi_8MT";
		picture="\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\ui\mi17_hip_mg_CA.paa";
		Icon="\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\ui\icomap_mi17_mg_CA.paa";
		author="CUP/-{GOL}-Jason";
		mapSize=25;
		accuracy=0.5;
		cost=3000000;
		armor=50;
		damageResistance=0.0017199999;
		backRotorSpeed=-3;
		transportMaxBackpacks=18;
		driveOnComponent[]=
		{
			"damper_front",
			"damper_left",
			"damper_right"
		};
		selectionhrotormove="velka vrtule blur";
		selectionhrotorstill="velka vrtule staticka";
		selectionvrotormove="mala vrtule blur";
		selectionvrotorstill="mala vrtule staticka";
		slingLoadMaxCargoMass=3000;
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
				armor=0.15000001;
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
			class HitGlass5
			{
				armor=2;
				material=-1;
				name="glass5";
				visual="glass5";
				passThrough=0;
			};
			class HitGlass6
			{
				armor=2;
				material=-1;
				name="glass6";
				visual="glass6";
				passThrough=0;
			};
		};
		insideSoundCoef=0.2;
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
			"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_start_int",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_start_ext",
			1.9952624,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_stop_int",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_stop_ext",
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
					"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_engine_ext_2",
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
					"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_rotor_ext_1",
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
					"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_engine_int_1",
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
					"cup\airvehicles\cup_airvehicles_uh60\sound\uh1h_rotor_int_1",
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
		maxSpeed=240;
		liftForceCoef=1;
		bodyFrictionCoef=1;
		cyclicAsideForceCoef=1.3;
		cyclicForwardForceCoef=0.5;
		backRotorForceCoef=0.5;
		driverAction="CUP_Mi8_Pilot";
		cargoIsCoDriver[]={0};
		cargoAction[]=
		{
			"CUP_Mi17_Cargo02"
		};
		cargoCompartments[]=
		{
			"Compartment2"
		};
		driverLeftHandAnimName="stick_pilot";
		driverRightHandAnimName="stick_pilot";
		enableSweep=0;
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		hideWeaponsCargo=1;
		transportSoldier=14;
		transportAmmo=0;
		supplyRadius=2.5;
		getInRadius=2;
		type=2;
		threat[]={0.60000002,0.1,0.40000001};
		enableManualFire=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				minElev=-80;
				maxElev=25;
				initElev=-80;
				minTurn=30;
				maxTurn=150;
				initTurn=90;
				soundServo[]=
				{
					"db-40",
					1
				};
				stabilizedInAxes=0;
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				weapons[]=
				{
					"CUP_Vhmg_PKT_veh_Noeject"
				};
				magazines[]=
				{
					"CUP_100Rnd_TE1_Green_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Green_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Green_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Green_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Green_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Green_Tracer_762x54_PKT_M"
				};
				gunnerName="Crew Chief";
				gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
				gunnerAction="CUP_Mi8_Gunner";
				gunnerInAction="CUP_Mi8_Gunner";
				gunnerCompartments="Compartment2";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				memoryPointGun="muzzle_1";
				memoryPointGunnerOptics="gunnerview";
				iscopilot=0;
			};
			class BackTurret: MainTurret
			{
				proxyIndex=2;
				body="Turret_2";
				gun="Gun_2";
				gunnerName="Rear Gunner";
				weapons[]=
				{
					"CUP_Vhmg_PKT_veh2"
				};
				stabilizedInAxes=0;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				minElev=-80;
				maxElev=25;
				initElev=-80;
				minTurn=-185;
				maxTurn=-45;
				initTurn=-155;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				gunnerAction="CUP_Mi8_Gunner";
				gunnerInAction="CUP_Mi8_Gunner";
				gunnerCompartments="Compartment2";
				memoryPointGun="muzzle_2";
				memoryPointGunnerOptics="gunnerview2";
				selectionFireAnim="zasleh2";
				primaryGunner=0;
				commanding=-2;
				iscopilot=0;
			};
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="CUP_Mi8_Pilot";
				gunnerInAction="CUP_Mi8_Pilot";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				memoryPointsGetInCargo="pos codriver";
				memoryPointsGetInCargoDir="pos codriver dir";
				canEject=0;
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				gunnerLeftHandAnimName="stick_copilot";
				gunnerRightHandAnimName="stick_copilot";
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				proxyType="CPGunner";
				proxyIndex=3;
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
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
				position="L svetlo";
				direction="konec L svetla";
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
			class Right: Left
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		dammageHalf[]={};
		dammageFull[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_amt.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_amt_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_amt_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_glass_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_inter.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_inter_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_inter_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi171_interier.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi171_interier_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi171_interier_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_PK\data\pkm.rvmat",
				"CUP\Weapons\CUP_Weapons_PK\data\pkm.rvmat",
				"CUP\Weapons\CUP_Weapons_PK\data\pkm_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_mtv.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_mtv_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_mtv_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi171_body.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi171_body_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi171_body_destruct.rvmat",
				"A3\data_f\default.rvmat",
				"A3\data_f\default.rvmat",
				"A3\data_f\default_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh_Noeject";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_PKT_veh_Noeject";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vhmg_PKT_veh_Noeject";
			};
			class ReloadAnim_2
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh2";
			};
			class ReloadMagazine_2
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_PKT_veh2";
			};
			class Revolving_2
			{
				source="revolving";
				weapon="CUP_Vhmg_PKT_veh2";
			};
			class muzzle_hide_pkt
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh_Noeject";
			};
			class muzzle_rot_pkt
			{
				source="ammorandom";
				weapon="CUP_Vhmg_PKT_veh_Noeject";
			};
			class muzzle2_hide_pkt
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh2";
			};
			class muzzle2_rot_pkt
			{
				source="ammorandom";
				weapon="CUP_Vhmg_PKT_veh2";
			};
		};
		class Library
		{
			libTextDesc="$STR_LIB_MI17";
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
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,7.5,-2.355};
		LESH_WheelOffset[]={0,0};
	};
	class JAS_CUP_Mi171Sh_Base: JAS_CUP_Mi8_base
	{
		scope=0;
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F",
			"B_Helicrew_F",
			"B_Helicrew_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_ACR_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_ACR_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals2_ACR_CA.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		model="\CUP\AirVehicles\CUP_AirVehicles_Mi8\model\CUP_Mi_171";
		picture="\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\ui\mi17_HIP_CA.paa";
		Icon="\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\ui\icomap_mi17_CA.paa";
		mapSize=25;
		accuracy=1000;
		hideWeaponsCargo=1;
		transportSoldier=13;
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		LockDetectionSystem=0;
		IncommingMisslieDetectionSystem=16;
		gunnerUsesPilotView=1;
		threat[]={1,0.60000002,0.30000001};
		enableSweep=1;
		class Turrets: Turrets
		{
			class LeftTurret: MainTurret
			{
				proxyIndex=2;
				commanding=-1;
				primaryGunner=0;
				gunnerName="Door Gunner";
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=20;
				maxTurn=155;
				initTurn=80;
				iscopilot=0;
			};
			class BackTurret: BackTurret
			{
				gunnerName="Rear Gunner";
				primaryGunner=1;
				commanding=-3;
				proxyIndex=3;
				gunnerAction="CUP_Mi171_Gunner_EP1";
				gunnerInAction="CUP_Mi171_Gunner_EP1";
				minTurn=130;
				maxTurn=230;
				initTurn=180;
				minElev=-50;
				maxElev=10;
				initElev=0;
				iscopilot=0;
			};
			class RightTurret: MainTurret
			{
				proxyIndex=1;
				gunnerName="Crew Chief";
				body="Turret_3";
				gun="Gun_3";
				animationSourceBody="Turret_3";
				animationSourceGun="Gun_3";
				minElev=-60;
				maxElev=30;
				initElev=11;
				minTurn=-155;
				maxTurn=-30;
				initTurn=-70;
				weapons[]=
				{
					"CUP_Vhmg_PKT_veh3"
				};
				stabilizedInAxes=0;
				gunBeg="muzzle_3";
				gunEnd="chamber_3";
				gunnerAction="CUP_Mi8_Gunner";
				gunnerInAction="CUP_Mi8_Gunner";
				memoryPointGun="muzzle_3";
				memoryPointGunnerOptics="gunnerview3";
				selectionFireAnim="zasleh3";
				primaryGunner=0;
				commanding=-1;
				iscopilot=0;
			};
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="CUP_Mi8_Pilot";
				gunnerInAction="CUP_Mi8_Pilot";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				memoryPointsGetInCargo="pos codriver";
				memoryPointsGetInCargoDir="pos codriver dir";
				canEject=0;
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				proxyType="CPGunner";
				proxyIndex=4;
			};
		};
		class AnimationSources: AnimationSources
		{
			class HUDaction
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class HUDaction_Hide: HUDaction
			{
			};
			class ReloadAnim_3
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class ReloadMagazine_3
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class Revolving_3
			{
				source="revolving";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class HIDE_weapon_holders
			{
				source="user";
				animPeriod=1e-007;
				initPhase=0;
			};
			class HIDE_front_armor: HIDE_weapon_holders
			{
				initPhase=0;
			};
			class HIDE_exhaust: HIDE_weapon_holders
			{
				initPhase=0;
			};
			class muzzle3_hide_pkt
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class muzzle3_rot_pkt
			{
				source="ammorandom";
				weapon="CUP_Vhmg_PKT_veh3";
			};
		};
		class UserActions
		{
			class HUDoff
			{
				displayName="HUD On";
				displayNameDefault="HUD On";
				position="zamerny";
				radius=1;
				onlyForPlayer=1;
				condition="(player==driver this)and(this animationphase ""HUDAction"" !=0)";
				statement="this animate [""HUDAction"",0];this animate [""HUDaction_Hide"",0]";
			};
			class HUDon
			{
				displayName="HUD Off";
				displayNameDefault="HUD Off";
				position="zamerny";
				radius=1;
				onlyForPlayer=1;
				condition="(player==driver this)and(this animationphase ""HUDAction"" !=1)";
				statement="this animate [""HUDAction"",1];this animate [""HUDaction_Hide"",1]";
			};
			class MI17_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi17_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		ace_cargo_hasCargo=1;
		ace_cargo_space=12;
	};
	class JAS_CUP_Mi8_MTV3_base: JAS_CUP_Mi8_base
	{
		scope=0;
		displayName="Mi-8J";
		vehicleClass="Air";
		author="CUP/-{GOL}-Jason";
		side=0;
		faction="OPF_F";
		crew="O_Helipilot_F";
		typicalCargo[]=
		{
			"O_Helipilot_F",
			"O_Helipilot_F",
			"O_Helicrew_F",
			"O_Helicrew_F"
		};
		model="CUP\AirVehicles\CUP_AirVehicles_Mi8\model\CUP_Mi_8MTV_3";
		picture="\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\ui\mi17_HIP_CA.paa";
		Icon="\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\ui\icomap_mi17_CA.paa";
		mapSize=25;
		accuracy=1000;
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		gunnerUsesPilotView=1;
		threat[]={0.80000001,0.80000001,0.60000002};
		enableSweep=1;
		hideWeaponsCargo=1;
		transportSoldier=13;
		class Turrets: Turrets
		{
			class SideTurret: MainTurret
			{
				proxyIndex=2;
				commanding=-1;
				primaryGunner=0;
				gunnerName="Left Door Gunner";
				iscopilot=0;
			};
			class BackTurret: BackTurret
			{
				gunnerName="Rear Door Gunner";
				primaryGunner=0;
				commanding=-3;
				proxyIndex=3;
				iscopilot=0;
			};
			class FrontTurret: MainTurret
			{
				proxyIndex=1;
				gunnerName="Crew Chief";
				body="Turret_3";
				gun="Gun_3";
				animationSourceBody="Turret_3";
				animationSourceGun="Gun_3";
				minElev=-80;
				maxElev=25;
				initElev=-10;
				minTurn=-44;
				maxTurn=44;
				initTurn=0;
				weapons[]=
				{
					"CUP_Vhmg_PKT_veh3"
				};
				stabilizedInAxes=0;
				gunBeg="muzzle_3";
				gunEnd="chamber_3";
				gunnerAction="CUP_Mi8_Gunner";
				gunnerInAction="CUP_Mi8_Gunner";
				memoryPointGun="muzzle_3";
				memoryPointGunnerOptics="gunnerview3";
				selectionFireAnim="zasleh3";
				primaryGunner=1;
				commanding=-1;
				iscopilot=0;
			};
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="CUP_Mi8_Pilot";
				gunnerInAction="CUP_Mi8_Pilot";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				memoryPointsGetInCargo="pos codriver";
				memoryPointsGetInCargoDir="pos codriver dir";
				canEject=0;
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				proxyType="CPGunner";
				proxyIndex=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_vsr_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		class AnimationSources: AnimationSources
		{
			class HUDaction
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class HUDaction_Hide: HUDaction
			{
			};
			class ReloadAnim_3
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class ReloadMagazine_3
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class Revolving_3
			{
				source="revolving";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class muzzle3_hide_pkt
			{
				source="reload";
				weapon="CUP_Vhmg_PKT_veh3";
			};
			class muzzle3_rot_pkt
			{
				source="ammorandom";
				weapon="CUP_Vhmg_PKT_veh3";
			};
		};
		class UserActions
		{
			class HUDoff
			{
				displayName="HUD On";
				displayNameDefault="HUD on";
				position="zamerny";
				radius=1;
				onlyForPlayer=1;
				condition="(player==driver this)and(this animationphase ""HUDAction"" !=0)";
				statement="this animate [""HUDAction"",0];this animate [""HUDaction_Hide"",0]";
			};
			class HUDon
			{
				displayName="HUD off";
				displayNameDefault="HUD off";
				position="zamerny";
				radius=1;
				onlyForPlayer=1;
				condition="(player==driver this)and(this animationphase ""HUDAction"" !=1)";
				statement="this animate [""HUDAction"",1];this animate [""HUDaction_Hide"",1]";
			};
			class MI8_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_MI8\sqs\loadout\Mi8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
	};
	class JAS_CUP_O_Mi8_CHDKZ: JAS_CUP_Mi8_MTV3_base
	{
		scope=2;
		displayName="Mi-8J";
		author="CUP/-{GOL}-Jason";
		side=0;
		faction="CUP_O_ChDKZ";
		accuracy=1000;
		crew="CUP_O_INS_Pilot";
		fir_MI8_custom_skin=1;
		fir_MI8_custom_name="Mi-8 Chedaki";
		fir_MI8_custom_code="JAS_CUP_O_Mi8_CHDKZ";
		fir_MI8_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\MI8_CHDKZ.paa";
		typicalCargo[]=
		{
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_body_g_CHDKZ_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi8_CHDKZ.jpg";
	};
	class JAS_CUP_O_Mi8_AAC: JAS_CUP_Mi8_MTV3_base
	{
		scope=2;
		displayName="Mi-8J";
		author="CUP/-{GOL}-Jason";
		side=0;
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		accuracy=1000;
		crew="CUP_O_INS_Pilot";
		fir_MI8_custom_skin=0;
		fir_MI8_custom_name="Mi-8 CHDKZ";
		fir_MI8_custom_code="JAS_CUP_O_Mi8_CHDKZ";
		fir_MI8_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\USGreyShark.paa";
		typicalCargo[]=
		{
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot",
			"CUP_O_INS_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_body_g_CHDKZ_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi8_AAC.jpg";
	};
	class JAS_CUP_B_Mi17_CDF: JAS_CUP_Mi171Sh_Base
	{
		scope=2;
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		side=1;
		faction="CUP_B_CDF";
		accuracy=1000;
		crew="CUP_B_CDF_Pilot";
		fir_MI17_custom_skin=1;
		fir_MI17_custom_name="Mi-17 Chernarussian Defence Force";
		fir_MI17_custom_code="JAS_CUP_B_Mi17_CDF";
		fir_MI17_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\MI17_CDF.paa";
		typicalCargo[]=
		{
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_CDF_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi17_AAC.jpg";
	};
	class JAS_CUP_I_Mi17_UN: JAS_CUP_Mi171Sh_Base
	{
		scope=2;
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		faction="CUP_I_UN";
		side=2;
		crew="CUP_I_UN_CDF_Pilot";
		fir_MI17_custom_skin=1;
		fir_MI17_custom_name="Mi-17 United Nations";
		fir_MI17_custom_code="JAS_CUP_I_Mi17_UN";
		fir_MI17_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\MI17_UN.paa";
		typicalCargo[]=
		{
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_UN_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_UN_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals2_UN_CA.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals_UN_CA.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi17_UN.jpg";
	};
	class JAS_CUP_I_Mi17_UN_AAC: JAS_CUP_Mi171Sh_Base
	{
		scope=2;
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
		side=2;
		crew="CUP_I_UN_CDF_Pilot";
		fir_MI17_custom_skin=0;
		fir_MI17_custom_name="Mi-17 United Nations";
		fir_MI17_custom_code="JAS_CUP_I_Mi17_UN";
		fir_MI17_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\USGreyShark.paa";
		typicalCargo[]=
		{
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot",
			"CUP_I_UN_CDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_UN_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_UN_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals2_UN_CA.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals_UN_CA.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi17_UN.jpg";
	};
	class JAS_CUP_O_Mi17_TK: JAS_CUP_Mi171Sh_Base
	{
		scope=2;
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		faction="CUP_O_TK";
		side=0;
		crew="CUP_O_TK_Pilot";
		fir_MI17_custom_skin=1;
		fir_MI17_custom_name="Mi-17 Takistani Army";
		fir_MI17_custom_code="JAS_CUP_O_Mi17_TK";
		fir_MI17_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\MI17_TKA.paa";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_IND_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa",
			"\a3\data_f\clear_empty.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_decals_CA.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi17_TK.jpg";
	};
	class JAS_CUP_O_Mi17_AAC: JAS_CUP_Mi171Sh_Base
	{
		scope=2;
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		fir_MI17_custom_skin=0;
		fir_MI17_custom_name="Mi-17 Takistani Army";
		fir_MI17_custom_code="JAS_CUP_O_Mi17_TK";
		fir_MI17_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\USGreyShark.paa";
		side=0;
		crew="CUP_O_TK_Pilot";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot",
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_IND_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa",
			"\a3\data_f\clear_empty.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_decals_CA.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi17_AAC.jpg";
	};
	class JAS_CUP_B_Mi171Sh_ACR: JAS_CUP_Mi171Sh_Base
	{
		scope=2;
		side=1;
		accuracy=1000;
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		faction="CUP_B_CZ";
		crew="CUP_B_CZ_Pilot";
		fir_MI17_custom_skin=1;
		fir_MI17_custom_name="Mi-17 Army of the Czech Republic";
		fir_MI17_custom_code="JAS_CUP_B_Mi171Sh_ACR";
		fir_MI17_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\MI17_ACR.paa";
		typicalCargo[]=
		{
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot",
			"CUP_B_CZ_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_ACR_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_ACR_CO.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals2_ACR_CA.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi17_ACR.jpg";
	};
	class JAS_CUP_O_Mi8_SLA_2: JAS_CUP_Mi8_MTV3_base
	{
		scope=2;
		side=0;
		accuracy=1000;
		displayName="Mi-8J";
		author="CUP/-{GOL}-Jason";
		faction="CUP_O_SLA";
		crew="CUP_O_SLA_Pilot";
		fir_MI8_custom_skin=1;
		fir_MI8_custom_name="Mi-8 Sahrani Liberation Army";
		fir_MI8_custom_code="JAS_CUP_O_Mi8_SLA_2";
		fir_MI8_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\MI8_SLA.paa";
		typicalCargo[]=
		{
			"CUP_O_SLA_Pilot",
			"CUP_O_SLA_Pilot",
			"CUP_O_SLA_Pilot",
			"CUP_O_SLA_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla2_1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi8_SLA.jpg";
	};
	class JAS_CUP_O_Mi8_RU: JAS_CUP_Mi8_MTV3_base
	{
		scope=2;
		side=0;
		accuracy=1000;
		displayName="Mi-8J";
		author="CUP/-{GOL}-Jason";
		faction="CUP_O_RU";
		crew="CUP_O_RU_Pilot";
		fir_MI8_custom_skin=1;
		fir_MI8_custom_name="Mi-8 Russian Federation";
		fir_MI8_custom_code="JAS_CUP_O_Mi8_RU";
		fir_MI8_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\MI8_RUS.paa";
		typicalCargo[]=
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_vsr_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi8_RU.jpg";
	};
	class JAS_CUP_B_Mi17_AAC: JAS_CUP_Mi171Sh_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Mi-17J";
		author="CUP/-{GOL}-Jason";
		side=1;
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		accuracy=1000;
		crew="CUP_B_CDF_Pilot";
		fir_MI17_custom_skin=0;
		fir_MI17_custom_name="Mi-17 Chernarussian Defence Force";
		fir_MI17_custom_code="JAS_CUP_B_Mi17_CDF";
		fir_MI17_custom_preview_pic="\ARMA3_CUP_Enhancement_MI8\UI\preview\USGreyShark.paa";
		typicalCargo[]=
		{
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot",
			"CUP_B_CDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_CDF_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
		editorPreview="\ARMA3_CUP_Enhancement_MI8\UI\editorpreview\Mi17_AAC.jpg";
	};
	class JAS_CUP_Mi17Wreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="CUP\AirVehicles\CUP_AirVehicles_Mi8\model\CUP_Mi8Wreck";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		hideWeaponsCargo=1;
		transportSoldier=18;
		class Eventhandlers
		{
		};
	};
	class JAS_MI8_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Mi-8 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_MI8_Loadout";
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
					class hp1_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp1_s13
					{
						name="S-13 Rockets";
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
					class hp2_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp2_s13
					{
						name="S-13 Rockets";
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
					class hp3_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp3_s13
					{
						name="S-13 Rockets";
						value=2;
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
					class hp4_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp4_s13
					{
						name="S-13 Rockets";
						value=2;
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
					class CHDKZ
					{
						name="Chedaki";
						value=0;
						default=1;
					};
					class SLA
					{
						name="Sahrani Liberation Army";
						value=1;
					};
					class RUS
					{
						name="Russian Federation";
						value=2;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="MI8 Loadout Module";
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
	class JAS_MI17_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Mi-17 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_MI17_Loadout";
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
					class hp1_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp1_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp1_gsh23
					{
						name="GSh-23 Gun Pod";
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
					class hp2_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp2_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp2_gsh23
					{
						name="GSh-23 Gun Pod";
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
					class hp3_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp3_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp3_gsh23
					{
						name="GSh-23 Gun Pod";
						value=3;
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
					class hp4_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp4_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp4_gsh23
					{
						name="GSh-23 Gun Pod";
						value=3;
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
					class hp5_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp5_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp5_gsh23
					{
						name="GSh-23 Gun Pod";
						value=3;
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
					class hp6_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp6_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp6_gsh23
					{
						name="GSh-23 Gun Pod";
						value=3;
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
					class UN
					{
						name="United Nations";
						value=1;
					};
					class TKA
					{
						name="Takistani Army";
						value=2;
					};
					class ACR
					{
						name="Army of the Czech Republic";
						value=3;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="MI17 Loadout Module";
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
