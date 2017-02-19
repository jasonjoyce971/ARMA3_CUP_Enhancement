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
		class F35J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "F-35J Lightning";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Multi-role Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The F-35 is currently under development in 3 variants and is scheduled to replace most current aircraft by 2025. Capable of both fighter and strike missions the F-35 is set to be primarily used by the UK and the USMC although it is also scheduled for deployment by 7 other countries. The 'J' variant in game features adustable payload for mission specific tasks. The J is based on the current B variant and is a Short Take Off Vertical Landing (STOVL) system. It can operate from short airfields and the Landing Helicopter Dock as well as more conventional airbases.<br/><br/>Payload Options:<br/><br/>%2AIM-9X<br/>%2AIM-120<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-24B<br/>%2GBU-31<br/>%2GBU-38<br/>%2Mk82 Snakeye<br/>%2Mk82 GPB<br/>%2GBU-39 SDB<br/>%2GBU-53 SDB<br/>%2AGM-154A (USMC ONLY)<br/>%2AGM-154C (USMC ONLY)<br/>%2AGM-65D (USMC ONLY)<br/>%2AGM-65G (USMC ONLY)<br/>%2AGM-65L (USMC ONLY)<br/>%2CBU-87 (USMC ONLY)<br/>%2CBU-89 (USMC ONLY)<br/>%2CBU-97 (USMC ONLY)<br/>%2CBU-103 (USMC ONLY)<br/>%2BRIMSTONE (RAF/RN ONLY)<br/>%2STORM SHADOW (RAF/RN ONLY)<br/><br/>Factions:<br/><br/>%2USMC<br/>%2UK";
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
			text = "Right Internal 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Internal 1";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Right Internal 2";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Left Internal 2";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
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
			text = "Right Internal 1";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Internal 1";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Right Internal 2";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Left Internal 2";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
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
	class CUP_F35B_base;
	class JAS_CUP_B_F35B_USMC : CUP_F35B_base
	{
		scope = 2;
		author = "Bohimia Interactive /CUP /-{GOL}-Jason";
		displayname = "F-35B-J Lightning II (USMC)";
		crew = "B_pilot_F";
		side = 1;
		faction = "CUP_B_USMC";
		editorPreview = "\ARMA3_CUP_Enhancement_F35\UI\editorpreview\F35B_USMC.jpg";
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
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
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
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
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
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
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
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
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
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
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
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
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
	class JAS_F35_Loadout_Module: Module_F
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
					class hp3_24A
					{
						name="GBU-24A";
						value=9;
					};
					class hp3_24B
					{
						name="GBU-24B";
						value=10;
					};
					class hp3_24118
					{
						name="GBU-24/118";
						value=11;
					};
					class hp3_31
					{
						name="GBU-31";
						value=12;
					};
					class hp3_32
					{
						name="GBU-32";
						value=13;
					};
					class hp3_38
					{
						name="GBU-38";
						value=14;
					};
					class hp3_87
					{
						name="CBU-87 CEM";
						value=15;
					};
					class hp3_89
					{
						name="CBU-89 GATOR";
						value=16;
					};
					class hp3_97
					{
						name="CBU-97 SFW";
						value=17;
					};
					class hp3_103
					{
						name="CBU-103 WCMD";
						value=18;
					};
					class hp3_154A
					{
						name="AGM-154A JSOW";
						value=19;
					};
					class hp3_154C
					{
						name="AGM-154C JSOW";
						value=20;
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
					class hp4_24A
					{
						name="GBU-24A";
						value=9;
					};
					class hp4_24B
					{
						name="GBU-24B";
						value=10;
					};
					class hp4_24118
					{
						name="GBU-24/118";
						value=11;
					};
					class hp4_31
					{
						name="GBU-31";
						value=12;
					};
					class hp4_32
					{
						name="GBU-32";
						value=13;
					};
					class hp4_38
					{
						name="GBU-38";
						value=14;
					};
					class hp4_87
					{
						name="CBU-87 CEM";
						value=15;
					};
					class hp4_89
					{
						name="CBU-89 GATOR";
						value=16;
					};
					class hp4_97
					{
						name="CBU-97 SFW";
						value=17;
					};
					class hp4_103
					{
						name="CBU-103 WCMD";
						value=18;
					};
					class hp4_154A
					{
						name="AGM-154A JSOW";
						value=19;
					};
					class hp4_154C
					{
						name="AGM-154C JSOW";
						value=20;
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
					class hp5_24A
					{
						name="GBU-24A";
						value=9;
					};
					class hp5_24B
					{
						name="GBU-24B";
						value=10;
					};
					class hp5_24118
					{
						name="GBU-24/118";
						value=11;
					};
					class hp5_31
					{
						name="GBU-31";
						value=12;
					};
					class hp5_32
					{
						name="GBU-32";
						value=13;
					};
					class hp5_38
					{
						name="GBU-38";
						value=14;
					};
					class hp5_87
					{
						name="CBU-87 CEM";
						value=15;
					};
					class hp5_89
					{
						name="CBU-89 GATOR";
						value=16;
					};
					class hp5_97
					{
						name="CBU-97 SFW";
						value=17;
					};
					class hp5_103
					{
						name="CBU-103 WCMD";
						value=18;
					};
					class hp5_droptank
					{
						name="Fuel Tank";
						value=19;
					};
					class hp5_154A
					{
						name="AGM-154A JSOW";
						value=20;
					};
					class hp5_154C
					{
						name="AGM-154C JSOW";
						value=21;
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
					class hp6_24A
					{
						name="GBU-24A";
						value=9;
					};
					class hp6_24B
					{
						name="GBU-24B";
						value=10;
					};
					class hp6_24118
					{
						name="GBU-24/118";
						value=11;
					};
					class hp6_31
					{
						name="GBU-31";
						value=12;
					};
					class hp6_32
					{
						name="GBU-32";
						value=13;
					};
					class hp6_38
					{
						name="GBU-38";
						value=14;
					};
					class hp6_87
					{
						name="CBU-87 CEM";
						value=15;
					};
					class hp6_89
					{
						name="CBU-89 GATOR";
						value=16;
					};
					class hp6_97
					{
						name="CBU-97 SFW";
						value=17;
					};
					class hp6_103
					{
						name="CBU-103 WCMD";
						value=18;
					};
					class hp6_droptank
					{
						name="Fuel Tank";
						value=19;
					};
					class hp6_154A
					{
						name="AGM-154A JSOW";
						value=20;
					};
					class hp6_154C
					{
						name="AGM-154C JSOW";
						value=21;
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
					class hp7_12
					{
						name="GBU-12";
						value=1;
					};
					class hp7_38
					{
						name="GBU-38";
						value=2;
					};
					class hp7_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp7_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp7_87
					{
						name="CBU-87 CEM";
						value=5;
					};
					class hp7_89
					{
						name="CBU-89 GATOR";
						value=6;
					};
					class hp7_97
					{
						name="CBU-97 SFW";
						value=7;
					};
					class hp7_103
					{
						name="CBU-103 WCMD";
						value=8;
					};
					class hp7_39
					{
						name="GBU-39 SDB";
						value=9;
					};
					class hp7_53
					{
						name="GBU-53 SDB";
						value=10;
					};
					class hp7_154A
					{
						name="AGM-154A JSOW";
						value=11;
					};
					class hp7_154C
					{
						name="AGM-154C JSOW";
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
					class hp8_12
					{
						name="GBU-12";
						value=1;
					};
					class hp8_38
					{
						name="GBU-38";
						value=2;
					};
					class hp8_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp8_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp8_87
					{
						name="CBU-87 CEM";
						value=5;
					};
					class hp8_89
					{
						name="CBU-89 GATOR";
						value=6;
					};
					class hp8_97
					{
						name="CBU-97 SFW";
						value=7;
					};
					class hp8_103
					{
						name="CBU-103 WCMD";
						value=8;
					};
					class hp8_39
					{
						name="GBU-39 SDB";
						value=9;
					};
					class hp8_53
					{
						name="GBU-53 SDB";
						value=10;
					};
					class hp8_154A
					{
						name="AGM-154A JSOW";
						value=11;
					};
					class hp8_154C
					{
						name="AGM-154C JSOW";
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
					class hp9_12
					{
						name="GBU-12";
						value=1;
					};
					class hp9_38
					{
						name="GBU-38";
						value=2;
					};
					class hp9_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp9_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp9_87
					{
						name="CBU-87 CEM";
						value=5;
					};
					class hp9_89
					{
						name="CBU-89 GATOR";
						value=6;
					};
					class hp9_97
					{
						name="CBU-97 SFW";
						value=7;
					};
					class hp9_103
					{
						name="CBU-103 WCMD";
						value=8;
					};
					class hp9_39
					{
						name="GBU-39 SDB";
						value=9;
					};
					class hp9_53
					{
						name="GBU-53 SDB";
						value=10;
					};
					class hp9_154A
					{
						name="AGM-154A JSOW";
						value=11;
					};
					class hp9_154C
					{
						name="AGM-154C JSOW";
						value=12;
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
					class hp10_12
					{
						name="GBU-12";
						value=1;
					};
					class hp10_38
					{
						name="GBU-38";
						value=2;
					};
					class hp10_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp10_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp10_87
					{
						name="CBU-87 CEM";
						value=5;
					};
					class hp10_89
					{
						name="CBU-89 GATOR";
						value=6;
					};
					class hp10_97
					{
						name="CBU-97 SFW";
						value=7;
					};
					class hp10_103
					{
						name="CBU-103 WCMD";
						value=8;
					};
					class hp10_39
					{
						name="GBU-39 SDB";
						value=9;
					};
					class hp10_53
					{
						name="GBU-53 SDB";
						value=10;
					};
					class hp10_154A
					{
						name="AGM-154A JSOW";
						value=11;
					};
					class hp10_154C
					{
						name="AGM-154C JSOW";
						value=12;
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
						name="AIM-9X";
						value=1;
					};
					class hp1_aim120
					{
						name="AIM-120";
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
						name="AIM-9X";
						value=1;
					};
					class hp2_aim120
					{
						name="AIM-120";
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
						name="AIM-9X";
						value=1;
					};
					class hp3_AIM120
					{
						name="AIM-120";
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
					class hp3_31
					{
						name="GBU-31";
						value=10;
					};
					class hp3_32
					{
						name="GBU-32";
						value=11;
					};
					class hp3_38
					{
						name="GBU-38";
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
					class hp4_31
					{
						name="GBU-31";
						value=10;
					};
					class hp4_32
					{
						name="GBU-32";
						value=11;
					};
					class hp4_38
					{
						name="GBU-38";
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
					class hp5_24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp5_24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp5_24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp5_31
					{
						name="GBU-31";
						value=10;
					};
					class hp5_32
					{
						name="GBU-32";
						value=11;
					};
					class hp5_38
					{
						name="GBU-38";
						value=12;
					};
					class hp5_droptank
					{
						name="Fuel Tank";
						value=13;
					};
					class hp5_storm
					{
						name="Storm Shadow";
						value=14;
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
					class hp6_24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp6_24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp6_24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp6_31
					{
						name="GBU-31";
						value=10;
					};
					class hp6_32
					{
						name="GBU-32";
						value=11;
					};
					class hp6_38
					{
						name="GBU-38";
						value=12;
					};
					class hp6_droptank
					{
						name="Fuel Tank";
						value=13;
					};
					class hp6_storm
					{
						name="Storm Shadow";
						value=14;
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
					class hp7_12
					{
						name="GBU-12";
						value=1;
					};
					class hp7_38
					{
						name="GBU-38";
						value=2;
					};
					class hp7_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp7_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp7_39
					{
						name="GBU-39 SDB";
						value=5;
					};
					class hp7_53
					{
						name="GBU-53 SDB";
						value=6;
					};
					class hp7_brim
					{
						name="Brimstone";
						value=7;
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
					class hp8_12
					{
						name="GBU-12";
						value=1;
					};
					class hp8_38
					{
						name="GBU-38";
						value=2;
					};
					class hp8_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp8_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp8_39
					{
						name="GBU-39 SDB";
						value=5;
					};
					class hp8_53
					{
						name="GBU-53 SDB";
						value=6;
					};
					class hp8_brim
					{
						name="Brimstone";
						value=7;
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
					class hp9_12
					{
						name="GBU-12";
						value=1;
					};
					class hp9_38
					{
						name="GBU-38";
						value=2;
					};
					class hp9_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp9_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp9_39
					{
						name="GBU-39 SDB";
						value=5;
					};
					class hp9_53
					{
						name="GBU-53 SDB";
						value=6;
					};
					class hp9_brim
					{
						name="Brimstone";
						value=7;
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
					class hp10_12
					{
						name="GBU-12";
						value=1;
					};
					class hp10_38
					{
						name="GBU-38";
						value=2;
					};
					class hp10_82s
					{
						name="Mk82 Snakeye";
						value=3;
					};
					class hp10_82
					{
						name="Mk82 GPB";
						value=4;
					};
					class hp10_39
					{
						name="GBU-39 SDB";
						value=5;
					};
					class hp10_53
					{
						name="GBU-53 SDB";
						value=6;
					};
					class hp10_brim
					{
						name="Brimstone";
						value=7;
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
	};
};
