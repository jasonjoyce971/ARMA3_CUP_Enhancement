class CfgPatches
{
	class ARMA3_CUP_Enhancement_SU25
	{
		units[]=
		{
			"JAS_CUP_B_Su25_CDF",
			"JAS_CUP_B_Su25_AAC",
			"JAS_CUP_O_Su25_TKA",
			"JAS_CUP_O_Su25_SLA",
			"JAS_CUP_O_Su25_RU_3",
			"JAS_CUP_O_Su25_AAC",
			"JAS_SU25_Loadout_Module"
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
		class ARMA3_CUP_Enhancement_SU25
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_SU25"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_SU25_Init_Function
		{
			class SU25_Loadout
			{
				file="\ARMA3_CUP_Enhancement_SU25\sqs\modules\su25_loadout_module.sqf";
			};
			class SU25_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_SU25\sqs\modules\su25_loadout_module_set.sqf";
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
			directory = "ARMA3_CUP_Enhancement_SU25\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_SU25\presentation\picture.paa";
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
		class SU25J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Su-25J Frogfoot";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground Attack Airplane";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Su-25 is a single seat, ground attack craft similar in role to the more famous A-10. Although capable of carrying a wide selection of weapons, the Su-25 excels at low level strafing runs with gun pods or rockets. The AAC upgrade pack adds the ability to change the payload to suite the mission and brings additional weapons such as the RBK cluster bomb, S-13 rocket system and Kh-25 ARM.<br/><br/>Payload Options:<br/><br/>%2R-73<br/>%2GSh-23 Pod<br/>%2S-8 Rockets<br/>%2S-13 Rockets<br/>%2Kh-25<br/>%2Kh-29<br/>%2Vikhir<br/>%2FAB-250<br/>%2KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2Chernarus Defence Forces<br/>%2Russian Federation<br/>%2Sahrani Liberation Army<br/>%2Takistani Army";
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
class SU25_GUI
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
			text = "ARMA3_CUP_Enhancement_SU25\ui\SU25_Background.paa";
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
			text = "Right Middle Outer";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.304 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1002 : RscText
		{
			idc = 1002;
			text = "Left Middle Outer";
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
			text = "Right Middle Inner";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Middle Inner";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Right Inboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Left Inboard";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_SU25\sqs\loadout\SU25_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_SU25\sqs\loadout\SU25_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_SU25\sqs\loadout\SU25_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_SU25\sqs\loadout\SU25_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_SU25\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_SU25\data\ico\ico.paa";
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
	class JAS_CUP_Su25_base: Plane
	{
		expansion=3;
		dlc="CUP_Vehicles";
		scope=0;
		simulation="airplane";
		destrType="DestructWreck";
		model="\CUP\AirVehicles\CUP_AirVehicles_Su25\model\CUP_SU25";
		displayName="Su-25J Frogfoot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		fir_su25_custom_skin=0;
		fir_su25_custom_name="Su-25 Russian Green";
		fir_su25_custom_code="JAS_CUP_Su25_base";
		fir_su25_custom_preview_pic="\ARMA3_CUP_Enhancement_SU25\UI\preview\SU25RGREEN.paa";
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
			minTurn=-10;
			maxTurn=10;
			initTurn=0;
			minElev=-10;
			maxElev=60;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=true;
		};
		memoryPointDriverOptics="cannon_barrel_end";
		unitInfoType="RscOptics_AV_pilot";
		class Library
		{
			libTextDesc="$STR_LIB_SU25_CDF";
		};
		weapons[]=
		{
			"JAS_CUP_Vacannon_GSh302K_veh",
			"FIR_MasterArm",
			"Laserdesignator_mounted",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"JAS_CUP_750Rnd_TE1_30mm_GSh302K_HE_M",
			"Laserbatteries",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		insideSoundCoef=0.30000001;
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			0.56234133,
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
			"A3\Sounds_F_EPC\CAS_01\CAS_01_start_int",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_EPC\CAS_01\CAS_01_start_ext",
			1.4125376,
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_EPC\CAS_01\CAS_01_stop_int",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_EPC\CAS_01\CAS_01_stop_ext",
			1.4125376,
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
			"A3\Sounds_F_EPC\CAS_01\gear_up",
			0.79432821,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_01\gear_down",
			0.79432821,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Up",
			0.63095737,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Down",
			0.63095737,
			1,
			100
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_ext",
					1.7782794,
					1,
					2100
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",
					1.9952624,
					1.2,
					2500
				};
				frequency="1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",
					2.5118864,
					1.2,
					2800
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
					"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_int",
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
					"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_int",
					1,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_int",
					1,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					0.50118721,
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
		driverAction="CUP_SU25_Pilot";
		accuracy=0.2;
		landingSpeed=220;
		acceleration=300;
		maxSpeed=900;
		side=0;
		armor=75;
		damageResistance=0.0040000002;
		armorStructural=1;
		irScanRangeMin=100;
		irScanRangeMax=10000;
		irScanToEyeFactor=3;
		aileronSensitivity=0.89999998;
		elevatorSensitivity=0.80000001;
		envelope[]={0,0.2,1.2,3,4.5,5.3000002,6,5.8000002,5.5999999,4.8000002,3.5999999,1.8,0};
		landingAoa="rad 10";
		laserScanner=1;
		LockDetectionSystem="2 + 4 + 8";
		incomingMissileDetectionSystem=16;
		gunAimDown=0.045000002;
		memoryPointLRocket="L raketa";
		memoryPointRRocket="P raketa";
		flapsFrictionCoef=0.31999999;
		minFireTime=30;
		threat[]={1,1,1};
		icon="\CUP\AirVehicles\CUP_AirVehicles_Su25\data\ui\icomap_su25.paa";
		mapSize=20;
		picture="\CUP\AirVehicles\CUP_AirVehicles_Su25\data\ui\su25.paa";
		driveOnComponent[]=
		{
			"Gear_f_w",
			"Gear_l_w",
			"Gear_r_w"
		};
		driverRightHandAnimName="stick_pilot";
		driverLeftHandAnimName="stick_pilot";
		class Turrets
		{
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
					hardLimitStart=400;
					hardLimitEnd=500;
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
		aggregateReflectors[]={};
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustsEffectJet";
			};
			class Exhaust_2
			{
				position="Exhaust_2_pos";
				direction="Exhaust_2_dir";
				effect="ExhaustsEffectJet";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_rus_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_rus_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_glass_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="CUP_Vacannon_GSh302K_veh";
			};
		};
		class ViewPilot
		{
			initFov=0.55000001;
			minFov=0.25;
			maxFov=0.80000001;
			initAngleX=0;
			minAngleX=-75;
			maxAngleX=50;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			maxmovex=0.15000001;
			maxmovey=0.1;
			maxmovez=0.1;
			minmovex=-0.15000001;
			minmovey=-0.1;
			minmovez=-0.1;
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
		HeadAimDown=4;
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
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,7,-1.6799999};
		LESH_WheelOffset[]={0,-1};
		class UserActions
		{
			class SU25_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_SU25\sqs\loadout\SU25_GUI_Open.sqf""";
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
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\FIR_AWS_MFD_N_Open.sqf""";
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
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEADRUS.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
		};
	};
	class JAS_CUP_B_Su25_CDF: JAS_CUP_Su25_base
	{
		scope=2;
		side=1;
		displayName="Su-25J Frogfoot";
		author="CUP/-{GOL}-Jason";
		faction="CUP_B_CDF";
		crew="B_Pilot_F";
		editorPreview = "\ARMA3_CUP_Enhancement_SU25\UI\editorpreview\Su25_CDF.jpg";
		fir_su25_custom_skin=1;
		fir_su25_custom_name="Su-25 CDF";
		fir_su25_custom_code="JAS_CUP_B_Su25_CDF";
		fir_su25_custom_preview_pic="\ARMA3_CUP_Enhancement_SU25\UI\preview\SU25CDF.paa";
		typicalCargo[]=
		{
			"B_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_cdf_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_cdf_co.paa"
		};
	};
	class JAS_CUP_B_Su25_AAC: JAS_CUP_Su25_base
	{
		scope=2;
		side=1;
		displayName="Su-25J Frogfoot";
		author="CUP/-{GOL}-Jason";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		crew="B_Pilot_F";
		editorPreview = "\ARMA3_CUP_Enhancement_SU25\UI\editorpreview\Su25_CDF.jpg";
		fir_su25_custom_skin=0;
		fir_su25_custom_name="Su-25 CDF";
		fir_su25_custom_code="JAS_CUP_B_Su25_CDF";
		fir_su25_custom_preview_pic="\ARMA3_CUP_Enhancement_SU25\UI\preview\SU25CDF.paa";
		typicalCargo[]=
		{
			"B_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_cdf_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_cdf_co.paa"
		};
	};
	class JAS_CUP_O_Su25_TKA: JAS_CUP_Su25_base
	{
		scope=2;
		side=0;
		displayName="Su-25J Frogfoot";
		author="CUP/-{GOL}-Jason";
		faction="CUP_O_TK";
		crew="CUP_O_TK_Pilot";
		editorPreview = "\ARMA3_CUP_Enhancement_SU25\UI\editorpreview\Su25_TKA.jpg";
		fir_su25_custom_skin=1;
		fir_su25_custom_name="Su-25 TKA";
		fir_su25_custom_code="JAS_CUP_O_Su25_TKA";
		fir_su25_custom_preview_pic="\ARMA3_CUP_Enhancement_SU25\UI\preview\SU25TKA.paa";
		typicalCargo[]=
		{
			"CUP_O_TK_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_ind_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_ind_co.paa"
		};
	};
	class JAS_CUP_O_Su25_SLA: JAS_CUP_Su25_base
	{
		scope=2;
		side=0;
		displayName="Su-25J Frogfoot";
		author="CUP/-{GOL}-Jason";
		faction="CUP_O_SLA";
		crew="CUP_O_sla_Pilot";
		editorPreview = "\ARMA3_CUP_Enhancement_SU25\UI\editorpreview\Su25_SLA.jpg";
		fir_su25_custom_skin=1;
		fir_su25_custom_name="Su-25 SLA";
		fir_su25_custom_code="JAS_CUP_O_Su25_SLA";
		fir_su25_custom_preview_pic="\ARMA3_CUP_Enhancement_SU25\UI\preview\SU25SLA.paa";
		typicalCargo[]=
		{
			"CUP_O_sla_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body1_sla1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body2_sla1_co.paa"
		};
	};
	class JAS_CUP_O_Su25_RU_3: JAS_CUP_Su25_base
	{
		scope=2;
		side=0;
		displayName="Su-25J Frogfoot";
		author="CUP/-{GOL}-Jason";
		faction="CUP_O_RU";
		crew="O_Pilot_F";
		editorPreview = "\ARMA3_CUP_Enhancement_SU25\UI\editorpreview\Su25_RU.jpg";
		fir_su25_custom_skin=1;
		fir_su25_custom_name="Su-25 Russian Tigers";
		fir_su25_custom_code="JAS_CUP_O_Su25_RU_3";
		fir_su25_custom_preview_pic="\ARMA3_CUP_Enhancement_SU25\UI\preview\SU25RTIGER.paa";
		typicalCargo[]=
		{
			"O_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body1_rusn2_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body2_rusn2_co.paa"
		};
	};
	class JAS_CUP_O_Su25_AAC: JAS_CUP_Su25_base
	{
		scope=2;
		side=0;
		displayName="Su-25J Frogfoot";
		author="CUP/-{GOL}-Jason";
		faction = "GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		crew="O_Pilot_F";
		editorPreview = "\ARMA3_CUP_Enhancement_SU25\UI\editorpreview\Su25_AAC.jpg";
		fir_su25_custom_skin=1;
		fir_su25_custom_name="Su-25 Russian Blue";
		fir_su25_custom_code="JAS_CUP_O_Su25_AAC";
		fir_su25_custom_preview_pic="\ARMA3_CUP_Enhancement_SU25\UI\preview\SU25RBLUE.paa";
		typicalCargo[]=
		{
			"O_Pilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body1_rusn1_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body2_rusn1_co.paa"
		};
	};
	class JAS_CUPSU25Wreck: PlaneWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_Su25\model\CUP_SU25Wreck";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		hideWeaponsCargo=1;
		transportSoldier=1;
		class Eventhandlers
		{
		};
	};
	class JAS_SU25_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Su-25 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_SU25_Loadout";
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
					class hp1_r73
					{
						name="R-73 Vympel";
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
					class hp2_r73
					{
						name="R-73 Vympel";
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
					class hp3_25
					{
						name="Kh-25 'Kegler' ARM";
						value=3;
					};
					class hp3_73
					{
						name="R-73 'Vympel''";
						value=4;
					};
					class hp3_29
					{
						name="Kh-29 'Kedge'";
						value=5;
					};
					class hp3_fab
					{
						name="FAB-250";
						value=6;
					};
					class hp3_kab
					{
						name="KAB-250";
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
					class hp4_25
					{
						name="Kh-25 'Kegler' ARM";
						value=3;
					};
					class hp4_73
					{
						name="R-73 'Vympel''";
						value=4;
					};
					class hp4_29
					{
						name="Kh-29 'Kedge'";
						value=5;
					};
					class hp4_fab
					{
						name="FAB-250";
						value=6;
					};
					class hp4_kab
					{
						name="KAB-250";
						value=7;
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
					class hp5_25
					{
						name="Kh-25 'Kegler' ARM";
						value=3;
					};
					class hp5_73
					{
						name="R-73 'Vympel''";
						value=4;
					};
					class hp5_29
					{
						name="Kh-29 'Kedge'";
						value=5;
					};
					class hp5_fab
					{
						name="FAB-250";
						value=6;
					};
					class hp5_kab
					{
						name="KAB-250";
						value=7;
					};
					class hp5_rbk
					{
						name="RBK-250";
						value=8;
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
					class hp6_25
					{
						name="Kh-25 'Kegler' ARM";
						value=3;
					};
					class hp6_73
					{
						name="R-73 'Vympel''";
						value=4;
					};
					class hp6_29
					{
						name="Kh-29 'Kedge'";
						value=5;
					};
					class hp6_fab
					{
						name="FAB-250";
						value=6;
					};
					class hp6_kab
					{
						name="KAB-250";
						value=7;
					};
					class hp6_rbk
					{
						name="RBK-250";
						value=8;
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
					class hp7_fab
					{
						name="FAB-250";
						value=6;
					};
					class hp7_kab
					{
						name="KAB-250";
						value=7;
					};
					class hp7_rbk
					{
						name="RBK-250";
						value=8;
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
					class hp8_fab
					{
						name="FAB-250";
						value=6;
					};
					class hp8_kab
					{
						name="KAB-250";
						value=7;
					};
					class hp8_rbk
					{
						name="RBK-250";
						value=8;
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
					class hp9_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp9_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp9_GSh
					{
						name="GSh-23 Gun Pod";
						value=3;
					};
					class hp9_fab
					{
						name="FAB-250";
						value=4;
					};
					class hp9_kab
					{
						name="KAB-250";
						value=5;
					};
					class hp9_rbk
					{
						name="RBK-250";
						value=6;
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
					class hp10_s8
					{
						name="S-8 Rockets";
						value=1;
					};
					class hp10_s13
					{
						name="S-13 Rockets";
						value=2;
					};
					class hp10_GSh
					{
						name="GSh-23 Gun Pod";
						value=3;
					};
					class hp10_fab
					{
						name="FAB-250";
						value=4;
					};
					class hp10_kab
					{
						name="KAB-250";
						value=5;
					};
					class hp10_rbk
					{
						name="RBK-250";
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
					class SLA
					{
						name="Sahrani Liberation Army";
						value=2;
					};
					class RusTiger
					{
						name="Russian Federation (Tigers)";
						value=3;
					};
					class RusGreen
					{
						name="Russian Federation (Green)";
						value=4;
					};
					class RusBlue
					{
						name="Russian Federation (Air Force Blue)";
						value=5;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="Su-25 Loadout Module";
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
