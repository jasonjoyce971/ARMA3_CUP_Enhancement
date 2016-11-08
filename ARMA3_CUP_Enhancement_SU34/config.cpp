class CfgPatches
{
	class ARMA3_CUP_Enhancement_SU34
	{
		units[]=
		{
			"JAS_CUP_O_SU34_RU",
			"JAS_CUP_O_SU34_RU_2",
			"JAS_CUP_O_SU34_CSAT",
			"JAS_CUP_O_SU34_AAC",
			"JAS_CUP_I_SU34_AAC",
			"JAS_CUP_B_SU34_AAC",
			"JAS_CUP_O_SU34_SLA",
			"JAS_CUP_I_SU34_AAF",
			"JAS_CUP_B_SU34_CDF",
			"JAS_SU34_Loadout_Module"
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
		class ARMA3_CUP_Enhancement_SU34
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_SU34"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_SU34_Init_Function
		{
			class SU34_Loadout
			{
				file="\ARMA3_CUP_Enhancement_SU34\sqs\modules\su34_loadout_module.sqf";
			};
			class SU34_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_SU34\sqs\modules\su34_loadout_module_set.sqf";
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
			directory = "ARMA3_CUP_Enhancement_SU34\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_SU34\presentation\picture.paa";
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
		class SU34J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Su-34J Fullback";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Air Superiority Airplane";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Su-34 is a twin seat strike fighter designed seize air superiority in the local airspace. While capable of interception tasks, the Fullback is not a dogfighter, relying instead on missiles to eliminate air targets. Ground targets however are easy prey. The WSO station has a complete suite of optics and when used in conjunction with guided munitions, can be trusted to knock out any ground installation or vehicle.<br/><br/>Payload Options:<br/><br/>%2R-73<br/>%2GSh-23 Pod<br/>%2S-8 Rockets<br/>%2Kh-25<br/>%2Kh-29<br/>%2Vikhir<br/>%2FAB-250<br/>%2KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2Chernarus Defence Force<br/>%2Russian Federation<br/>%2Sahrani Liberation Army<br/>%2Altis Armed Forces";
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
class SU34_GUI
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
			text = "ARMA3_CUP_Enhancement_SU34\UI\SU34_Background.paa";
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
			text = "Right Midline";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "Left Midline";
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
			text = "Right Nacelle";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Left Nacelle";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1112 : RscText
		{
			idc = 1112;
			text = "Front Fuselage";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1122 : RscText
		{
			idc = 1122;
			text = "Rear Fuselage";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_SU34\sqs\loadout\SU34_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_SU34\sqs\loadout\SU34_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_SU34\sqs\loadout\SU34_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_SU34\sqs\loadout\SU34_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_SU34\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_SU34\data\ico\ico.paa";
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
		class NewTurret;
		class ViewPilot;
		class EventHandlers;
		class ViewOptics;
		class Sounds;
		class AnimationSources;
		class HitPoints
		{
			class HitHull;
		};
		class MarkerLights;
	};
	class JAS_CUP_SU34_BASE: Plane
	{
		simulation="Airplane";
		author="Sabre[Dust]/-{GOL}-Jason";
		model="\cup\airvehicles\cup_airvehicles_su34\CUP_SU34.p3d";
		icon="cup\airvehicles\cup_airvehicles_su34\data\UI\icon_su34_ca.paa";
		picture="cup\airvehicles\cup_airvehicles_su34\data\UI\picture_su34_ca.paa";
		mapSize=17;
		displayName="Su-34J";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 Russian Airforce Blue Camo";
		fir_su34_custom_code="JAS_CUP_SU34_BASE";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\RUSAFBLUECAM.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_RU_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_RU_2.paa"
		};
		class Library
		{
			libEnable=1;
			libTextDesc="Based on Sukhoi Su-27 Flanker, the two-seat Su-34 is designed primarily for tactical deployment against ground and naval targets (Tactical bombing/attack/interdiction roles, including against small and mobile targets) on solo and group missions in daytime and at night, under favourable and adverse weather conditions and in a hostile environment with counter-fire and EW counter-measures deployed, as well as for air reconnaissance. Because it is based on the Su-27 family, it can also carry out air-to-air missions (interception/air superiority/dogfight), as a secondary role. (wikipedia)";
		};
		extCameraPosition[]={0,2,-21};
		gearUpTime=5.5;
		gearDownTime=5;
		fuelCapacity=2000;
		gearRetracting=1;
		cabinOpening=0;
		fov=0.69999999;
		crew="C_man_pilot_F";
		typicalCargo[]=
		{
			"C_man_pilot_F"
		};
		hideWeaponsDriver=1;
		driverAction="CUP_SU34_Pilot_EDIT";
		driverLeftHandAnimName="pilot_thrust";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="pilot_pedals_L";
		driverRightLegAnimName="pilot_pedals_R";
		driverCompartments="Compartment1";
		viewDriverShadowDiff=0.5;
		viewDriverShadowAmb=0.5;
		ejectDeadDriver=0;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";
		getInRadius=6;
		enableManualFire=1;
		driverIsCommander=1;
		hasDriver=1;
		hasGunner=1;
		hasCommander=0;
		weapons[]=
		{
			"FIR_MasterArm",
			"JAS_CUP_Vacannon_GSh301_veh",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"JAS_CUP_180Rnd_TE1_30mm_GSh302K_HE_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				commanding=-1;
				gunnerAction="CUP_SU34_Pilot";
				gunnerInAction="CUP_SU34_Pilot";
				gunnerCompartments="Compartment2";
				isCopilot=1;
				primaryObserver=0;
				primaryGunner=1;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerlefthandanimname="copilot_thrust";
				gunnerrighthandanimname="stick_copilot";
				gunnerLeftLegAnimName="copilot_pedals_L";
				gunnerRightLegAnimName="copilot_pedals_R";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				weapons[]=
				{
					"FIR_MasterArm",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				memoryPointGun="sensors_turret";
				stabilizedInAxes="StabilizedInAxesBoth";
				gunnerForceOptics=0;
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerOpticsEffect[]={};
				turretInfoType="RscOptics_UAV_gunner";
				gunBeg="sensors";
				gunEnd="sensors_turret";
				gunAimDown=0.0029;
				gunnerOpticsColor[]={0.227,0.76899999,0.23999999,1};
				gunnerForceOutOptics=0;
				gunnerUsesPilotView=1;
				hasGunner=1;
				hideWeaponsGunner=1;
				inGunnerMayFire=0;
				lockWhenDriverOut=0;
				maxHorizontalRotSpeed=5;
				maxVerticalRotSpeed=5;
				outGunnerMayFire=1;
				proxyType="CPGunner";
				proxyIndex=1;
				gunnerOpticsShowCursor=0;
				showgunneroptics=0;
				startEngine=0;
				initTurn=0;
				minTurn=-180;
				maxTurn=180;
				initElev=-10;
				minElev=-180;
				maxElev=40;
				initFov=0.94999999;
				class ViewOptics
				{
					directionStabilized=1;
					horizontallyStabilized=1;
					initAngleY=0;
					minAngleY=-180;
					maxAngleY=180;
					initAngleX=-10;
					minAngleX=-180;
					maxAngleX=40;
					initFov=1;
					minFov=0.1;
					maxFov=2;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-125;
					maxAngleY=125;
					initFov=1;
					minFov=0.30000001;
					maxFov=1.2;
				};
			};
		};
		driveOnComponent[]=
		{
			"wheel_1_1",
			"wheel_2_1",
			"wheel_2_2",
			"wheel_3_1",
			"wheel_3_2"
		};
		wheelSteeringSensitivity=1.7;
		damageResistance=0.00336;
		armorStructured=1;
		destrType="DestructWreck";
		envelope[]={0,0.40000001,1.9,4,6.8000002,8.3000002,8.5,8,7.1999998,5.8000002,4,1.8,0};
		landingAoa="rad 10";
		headAimDown=0;
		landingSpeed=235;
		maxSpeed=1470;
		flapsFrictionCoef=0.30000001;
		aileronSensitivity=1.2;
		elevatorSensitivity=1.4;
		noseDownCoef=1;
		armor=60;
		nightVision=1;
		radarType=4;
		laserScanner=1;
		gunBeg="konec hlavne";
		gunEnd="usti hlavne";
		gunAimDown=0.0029;
		accuracy=0.2;
		minFireTime=20;
		threat[]={1,1,1};
		ejectSpeed[]={0,50,0};
		irScanGround=1;
		irScanRangeMin=100;
		irScanRangeMax=10500;
		irScanToEyeFactor=4;
		LockDetectionSystem="2 + 4 + 8";
		incomingMissileDetectionSystem=16;
		memoryPointGun="machinegun";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		altFullForce=15000;
		altNoForce=18000;
		selectionFireAnim="muzzleFlash";
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.1;
				material=-1;
				name="glass1";
				radius=0.64999998;
				minimalHit=0.0099999998;
				visual="glass1";
				passThrough=0;
			};
			class HitGlass2
			{
				armor=0.1;
				material=-1;
				name="glass2";
				radius=0.64999998;
				minimalHit=0.0099999998;
				visual="glass2";
				passThrough=0;
			};
			class HitGlass3
			{
				armor=0.1;
				material=-1;
				name="glass3";
				radius=0.64999998;
				minimalHit=0.0099999998;
				visual="glass3";
				passThrough=0;
			};
			class HitGlass4
			{
				armor=0.1;
				material=-1;
				name="glass4";
				radius=0.64999998;
				minimalHit=0.0099999998;
				visual="glass4";
				passThrough=0;
			};
			class HitHull: HitHull
			{
				armor=30;
				name="hull_hit";
				visual="trup";
				radius=0.64999998;
				minimalHit=0.0099999998;
				explosionShielding=1.5;
			};
			class HitFuel: HitHull
			{
				armor=1;
				name="fuel_hit";
				visual="";
				radius=0.85000002;
				minimalHit=0.1;
			};
			class HitEngine: HitHull
			{
				armor=0.75;
				name="engine_hit";
				visual="";
				radius=0.33500001;
				minimalHit=0.1;
			};
			class HitAvionics: HitHull
			{
				armor=1;
				name="avionics_hit";
				visual="";
				radius=0.34999999;
				minimalHit=0.050000001;
			};
			class HitTurret
			{
				armor=0.80000001;
				material=51;
				name="turret";
				visual="";
				passThrough=0.5;
			};
			class HitGun
			{
				armor=0.60000002;
				material=52;
				name="gun";
				visual="";
				passThrough=0.5;
			};
		};
		class AnimationSources
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
			class fuel_probe
			{
				source="user";
				animPeriod=2.5;
			};
			class Gatling
			{
				source="revolving";
				weapon="CUP_Vacannon_GSh301_veh";
			};
			class Gatling_flash
			{
				source="ammorandom";
				weapon="CUP_Vacannon_GSh301_veh";
			};
		};
		class UserActions
		{
			class fuel_hose_open
			{
				displayName="Extend Refueling Probe";
				position="pos cargo";
				radius=15;
				showWindow=0;
				onlyforplayer=1;
				hideOnUse=1;
				condition="this animationPhase ""fuel_probe"" < 0.5 AND false";
				statement="this animate [""fuel_probe"", 1];";
			};
			class fuel_hose_close
			{
				displayName="Retract Refueling Probe";
				position="pos cargo";
				radius=15;
				showWindow=0;
				onlyforplayer=1;
				hideOnUse=1;
				condition="this animationPhase ""fuel_probe"" >= 0.5 AND false";
				statement="this animate [""fuel_probe"", 0];";
			};
			class SU34_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_SU34\sqs\Loadout\SU34_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "gunner this == player and isengineon this";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};
			class FindRadarTGT
			{
				displayName = "Find Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""JAS_KH25_LAU"" and this getvariable ""SEAD_SET"" == ""no""; ";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\harm.sqf""; ";
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
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEADRUS.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_skla.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_skla_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_skla_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_skla_in.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_skla_in_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_skla_in_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_01.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_01_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_01_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_engine.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_01_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_01_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_02.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_02_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_02_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_interier.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_interier.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_interier_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_wheels.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_wheels_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_wheels_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\int_new.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\int_new_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\int_new_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_int.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_int_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_su34\data\Su34_int_destruct.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust_1";
				direction="dir_exhaust_1";
				effect="ExhaustsEffectPlane";
			};
			class Exhaust2
			{
				position="exhaust_2";
				direction="dir_exhaust_2";
				effect="ExhaustsEffectPlane";
			};
		};
		insideSoundCoef=0.2;
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getin",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			0.56234097,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234097,
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
			1.77828,
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
			1.77828,
			1,
			500
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			0.79432797,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			0.79432797,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			0.63095701,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			0.63095701,
			1,
			100
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext",
					2.5118899,
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
					2.5118899,
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
					"db5",
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
					0.56234097,
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
					"db0",
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
					"db0",
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
					"db0",
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					"db-6",
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
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
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="light_1_1_source";
				direction="light_1_1_target";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=40;
				outerAngle=80;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="light_1_2_source";
				direction="light_1_2_target";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
		};
		class RenderTargets
		{
			class camera
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PodCamera";
					pointDirection="PodCameraEnd";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.5;
				};
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,1};
				enableParallax=0;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.52999997};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.55500001};
						pos10[]={1.5,1.5549999};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
						angle=-2.3;
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
						angle=-2.3;
					};
				};
				class Draw
				{
					color[]={0,1,0,1};
					alpha=0.5;
					condition="on";
					class Horizont
					{
						clipTL[]={0.25,0.25};
						clipBR[]={0.75,0.75};
						class Dimmed
						{
							class Level00
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"0*1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"-0.045*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.005*1.4",
											"0*1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"0.005*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"0.045*1.4",
											"0*1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"0.125*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"0.200*1.4",
											"0*1.4"
										},
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
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*5"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*5"
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
									"Level0",
									
									{
										"0.000*1.4",
										"-0.020*1.4-1.0/10*5"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050*1.4",
										"-0.020*1.4-1.0/10*5"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000*1.4",
										"+0.020*1.4-1.0/10*5"
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
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*5"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*5"
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
									"Level0",
									
									{
										"0.000*1.4",
										"-0.020*1.4+1.0/10*5"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050*1.4",
										"-0.020*1.4+1.0/10*5"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000*1.4",
										"+0.020*1.4+1.0/10*5"
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
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*10"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*10"
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
									"Level0",
									
									{
										"0.000*1.4",
										"-0.020*1.4-1.0/10*10"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050*1.4",
										"-0.020*1.4-1.0/10*10"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000*1.4",
										"+0.020*1.4-1.0/10*10"
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
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*10"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*10"
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
									"Level0",
									
									{
										"0.000*1.4",
										"-0.020*1.4+1.0/10*10"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050*1.4",
										"-0.020*1.4+1.0/10*10"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000*1.4",
										"+0.020*1.4+1.0/10*10"
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
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*15"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*15"
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
									"Level0",
									
									{
										"0.000*1.4",
										"-0.020*1.4-1.0/10*15"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050*1.4",
										"-0.020*1.4-1.0/10*15"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000*1.4",
										"+0.020*1.4-1.0/10*15"
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
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*15"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*15"
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
									"Level0",
									
									{
										"0.000*1.4",
										"-0.020*1.4+1.0/10*15"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050*1.4",
										"-0.020*1.4+1.0/10*15"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000*1.4",
										"+0.020*1.4+1.0/10*15"
									},
									1
								};
							};
						};
					};
					class PlaneOrientation_MiniPlane
					{
						width=4;
						type="line";
						points[]=
						{
							
							{
								"PlaneOrientation",
								{0.20999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								1,
								{0.07,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								1,
								{-0.20999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.07,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0,-0.14},
								1
							}
						};
					};
					class PlaneOrientationLines
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.20999999,7.2250699e-009},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.28,9.6334301e-009},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0.20999999,-1.97107e-009},
								1
							},
							
							{
								"PlaneOrientation",
								{0.28,-2.62809e-009},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{-0.105,0.14314599},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.14,0.190861},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0.105,0.14314599},
								1
							},
							
							{
								"PlaneOrientation",
								{0.14,0.190861},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{-0.18186501,0.0826452},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.242487,0.110194},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0.18186501,0.0826452},
								1
							},
							
							{
								"PlaneOrientation",
								{0.242487,0.110194},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{-0.20284399,0.042780299},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.270459,0.057040401},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0.20284399,0.042780299},
								1
							},
							
							{
								"PlaneOrientation",
								{0.270459,0.057040401},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{-0.20920099,0.014406},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.244068,0.016806999},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{-0.20681,0.028702401},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.24127799,0.033486102},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0.20681,0.028702401},
								1
							},
							
							{
								"PlaneOrientation",
								{0.24127799,0.033486102},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0.20920099,0.014406},
								1
							},
							
							{
								"PlaneOrientation",
								{0.244068,0.016806999},
								1
							},
							{}
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
							{0.029999999,0.94},
							1
						};
						right[]=
						{
							{0.079999998,0.94},
							1
						};
						down[]=
						{
							{0.029999999,0.98000002},
							1
						};
					};
					class AmmoCount
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.88999999},
							1
						};
						right[]=
						{
							{0.079999998,0.88999999},
							1
						};
						down[]=
						{
							{0.029999999,0.93000001},
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
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53-0.045"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53-0.045"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53-0.005"
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
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53+0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53+0.005"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53+0.045"
								},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									0.5,
									"0.53-0.25"
								},
								1
							};
							right[]=
							{
								
								{
									0.55000001,
									"0.53-0.25"
								},
								1
							};
							down[]=
							{
								
								{
									0.5,
									"0.53-0.17"
								},
								1
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
							text="LIGHTS";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53+0.055"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53+0.055"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53+0.095"
								},
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
							text="A-COL";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53+0.105"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53+0.105"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53+0.145"
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
							{0.50999999,0.88999999},
							1
						};
						right[]=
						{
							{0.56,0.88999999},
							1
						};
						down[]=
						{
							{0.50999999,0.93000001},
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
							{0.49000001,0.88999999},
							1
						};
						right[]=
						{
							{0.54000002,0.88999999},
							1
						};
						down[]=
						{
							{0.49000001,0.93000001},
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
							{0.50999999,0.83999997},
							1
						};
						right[]=
						{
							{0.56,0.83999997},
							1
						};
						down[]=
						{
							{0.50999999,0.88},
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
							{0.49000001,0.83999997},
							1
						};
						right[]=
						{
							{0.54000002,0.83999997},
							1
						};
						down[]=
						{
							{0.49000001,0.88},
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
							{0.13,0.14},
							1
						};
						right[]=
						{
							{0.18000001,0.14},
							1
						};
						down[]=
						{
							{0.13,0.18000001},
							1
						};
					};
					class SpeedText
					{
						type="text";
						source="static";
						text="SPD";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.14},
							1
						};
						right[]=
						{
							{0.16,0.14},
							1
						};
						down[]=
						{
							{0.11,0.18000001},
							1
						};
					};
					class AltitudeNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.88999999,0.14},
							1
						};
						right[]=
						{
							{0.94,0.14},
							1
						};
						down[]=
						{
							{0.88999999,0.18000001},
							1
						};
					};
					class AltitudeText
					{
						type="text";
						source="static";
						text="AGL";
						align="left";
						scale=1;
						pos[]=
						{
							{0.87,0.14},
							1
						};
						right[]=
						{
							{0.92000002,0.14},
							1
						};
						down[]=
						{
							{0.87,0.18000001},
							1
						};
					};
					class AltitudeArrow
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.88+0.018",
									"0.40-0.016"
								},
								1
							},
							
							{
								{0.88,0.40000001},
								1
							},
							
							{
								
								{
									"0.88+0.018",
									"0.40+0.016"
								},
								1
							}
						};
					};
					class AltitudeLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.87,0.60000002},
								1
							},
							
							{
								{0.87,0.2},
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
						top=0.60000002;
						center=0.40000001;
						bottom=0.2;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=5;
						numberEach=5;
						step=20;
						stepSize="(0.60 - 0.20) / 15";
						align="right";
						scale=1;
						pos[]={0.91000003,0.57999998};
						right[]={0.95999998,0.57999998};
						down[]={0.91000003,0.62};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.88999999,0.94},
							1
						};
						right[]=
						{
							{0.94,0.94},
							1
						};
						down[]=
						{
							{0.88999999,0.98000002},
							1
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
							{0.87,0.94},
							1
						};
						right[]=
						{
							{0.92000002,0.94},
							1
						};
						down[]=
						{
							{0.87,0.98000002},
							1
						};
					};
					class ClimbArrow
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.88+0.018",
									"0.80-0.016"
								},
								1
							},
							
							{
								{0.88,0.80000001},
								1
							},
							
							{
								
								{
									"0.88+0.018",
									"0.80+0.016"
								},
								1
							}
						};
					};
					class ClimbLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.87,0.92500001},
								1
							},
							
							{
								{0.87,0.67500001},
								1
							}
						};
					};
					class ClimbScale
					{
						type="scale";
						horizontal=0;
						source="vspeed";
						sourceScale=1;
						width=4;
						top=0.92500001;
						center=0.80000001;
						bottom=0.67500001;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=2;
						numberEach=4;
						step=5;
						stepSize="(0.925 - 0.675) / 15";
						align="right";
						scale=1;
						pos[]={0.91000003,0.90499997};
						right[]={0.95999998,0.90499997};
						down[]={0.91000003,0.94499999};
					};
					class HeadingArrow
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.5-0.02",
									"0.11-0.02"
								},
								1
							},
							
							{
								{0.5,0.11},
								1
							},
							
							{
								
								{
									"0.5+0.02",
									"0.11-0.02"
								},
								1
							}
						};
					};
					class HeadingLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.30000001,0.12},
								1
							},
							
							{
								{0.69999999,0.12},
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
						top=0.30000001;
						center=0.5;
						bottom=0.69999999;
						lineXleft="0.06 + 0.05";
						lineYright="0.05 + 0.05";
						lineXleftMajor="0.06 + 0.05";
						lineYrightMajor="0.04 + 0.05";
						majorLineEach=3;
						numberEach=9;
						step=5;
						stepSize=0.02;
						align="center";
						scale=1;
						pos[]=
						{
							0.30000001,
							"0.0+0.05"
						};
						right[]=
						{
							0.34999999,
							"0.0+0.05"
						};
						down[]=
						{
							0.30000001,
							"0.04+0.05"
						};
					};
				};
			};
			class SU35_parallax_HUD
			{
				topLeft="hud_lh";
				topRight="hud_ph";
				bottomLeft="hud_ld";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,1};
				enableParallax=1;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.52999997};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.55500001};
						pos10[]={1.5,1.5549999};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
						angle=-2.3;
					};
				};
				class Draw
				{
					color[]={0,1,0,1};
					alpha=0.5;
					condition="on";
					class RadarTargets
					{
						type="radar";
						width=4;
						angle=-2.3;
						pos0[]={0.5,0.55500001};
						pos10[]={1.24,1.325};
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
					class PlaneMovementCrosshair
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
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
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class Cros
					{
						condition="mgun";
						width=4;
						class Cros
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.050000001,0},
									1
								},
								
								{
									"WeaponAim",
									{0.015,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.039354801},
									1
								},
								
								{
									"WeaponAim",
									{0,0.0118065},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.050000001,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.015,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.039354801},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.0118065},
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
									{0,-0.25},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,-0.2462},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,-0.234925},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.2165},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,-0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,-0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,-0.125},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,-0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,-0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,0.125},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.2165},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,0.234925},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,0.2462},
									1
								},
								
								{
									"WeaponAim",
									{0,0.25},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,0.2462},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,0.234925},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.2165},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,0.125},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,-0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,-0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,-0.125},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,-0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,-0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.2165},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,-0.234925},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,-0.2462},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.25},
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
									{0,-0.1},
									1
								},
								
								{
									"WeaponAim",
									{0.01736,-0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{0.034200002,-0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{0.064280003,-0.0766},
									1
								},
								
								{
									"WeaponAim",
									{0.0766,-0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{0.086599998,-0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0.093970001,-0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{0.098480001,-0.01736},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.098480001,0.01736},
									1
								},
								
								{
									"WeaponAim",
									{0.093970001,0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{0.086599998,0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0.0766,0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{0.064280003,0.0766},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{0.034200002,0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{0.01736,0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{0,0.1},
									1
								},
								
								{
									"WeaponAim",
									{-0.01736,0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{-0.034200002,0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{-0.064280003,0.0766},
									1
								},
								
								{
									"WeaponAim",
									{-0.0766,0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{-0.086599998,0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.093970001,0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{-0.098480001,0.01736},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.098480001,-0.01736},
									1
								},
								
								{
									"WeaponAim",
									{-0.093970001,-0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{-0.086599998,-0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.0766,-0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{-0.064280003,-0.0766},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{-0.034200002,-0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{-0.01736,-0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.1},
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
				};
			};
			class SU35_static_MFD_1_H
			{
				topLeft="hud_2_lh";
				topRight="hud_2_ph";
				bottomLeft="hud_2_ld";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,0.89999998,0.1};
				enableParallax=0;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.52999997};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.55500001};
						pos10[]={1.5,1.5549999};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
						angle=-2.3;
					};
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="on";
					class Horizont
					{
						clipTL[]={0.25,0.25};
						clipBR[]={0.75,0.75};
						class Dimmed
						{
							class Level00
							{
								type="line";
								width=15;
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"0*1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"-0.045*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.005*1.4",
											"0*1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"0.005*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"0.045*1.4",
											"0*1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"0.125*1.4",
											"0*1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"0.200*1.4",
											"0*1.4"
										},
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
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*5"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*5"
										},
										1
									}
								};
							};
							class Level2P5: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*5"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*5"
										},
										1
									}
								};
							};
							class Level2M10: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*10"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*10"
										},
										1
									}
								};
							};
							class Level2P10: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*10"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*10"
										},
										1
									}
								};
							};
							class Level2M15: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*15"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*15"
										},
										1
									}
								};
							};
							class Level2P15: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*15"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*15"
										},
										1
									}
								};
							};
							class Level2P20: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*20"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*20"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*20"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*20"
										},
										1
									}
								};
							};
							class Level2M20: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*20"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*20"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*20"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*20"
										},
										1
									}
								};
							};
							class Level2P30: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*30"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*30"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*30"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*30"
										},
										1
									}
								};
							};
							class Level2M30: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*30"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*30"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*30"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*30"
										},
										1
									}
								};
							};
							class Level2P40: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*40"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*40"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*40"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*40"
										},
										1
									}
								};
							};
							class Level2M40: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*40"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*40"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*40"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*40"
										},
										1
									}
								};
							};
							class Level2P50: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*50"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*50"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*50"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*50"
										},
										1
									}
								};
							};
							class Level2M50: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*50"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*50"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*50"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*50"
										},
										1
									}
								};
							};
							class Level2P60: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*60"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*60"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*60"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*60"
										},
										1
									}
								};
							};
							class Level2M60: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*60"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*60"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*60"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*60"
										},
										1
									}
								};
							};
							class Level2P70: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*70"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*70"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*70"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*70"
										},
										1
									}
								};
							};
							class Level2M70: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*70"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*70"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*70"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*70"
										},
										1
									}
								};
							};
							class Level2P80: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*80"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*80"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*80"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*80"
										},
										1
									}
								};
							};
							class Level2M80: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*80"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*80"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*80"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*80"
										},
										1
									}
								};
							};
							class Level2P90: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"+1.0/10*90"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"+1.0/10*90"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"+1.0/10*90"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"+1.0/10*90"
										},
										1
									}
								};
							};
							class Level2M90: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200*1.4",
											"-1.0/10*90"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125*1.4",
											"-1.0/10*90"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125*1.4",
											"-1.0/10*90"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200*1.4",
											"-1.0/10*90"
										},
										1
									}
								};
							};
						};
					};
					class PlaneOrientation_MiniPlane
					{
						width=20;
						type="line";
						points[]=
						{
							
							{
								"PlaneOrientation",
								{0.20999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								1,
								{0.07,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								1,
								{-0.20999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.07,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0,-0.14},
								1
							}
						};
					};
				};
			};
		};
		class TransportItems
		{
		};
	};
	class JAS_CUP_O_SU34_RU: JAS_CUP_SU34_BASE
	{
		scope=2;
		scopeCurator=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=0;
		faction="CUP_O_RU";
		accuracy=1000;
		crew="O_Pilot_F";
		editorPreview = "\ARMA3_CUP_Enhancement_SU34\UI\editorpreview\SU34_RU.jpg";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 Russian Airforce Puzzle";
		fir_su34_custom_code="JAS_CUP_O_SU34_RU";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\RUSAFPUZ.paa";
		typicalCargo[]=
		{
			"O_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_af_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_af_2.paa"
		};
	};
	class JAS_CUP_O_SU34_RU_2: JAS_CUP_SU34_BASE
	{
		scope=1;
		scopeCurator=1;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=0;
		faction="CUP_O_RU";
		accuracy=1000;
		crew="O_Pilot_F";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 Russian Airforce Blue Plain";
		fir_su34_custom_code="JAS_CUP_O_SU34_RU_2";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\RUSAFBLUEPLAIN.paa";
		typicalCargo[]=
		{
			"O_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_blue_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_blue_2.paa"
		};
	};
	class JAS_CUP_O_SU34_CSAT: JAS_CUP_SU34_BASE
	{
		scope=1;
		scopeCurator=1;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=0;
		faction="CUP_O_RU";
		accuracy=1000;
		crew="O_Pilot_F";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 CSAT Hex";
		fir_su34_custom_code="JAS_CUP_O_SU34_CSAT";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\CSAT.paa";
		typicalCargo[]=
		{
			"O_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_csat_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_csat_2.paa"
		};
	};
	class JAS_CUP_O_SU34_AAC: JAS_CUP_SU34_BASE
	{
		scope=2;
		scopeCurator=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=0;
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
		editorPreview = "\ARMA3_CUP_Enhancement_SU34\UI\editorpreview\SU34_AAC.jpg";
		accuracy=1000;
		crew="O_Pilot_F";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 Russian Airforce Black";
		fir_su34_custom_code="JAS_CUP_O_SU34_AAC";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\RUSAFBLACK.paa";
		typicalCargo[]=
		{
			"O_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_black_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_black_2.paa"
		};
	};
	class JAS_CUP_I_SU34_AAC: JAS_CUP_SU34_BASE
	{
		scope=2;
		scopeCurator=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=2;
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_BANSHEE";
		editorPreview = "\ARMA3_CUP_Enhancement_SU34\UI\editorpreview\SU34_AAF.jpg";
		accuracy=1000;
		crew="I_Pilot_F";
		fir_su34_custom_skin=0;
		fir_su34_custom_name="Su-34 Russian Airforce Black";
		fir_su34_custom_code="JAS_CUP_O_SU34_AAC";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\SU25CDF.paa";
		typicalCargo[]=
		{
			"I_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_AAF_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_AAF_2.paa"
		};
	};
	class JAS_CUP_B_SU34_AAC: JAS_CUP_SU34_BASE
	{
		scope=2;
		scopeCurator=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=1;
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_BANSHEE";
		editorPreview = "\ARMA3_CUP_Enhancement_SU34\UI\editorpreview\SU34_CDF.jpg";
		accuracy=1000;
		crew="B_Pilot_F";
		fir_su34_custom_skin=0;
		fir_su34_custom_name="Su-34 Russian Airforce Black";
		fir_su34_custom_code="JAS_CUP_O_SU34_AAC";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\SU25CDF.paa";
		typicalCargo[]=
		{
			"B_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_AAF_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_AAF_2.paa"
		};
	};
	class JAS_CUP_O_SU34_SLA: JAS_CUP_SU34_BASE
	{
		scope=2;
		scopeCurator=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=0;
		faction="CUP_O_SLA";
		accuracy=1000;
		crew="CUP_O_sla_Pilot";
		editorPreview = "\ARMA3_CUP_Enhancement_SU34\UI\editorpreview\SU34_SLA.jpg";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 SLA";
		fir_su34_custom_code="JAS_CUP_O_SU34_SLA";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\SLA.paa";
		typicalCargo[]=
		{
			"CUP_O_sla_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_SLA_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_SLA_2.paa"
		};
	};
	class JAS_CUP_I_SU34_AAF: JAS_CUP_SU34_BASE
	{
		scope=2;
		scopeCurator=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=2;
		faction="IND_F";
		accuracy=1000;
		crew="I_Pilot_F";
		editorPreview = "\ARMA3_CUP_Enhancement_SU34\UI\editorpreview\SU34_AAF.jpg";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 AAF";
		fir_su34_custom_code="JAS_CUP_I_SU34_AAF";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\AAF.paa";
		typicalCargo[]=
		{
			"I_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_AAF_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_AAF_2.paa"
		};
	};
	class JAS_CUP_B_SU34_CDF: JAS_CUP_SU34_BASE
	{
		scope=2;
		scopeCurator=2;
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=1;
		faction="CUP_B_CDF";
		accuracy=1000;
		crew="B_Pilot_F";
		editorPreview = "\ARMA3_CUP_Enhancement_SU34\UI\editorpreview\SU34_CDF.jpg";
		fir_su34_custom_skin=1;
		fir_su34_custom_name="Su-34 CDF";
		fir_su34_custom_code="JAS_CUP_B_SU34_CDF";
		fir_su34_custom_preview_pic="\ARMA3_CUP_Enhancement_SU34\UI\preview\CDF.paa";
		typicalCargo[]=
		{
			"B_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_CDF_1.paa",
			"cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_CDF_2.paa"
		};
	};
	class JAS_SU34_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Su-34 Loadout Module";
		category="GOL_Modules";
		function="JAS_fnc_SU34_Loadout";
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
					class hp3_73
					{
						name="R-73 'Vympel'";
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
					class hp4_73
					{
						name="R-73 'Vympel'";
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
					class hp5_73
					{
						name="R-73 'Vympel'";
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
					class hp5_Gsh
					{
						name="GSh-23 Gun Pod";
						value=4;
					};
					class hp5_vik
					{
						name="VIKHIR";
						value=5;
					};
					class hp5_29
					{
						name="Kh-29 'Kedge'";
						value=6;
					};
					class hp5_25
					{
						name="Kh-25 'Kegler' ARM";
						value=7;
					};
					class hp5_fab
					{
						name="FAB-250";
						value=8;
					};
					class hp5_kab
					{
						name="KAB-250";
						value=9;
					};
					class hp5_rbk
					{
						name="RBK-250";
						value=10;
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
					class hp6_73
					{
						name="R-73 'Vympel'";
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
					class hp6_Gsh
					{
						name="GSh-23 Gun Pod";
						value=4;
					};
					class hp6_vik
					{
						name="VIKHIR";
						value=5;
					};
					class hp6_29
					{
						name="Kh-29 'Kedge'";
						value=6;
					};
					class hp6_25
					{
						name="Kh-25 'Kegler' ARM";
						value=7;
					};
					class hp6_fab
					{
						name="FAB-250";
						value=8;
					};
					class hp6_kab
					{
						name="KAB-250";
						value=9;
					};
					class hp6_rbk
					{
						name="RBK-250";
						value=10;
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
					class hp7_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp7_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp7_Gsh
					{
						name="GSh-23 Gun Pod";
						value=3;
					};
					class hp7_vik
					{
						name="VIKHIR";
						value=4;
					};
					class hp7_29
					{
						name="Kh-29 'Kedge'";
						value=5;
					};
					class hp7_25
					{
						name="Kh-25 'Kegler' ARM";
						value=6;
					};
					class hp7_fab
					{
						name="FAB-250";
						value=7;
					};
					class hp7_kab
					{
						name="KAB-250";
						value=8;
					};
					class hp7_rbk
					{
						name="RBK-250";
						value=9;
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
					class hp8_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp8_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp8_Gsh
					{
						name="GSh-23 Gun Pod";
						value=3;
					};
					class hp8_vik
					{
						name="VIKHIR";
						value=4;
					};
					class hp8_29
					{
						name="Kh-29 'Kedge'";
						value=5;
					};
					class hp8_25
					{
						name="Kh-25 'Kegler' ARM";
						value=6;
					};
					class hp8_fab
					{
						name="FAB-250";
						value=7;
					};
					class hp8_kab
					{
						name="KAB-250";
						value=8;
					};
					class hp8_rbk
					{
						name="RBK-250";
						value=9;
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
					class hp9_drop
					{
						name="Fuel Tank";
						value=1;
					};
					class hp9_25
					{
						name="Kh-25 'Kegler' ARM";
						value=2;
					};
					class hp9_fab
					{
						name="FAB-250";
						value=3;
					};
					class hp9_kab
					{
						name="KAB-250";
						value=4;
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
					class hp10_drop
					{
						name="Fuel Tank";
						value=1;
					};
					class hp10_25
					{
						name="Kh-25 'Kegler' ARM";
						value=2;
					};
					class hp10_fab
					{
						name="FAB-250";
						value=3;
					};
					class hp10_kab
					{
						name="KAB-250";
						value=4;
					};
				};
			};
			class HP11
			{
				displayName="Hardpoint 11";
				description="Select Weapon for HP11";
				typeName="NUMBER";
				class values
				{
					class hp11_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp11_29
					{
						name="Kh-29 'Kedge'";
						value=1;
					};
					class hp11_25
					{
						name="Kh-25 'Kegler' ARM";
						value=2;
					};
					class hp11_fab
					{
						name="FAB-250";
						value=3;
					};
					class hp11_kab
					{
						name="KAB-250";
						value=4;
					};
				};
			};
			class HP12
			{
				displayName="Hardpoint 12";
				description="Select Weapon for HP12";
				typeName="NUMBER";
				class values
				{
					class hp12_empty
					{
						name="Empty";
						value=0;
						default=1;
					};
					class hp12_29
					{
						name="Kh-29 'Kedge'";
						value=1;
					};
					class hp12_25
					{
						name="Kh-25 'Kegler' ARM";
						value=2;
					};
					class hp12_fab
					{
						name="FAB-250";
						value=3;
					};
					class hp12_kab
					{
						name="KAB-250";
						value=4;
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
					class AF
					{
						name="Russian Air Force Puzzle";
						value=1;
					};
					class BLACK
					{
						name="Russian Air Force Black";
						value=2;
					};
					class BLUEP
					{
						name="Russian Air Force Blue Plain";
						value=3;
					};
					class CDF
					{
						name="Chernarussian Defence Force";
						value=4;
					};
					class CSAT
					{
						name="CSAT Hex";
						value=5;
					};
					class BLUE
					{
						name="Russian Air Force Blue Camo";
						value=6;
					};
					class SLA
					{
						name="Sahrani Liberation Army";
						value=7;
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
