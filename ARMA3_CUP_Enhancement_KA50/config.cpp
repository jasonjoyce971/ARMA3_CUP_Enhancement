class CfgPatches
{
	class ARMA3_CUP_Enhancement_KA50
	{
		units[]=
		{
			"JAS_CUP_O_KA50_SLA",
			"JAS_CUP_O_KA50_RU",
			"JAS_CUP_O_Ka50_AAC",
			"JAS_CUP_O_Ka52_RU",
			"JAS_CUP_O_Ka52_AAC"
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
		class ARMA3_CUP_Enhancement_KA50
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_KA50"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_KA50_Init_Function
		{
			class KA50_Loadout
			{
				file="\ARMA3_CUP_Enhancement_KA50\sqs\modules\ka50_loadout_module.sqf";
			};
			class KA50_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_KA50\sqs\modules\ka50_loadout_module_set.sqf";
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
		class KA50
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Ka-50 Black Shark";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Armed Recon Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Ka-50, NATO designation Hokum, is a single seat armed recon helicopter. Capable of acting as a gunship, the Black Shark is comparable to the AH-64 but the co-axial rotor arrangement means the Black Shark is actually faster and capable of aerobatics that helicopters cannot usually perform. The Ka-52 Alligator is a special variant of the Ka-50. Fitted with a second seat, the Alligator has increased all weather capability although the positioning of the optics suite means it must operate close to the ground. In game terms the Ka-50 has a changeable payload but the Ka-52 does not, this is due to model limitations.<br/><br/>Payload Options:<br/><br/>%2S-8 Rockets<br/>%2S-13 Rockets<br/>%2GSh-23 Pod<br/>%2FAB-250<br/>%2KAB-250<br/>%2Vikhir<br/>%2Kh-29<br/>%2IGLA<br/><br/>Factions:<br/><br/>%2Russian Federation<br/>%2Sahrani Liberation Army";
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
class KA50_GUI
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
		class KA50_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_KA50\ui\KA50_Background.paa";
		};
		class KA50_Skin_Button: RscPicture
		{
			idc=1610;
			text="FIR_AirWeaponSystem_US\ui\button_skin.paa";
			x="0.75 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.0875109 * safezoneW";
			h="0.0699973 * safezoneH";
		};
		class KA50_Skin_Button2: RscButton
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
		class KA50_refuel_Button : RscPicture
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
		class KA50_repair_Button : RscPicture
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
		class KA50_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_KA50\sqs\loadout\KA50_Loadout.sqf""";
		};
		class KA50_Cancel_Button : RscPicture
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
		class KA50_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_KA50\sqs\loadout\KA50_SaveCustom.sqf""";
		};
		class KA50_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_KA50\sqs\loadout\KA50_SaveCustom.sqf""";
		};
		class KA50_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_KA50\sqs\loadout\KA50_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_KA50\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_KA50\data\ico\ico.paa";
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
	class JAS_CUP_KA50_Base : Helicopter_Base_H
	{
		expansion = 3;
		dlc = "CUP_Vehicles";
		scope = 0;
		crewVulnerable = 0;
		fir_ka50_custom_skin=0;
		fir_ka50_custom_name="Ka-50";
		fir_ka50_custom_code="JAS_CUP_KA50_Base";
		fir_ka50_custom_preview_pic="\ARMA3_CUP_Enhancement_KA50\UI\preview\KA50RUS.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] =
				{
					"veh_air_gunship_s"
				};
				speechPlural[] =
				{
					"veh_air_gunship_p"
				};
			};
		};
		
		// TGP implementation
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_KA50\rotorLib\RTD_KA50.xml";
			autoHoverCorrection[] = { 3.2, 0, 0 };
			defaultCollective = 0.80500001;
			retreatBladeStallWarningSpeed = 83;
			maxTorque = 3300;
			stressDamagePerSec = 0.0099999998;
			maxHorizontalStabilizerLeftStress = 8000;
			maxHorizontalStabilizerRightStress = 8000;
			maxVerticalStabilizerStress = 4000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 225000;
			maxTailRotorStress = 225000;
			rtd_center = "rtd_center";
		};
		maxSpeed = 350;
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		altFullForce = 4000;
		altNoForce = 6000;
		vehicleClass = "Air";
		displayName = "Ka-50 Black Shark (AT)";
		cost = 4000000;
		armor = 70;
		damageResistance = 0.0063499999;
		model = "\cup\airvehicles\cup_airvehicles_ka50\cup_ka50";
		picture = "\cup\airvehicles\cup_airvehicles_ka50\data\ui\ka50_CA.paa";
		Icon = "\cup\airvehicles\cup_airvehicles_ka50\data\ui\icomap_ka50_CA.paa";
		mapSize = 12;
		driveOnComponent[] =
		{
			"damper_front",
			"damper_left",
			"damper_right"
		};
		numberPhysicalWheels = 3;
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		insideSoundCoef = 0.30000001;
		attenuationEffectType = "HeliAttenuation";
		emptySound[] =
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[] =
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[] =
		{
			"emptySound",
			0
		};
		soundBuildingCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[] =
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[] =
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_door",
			1,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_door",
			1,
			1,
			50
		};
		soundEngineOnInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_start2",
			0.15848932,
			1
		};
		soundEngineOnExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_start2",
			0.79432821,
			1,
			600
		};
		soundEngineOffInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_stop2",
			0.19952624,
			1
		};
		soundEngineOffExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_stop2",
			0.79432821,
			1,
			600
		};
		soundLocked[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		rotorDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",
			1,
			1
		};
		rotorDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",
			2.5118864,
			1,
			300
		};
		rotorDamage[] =
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[] =
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[] =
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[] =
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[] =
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_engine",
					1.7782794,
					1,
					900
				};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_rotor",
					1.1220185,
					1,
					2000
				};
				frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
				volume = "2*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
			};
			class RotorNoiseExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\rotor_swist",
					1,
					1,
					400
				};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				cone[] = { 0.69999999, 1.3, 1, 0 };
			};
			class EngineInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_engine",
					1.1220185,
					1
				};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_rotor",
					0.89125091,
					1
				};
				frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.31622776,
					1
				};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.2238721,
					1,
					20
				};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] =
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] =
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.56234133,
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
					0.50118721,
					1,
					50
				};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[40,60])";
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
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_engine",
						1.7782794,
						1,
						900
					};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_rotor",
						1.1220185,
						1,
						2000
					};
					frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
					volume = "2*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
				};
				class RotorNoiseExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\rotor_swist",
						1,
						1,
						400
					};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
					cone[] = { 0.69999999, 1.3, 1, 0 };
				};
				class EngineInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_engine",
						1.1220185,
						1
					};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_rotor",
						0.89125091,
						1
					};
					frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.31622776,
						1
					};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.2238721,
						1,
						20
					};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.2238721,
						1,
						20
					};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] =
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] =
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.56234133,
						1,
						50
					};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
						0.50118721,
						1,
						50
					};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[40,60])";
				};
			};
		};
		weapons[] =
		{
			"CUP_Vacannon_2A42_Ka50",
			"CUP_Vmlauncher_AT16_veh",
			"CUP_Vmlauncher_S8_veh",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"CUP_2Rnd_S8_Pod_Heli_M",
			"CUP_2Rnd_Vikhr_Rack_6Rnd_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"CUP_40Rnd_S8_M",
			"CUP_12Rnd_AT16_M",
			"192Rnd_CMFlare_Chaff_Magazine"
		};
		liftForceCoef = 3; //1 originally
		bodyFrictionCoef = 0.5;
		cyclicAsideForceCoef = 1;
		cyclicForwardForceCoef = 1;
		backRotorForceCoef = 1;
		threat[] = { 0.60000002, 1, 0.80000001 };
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		laserScanner = 1;
		radarType = 4;
		class Turrets
		{
		};
		memoryPointLMissile = "L raketa";
		memoryPointRMissile = "P raketa";
		memoryPointGun = "muzzle_1";
		selectionFireAnim = "zasleh_2a42";
		driverAction = "CUP_KA50_Pilot";
		hasGunner = 0;
		gearRetracting = 1;
		gearUpTime = 3;
		gearDownTime = 3;
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		selectionhrotormove = "velka vrtule blur";
		selectionhrotorstill = "velka vrtule staticka";
		selectionvrotormove = "mala vrtule blur";
		selectionvrotorstill = "mala vrtule staticka";
		tailBladeVertical = 0;
		castDriverShadow = 1;
		viewCargoShadow = 1;
		hideWeaponsCargo = 1;
		transportSoldier = 0;
		mainbladecenter = "main_rotor_center";
		tailbladecenter = "tail_rotor_center";
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
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
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
		class Hitpoints : HitPoints
		{
			class HitHull : HitHull
			{
				explosionShielding = 1;
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 1;
			};
			class HitEngine : HitEngine
			{
				explosionShielding = 1;
				armor = 0.69999999;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			class HitAvionics : HitAvionics
			{
				explosionShielding = 1;
				armor = 0.15000001;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0;
			};
			class HitVRotor : HitVRotor
			{
				explosionShielding = 1;
				armor = 2.5999999;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0;
				minimalHit = 0.1;
			};
			class HitHRotor : HitHRotor
			{
				explosionShielding = 1;
				armor = 2.5999999;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0;
				minimalHit = 0.1;
			};
		};
		class AnimationSources : AnimationSources
		{
			class muzzle_rot_2a42
			{
				source = "ammorandom";
				weapon = "CUP_Vacannon_2A42_Ka50";
			};
			class Muzzle_hide_2a42
			{
				source = "reload";
				weapon = "CUP_Vacannon_2A42_Ka50";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_01.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_01_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_01_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_02.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_02_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_02_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_03.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_03_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_03_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_05.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_05_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_ka50\data\ka50_05_destruct.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = { 0.50199997, 0.49000001 };
					pos10[] = { 1.112, 1.03 };
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0, 1, 0, 0.1 };
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = { 0.50199997, 0.49000001 };
					};
					class WeaponAim : Pos10Vector
					{
						source = "weapon";
					};
					class Target : Pos10Vector
					{
						source = "target";
					};
					class Velocity : Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.50199997, 0.49000001 };
						pos10[] = { 0.56300002, 0.54400003 };
					};
					class SpdMove2
					{
						source = "speed";
						min = 0;
						max = 138.88901;
						type = "linear";
						minPos[] =
						{
							0,
							"0.15*0.65"
						};
						maxPos[] =
						{
							0,
							"0.65*0.65"
						};
					};
					class AGLMove
					{
						type = "linear";
						source = "altitudeAGL";
						min = 0;
						max = 50;
						minPos[] =
						{
							0,
							"0.15*0.65"
						};
						maxPos[] =
						{
							0,
							"0.65*0.65"
						};
					};
					class Heading
					{
						type = "linear";
						source = "Heading";
						min = -36;
						max = 36;
						minPos[] = { 0, 0 };
						maxPos[] = { 1, 0 };
					};
					class TargetDistanceMissile
					{
						type = "rotational";
						source = "targetDist";
						center[] = { 0, 0 };
						min = 100;
						max = 3000;
						minAngle = -120;
						maxAngle = 120;
					};
					class vspeed
					{
						source = "vspeed";
						type = "linear";
						min = -30;
						max = 30;
						minPos[] =
						{
							0,
							"0.15*0.4"
						};
						maxPos[] =
						{
							0,
							"0.75*0.4"
						};
					};
					class HorizonBankMGun
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = { 0, 0 };
						min = -6.2831898;
						max = 6.2831898;
						minAngle = -360;
						maxAngle = 360;
						aspectRatio = 0.88524598;
					};
					class HorizonDive
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = { 0.50199997, 2.49 };
						maxPos[] = { 0.50199997, -1.51 };
					};
				};
				class Draw
				{
					alpha = 0.40000001;
					color[] = { 0, 0.30000001, 0.050000001 };
					condition = "on";
					clipTL[] = { 0, 0 };
					clipBR[] = { 1, 1 };
					class PlaneW
					{
						type = "line";
						points[] =
						{

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.079999998, 0 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.039999999, 0 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.0348, -0.0177049 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.02, -0.030806599 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0, -0.035409801 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.02, -0.030806599 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.0348, -0.0177049 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.039999999, 0 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.079999998, 0 },
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[] = { 0.30000001, 0.30000001 };
						clipBR[] = { 0.69999999, 0.69999999 };
						class Vector
						{
							type = "line";
							points[] =
							{

								{
									"Velocity",
									0.001,
									"PlaneW",
									{ 0, 0 },
									1
								},

								{
									"Velocity",
									{ 0, 0 },
									1
								}
							};
						};
					};
					class Static
					{
						clipTL[] = { 0, 0.1 };
						clipBR[] = { 1, 0 };
						type = "line";
						points[] =
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
						clipTL[] = { 0.25, 0.25 };
						clipBR[] = { 0.75, 0.75 };
						class Dimmed
						{
							class Level00
							{
								type = "line";
								points[] =
								{

									{
										"HorizonDive",
										{ -0.2, 0 },
										1
									},

									{
										"HorizonDive",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"HorizonDive",
										{ -0.0099999998, 0 },
										1
									},

									{
										"HorizonDive",
										{ 0.0099999998, 0 },
										1
									},
									{},

									{
										"HorizonDive",
										{ 0.15000001, 0 },
										1
									},

									{
										"HorizonDive",
										{ 0.2, 0 },
										1
									}
								};
							};
							class Level2M5 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
							};
							class Level2P5 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
							};
							class Level2M10 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
							};
							class Level2P10 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
							};
							class Level2M15 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
							};
							class Level2P15 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
							};
							class Level2M20 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
							};
							class Level2P20 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
							};
							class Level2M25 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
							};
							class Level2P25 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
							};
							class Level2M30 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
							};
							class Level2P30 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
							};
							class Level2M35 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
							};
							class Level2P35 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
							};
							class Level2M40 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
							};
							class Level2P40 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
							};
							class Level2M45 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
							};
							class Level2P45 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
							};
							class Level2M50 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 50;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
							};
							class Level2P50 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -50;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*50*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*50*2/3"
									},
									1
								};
								down[] =
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
						type = "line";
						points[] =
						{

							{
								"Target",
								{ 0, 0.057541002 },
								1
							},

							{
								"Target",
								{ 0.032499999, 0.050060701 },
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
								{ 0.064999998, 0 },
								1
							},

							{
								"Target",
								{ 0.05655, -0.028770501 },
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
								{ 0, -0.057541002 },
								1
							},

							{
								"Target",
								{ -0.032499999, -0.050060701 },
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
								{ -0.064999998, 0 },
								1
							},

							{
								"Target",
								{ -0.05655, 0.028770501 },
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
								{ 0, 0.057541002 },
								1
							}
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.5999999;
						pos[] =
						{

							{
								"0.06+0.1",
								0.07
							},
							1
						};
						right[] =
						{

							{
								"0.14+0.1",
								0.07
							},
							1
						};
						down[] =
						{

							{
								"0.06+0.1",
								0.12
							},
							1
						};
						format = "+%3.0fp";
					};
					class AltNumber : SpeedNumber
					{
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] =
						{

							{
								"0.86-0.1",
								0.07
							},
							1
						};
						right[] =
						{

							{
								"0.94-0.1",
								0.07
							},
							1
						};
						down[] =
						{

							{
								"0.86-0.1",
								0.12
							},
							1
						};
						format = "%3.0f";
					};
					class VspeedNumber : SpeedNumber
					{
						source = "vspeed";
						sourceScale = 1;
						align = "left";
						pos[] =
						{

							{
								"0.86-0.05",
								"0.52+0.03"
							},
							1
						};
						right[] =
						{

							{
								"0.94-0.05",
								"0.52+0.03"
							},
							1
						};
						down[] =
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
						type = "text";
						source = "static";
						text = "+30";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] =
						{

							{
								"0.9-0.05",
								"0.54+0.15*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.05",
								"0.54+0.15*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.05",
								"0.54+0.15*0.4+0.05*5/8"
							},
							1
						};
					};
					class VspeedNumberStaticM30 : VspeedNumberStaticP30
					{
						text = "-30";
						pos[] =
						{

							{
								"0.9-0.05",
								"0.54+0.75*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.05",
								"0.54+0.75*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.05",
								"0.54+0.75*0.4+0.05*5/8"
							},
							1
						};
					};
					class VspeedNumberStaticZERO : VspeedNumberStaticP30
					{
						text = " 0";
						pos[] =
						{

							{
								"0.9-0.05",
								"0.54+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.05",
								"0.54+0.45*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.05",
								"0.54+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class AltStatic50 : VspeedNumberStaticP30
					{
						text = "50";
						pos[] =
						{

							{
								"0.9-0.11",
								"0.08+0.15*0.65"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.11",
								"0.08+0.15*0.65"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.11",
								"0.08+0.15*0.65+0.05*5/8"
							},
							1
						};
					};
					class SpeedStatic500 : VspeedNumberStaticP30
					{
						text = "500";
						align = "left";
						pos[] =
						{

							{
								"0.1+0.1",
								"0.08+0.15*0.65"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.1",
								"0.08+0.15*0.65"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.1",
								"0.08+0.15*0.65+0.05*5/8"
							},
							1
						};
					};
					class SpeedStaticZERO : SpeedStatic500
					{
						text = "0";
						pos[] =
						{

							{
								"0.1+0.1",
								"0.08+0.65*0.65"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.1",
								"0.08+0.65*0.65"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.1",
								"0.08+0.65*0.65+0.05*5/8"
							},
							1
						};
					};
					class NevimStaticZERO : SpeedStatic500
					{
						text = "0";
						pos[] =
						{

							{
								"0.1+0.07",
								"0.54+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.07",
								"0.54+0.45*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.07",
								"0.54+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class NevimStatic1 : NevimStaticZERO
					{
						text = "1";
						pos[] =
						{

							{
								"0.1+0.07",
								"0.58+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.07",
								"0.58+0.45*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.07",
								"0.58+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class NevimStatic3 : NevimStaticZERO
					{
						text = "3";
						pos[] =
						{

							{
								"0.1+0.07",
								"0.42+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.07",
								"0.42+0.45*0.4"
							},
							1
						};
						down[] =
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
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							"0.32-0.01",
							"0.0+0.05"
						};
						right[] =
						{
							"0.38-0.01",
							"0.0+0.05"
						};
						down[] =
						{
							"0.32-0.01",
							"0.04+0.05"
						};
						lineXleft = "0.06+0.05";
						lineYright = "0.05+0.05";
						lineXleftMajor = "0.06+0.05";
						lineYrightMajor = "0.04+0.05";
						bottom = 0.69999999;
						center = 0.5;
						top = 0.30000001;
						step = "18/9";
						StepSize = "(0.70- 0.3)/15";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
				};
			};
		};
		class RenderTargets
		{
			class NoseCam
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.40000001;
				};
			};
		};
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
					initFov = 0.46599999;
					minFov = 0.46599999;
					maxFov = 0.46599999;
					directionStabilized = 1;
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					thermalMode[] = { 0, 1 };
					//gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_Ka50\optika_ka50_rocket.p3d";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				class Medium : Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093000002;
					minFov = 0.093000002;
					maxFov = 0.093000002;
				};
				class Narrow : Wide
				{
					opticsDisplayName = "N";
					initFov = 0.028999999;
					minFov = 0.028999999;
					maxFov = 0.028999999;
				};
				showMiniMapInOptics = 1;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 0;
			maxElev = 0;
			initElev = 0;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable=true;
		};
		memoryPointDriverOptics = "slingCamera";
		unitInfoType = "RscOptics_AV_pilot";
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		class EventHandlers : Eventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class Library
		{
			libTextDesc = "$STR_LIB_KA50";
		};
		ace_cargo_hasCargo = 0;
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = { 0, 7, 1.03 };
		LESH_WheelOffset[] = { 0, -1 };
		class UserActions
		{
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fir_aws_mfd_n_open.sqf""";
				onlyforplayer = "false";
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
		};
		showAllTargets = 4;
		canUseScanner = 1;
		pilotCanSee = 31;
		driverCanSee = 31;
	};
	class JAS_CUP_O_Ka50_SLA : JAS_CUP_KA50_Base
	{
		scope = 2;
		side = 0;
		accuracy = 1.5;
		displayName = "Ka-50J";
		author = "CUP/-{GOL}-Jason";
		crew = "CUP_O_sla_Pilot";
		editorPreview = "\ARMA3_CUP_Enhancement_KA50\UI\editorpreview\Ka50_SLA.jpg";
		fir_ka50_custom_skin=1;
		fir_ka50_custom_name="Ka-50 SLA Green";
		fir_ka50_custom_code="JAS_CUP_O_Ka50_SLA";
		fir_ka50_custom_preview_pic="\ARMA3_CUP_Enhancement_KA50\UI\preview\KA50SLA.paa";
		typicalCargo[] =
		{
			"CUP_O_sla_Pilot",
			"CUP_O_sla_Pilot",
			"CUP_O_sla_Pilot",
			"CUP_O_sla_Pilot",
			"CUP_O_sla_Pilot"
		};
		faction = "CUP_O_SLA";
		weapons[] =
		{
			"JAS_CUP_Vacannon_2A42_veh",
			"FIR_MasterArm",
			"Laserdesignator_mounted",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelectionsTextures[] =
		{
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_01_co.paa",
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_02_co.paa",
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_03_co.paa"
		};
		class UserActions
		{
			class KA50_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "driver this == player and ((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_KA50\sqs\loadout\KA50_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fir_aws_mfd_n_open.sqf""";
				onlyforplayer = "false";
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
			class FindRadarTGT
			{
				displayName = "Find Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""JAS_KH25_LAU"" and this getvariable ""SEAD_SET"" == ""no""; ";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\harmChopper.sqf""; ";
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
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\Search_RDRTGTChopper.sqf""; ";
				onlyforplayer = "False";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEADRUS.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\Fire.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_O_Ka50_RU : JAS_CUP_KA50_Base
	{
		scope = 2;
		side = 0;
		accuracy = 1.5;
		displayName = "Ka-50J";
		author = "CUP/-{GOL}-Jason";
		crew = "CUP_O_RU_Pilot";
		editorPreview = "\ARMA3_CUP_Enhancement_KA50\UI\editorpreview\Ka50_RU.jpg";
		fir_ka50_custom_skin=1;
		fir_ka50_custom_name="Ka-50 Russia Black";
		fir_ka50_custom_code="JAS_CUP_O_Ka50_RU";
		fir_ka50_custom_preview_pic="\ARMA3_CUP_Enhancement_KA50\UI\preview\KA50RUS.paa";
		typicalCargo[] =
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		faction = "CUP_O_RU";
		weapons[] =
		{
			"FIR_MasterArm",
			"JAS_CUP_Vacannon_2A42_veh",
			"Laserdesignator_mounted",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelectionsTextures[] =
		{
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_01_co.paa",
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_02_co.paa",
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_03_co.paa"
		};
		class UserActions
		{
			class KA50_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "driver this == player and ((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_KA50\sqs\loadout\KA50_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fir_aws_mfd_n_open.sqf""";
				onlyforplayer = "false";
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
			class FindRadarTGT
			{
				displayName = "Find Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""JAS_KH25_LAU"" and this getvariable ""SEAD_SET"" == ""no""; ";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\harmChopper.sqf""; ";
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
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\Search_RDRTGTChopper.sqf""; ";
				onlyforplayer = "False";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEADRUS.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\Fire.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_O_Ka50_AAC : JAS_CUP_KA50_Base
	{
		scope = 2;
		side = 0;
		accuracy = 1.5;
		displayName = "Ka-50J";
		author = "CUP/-{GOL}-Jason";
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_ANGEL";
		editorPreview = "\ARMA3_CUP_Enhancement_KA50\UI\editorpreview\Ka50_RU.jpg";
		fir_ka50_custom_skin=0;
		fir_ka50_custom_name="Ka-50 Russia Black";
		fir_ka50_custom_code="JAS_CUP_O_Ka50_RU";
		fir_ka50_custom_preview_pic="\ARMA3_CUP_Enhancement_KA50\UI\preview\KA50RUS.paa";
		crew = "CUP_O_RU_Pilot";
		typicalCargo[] =
		{
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot",
			"CUP_O_RU_Pilot"
		};
		weapons[] =
		{
			"JAS_CUP_Vacannon_2A42_veh",
			"FIR_MasterArm",
			"Laserdesignator_mounted",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelectionsTextures[] =
		{
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_01_co.paa",
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_02_co.paa",
			"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_03_co.paa"
		};
		class UserActions
		{
			class KA50_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "driver this == player and ((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_KA50\sqs\loadout\KA50_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "player in this and isengineon this";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fir_aws_mfd_n_open.sqf""";
				onlyforplayer = "false";
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
			class FindRadarTGT
			{
				displayName = "Find Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""JAS_KH25_LAU"" and this getvariable ""SEAD_SET"" == ""no""; ";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\harmChopper.sqf""; ";
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
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\Search_RDRTGTChopper.sqf""; ";
				onlyforplayer = "False";
			};
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEADRUS.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\Fire.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_CUP_Ka52_Base : Helicopter_Base_H
	{
		destrType = "DestructWreck";
		armor = 80;
		accuracy = 1.5;
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		driveOnComponent[] =
		{
			"f_gear_d3",
			"l_gear_d3",
			"r_gear_d3"
		};
		displayName = "Ka-52J";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[] = { 3.2, 0, 0 };
			defaultCollective = 0.80500001;
			retreatBladeStallWarningSpeed = 83;
			maxTorque = 3300;
			stressDamagePerSec = 0.0099999998;
			maxHorizontalStabilizerLeftStress = 8000;
			maxHorizontalStabilizerRightStress = 8000;
			maxVerticalStabilizerStress = 4000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 225000;
			maxTailRotorStress = 225000;
			rtd_center = "rtd_center";
		};
		class Library
		{
			libTextDesc = "$STR_LIB_KA52";
		};
		model = "\CUP\AirVehicles\CUP_Airvehicles_KA52\CUP_KA52.p3d";
		icon = "\CUP\AirVehicles\CUP_Airvehicles_KA52\data\ui\Icon_ka52_CA.paa";
		mapSize = 15;
		picture = "\CUP\AirVehicles\CUP_Airvehicles_KA52\data\UI\Picture_ka52_CA.paa";
		maxSpeed = 350;
		castDriverShadow = 1;
		viewCargoShadow = 1;
		threat[] = { 0.60000002, 1, 0.80000001 };
		tailBladeVertical = 0;
		maxMainRotorDive = 7;
		minMainRotorDive = -7;
		neutralMainRotorDive = 0;
		mainbladecenter = "main_rotor_center";
		tailbladecenter = "tail_rotor_center";
		gearRetracting = 1;
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		weapons[] =
		{
			"FIR_MasterArm",
			"CUP_Vmlauncher_S8_veh",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"CUP_40Rnd_S8_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		driverAction = "CUP_KA52_Pilot";
		driverInAction = "CUP_KA52_Pilot";
		class HitPoints : HitPoints
		{
			class HitHRotor : HitHRotor
			{
				armor = 0.30000001;
			};
			class HitGlass1 : HitGlass1
			{
				armor = 3;
			};
			class HitGlass2 : HitGlass2
			{
				armor = 3;
			};
			class HitGlass3 : HitGlass3
			{
				armor = 1;
			};
			class HitGlass4 : HitGlass4
			{
				armor = 1;
			};
		};
		laserScanner = 1;
		class ViewPilot
		{
			initFov = 1;
			minFov = 0.30000001;
			maxFov = 1.2;
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -125;
			maxAngleY = 125;
		};
		class Viewoptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_Airvehicles_KA52\data\ka52_01_RU_co.paa",
			"\CUP\AirVehicles\CUP_Airvehicles_KA52\data\ka52_02_RU_co.paa"
		};
		enableManualFire = 1;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				startEngine = 0;
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				minElev = -10;
				maxElev = 10;
				initElev = 0;
				minTurn = -9;
				maxTurn = 2;
				initTurn = 0;
				isCoPilot = 1;
				class Viewoptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.067000002;
					minFov = 0.018999999;
					maxFov = 0.067000002;
				};
				soundServo[] =
				{
					"",
					"db-40",
					1
				};
				outGunnerMayFire = 1;
				commanding = -1;
				primaryGunner = 1;
				memoryPointsGetInGunner = "Pos_Gunner";
				memoryPointsGetInGunnerDir = "Pos_Gunner_dir";
				memoryPointGun = "machinegun";
				gunBeg = "gunstart";
				gunEnd = "gunend";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "CUP_KA52_Gunner";
				gunnerInAction = "CUP_KA52_Gunner";
				gunnerOpticsModel = "\CUP\AirVehicles\CUP_AirVehicles_Ka50\optika_Ka50_gun";
				gunnerOpticsEffect[] =
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerForceOptics = 0;
				weapons[] =
				{
					"CUP_Vacannon_2A42_Ka50",
					"Laserdesignator_mounted",
					"CUP_Vmlauncher_AT16_veh"
				};
				magazines[] =
				{
					"CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
					"CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
					"Laserbatteries",
					"CUP_12Rnd_AT16_M"
				};
				class HitTurret
				{
					armor = 0.80000001;
					material = -1;
					name = "gun1";
					visual = "gun1";
					passThrough = 0.5;
				};
				class HitGun
				{
					armor = 0.40000001;
					material = -1;
					name = "gun2";
					visual = "gun2";
					passThrough = 0.2;
				};
			};
		};
		insideSoundCoef = 0.30000001;
		attenuationEffectType = "HeliAttenuation";
		emptySound[] =
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[] =
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[] =
		{
			"emptySound",
			0
		};
		soundBuildingCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[] =
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[] =
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[] =
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[] =
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_door",
			1,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_door",
			1,
			1,
			50
		};
		soundEngineOnInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_start2",
			0.15848932,
			1
		};
		soundEngineOnExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_start2",
			0.79432821,
			1,
			600
		};
		soundEngineOffInt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_stop2",
			0.19952624,
			1
		};
		soundEngineOffExt[] =
		{
			"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_stop2",
			0.79432821,
			1,
			600
		};
		soundLocked[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		rotorDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",
			1,
			1
		};
		rotorDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",
			2.5118864,
			1,
			300
		};
		rotorDamage[] =
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[] =
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[] =
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[] =
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[] =
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[] =
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[] =
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_engine",
					1.7782794,
					1,
					900
				};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_rotor",
					1.1220185,
					1,
					2000
				};
				frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
				volume = "2*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
			};
			class RotorNoiseExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\rotor_swist",
					1,
					1,
					400
				};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				cone[] = { 0.69999999, 1.3, 1, 0 };
			};
			class EngineInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_engine",
					1.1220185,
					1
				};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_rotor",
					0.89125091,
					1
				};
				frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.31622776,
					1
				};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.2238721,
					1,
					20
				};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] =
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] =
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.56234133,
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
					0.50118721,
					1,
					50
				};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[40,60])";
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
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_engine",
						1.7782794,
						1,
						900
					};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_rotor",
						1.1220185,
						1,
						2000
					};
					frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
					volume = "2*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[] = { 1.6, 3.1400001, 1.6, 0.94999999 };
				};
				class RotorNoiseExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\rotor_swist",
						1,
						1,
						400
					};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
					cone[] = { 0.69999999, 1.3, 1, 0 };
				};
				class EngineInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_engine",
						1.1220185,
						1
					};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_rotor",
						0.89125091,
						1
					};
					frequency = "rotorSpeed*(1-rotorThrust/8)*1.2";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.31622776,
						1
					};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.2238721,
						1,
						20
					};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.2238721,
						1,
						20
					};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] =
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] =
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.56234133,
						1,
						50
					};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
						0.50118721,
						1,
						50
					};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[] =
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[40,60])";
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				brightness = 1;
				color[] = { 7000, 7500, 10000 };
				ambient[] = { 70, 75, 100 };
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
			};
			class Right : Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};
		dammageHalf[] =
		{
			"\CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_cauges_CO.paa",
			"\CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_caugesmf_CO.paa"
		};
		dammageFull[] =
		{
			"\CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_cauges_CO.paa",
			"\CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_caugesmf_CO.paa"
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_01.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_01_damage.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_01_destruct.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_02.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_02_damage.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_02_destruct.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_glass.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_glass_in.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\ka52_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_cauges_light.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_cauges_bug.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_cauges_bug.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_weapons.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_weapons_damage.rvmat",
				"CUP\AirVehicles\CUP_Airvehicles_KA52\Data\Ka52_weapons_destruct.rvmat"
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = { 0.50199997, 0.49000001 };
					pos10[] = { 1.112, 1.03 };
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0, 1, 0, 0.1 };
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = { 0.50199997, 0.49000001 };
					};
					class WeaponAim : Pos10Vector
					{
						source = "weapon";
					};
					class Target : Pos10Vector
					{
						source = "target";
					};
					class Velocity : Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.50199997, 0.49000001 };
						pos10[] = { 0.56300002, 0.54400003 };
					};
					class SpdMove2
					{
						source = "speed";
						min = 0;
						max = 138.88901;
						type = "linear";
						minPos[] =
						{
							0,
							"0.15*0.65"
						};
						maxPos[] =
						{
							0,
							"0.65*0.65"
						};
					};
					class AGLMove
					{
						type = "linear";
						source = "altitudeAGL";
						min = 0;
						max = 50;
						minPos[] =
						{
							0,
							"0.15*0.65"
						};
						maxPos[] =
						{
							0,
							"0.65*0.65"
						};
					};
					class Heading
					{
						type = "linear";
						source = "Heading";
						min = -36;
						max = 36;
						minPos[] = { 0, 0 };
						maxPos[] = { 1, 0 };
					};
					class TargetDistanceMissile
					{
						type = "rotational";
						source = "targetDist";
						center[] = { 0, 0 };
						min = 100;
						max = 3000;
						minAngle = -120;
						maxAngle = 120;
					};
					class vspeed
					{
						source = "vspeed";
						type = "linear";
						min = -30;
						max = 30;
						minPos[] =
						{
							0,
							"0.15*0.4"
						};
						maxPos[] =
						{
							0,
							"0.75*0.4"
						};
					};
					class HorizonBankMGun
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = { 0, 0 };
						min = -6.2831898;
						max = 6.2831898;
						minAngle = -360;
						maxAngle = 360;
						aspectRatio = 0.88524598;
					};
					class HorizonDive
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = { 0.50199997, 2.49 };
						maxPos[] = { 0.50199997, -1.51 };
					};
				};
				class Draw
				{
					alpha = 0.40000001;
					color[] = { 0, 0.30000001, 0.050000001 };
					condition = "on";
					clipTL[] = { 0, 0 };
					clipBR[] = { 1, 1 };
					class PlaneW
					{
						type = "line";
						points[] =
						{

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.079999998, 0 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.039999999, 0 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.0348, -0.0177049 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ -0.02, -0.030806599 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0, -0.035409801 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.02, -0.030806599 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.0348, -0.0177049 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.039999999, 0 },
								1
							},

							{
								"PlaneW",
								1,
								"HorizonBankMGun",
								{ 0.079999998, 0 },
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[] = { 0.30000001, 0.30000001 };
						clipBR[] = { 0.69999999, 0.69999999 };
						class Vector
						{
							type = "line";
							points[] =
							{

								{
									"Velocity",
									0.001,
									"PlaneW",
									{ 0, 0 },
									1
								},

								{
									"Velocity",
									{ 0, 0 },
									1
								}
							};
						};
					};
					class Static
					{
						clipTL[] = { 0, 0.1 };
						clipBR[] = { 1, 0 };
						type = "line";
						points[] =
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
						clipTL[] = { 0.25, 0.25 };
						clipBR[] = { 0.75, 0.75 };
						class Dimmed
						{
							class Level00
							{
								type = "line";
								points[] =
								{

									{
										"HorizonDive",
										{ -0.2, 0 },
										1
									},

									{
										"HorizonDive",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"HorizonDive",
										{ -0.0099999998, 0 },
										1
									},

									{
										"HorizonDive",
										{ 0.0099999998, 0 },
										1
									},
									{},

									{
										"HorizonDive",
										{ 0.15000001, 0 },
										1
									},

									{
										"HorizonDive",
										{ 0.2, 0 },
										1
									}
								};
							};
							class Level2M5 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*5*2/3"
									},
									1
								};
							};
							class Level2P5 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*5*2/3"
									},
									1
								};
							};
							class Level2M10 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*10*2/3"
									},
									1
								};
							};
							class Level2P10 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*10*2/3"
									},
									1
								};
							};
							class Level2M15 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*15*2/3"
									},
									1
								};
							};
							class Level2P15 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*15*2/3"
									},
									1
								};
							};
							class Level2M20 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*20*2/3"
									},
									1
								};
							};
							class Level2P20 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -20;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*20*2/3"
									},
									1
								};
							};
							class Level2M25 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*25*2/3"
									},
									1
								};
							};
							class Level2P25 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -25;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*25*2/3"
									},
									1
								};
							};
							class Level2M30 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*30*2/3"
									},
									1
								};
							};
							class Level2P30 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -30;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*30*2/3"
									},
									1
								};
							};
							class Level2M35 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*35*2/3"
									},
									1
								};
							};
							class Level2P35 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -35;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*35*2/3"
									},
									1
								};
							};
							class Level2M40 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*40*2/3"
									},
									1
								};
							};
							class Level2P40 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -40;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*40*2/3"
									},
									1
								};
							};
							class Level2M45 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*45*2/3"
									},
									1
								};
							};
							class Level2P45 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -45;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3+0.54/10*45*2/3"
									},
									1
								};
							};
							class Level2M50 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = 50;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3*+0.03",
										"-0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
								down[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"0.025*2/3-0.54/10*50*2/3"
									},
									1
								};
							};
							class Level2P50 : Level00
							{
								type = "line";
								points[] =
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
								type = "text";
								source = "static";
								text = -50;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"HorizonDive",

									{
										"-0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*50*2/3"
									},
									1
								};
								right[] =
								{
									"HorizonDive",

									{
										"0.04*2/3+0.03",
										"-0.025*2/3+0.54/10*50*2/3"
									},
									1
								};
								down[] =
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
						type = "line";
						points[] =
						{

							{
								"Target",
								{ 0, 0.057541002 },
								1
							},

							{
								"Target",
								{ 0.032499999, 0.050060701 },
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
								{ 0.064999998, 0 },
								1
							},

							{
								"Target",
								{ 0.05655, -0.028770501 },
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
								{ 0, -0.057541002 },
								1
							},

							{
								"Target",
								{ -0.032499999, -0.050060701 },
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
								{ -0.064999998, 0 },
								1
							},

							{
								"Target",
								{ -0.05655, 0.028770501 },
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
								{ 0, 0.057541002 },
								1
							}
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.5999999;
						pos[] =
						{

							{
								"0.06+0.1",
								0.07
							},
							1
						};
						right[] =
						{

							{
								"0.14+0.1",
								0.07
							},
							1
						};
						down[] =
						{

							{
								"0.06+0.1",
								0.12
							},
							1
						};
						format = "+%3.0fp";
					};
					class AltNumber : SpeedNumber
					{
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] =
						{

							{
								"0.86-0.1",
								0.07
							},
							1
						};
						right[] =
						{

							{
								"0.94-0.1",
								0.07
							},
							1
						};
						down[] =
						{

							{
								"0.86-0.1",
								0.12
							},
							1
						};
						format = "%3.0f";
					};
					class VspeedNumber : SpeedNumber
					{
						source = "vspeed";
						sourceScale = 1;
						align = "left";
						pos[] =
						{

							{
								"0.86-0.05",
								"0.52+0.03"
							},
							1
						};
						right[] =
						{

							{
								"0.94-0.05",
								"0.52+0.03"
							},
							1
						};
						down[] =
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
						type = "text";
						source = "static";
						text = "+30";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] =
						{

							{
								"0.9-0.05",
								"0.54+0.15*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.05",
								"0.54+0.15*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.05",
								"0.54+0.15*0.4+0.05*5/8"
							},
							1
						};
					};
					class VspeedNumberStaticM30 : VspeedNumberStaticP30
					{
						text = "-30";
						pos[] =
						{

							{
								"0.9-0.05",
								"0.54+0.75*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.05",
								"0.54+0.75*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.05",
								"0.54+0.75*0.4+0.05*5/8"
							},
							1
						};
					};
					class VspeedNumberStaticZERO : VspeedNumberStaticP30
					{
						text = " 0";
						pos[] =
						{

							{
								"0.9-0.05",
								"0.54+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.05",
								"0.54+0.45*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.05",
								"0.54+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class AltStatic50 : VspeedNumberStaticP30
					{
						text = "50";
						pos[] =
						{

							{
								"0.9-0.11",
								"0.08+0.15*0.65"
							},
							1
						};
						right[] =
						{

							{
								"0.95-0.11",
								"0.08+0.15*0.65"
							},
							1
						};
						down[] =
						{

							{
								"0.9-0.11",
								"0.08+0.15*0.65+0.05*5/8"
							},
							1
						};
					};
					class SpeedStatic500 : VspeedNumberStaticP30
					{
						text = "500";
						align = "left";
						pos[] =
						{

							{
								"0.1+0.1",
								"0.08+0.15*0.65"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.1",
								"0.08+0.15*0.65"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.1",
								"0.08+0.15*0.65+0.05*5/8"
							},
							1
						};
					};
					class SpeedStaticZERO : SpeedStatic500
					{
						text = "0";
						pos[] =
						{

							{
								"0.1+0.1",
								"0.08+0.65*0.65"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.1",
								"0.08+0.65*0.65"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.1",
								"0.08+0.65*0.65+0.05*5/8"
							},
							1
						};
					};
					class NevimStaticZERO : SpeedStatic500
					{
						text = "0";
						pos[] =
						{

							{
								"0.1+0.07",
								"0.54+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.07",
								"0.54+0.45*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.07",
								"0.54+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class NevimStatic1 : NevimStaticZERO
					{
						text = "1";
						pos[] =
						{

							{
								"0.1+0.07",
								"0.58+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.07",
								"0.58+0.45*0.4"
							},
							1
						};
						down[] =
						{

							{
								"0.1+0.07",
								"0.58+0.45*0.4+0.05*5/8"
							},
							1
						};
					};
					class NevimStatic3 : NevimStaticZERO
					{
						text = "3";
						pos[] =
						{

							{
								"0.1+0.07",
								"0.42+0.45*0.4"
							},
							1
						};
						right[] =
						{

							{
								"0.15+0.07",
								"0.42+0.45*0.4"
							},
							1
						};
						down[] =
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
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] =
						{
							"0.32-0.01",
							"0.0+0.05"
						};
						right[] =
						{
							"0.38-0.01",
							"0.0+0.05"
						};
						down[] =
						{
							"0.32-0.01",
							"0.04+0.05"
						};
						lineXleft = "0.06+0.05";
						lineYright = "0.05+0.05";
						lineXleftMajor = "0.06+0.05";
						lineYrightMajor = "0.04+0.05";
						bottom = 0.69999999;
						center = 0.5;
						top = 0.30000001;
						step = "18/9";
						StepSize = "(0.70- 0.3)/15";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
				};
			};
		};
	};
	class JAS_CUP_O_Ka52_RU : JAS_CUP_Ka52_Base
	{
		scope = 2;
		side = 0;
		accuracy = 1.5;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		crew = "CUP_O_RU_Pilot";
		editorPreview = "\ARMA3_CUP_Enhancement_KA50\UI\editorpreview\Ka50_RU.jpg";
		typicalCargo[] =
		{
			"CUP_O_RU_Pilot"
		};
		faction = "CUP_O_RU";
	};
	class JAS_CUP_O_Ka52_AAC : JAS_CUP_Ka52_Base
	{
		scope = 2;
		side = 0;
		accuracy = 1.5;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		crew = "CUP_O_RU_Pilot";
		editorPreview = "\ARMA3_CUP_Enhancement_KA50\UI\editorpreview\Ka50_RU.jpg";
		typicalCargo[] =
		{
			"CUP_O_RU_Pilot"
		};
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_ANGEL";
	};
	class JAS_KA50_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Ka-50 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_KA50_Loadout";
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
					class hp1_fab
					{
						name="FAB-250";
						value=3;
					};
					class hp1_kab
					{
						name="KAB-250";
						value=4;
					};
					class hp1_GSh
					{
						name="GSh-23 Gun Pod";
						value=5;
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
					class hp2_fab
					{
						name="FAB-250";
						value=3;
					};
					class hp2_kab
					{
						name="KAB-250";
						value=4;
					};
					class hp2_GSh
					{
						name="GSh-23 Gun Pod";
						value=5;
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
					class hp3_vik
					{
						name="VIKHIR x6";
						value=3;
					};
					class hp3_igla
					{
						name="IGLA x2";
						value=4;
					};
					class hp3_kh25
					{
						name="Kh-25";
						value=5;
					};
					class hp3_29
					{
						name="Kh-29 x6";
						value=6;
					};
					class hp3_fab
					{
						name="FAB-250";
						value=7;
					};
					class hp3_kab
					{
						name="KAB-250";
						value=8;
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
					class hp4_vik
					{
						name="VIKHIR x6";
						value=3;
					};
					class hp4_igla
					{
						name="IGLA x2";
						value=4;
					};
					class hp4_kh25
					{
						name="Kh-25";
						value=5;
					};
					class hp4_29
					{
						name="Kh-29 x6";
						value=6;
					};
					class hp4_fab
					{
						name="FAB-250";
						value=7;
					};
					class hp4_kab
					{
						name="KAB-250";
						value=8;
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
					class SLA
					{
						name="Sahrani Liberation Army (Green)";
						value=0;
						default=1;
					};
					class RUS
					{
						name="Russian Air Force (Black)";
						value=1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="Ka-50 Loadout Module";
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
