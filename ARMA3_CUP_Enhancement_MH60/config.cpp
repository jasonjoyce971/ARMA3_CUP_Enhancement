class CfgPatches
{
	class ARMA3_CUP_Enhancement_MH60
	{
		units[]=
		{
			"JAS_CUP_B_MH60S_FFV_USMC",
			"JAS_CUP_B_MH60S_FFV_AAC"
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
		class ARMA3_CUP_Enhancement_MH60
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_MH60"
			};
		};
	};
};
/* class CfgMissions
{
	// Campaigns
	class Campaigns
	{
		class RootCampaign
		{
			// Each of these definitions are applied to the root campaign
			briefingname = $STR_A3_CampaignName;
			overviewText = $STR_A3_CampaignOverview;
			author = $STR_A3_Bohemia_Interactive;
			overviewPicture = "a3\Missions_F_EPA\data\img\Campaign_overview_CA.paa";
			// Classes of episodes included
			campaigns[] = {StageA, StageB, StageC};
			class StageA
			{
				directory = "A3\Missions_F_EPA\Campaign";	
				//include the campaign description.ext to make it's content re-usable outside of the campaign
				#include "\A3\Missions_F_EPA\Campaign\description.ext"
			};
			class StageB
			{
				directory = "A3\Missions_F_EPA\CampaignDummy";
			};
			class StageC
			{
				directory = "A3\Missions_F_EPA\CampaignDummy2";
			};
		};
	};
	// Showcase missions
	class Showcases
	{
		displayName = $STR_A3_CFGMISSIONS_SHOWCASES0;
		briefingName = $STR_A3_CFGMISSIONS_SHOWCASES0;
		author = $STR_A3_Bohemia_Interactive;
		overviewPicture = "a3\Missions_F_Beta\data\img\Campaign_overview_CA.paa";
		overviewText = $STR_A3_CFGMISSIONS_SHOWCASES0;
		class Showcase_Ranges
		{
			briefingName = "-{GOL}- AAC Weapons Training";
			directory = "ARMA3_CUP_Enhancement_MH60\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_MH60\presentation\picture.paa";
			author = "-{GOL}-Jason";
		};
	};
	// Multiplayer missions
	class MPMissions
	{
		class MP_COOP_m01
		{
			briefingName="@STR_A3_MP_COOP_m01_briefingName";
			directory = "A3\missions_f\mpscenarios\MP_COOP_m01.Stratis";
		};
	};
	// Challenges
	class Challenges
	{
		briefingName = $STR_A3_CHALLENGES_NAME;
		overviewText = $STR_A3_CHALLENGES_OVERVIEW;
		overviewPicture = "\a3\Missions_F_Beta\data\img\Challenges_overview_CA.paa";
		// Firing Drills
		author = $STR_A3_Bohemia_Interactive;
		class Firing_Drills
		{
			briefingName = $STR_A3_FIRING_DRILLS_NAME;
			overviewText = $STR_A3_FIRING_DRILLS_OVERVIEW;
			overviewPicture = "\a3\Missions_F_Beta\data\img\FiringDrills_overview_CA.paa";
			author = $STR_A3_Bohemia_Interactive;
			class SP_FD04 //Green
			{
				directory = "a3\Missions_F_Beta\Challenges\firing_drills\sp_fd04.stratis";
				briefingName = $STR_A3_FIRING_DRILLS_SP_FD04_NAME;
				overviewText = $STR_A3_FIRING_DRILLS_SP_FD04_OVERVIEW;
				overviewPicture = "\a3\Missions_F_Beta\data\img\SP_FD04_overview_CA.paa";
				author = $STR_A3_Bohemia_Interactive;
			};
		};
	};
}; */
class Components;
class SensorTemplatePassiveRadar;
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
class CfgHints
{
	class AWSAIRCRAFT
	{
		class UH60
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "UH-60 Blackhawk";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The UH-60 is the US Armys primary transport chopper. The airframe is robust, the systems are reliable and the platform is easy to adjust to task, traits that have resulted in numerous other variants including the US Navy SH-60 Seahawk.<br/><br/>Factions:<br/><br/>%2NATO<br/>%2US Army<br/>%2USMC (SH-60)<br/>%2Royal Army Corps of Sahrani";
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
class MH60_GUI
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
			text = "ARMA3_CUP_Enhancement_MH60\ui\MH60_background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\MH60_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\MH60_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\MH60_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\MH60_SaveCustom.sqf""";
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
class SH60_GUI
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
			text = "ARMA3_CUP_Enhancement_MH60\ui\SH60_background.paa";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\SH60_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\SH60_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\SH60_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\SH60_SaveCustom.sqf""";
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
			class Turrets;
			class HitPoints;
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
			class RightDoorGun;
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
	class JAS_CUP_MH60S_Base : Helicopter_Base_H
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
		model="CUP\AirVehicles\CUP_AirVehicles_MH60S\CUP_MH_60mg.p3d";
		picture="CUP\AirVehicles\CUP_AirVehicles_MH60S\data\ui\mh_60mg_ca.paa";
		icon="CUP\AirVehicles\CUP_AirVehicles_MH60S\data\ui\icomap_mh60mg_ca.paa";
		mapSize=17;
		displayName="MH-60S Seahawk";
		expansion=3;
		dlc="CUP_Vehicles";
		CUP_Jumping_enabled=1;
		CUP_JumpPoint[]=
		{
			"pos para left",
			"pos para right"
		};
		side=1;
		destrType="DestructWreck";
		vehicleClass="Air";
		hideWeaponsCargo=1;
		transportSoldier=12;
		transportMaxBackpacks=13;
		accuracy=1.5;
		attendant=1;
		maxSpeed=270;
		altFullForce=5090;
		altNoForce=7190;
		armor=35;
		damageResistance=0.00242;
		cost=10000000;
		mainRotorSpeed=-1;
		backRotorSpeed=1;
		mainBladeRadius=7.5;
		tailBladeRadius=1;
		bodyFrictionCoef=1;
		driverInAction="CUP_UH60_Pilot";
		driverAction="CUP_UH60_Pilot";
		cargoAction[]=
		{
			"passenger_generic01_leanleft",
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright",
			"passenger_generic01_foldhands",
			"passenger_mantisrear",
			"passenger_mantisrear",
			"passenger_generic01_foldhands"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment4"
		};
		transportAmmo=0;
		supplyRadius=-0.5;
		initCargoAngleY=10;
		minCargoAngleY=-60;
		maxCargoAngleY=120;
		threat[]={0.30000001,1,0.40000001};
		numberPhysicalWheels=3;
		cargoIsCoDriver[]={1,0,0};
		transportMaxMagazines=150;
		transportMaxWeapons=30;
		castDriverShadow=1;
		castCargoShadow=1;
		weapons[] =
		{
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		driverLeftHandAnimName="";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="";
		driverRightLegAnimName="";
		cargoProxyIndexes[]={2,3,4,5,6,7,8,9,10,11,12,13};
		usePreciseGetInAction=1;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		selectionHRotorStill="velka vrtule static";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule static";
		selectionVRotorMove="mala vrtule blur";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_M240_veh_W";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_M240_veh_W";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_M240_veh_W";
			};
			class ReloadAnim_2
			{
				source="reload";
				weapon="CUP_M240_veh2_W";
			};
			class ReloadMagazine_2
			{
				source="reloadmagazine";
				weapon="CUP_M240_veh2_W";
			};
			class Revolving_2
			{
				source="revolving";
				weapon="CUP_M240_veh2_W";
			};
			class m240_2_muzzle_rot
			{
				source="ammorandom";
				weapon="CUP_M240_veh2_W";
			};
			class m240_muzzle_rot
			{
				source="ammorandom";
				weapon="CUP_M240_veh_W";
			};
			class Doors
			{
				source="user";
				animPeriod=1.6;
				initphase=0;
				sound="ServoDoorsSound";
			};
			class Tail_move
			{
				source="user";
				animPeriod=10;
				initPhase=0;
			};
			class left_elev
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class right_elev
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class Hide_ESSS2x
			{
				DisplayName="Hide ESSS2x";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_ESSS4x: Hide_ESSS2x
			{
				DisplayName="Hide ESSS4x";
			};
			class mainRotor_folded
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class mainRotor_unfolded: mainRotor_folded
			{
				source="user";
				initPhase=0;
			};
			class mainRotor_unfolded1: mainRotor_unfolded
			{
				source="user";
				initPhase=0;
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				userActionID=50;
				displayName="Open Doors";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""doors"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"",1];";
			};
			class CloseDoors: OpenDoors
			{
				userActionID=53;
				displayName="Close Doors";
				condition="this animationPhase ""doors"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"", 0]";
			};
			class Pack
			{
				displayName="Pack";
				displayNameDefault="Pack";
				position="doors_axis";
				radius=10;
				onlyForPlayer=1;
				condition="(!isEngineOn this) AND {(this animationphase 'Tail_move' !=1) AND (driver this == player) AND (speed this == 0)}";
				statement="[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_MH60S\Data\Scripts\MH60S_fold.sqf""";
			};
			class unPack
			{
				displayName="UnPack";
				displayNameDefault="Unpack";
				position="doors_axis";
				radius=10;
				onlyForPlayer=1;
				condition="this animationphase ""Tail_move"" !=0 AND driver this == player";
				statement="[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_MH60S\Data\Scripts\MH60S_fold.sqf""";
			};
		};
		class Library
		{
			libTextDesc="";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_skla.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_skla_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_skla_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_skla_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_skla_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_skla_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_01.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_01_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_MH60S\data\uh60_01_destruct.rvmat"
			};
		};
		enableManualFire=0;
		class MFD
		{
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="CUP_UH60_Pilot";
				gunnerInAction="CUP_UH60_Pilot";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				proxyIndex=3;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment3";
				commanding=-3;
			};
			class MainTurret: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-60;
				maxElev=30;
				initElev=0;
				minTurn=15;
				maxTurn=160;
				initTurn=90;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				animationSourceHatch="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				gunnerName="Left Gunner";
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsShowCursor=0;
				memoryPointGunnerOptics="gunnerview";
				gunnerAction="CUP_UH60M_Gunner_EP1";
				gunnerInAction="CUP_UH60M_Gunner_EP1";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]=
				{
					"CUP_M240_veh_W"
				};
				magazines[]=
				{
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
				};
				commanding=-2;
				primaryGunner=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.60000002;
					minFov=0.30000001;
					maxFov=0.75;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=1;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
				playerPosition=3;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				LODTurnedIn=1;
				LODTurnedOut=1;
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-160;
				maxTurn=-15;
				initTurn=-90;
				body="Turret_2";
				gun="Gun_2";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				selectionFireAnim="zasleh_1";
				proxyIndex=2;
				gunnerName="Right Gunner";
				weapons[]=
				{
					"CUP_M240_veh2_W"
				};
				commanding=-3;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				primaryGunner=0;
				memoryPointGun="machinegun_1";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerDoor="";
				turretCanSee="1 + 2 + 4 + 8 + 16";
				LODTurnedIn=1;
				LODTurnedOut=1;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
				position="exhaust1";
			};
			class Exhaust2
			{
				direction="exhaust2_dir";
				effect="ExhaustEffectHeli";
				position="exhaust2";
			};
			class Exhaust3
			{
				direction="exhaust3_dir";
				effect="ExhaustEffectHeli";
				position="exhaust3";
			};
			class Exhaust4
			{
				direction="exhaust4_dir";
				effect="ExhaustEffectHeli";
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
				blinkingPattern[]={0.89999998,0.1};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class WhiteBlinking
			{
				name="pos_light_blink_white";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="light_l";
				direction="light_l_direction";
				hitpoint="light_l";
				selection="light_l";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=6;
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
				position="light_r";
				direction="light_r_direction";
				hitpoint="light_r";
				selection="light_r";
			};
		};
		slingLoadMaxCargoMass=4100;
		slingLoadMemoryPoint="slingLoad0";
		driveOnComponent[]=
		{
			"dampers",
			"damper_rear"
		};
		insideSoundCoef=0.2;
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\heli_door_01",
			"db-10",
			1
		};
		soundGetOut[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\heli_door_01",
			"db-10",
			1,
			30
		};
		soundEnviron[]=
		{
			"",
			"db-30",
			1
		};
		soundDammage[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\alarm_loop1",
			"db-60",
			1
		};
		soundEngineOnInt[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\int\int-start-final",
			"db-20",
			1
		};
		soundEngineOnExt[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\ext\ext-motor-start",
			"db0",
			1,
			800
		};
		soundEngineOffInt[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\int\int-stop-final",
			"db-20",
			1
		};
		soundEngineOffExt[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\ext\ext-motor-stop",
			"db0",
			1,
			800
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
					"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\ext\ext-fly-mode2",
					"db0",
					1,
					900
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\int\int-rotor-single5b",
					"db0",
					1,
					1400
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
					"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\int\int-fly-mode7",
					"db0",
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[]=
				{
					"\CUP\AirVehicles\CUP_AirVehicles_MH60S\sounds\int\int-rotor-single5b",
					"db0",
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
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[]={3,2.45,0};
			defaultCollective=0.625;
			retreatBladeStallWarningSpeed=85.556;
			maxTorque=1100;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=200000;
			maxTailRotorStress=25000;
			rtd_center="rtd_center";
		};
		LESH_canBeTowed=1;
		LESH_towFromFront=0;
		LESH_AxisOffsetTarget[]={0,-8.1999998,-0.95999998};
		LESH_WheelOffset[]={0,3};
		ace_refuel_fuelCapacity=1360;
	};
	class JAS_CUP_MH60S_FFV_Base : JAS_CUP_MH60S_Base
	{
		displayname = "MH-60S Seahawk (FFV)";
		hideWeaponsCargo = 1;
		transportSoldier = 4;
		cargoProxyIndexes[] = { 2, 3, 4, 5, 14, 15, 16, 17 };
		editorPreview="ARMA3_CUP_Enhancement_MH60\UI\editorpreview\MH60.jpg";
		class CargoTurret;
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
			};
			class MainTurret : MainTurret
			{
			};
			class RightDoorGun : RightDoorGun
			{
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerGetInAction = "GetInLOW";
				gunnerGetOutAction = "GetOutLOW";
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Front Left FFV";
				proxyIndex = 14;
				maxElev = 45;
				minElev = -45;
				maxTurn = 75;
				minTurn = -40;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -40, 60 };
				};
				playerPosition = 4;
				soundAttenuationTurret = "";
				disableSoundAttenuation = 1;
				LODTurnedIn = 1;
				LODTurnedOut = 1;
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerName = "Back Left FFV";
				proxyIndex = 15;
				maxElev = 45;
				minElev = -45;
				maxTurn = 65;
				minTurn = -75;
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -45, 65 };
				};
			};
			class CargoTurret_03 : CargoTurret_01
			{
				gunnerName = "Back Right FFV";
				proxyIndex = 16;
				maxElev = 45;
				minElev = -45;
				maxTurn = 70;
				minTurn = -50;
				class dynamicViewLimits
				{
					CargoTurret_04[] = { -50, 55 };
				};
			};
			class CargoTurret_04 : CargoTurret_01
			{
				gunnerName = "Front Right FFV";
				proxyIndex = 17;
				maxElev = 45;
				minElev = -45;
				maxTurn = 40;
				minTurn = -70;
				class dynamicViewLimits
				{
					CargoTurret_03[] = { -60, 40 };
				};
			};
		};
		class AnimationSources : AnimationSources
		{
			class Doors
			{
				source = "user";
				animPeriod = 1.6;
				initphase = 1;
				sound = "ServoDoorsSound";
			};
			class Seats_Hide
			{
				source = "user";
				initphase = 1;
				animperiod = 1;
			};
		};
		class UserActions
		{
			class CloseDoors
			{
				userActionID=53;
				displayName="Close Doors";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""doors"" > 0.5 AND driver this == player AND Alive(this) AND false";
				statement="this animate [""doors"", 0]";
			};
			class Pack
			{
				displayName="Pack";
				displayNameDefault="Pack";
				position="doors_axis";
				radius=10;
				onlyForPlayer=1;
				condition="(!isEngineOn this) AND {(this animationphase 'Tail_move' !=1) AND (driver this == player) AND (speed this == 0)}";
				statement="[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_MH60S\Data\Scripts\MH60S_fold.sqf""";
			};
			class unPack
			{
				displayName="UnPack";
				displayNameDefault="Unpack";
				position="doors_axis";
				radius=10;
				onlyForPlayer=1;
				condition="this animationphase ""Tail_move"" !=0 AND driver this == player";
				statement="[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_MH60S\Data\Scripts\MH60S_fold.sqf""";
			};
		};
	};
	class JAS_CUP_B_MH60S_FFV_USMC : JAS_CUP_MH60S_FFV_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		faction = "CUP_B_USMC";
		side = 1;
		crew = "CUP_B_USMC_Pilot";
		typicalCargo[] =
		{
			"CUP_B_USMC_Pilot",
			"CUP_B_USMC_Pilot",
			"CUP_B_USMC_Pilot"
		};
		availableForSupportTypes[] =
		{
			"Drop",
			"Transport"
		};
	};
	class JAS_CUP_B_MH60S_FFV_AAC : JAS_CUP_MH60S_FFV_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		side = 1;
		crew = "CUP_B_USMC_Pilot";
		typicalCargo[] =
		{
			"CUP_B_USMC_Pilot",
			"CUP_B_USMC_Pilot",
			"CUP_B_USMC_Pilot"
		};
		availableForSupportTypes[] =
		{
			"Drop",
			"Transport"
		};
	};
	class CUP_Uh60_Base: Helicopter_Base_H {};
	class CUP_Uh60L_Base: CUP_Uh60_Base {};
	class CUP_Uh60_FFV_Base: CUP_Uh60_Base {};
	class CUP_Uh60L_FFV_Base: CUP_Uh60_FFV_Base {};
	class CUP_UH60_Unarmed_Base: CUP_Uh60_Base {};
	class CUP_Uh60L_Unarmed_Base: CUP_UH60_Unarmed_Base {};
	class CUP_Uh60_Unarmed_FFV_Base: CUP_UH60_Unarmed_Base {};
	class CUP_Uh60L_Unarmed_FFV_Base: CUP_Uh60_Unarmed_FFV_Base {};
	class CUP_MH60L_Dap_4x_Base: CUP_Uh60_Base {};
	class JAS_MH60L_DAP: CUP_MH60L_Dap_4x_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		side=1;
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_MH60L_DAP_4x_AT_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				userActionID=50;
				displayName="Open Doors";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""doors"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"",1];";
			};
			class CloseDoors: OpenDoors
			{
				userActionID=53;
				displayName="Close Doors";
				condition="this animationPhase ""doors"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"", 0]";
			};
			class OpenProbe
			{
				userActionID=50;
				displayName="Extend Probe";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""probe_extend"" < 0.5 AND this animationPhase ""Hide_Probe"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""probe_extend"",1];";
			};
			class CloseProbe: OpenProbe
			{
				userActionID=53;
				displayName="Retract Probe";
				condition="this animationPhase ""probe_extend"" > 0.5 AND this animationPhase ""Hide_Probe"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""probe_extend"", 0]";
			};
			class MH60_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\MH60_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Hide_ESSS2x
			{
				DisplayName="Hide ESSS2x";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_ESSS4x: Hide_ESSS2x
			{
				DisplayName="Hide ESSS4x";
				initPhase=0;
			};
			class Hide_FlirTurret
			{
				DisplayName="Hide Flir Pod";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Doors
			{
				source="user";
				animPeriod=1.6;
				initphase=0;
				sound="ServoDoorsSound";
			};
			class Gatling_1
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh2";
			};
			class probe_extend
			{
				source="user";
				animPeriod=1.6;
				initphase=0;
			};
			class Hide_Nose
			{
				DisplayName="Hide Nose Radar";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Navyclan_hide
			{
				DisplayName="Hide Navy Decal";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Navyclan2_hide: Navyclan_hide
			{
				DisplayName="Hide Navy Decal Doors";
			};
			class Blackhawk_Hide
			{
				DisplayName="Hide Extra Equipment";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_Probe
			{
				DisplayName="Hide Fuel Probe";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class mainRotor_folded
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class mainRotor_unfolded: mainRotor_folded
			{
				source="user";
				initPhase=0;
			};
			class mainRotor_unfolded1: mainRotor_unfolded
			{
				source="user";
				initPhase=0;
			};
			class Tail_move
			{
				source="user";
				animPeriod=10;
				initPhase=0;
			};
			class left_elev
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class right_elev
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class Doorcock_Hide
			{
				DisplayName="Hide Cockpit Doors";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Filters_Hide
			{
				DisplayName="Hide Filters";
				source="user";
				initphase=0;
				animPeriod=1;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				turretInfoType="RscOptics_UAV_gunner";
				primaryGunner=1;
				minElev=-85;
				maxElev=10;
				initElev=0;
				minTurn=-110;
				maxTurn=110;
				initTurn=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				body="flirTurret";
				gun="flirGun";
				animationSourceBody="flirTurret";
				animationSourceGun="flirGun";
				memoryPointGun="laser_start";
				memoryPointGunnerOptics="gunnerview_flir";
				gunEnd="gunnerview_flir";
				gunBeg="laser_end";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-35;
						maxAngleX=10;
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
						gunnerOpticsColor[]={0.15000001,1,0.15000001,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized=0;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-35;
						maxAngleX=10;
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
						gunnerOpticsColor[]={0.15000001,1,0.15000001,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized=1;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1"
						};
					};
					class WideL: Wide
					{
						opticsDisplayName="WL";
						initFov=0.2;
						minFov=0.2;
						maxFov=0.2;
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[]={0,0,0,1};
						directionStabilized=1;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						directionStabilized=1;
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized=1;
						initFov=0.02;
						minFov=0.02;
						maxFov=0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized=1;
						initFov=0.0099999998;
						minFov=0.0099999998;
						maxFov=0.0099999998;
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
			};
			class MainTurret: MainTurret
			{
				primaryGunner=0;
				maxTurn=95;
			};
			class RightDoorGun: RightDoorGun
			{
				primaryGunner=0;
				minTurn=-95;
			};
		};
		class textureSources
		{
			class Black
			{
				displayname="United States Army, Black";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class Grey
			{
				displayname="United States Navy, Grey";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_fuselage_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class Medical
			{
				displayname="United States Army, Black MEDEVAC";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class RACSDesert
			{
				displayname="Royal Army Corps of Sahrani, Desert";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class RACSDesertMedical
			{
				displayname="Royal Army Corps of Sahrani, Desert MEDEVAC";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class JAS_CUP_B_UH60M_US: CUP_Uh60_Base
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60M_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60L_US: CUP_Uh60L_Base
	{
		scope=1;
		side=1;
		author="$STR_CUP_AUTHOR_STRING";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60L_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60M_FFV_US: CUP_Uh60_FFV_Base
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60M_FFV_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60L_FFV_US: CUP_Uh60L_FFV_Base
	{
		scope=1;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60L_FFV_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60M_Unarmed_US: CUP_UH60_Unarmed_Base
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60M_Unarmed_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60L_Unarmed_US: CUP_Uh60L_Unarmed_Base
	{
		scope=1;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60L_Unarmed_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60M_Unarmed_FFV_US: CUP_Uh60_Unarmed_FFV_Base
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60M_Unarmed_FFV_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60L_Unarmed_FFV_US: CUP_Uh60L_Unarmed_FFV_Base
	{
		scope=1;
		side=1;
		author="-{GOL}-Jason";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60L_Unarmed_FFV_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60M_Unarmed_FFV_MEV_US: CUP_Uh60_Unarmed_FFV_Base
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		attendant=1;
		displayName="UH-60M MEV (Unarmed/FFV)";
		vehicleClass="Support";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_mev_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_mev_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60M_Unarmed_FFV_MEV_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_UH60L_Unarmed_FFV_MEV_US: CUP_Uh60L_Unarmed_FFV_Base
	{
		scope=1;
		side=1;
		author="-{GOL}-Jason";
		attendant=1;
		displayName="UH-60L MEV (Unarmed/FFV)";
		vehicleClass="Support";
		faction="CUP_B_US_Army";
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_mev_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_mev_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60L_Unarmed_FFV_MEV_US.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_B_MH60L_DAP_4x_AT_USN: JAS_MH60L_DAP
	{
		scope=2;
		side=1;
		author="-{GOL}-Jason";
		displayName="MH-60S Seahawk";
		faction="CUP_B_USMC";
		crew="CUP_B_USMC_Pilot";
		typicalCargo[]=
		{
			"CUP_B_USMC_Pilot"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_MH60L_DAP_4x_AT_USN.jpg";
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				userActionID=50;
				displayName="Open Doors";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""doors"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"",1];";
			};
			class CloseDoors: OpenDoors
			{
				userActionID=53;
				displayName="Close Doors";
				condition="this animationPhase ""doors"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"", 0]";
			};
			class OpenProbe
			{
				userActionID=50;
				displayName="Extend Probe";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""probe_extend"" < 0.5 AND this animationPhase ""Hide_Probe"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""probe_extend"",1];";
			};
			class CloseProbe: OpenProbe
			{
				userActionID=53;
				displayName="Retract Probe";
				condition="this animationPhase ""probe_extend"" > 0.5 AND this animationPhase ""Hide_Probe"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""probe_extend"", 0]";
			};
			class MH60_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Carrier_01_base_F""]) < 50) and (damage (nearestObject [this, ""Land_Carrier_01_base_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_MH60\sqs\loadout\SH60_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
			};
			class Pack
			{
				displayName="Pack";
				displayNameDefault="Pack";
				position="doors_axis";
				radius=10;
				onlyForPlayer=1;
				condition="(!isEngineOn this) AND {(this animationphase 'Tail_move' !=1) AND (driver this == player) AND (speed this == 0)}";
				statement="[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_MH60S\Data\Scripts\MH60S_fold.sqf""";
			};
			class unPack
			{
				displayName="UnPack";
				displayNameDefault="Unpack";
				position="doors_axis";
				radius=10;
				onlyForPlayer=1;
				condition="this animationphase ""Tail_move"" !=0 AND driver this == player";
				statement="[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_MH60S\Data\Scripts\MH60S_fold.sqf""";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Navyclan_hide
			{
				DisplayName="HideNavyDecal";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Navyclan2_hide: Navyclan_hide
			{
				DisplayName="Hide Navy Decal Doors";
			};
			class Filters_Hide
			{
				DisplayName="Hide Filters";
				source="user";
				initphase=1;
				animPeriod=1;
			};
			class Hide_ESSS2x
			{
				DisplayName="Hide ESSS2x";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_ESSS4x: Hide_ESSS2x
			{
				DisplayName="Hide ESSS4x";
				initPhase=0;
			};
			class Hide_FlirTurret
			{
				DisplayName="Hide Flir Pod";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Doors
			{
				source="user";
				animPeriod=1.6;
				initphase=0;
				sound="ServoDoorsSound";
			};
			class Gatling_1
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh2";
			};
			class probe_extend
			{
				source="user";
				animPeriod=1.6;
				initphase=0;
			};
			class Hide_Nose
			{
				DisplayName="Hide Nose Radar";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Blackhawk_Hide
			{
				DisplayName="Hide Extra Equipment";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_Probe
			{
				DisplayName="Hide Fuel Probe";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class mainRotor_folded
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class mainRotor_unfolded: mainRotor_folded
			{
				source="user";
				initPhase=0;
			};
			class mainRotor_unfolded1: mainRotor_unfolded
			{
				source="user";
				initPhase=0;
			};
			class Tail_move
			{
				source="user";
				animPeriod=10;
				initPhase=0;
			};
			class left_elev
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class right_elev
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class Doorcock_Hide
			{
				DisplayName="Hide Cockpit Doors";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				turretInfoType="RscOptics_UAV_gunner";
				primaryGunner=1;
				minElev=-85;
				maxElev=10;
				initElev=0;
				minTurn=-110;
				maxTurn=110;
				initTurn=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				body="flirTurret";
				gun="flirGun";
				animationSourceBody="flirTurret";
				animationSourceGun="flirGun";
				memoryPointGun="laser_start";
				memoryPointGunnerOptics="gunnerview_flir";
				gunEnd="gunnerview_flir";
				gunBeg="laser_end";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-35;
						maxAngleX=10;
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
						gunnerOpticsColor[]={0.15000001,1,0.15000001,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized=0;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-35;
						maxAngleX=10;
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
						gunnerOpticsColor[]={0.15000001,1,0.15000001,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized=1;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1"
						};
					};
					class WideL: Wide
					{
						opticsDisplayName="WL";
						initFov=0.2;
						minFov=0.2;
						maxFov=0.2;
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[]={0,0,0,1};
						directionStabilized=1;
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						directionStabilized=1;
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized=1;
						initFov=0.02;
						minFov=0.02;
						maxFov=0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsColor[]={0,0,0,1};
						gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized=1;
						initFov=0.0099999998;
						minFov=0.0099999998;
						maxFov=0.0099999998;
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
			};
			class MainTurret: MainTurret
			{
				primaryGunner=0;
				maxTurn=95;
			};
			class RightDoorGun: RightDoorGun
			{
				primaryGunner=0;
				minTurn=-95;
			};
		};
		class textureSources
		{
			class Black
			{
				displayname="United States Army, Black";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class Grey
			{
				displayname="United States Navy, Grey";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_fuselage_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class Medical
			{
				displayname="United States Army, Black MEDEVAC";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class RACSDesert
			{
				displayname="Royal Army Corps of Sahrani, Desert";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
			class RACSDesertMedical
			{
				displayname="Royal Army Corps of Sahrani, Desert MEDEVAC";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_mev_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[]={};
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class JAS_CUP_I_UH60L_RACS: CUP_Uh60L_Base
	{
		scope=2;
		side=2;
		author="-{GOL}-Jason";
		faction="CUP_I_RACS";
		crew="CUP_I_RACS_Pilot";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_I_UH60L_RACS.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_I_UH60L_FFV_RACS: CUP_Uh60L_FFV_Base
	{
		scope=2;
		side=2;
		author="-{GOL}-Jason";
		faction="CUP_I_RACS";
		crew="CUP_I_RACS_Pilot";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_I_UH60L_FFV_RACS.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_I_UH60L_Unarmed_RACS: CUP_Uh60L_Unarmed_Base
	{
		scope=2;
		side=2;
		author="-{GOL}-Jason";
		faction="CUP_I_RACS";
		crew="CUP_I_RACS_Pilot";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_I_UH60L_Unarmed_RACS.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_I_UH60L_Unarmed_FFV_Racs: CUP_Uh60L_Unarmed_FFV_Base
	{
		scope=2;
		side=2;
		author="-{GOL}-Jason";
		faction="CUP_I_RACS";
		crew="CUP_I_RACS_Pilot";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_I_UH60L_Unarmed_FFV_Racs.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_CUP_I_UH60L_Unarmed_FFV_MEV_Racs: CUP_Uh60L_Unarmed_FFV_Base
	{
		scope=2;
		side=2;
		author="-{GOL}-Jason";
		attendant=1;
		displayName="UH-60L MEV (Unarmed/FFV)";
		vehicleClass="Support";
		faction="CUP_I_RACS";
		crew="CUP_I_RACS_Pilot";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_fuselage_mev_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\uh60_racs_engine_mev_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_I_UH60L_Unarmed_FFV_MEV_Racs.jpg";
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_MH60\rotorLib\RTD_Seahawk.xml";
			autoHoverCorrection[] = { 3, 2.45, 0 };
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1100;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
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
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
	};
	class JAS_UH60L_DAP_AAC: JAS_MH60L_DAP
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60M_US_AAC: JAS_CUP_B_UH60M_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60L_US_AAC: JAS_CUP_B_UH60L_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60M_FFV_US_AAC: JAS_CUP_B_UH60M_FFV_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60L_FFV_US_AAC: JAS_CUP_B_UH60L_FFV_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60M_Unarmed_US_AAC: JAS_CUP_B_UH60M_Unarmed_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60L_Unarmed_US_AAC: JAS_CUP_B_UH60L_Unarmed_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60M_Unarmed_FFV_US_AAC: JAS_CUP_B_UH60M_Unarmed_FFV_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60L_Unarmed_FFV_US_AAC: JAS_CUP_B_UH60L_Unarmed_FFV_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60M_Unarmed_FFV_MEV_US_AAC: JAS_CUP_B_UH60M_Unarmed_FFV_MEV_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_UH60L_Unarmed_FFV_MEV_US_AAC: JAS_CUP_B_UH60L_Unarmed_FFV_MEV_US
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_B_MH60L_DAP_4x_AT_USN_AAC: JAS_CUP_B_MH60L_DAP_4x_AT_USN
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_I_UH60L_RACS_AAC: JAS_CUP_I_UH60L_RACS
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_I_UH60L_FFV_RACS_AAC: JAS_CUP_I_UH60L_FFV_RACS
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_I_UH60L_Unarmed_RACS_AAC: JAS_CUP_I_UH60L_Unarmed_RACS
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_I_UH60L_Unarmed_FFV_Racs_AAC: JAS_CUP_I_UH60L_Unarmed_FFV_Racs
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
	};
	class JAS_CUP_I_UH60L_Unarmed_FFV_MEV_Racs_AAC: JAS_CUP_I_UH60L_Unarmed_FFV_MEV_Racs
	{
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
	};
};
