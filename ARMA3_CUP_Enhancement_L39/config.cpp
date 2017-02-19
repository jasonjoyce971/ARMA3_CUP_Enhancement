class CfgPatches
{
	class ARMA3_CUP_Enhancement_L39
	{
		units[]=
		{
			"JAS_CUP_O_L39_TK",
			"JAS_CUP_I_L39_AAF",
			"JAS_CUP_B_L39_CZ",
			"JAS_CUP_O_L39_AAC",
			"JAS_CUP_I_L39_AAC",
			"JAS_CUP_B_L39_AAC",
			"JAS_L39_Loadout_Module"
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
		class ARMA3_CUP_Enhancement_L39
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_L39"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_L39_Init_Function
		{
			class L39_Loadout
			{
				file="\ARMA3_CUP_Enhancement_L39\sqs\modules\l39_loadout_module.sqf";
			};
			class L39_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_L39\sqs\modules\l39_loadout_module_set.sqf";
			};
		};
	};
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
class CfgHints
{
	class AWSAIRCRAFT
	{
		class L39
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "L-39 Albatros";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Light attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The L-39 entered service as a jet trainer in the 1970s. Numerous upgrades were made to the platform but it wasn't until the ZA variant that the L-39 was given weapons. The airframe however is small and frail and thus the payload is tiny when compared to other ground attack craft. The L-159 ALCA is developed from the L-39 and is much more capable, featuring enhanced avionics and a sturdier frame.<br/><br/>Payload Options:<br/>%2GSh-23 Gun Pods<br/>%2R-60 Missiles<br/>%2S-5 Rockets<br/>%2S-8 Rockets<br/>%2FAB-250<br/>%2 KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2ACR<br/>%2TKA<br/>%2AAF";
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
class L39_GUI
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
		class L39_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_L39\UI\L39_Background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_L39\sqs\loadout\L39_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_L39\sqs\loadout\L39_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_L39\sqs\loadout\L39_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_L39\sqs\loadout\L39_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_L39\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_L39\data\ico\ico.paa";
		mapSize = 10;
		cost = 999999999;
		armor = 50;
	};
	class AllVehicles;
	class PlaneWreck;
	class Air : AllVehicles
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
	};
	class Plane : Air
	{
		class HitPoints;
		class Turrets
		{
			class CopilotTurret;
		};
	};
	class Plane_Base_F: Plane
	{
		class NewTurret;
		class AnimationSources;
		class HitPoints: HitPoints
		{
		};
		class Turrets: Turrets
		{
		};
		class ViewPilot;
		class ViewGunner;
		class Eventhandlers;
	};
	class JAS_CUP_L39_base: Plane_Base_F
	{
		destrType="DestructWreck";
		model="\CUP\AirVehicles\CUP_AirVehicles_L39\CUP_L39.p3d";
		displayName="L-39ZA/J";
		class Library
		{
			libTextDesc="";
		};
		scope=0;
		simulation="Airplane";
		enableManualFire=0;
		landingSpeed=185;
		acceleration=600;
		maxSpeed=1000;
		altFullForce=10000;
		altNoForce=12000;
		weapons[] =
		{
			"FIR_MasterArm",
			"JAS_CUP_Vacannon_GSh23L_onboard"
		};
		magazines[] =
		{
			"JAS_CUP_150Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M"
		};
		driveOnComponent[]=
		{
			"wheel_1",
			"wheel_2",
			"wheel_3"
		};
		rudderInfluence=0.5;
		irScanRangeMin=500;
		irScanRangeMax=3000;
		irScanToEyeFactor=2;
		aileronSensitivity=1;
		elevatorSensitivity=0.80000001;
		envelope[]={0,0.15000001,1.1,3,5,5.8299999,6,5.8499999,5.5,4.8000002,3.5999999,1.8,0};
		thrustCoef[]={1.5,1.2,1.1,1,1,1,1,0.89999998,0.69999999,0.5,0.30000001,0.1,0,0,0,0};
		landingAoa="rad 10";
		laserScanner=1;
		gunAimDown=0.028999999;
		headAimDown=0;
		flapsFrictionCoef=0.31999999;
		minFireTime=30;
		threat[]={1,1,1};
		class Exhausts
		{
			class Exhaust1
			{
				direction="exhaust1_dir";
				effect="ExhaustsEffectJet";
				position="exhaust1";
			};
		};
		lightOnGear=0;
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={100,100,100};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
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
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=-1;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="gunnerview";
				gunnerName="Copilot";
				selectionFireAnim="zasleh";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				gunnerAction="CUP_L39_pilot_EP1";
				gunnerInAction="CUP_L39_pilot_EP1";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics=0;
				enableManualFire=1;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				isCopilot=1;
				primaryGunner=1;
				canEject=1;
				gunnerUsePilotView=0;
				class HitPoints
				{
				};
				gunnerLeftHandAnimName="yoke_copilot";
				gunnerRightHandAnimName="yoke_copilot";
				gunnerLeftLegAnimName="pedal_l_copilot";
				gunnerRightLegAnimName="pedal_r_copilot";
				turretCanSee=15;
			};
		};
		radarType=4;
		attenuationEffectType="PlaneAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",
			1,
			1,
			40
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			1,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext",
			1.7782794,
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext",
			1.7782794,
			1,
			500
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			0.79432821,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			0.79432821,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			0.63095737,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			0.63095737,
			1,
			100
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
			volume="(scrubLand factor[0.01, 0.20])";
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext",
					1.4125376,
					1,
					1200
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_ext",
					1.4125376,
					1.2,
					1400
				};
				frequency="1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_ext",
					1.1220185,
					0.99000001,
					1700
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					0.56234133,
					1,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int",
					1,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int",
					0.56234133,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int",
					0.56234133,
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise_int",
					0.39810717,
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1.7782794,
					1,
					100
				};
				frequency=1;
				volume="camPos * rain * (speed factor[50, 0])";
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
				volume="(1-camPos) * rain * (speed factor[50, 0])";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
			};
		};
		driverAction="Plane_Fighter_03_pilot";
		accuracy=0.2;
		side=0;
		armor=60;
		damageResistance=0.0040000002;
		armorStructured=1;
		memoryPointLRocket="L raketa";
		memoryPointRRocket="P raketa";
		icon="CUP\AirVehicles\CUP_AirVehicles_L39\Data\ui\icon_l39_ca.paa";
		mapSize=20;
		picture="CUP\AirVehicles\CUP_AirVehicles_L39\Data\ui\picture_l39_ca.paa";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_body.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_body_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_body_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_body_1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_body_1_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_body_1_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_glass_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_glass_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_L39\Data\l-39_glass_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type="vector";
					pos0[]=
					{
						0.51999998,
						"0.03+0.06"
					};
					pos10[]={2.02,1.29};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=-0.2;
				borderBottom=0.2;
				color[]={0,1,0,0.5};
				enableParallax=1;
				class Bones
				{
					class ILS_H
					{
						type="ils";
						pos0[]=
						{
							0.5,
							"0.5+0.06"
						};
						pos3[]=
						{
							0.94999999,
							"0.5+0.06"
						};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.92000002};
					};
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankMGun
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min="-3.14159265*2";
						max="3.14159265*2";
						minAngle=360;
						maxAngle=-360;
						aspectRatio=1;
					};
					class HorizonBankReverted
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min="-3.14159265*2";
						max="3.14159265*2";
						minAngle=360;
						maxAngle=-360;
						aspectRatio=1;
					};
					class HorizonDive
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class WeaponAim: Pos10Vector
					{
						source="weapon";
					};
					class Target: Pos10Vector
					{
						source="target";
					};
					class VelocityNotCenter: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]={0,0};
						pos10[]={1.5,1.5};
					};
					class SpdMove2
					{
						source="speed";
						min=0;
						max=200;
						type="linear";
						minPos[]={0,0};
						maxPos[]={0,1};
					};
					class ASLMove1
					{
						type="linear";
						source="altitudeASL";
						min=0;
						max=500;
						minPos[]={0,0.1};
						maxPos[]={0,0.80000001};
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
				};
				class Draw
				{
					alpha=0.89999998;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class Static
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								{-0.20999999,7.3435098e-009},
								1
							},
							
							{
								"PlaneW",
								{-0.28,9.79135e-009},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.20999999,-2.0033799e-009},
								1
							},
							
							{
								"PlaneW",
								{0.28,-2.67117e-009},
								1
							},
							{},
							
							{
								"PlaneW",
								{-0.105,0.145492},
								1
							},
							
							{
								"PlaneW",
								{-0.14,0.19399001},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.105,0.145492},
								1
							},
							
							{
								"PlaneW",
								{0.14,0.19399001},
								1
							},
							{},
							
							{
								"PlaneW",
								{-0.18186501,0.083999999},
								1
							},
							
							{
								"PlaneW",
								{-0.242487,0.112},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.18186501,0.083999999},
								1
							},
							
							{
								"PlaneW",
								{0.242487,0.112},
								1
							},
							{},
							
							{
								"PlaneW",
								{-0.20284399,0.0434816},
								1
							},
							
							{
								"PlaneW",
								{-0.270459,0.057975501},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.20284399,0.0434816},
								1
							},
							
							{
								"PlaneW",
								{0.270459,0.057975501},
								1
							},
							{},
							
							{
								"PlaneW",
								{-0.20920099,0.0146422},
								1
							},
							
							{
								"PlaneW",
								{-0.244068,0.017082499},
								1
							},
							{},
							
							{
								"PlaneW",
								{-0.20681,0.029172899},
								1
							},
							
							{
								"PlaneW",
								{-0.24127799,0.034035001},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.20681,0.029172899},
								1
							},
							
							{
								"PlaneW",
								{0.24127799,0.034035001},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.20920099,0.0146422},
								1
							},
							
							{
								"PlaneW",
								{0.244068,0.017082499},
								1
							},
							{}
						};
					};
					class HorizonBank
					{
						clipTL[]={0,0};
						clipBR[]={1,1};
						type="line";
						points[]=
						{
							
							{
								"HorizonBankReverted",
								{0.20999999,0},
								1
							},
							
							{
								"HorizonBankReverted",
								{0.07,0},
								1
							},
							{},
							
							{
								"HorizonBankReverted",
								{-0.20999999,0},
								1
							},
							
							{
								"HorizonBankReverted",
								{-0.07,0},
								1
							},
							{},
							
							{
								"HorizonBankReverted",
								{0,0.14},
								1
							},
							
							{
								"HorizonBankReverted",
								{0,0.07},
								1
							}
						};
					};
					class HorizonDive
					{
						clipTL[]={0.1,0.1};
						clipBR[]={0.89999998,0.89999998};
						type="line";
						points[]=
						{
							
							{
								"HorizonDive",
								{0.80000001,0},
								1
							},
							
							{
								"HorizonDive",
								{0.2,0},
								1
							}
						};
					};
					class Missile
					{
						condition="AAmissile";
						class Target
						{
							type="line";
							points[]=
							{
								
								{
									"Target",
									
									{
										0,
										"-0.08 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										0.050000001,
										"-0.0696 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										0.086999997,
										"-0.50*0.10/(1.5/1.2) + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										0.1,
										"0 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										0.086999997,
										"0.04 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										0.050000001,
										"+0.87*0.10/(1.5/1.2) + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										0,
										"0.08 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										-0.050000001,
										"0.0696 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										-0.086999997,
										"+0.50*0.10/(1.5/1.2) + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										-0.1,
										"0 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										-0.086999997,
										"-0.04 + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										-0.050000001,
										"-0.87*0.10/(1.5/1.2) + 0.2"
									},
									1
								},
								
								{
									"Target",
									
									{
										0,
										"-0.08 + 0.2"
									},
									1
								}
							};
						};
					};
					class Cros
					{
						condition="on";
						class Cros
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.050000001,0.2},
									1
								},
								
								{
									"WeaponAim",
									{0.015,0.2},
									1
								},
								{},
								
								{
									"WeaponAim",
									
									{
										0,
										"0.04 + 0.2"
									},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0,
										"0.012 + 0.2"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.050000001,0.2},
									1
								},
								
								{
									"WeaponAim",
									{-0.015,0.2},
									1
								},
								{},
								
								{
									"WeaponAim",
									
									{
										0,
										"-0.04 + 0.2"
									},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0,
										"-0.012 + 0.2"
									},
									1
								}
							};
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
							{0.059999999,0.039999999},
							1
						};
						right[]=
						{
							{0.14,0.039999999},
							1
						};
						down[]=
						{
							{0.059999999,0.090000004},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeASL";
						sourceScale=1;
						pos[]=
						{
							{0.86000001,0.039999999},
							1
						};
						right[]=
						{
							{0.94,0.039999999},
							1
						};
						down[]=
						{
							{0.86000001,0.090000004},
							1
						};
					};
					class PitchNumber: SpeedNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.85000002,0.5},
							1
						};
						right[]=
						{
							{0.92000002,0.5},
							1
						};
						down[]=
						{
							{0.85000002,0.55000001},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						source="heading";
						sourceScale=0.1;
						width=4;
						top=0.30000001;
						center=0.5;
						bottom=0.69999999;
						lineXleft="0";
						lineYright="0";
						lineXleftMajor="0.09";
						lineYrightMajor="0.10";
						horizontal=1;
						step="1 / 2";
						majorLineEach=1;
						numberEach=2;
						stepSize="(0.70 - 0.3) / 6";
						align="center";
						scale=1;
						pos[]={0.30000001,0.039999999};
						right[]={0.36000001,0.039999999};
						down[]={0.30000001,0.090000004};
					};
					class HeadingLine
					{
						type="line";
						points[]=
						{
							
							{
								{0.30000001,0.1},
								1
							},
							
							{
								{0.69999999,0.1},
								1
							},
							{},
							
							{
								{0.5,0.1},
								1
							},
							
							{
								{0.47999999,0.12},
								1
							},
							
							{
								{0.51999998,0.12},
								1
							},
							
							{
								{0.5,0.1},
								1
							}
						};
					};
					class weapons
					{
						type="text";
						source="weapon";
						align="right";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							{0.059999999,0.83999997},
							1
						};
						right[]=
						{
							{0.12,0.83999997},
							1
						};
						down[]=
						{
							{0.059999999,0.88},
							1
						};
					};
					class ammo
					{
						type="text";
						source="ammo";
						align="right";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							{0.059999999,0.88999999},
							1
						};
						right[]=
						{
							{0.12,0.88999999},
							1
						};
						down[]=
						{
							{0.059999999,0.93000001},
							1
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
										{-0.40000001,0},
										1
									},
									
									{
										"ILS_W",
										{0.40000001,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,0.039999999},
										1
									},
									
									{
										"ILS_W",
										{0,-0.039999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.2,0.039999999},
										1
									},
									
									{
										"ILS_W",
										{0.2,-0.039999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.40000001,0.039999999},
										1
									},
									
									{
										"ILS_W",
										{0.40000001,-0.039999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.2,0.039999999},
										1
									},
									
									{
										"ILS_W",
										{-0.2,-0.039999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.40000001,0.039999999},
										1
									},
									
									{
										"ILS_W",
										{-0.40000001,-0.039999999},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.40000001},
										1
									},
									
									{
										"ILS_H",
										{0,0.40000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.039999999,0},
										1
									},
									
									{
										"ILS_H",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.039999999,0.2},
										1
									},
									
									{
										"ILS_H",
										{-0.039999999,0.2},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.039999999,0.40000001},
										1
									},
									
									{
										"ILS_H",
										{-0.039999999,0.40000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.039999999,-0.2},
										1
									},
									
									{
										"ILS_H",
										{-0.039999999,-0.2},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.039999999,-0.40000001},
										1
									},
									
									{
										"ILS_H",
										{-0.039999999,-0.40000001},
										1
									},
									{}
								};
							};
						};
					};
				};
			};
		};
		class AnimationSources
		{
			class MuzzleFlash_Gsh23_Rot
			{
				source="ammorandom";
				weapon="CUP_Vacannon_GSh23L_L39";
			};
			class MuzzleFlash_Gsh23_Hide
			{
				source="reload";
				weapon="CUP_Vacannon_GSh23L_L39";
			};
		};
		class UserActions
		{
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_L39\sqs\loadout\L39_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class CUP_A10J_Eject
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
			class FindRadarTGT
			{
				displayName = "Find Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""JAS_KH25_LAU"" and this getvariable ""SEAD_SET"" == ""no""; ";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_SU25\sqs\SEAD\harm.sqf""; ";
				onlyforplayer = "False";
			};
			class ClearRadarTGT
			{
				displayName = "Clear Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""JAS_KH25_LAU"" and this getvariable ""SEAD_SET"" == ""yes""; ";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\SEAD\harmoff.sqf""; ";
				onlyforplayer = "False";
			};
			class SearchRDRTGT
			{
				displayName = "QIT ON";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "currentweapon this == ""JAS_KH25_LAU"";";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_SU25\sqs\SEAD\Search_RDRTGT.sqf""; ";
				onlyforplayer = "False";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEADRUS.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_L39Wreck: PlaneWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_L39\CUP_L39Wreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=1;
		class Eventhandlers
		{
		};
	};
	class JAS_CUP_O_L39_TK: JAS_CUP_L39_base
	{
		scope=2;
		scopecurator=2;
		side=0;
		author="$STR_CUP_AUTHOR_STRING";
		faction="CUP_O_TK";
		crew="CUP_O_TK_Pilot";
		fir_L39_custom_skin=1;
		fir_L39_custom_name="L-38 Takistani Army";
		fir_L39_custom_code="JAS_CUP_O_L39_TK";
		fir_L39_custom_preview_pic="\ARMA3_CUP_Enhancement_L39\UI\preview\L39_TKA.paa";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_l39\data\l-39_body_co.paa",
			"cup\airvehicles\cup_airvehicles_l39\data\l-39_body_1_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_O_L39_Desert_TK.jpg";
	};
	class JAS_CUP_I_L39_AAF: JAS_CUP_L39_base
	{
		scope=2;
		scopecurator=2;
		side=2;
		author="$STR_CUP_AUTHOR_STRING";
		faction="IND_F";
		crew="I_pilot_F";
		fir_L39_custom_skin=1;
		fir_L39_custom_name="L-39 Altis Armed Forces";
		fir_L39_custom_code="JAS_CUP_I_L39_AAF";
		fir_L39_custom_preview_pic="\ARMA3_CUP_Enhancement_L39\UI\preview\L39_AAF.paa";
		typicalCargo[]=
		{
			"I_pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\air_f_gamma\Plane_Fighter_03\Data\plane_fighter_03_body_1_indp_co.paa",
			"a3\air_f_gamma\Plane_Fighter_03\Data\plane_fighter_03_body_2_indp_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_I_L39_Desert_AAF.jpg";
	};
	class JAS_CUP_B_L39_CZ: JAS_CUP_L39_base
	{
		scope=2;
		scopecurator=2;
		side=1;
		author="$STR_CUP_AUTHOR_STRING";
		faction="CUP_B_CZ";
		crew="CUP_B_CZ_Pilot";
		fir_L39_custom_skin=1;
		fir_L39_custom_name="L-39 ACR Green";
		fir_L39_custom_code="JAS_CUP_B_L39_CZ";
		fir_L39_custom_preview_pic="\ARMA3_CUP_Enhancement_L39\UI\preview\L39_ACR.paa";
		typicalCargo[]=
		{
			"CUP_B_CZ_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_acr_green_co.paa",
			"cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_1_acr_green_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_B_L39_Desert_CZ.jpg";
	};
	class JAS_CUP_O_L39_AAC: JAS_CUP_L39_base
	{
		scope=2;
		scopecurator=2;
		side=0;
		author="$STR_CUP_AUTHOR_STRING";
		crew="CUP_O_TK_Pilot";
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		expansion = 3;
		fir_a10US_custom_skin=0;
		fir_a10US_custom_name="A-10 AAC Grey Shark";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_4";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreyShark.paa";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_l39\data\l-39_body_co.paa",
			"cup\airvehicles\cup_airvehicles_l39\data\l-39_body_1_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_O_L39_Desert_TK.jpg";
	};
	class JAS_CUP_I_L39_AAC: JAS_CUP_L39_base
	{
		scope=2;
		scopecurator=2;
		side=2;
		author="$STR_CUP_AUTHOR_STRING";
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_BANSHEE";
		expansion = 3;
		fir_a10US_custom_skin=0;
		fir_a10US_custom_name="A-10 AAC Grey Shark";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_4";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreyShark.paa";
		crew="I_pilot_F";
		typicalCargo[]=
		{
			"I_pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\air_f_gamma\Plane_Fighter_03\Data\plane_fighter_03_body_1_indp_co.paa",
			"a3\air_f_gamma\Plane_Fighter_03\Data\plane_fighter_03_body_2_indp_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_I_L39_Desert_AAF.jpg";
	};
	class JAS_CUP_B_L39_AAC: JAS_CUP_L39_base
	{
		scope=2;
		scopecurator=2;
		side=1;
		author="$STR_CUP_AUTHOR_STRING";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
		expansion = 3;
		fir_L39_custom_skin=1;
		fir_L39_custom_name="L-39 ACR Grey";
		fir_L39_custom_code="JAS_CUP_B_L39_AAC";
		fir_L39_custom_preview_pic="\ARMA3_CUP_Enhancement_L39\UI\preview\L39_ACR_Grey.paa";
		crew="CUP_B_CZ_Pilot";
		typicalCargo[]=
		{
			"CUP_B_CZ_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_acr_co.paa",
			"cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_1_acr_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_B_L39_Desert_CZ.jpg";
	};
	class JAS_L39_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="L-39 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_L39_Loadout";
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
					class hp1_r73
					{
						name="R-73 'Vympel'";
						value=1;
					};
					class hp1_GSh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp1_S5
					{
						name="S-5 Rockets";
						value=3;
					};
					class hp1_S8
					{
						name="S-8 Rockets";
						value=4;
					};
					class hp1_FAB
					{
						name="FAB-250";
						value=5;
					};
					class hp1_KAB
					{
						name="KAB-250";
						value=6;
					};
					class hp1_RBK
					{
						name="RBK-250";
						value=7;
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
					class hp2_r73
					{
						name="R-73 'Vympel'";
						value=1;
					};
					class hp2_GSh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp2_S5
					{
						name="S-5 Rockets";
						value=3;
					};
					class hp2_S8
					{
						name="S-8 Rockets";
						value=4;
					};
					class hp2_FAB
					{
						name="FAB-250";
						value=5;
					};
					class hp2_KAB
					{
						name="KAB-250";
						value=6;
					};
					class hp2_RBK
					{
						name="RBK-250";
						value=7;
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
					class hp3_r73
					{
						name="R-73 'Vympel'";
						value=1;
					};
					class hp3_GSh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp3_S5
					{
						name="S-5 Rockets";
						value=3;
					};
					class hp3_S8
					{
						name="S-8 Rockets";
						value=4;
					};
					class hp3_FAB
					{
						name="FAB-250";
						value=5;
					};
					class hp3_KAB
					{
						name="KAB-250";
						value=6;
					};
					class hp3_RBK
					{
						name="RBK-250";
						value=7;
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
					class hp4_r73
					{
						name="R-73 'Vympel'";
						value=1;
					};
					class hp4_GSh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp4_S5
					{
						name="S-5 Rockets";
						value=3;
					};
					class hp4_S8
					{
						name="S-8 Rockets";
						value=4;
					};
					class hp4_FAB
					{
						name="FAB-250";
						value=5;
					};
					class hp4_KAB
					{
						name="KAB-250";
						value=6;
					};
					class hp4_RBK
					{
						name="RBK-250";
						value=7;
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
					class AAF
					{
						name="Altis Armed Forces";
						value=0;
						default=1;
					};
					class TKA
					{
						name="Takistani Army";
						value=1;
					};
					class ACR
					{
						name="ACR Green";
						value=2;
					};
					class ACR2
					{
						name="ACR Grey";
						value=3;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="Su-34 Loadout Module";
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
