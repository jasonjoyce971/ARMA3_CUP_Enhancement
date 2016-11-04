class CfgPatches
{
	class ARMA3_CUP_Enhancement_AV8
	{
		units[]=
		{
			"JAS_CUP_AV8B_Base",
			"JAS_CUP_B_AV8B_USMC",
			"JAS_CUP_B_AV8B_USMC2",
			"JAS_CUP_B_AV8B_USMC3",
			"JAS_CUP_B_AV8B_USMC4",
			"JAS_CUP_I_AV8B_AAF",
			"JAS_CUP_AV8B_AAC",
			"JAS_CUP_I_AV8B_AAC",
			"JAS_CUP_B_GR9_GB",
			"JAS_CUP_GR9_AAC",
			"JAS_CUP_AV8B_Canopy",
			"JAS_CUP_AV8B_EjectionSeat",
			"JAS_CUP_AV8BWreck",
			"JAS_AV8_Loadout_Module",
			"JAS_GR9_Loadout_Module"
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
		class ARMA3_CUP_Enhancement_AV8
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_AV8"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_GR9_Init_Function
		{
			class GR9_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\gr9_loadout_module.sqf";
			};
			class GR9_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\gr9_loadout_module_set.sqf";
			};
		};
		class JAS_AV8_Init_Function
		{
			class AV8_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\av8_loadout_module.sqf";
			};
			class AV8_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AV8\sqs\modules\av8_loadout_module_set.sqf";
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
			directory = "ARMA3_CUP_Enhancement_AV8\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_AV8\presentation\picture.paa";
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
		// Topic title (displayed only in topic listbox in Field Manual)
		class AV8
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AV-8 Harrier";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack STOVL";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Harrier chassis was produced in the US as the AV-8 and the UK as the Harrier throughout the 70s and 80s and was the worlds first true STOVL attack craft. Designed to operate from LHDs or the UKs Invincible class aircraft carriers, the Harrier saw nearly 20 years service before being phased out and replaced by the F-35. The last remaining harriers in service are with the USMC and will be replaced by 2020. Due to the nature of its deployment, the AV-8 cannot compare to the A-10 in the ground attack role. It can however take off from airfields that the A-10 can only dream of making it a lot easier to deploy.<br/><br/>Payload Options:<br/><br/>%2AIM-9. The UK GR9 variant has 2 extra hardpoints dedicated to these missiles<br/>%2AIM-120 (USMC Only)<br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2AGM-88 (USMC Only)<br/>%2CRV-7 Rockets (UK Only)<br/>%2Mk82 GPB<br/>%2Mk82 SNAKE<br/>%2Mk84 GPB<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-24<br/>%2GBU-31 (USMC Only)<br/>%2GBU-32 (USMC Only)<br/>%2GBU-38 (USMC Only)<br/>%2CBU-87 (USMC Only)<br/>%2CBU-89 (USMC Only)<br/>%2CBU-97 (USMC Only)<br/>%2CBU-103 (USMC Only)<br/><br/>Factions:<br/><br/>%2USMC<br/>%2UK";
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
class AV8_GUI
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
			text = "ARMA3_CUP_Enhancement_AV8\ui\AV8B_background.paa";
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
		class AV8_refuel_Button : RscPicture
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
		class AV8_repair_Button : RscPicture
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
		class AV8_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_Loadout.sqf""";
		};
		class AV8_Cancel_Button : RscPicture
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
		class AV8_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_SaveCustom.sqf""";
		};
		class AV8_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_SaveCustom.sqf""";
		};
		class AV8_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_SaveCustom.sqf""";
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
class GR9_GUI
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
			text = "ARMA3_CUP_Enhancement_AV8\ui\AV8B_background.paa";
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
			text = "Right Wheel Strut";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.358 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1004 : RscText
		{
			idc = 1004;
			text = "Left Wheel Strut";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_SaveCustom.sqf""";
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
	class thingX;
	class Motorcycle;
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
	class JAS_CUP_AV8B_Canopy : thingX
	{
		mapSize = 0.77999997;
		author = "John_Spartan & Saul";
		displayName = "AV8B Canopy";
		model = "\cup\airvehicles\cup_airvehicles_av8b\models\cup_av8b_canopy.p3d";
		_generalMacro = "thingX";
		scope = 1;
		simulation = "thing";
		animated = 0;
		reversed = 1;
		nameSound = "";
		vehicleClass = "Objects";
		accuracy = 0.2;
		class DestructionEffects
		{
		};
	};
	class JAS_CUP_AV8B_EjectionSeat : Motorcycle
	{
		destrType = "DestructNo";
		reversed = 1;
		startEngine = 0;
		hasdriver = 0;
		crew = "CUP_AV8B_Pilot";
		castCargoShadow = 1;
		transportSoldier = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		cargoCanEject = 1;
		driverCanEject = 0;
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] =
		{
			"CUP_AV8B_Pilot"
		};
		driverAction = "CUP_AV8B_Pilot";
		getInAction = "";
		getOutAction = "";
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos driver";
		memoryPointsGetInCargoDir = "pos driver dir";
		usePreciseGetInAction = 0;
		scope = 1;
		vehicleClass = "Objects";
		side = 1;
		faction = "BLU_F";
		author = "John_Spartan & Saul";
		displayName = "Ejection Seat";
		canFloat = 0;
		driveOnComponent[] =
		{
			"landcontact_1",
			"landcontact_2",
			"landcontact_3",
			"landcontact_4"
		};
		Icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\models\cup_av8b_ejection_seat.p3d";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGetIn[] =
		{
			"",
			0.00031622776,
			1
		};
		soundGetOut[] =
		{
			"",
			0.00031622776,
			1
		};
		soundEngine[] =
		{
			"",
			1.7782794,
			0.89999998
		};
		soundEnviron[] =
		{
			"",
			0.56234097,
			1
		};
		unitInfoType = "RscUnitInfoSoldier";
		hideUnitInfo = 1;
		weapons[] = {};
		magazines[] = {};
		dammageHalf[] = {};
		dammageFull[] = {};
		extCameraPosition[] = { 0, 3, -10 };
		threat[] = { 0, 0, 0 };
		class ViewPilot
		{
			initFov = 1;
			minFov = 0.60000002;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = -35;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -130;
			maxAngleY = 130;
			minMoveX = -0.2;
			maxMoveX = 0.2;
			minMoveY = -0.025;
			maxMoveY = 0.1;
			minMoveZ = -0.2;
			maxMoveZ = 0.2;
		};
		fuelCapacity = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class Turrets
		{
		};
		class Exhausts
		{
		};
		class Reflectors
		{
		};
		class Sounds
		{
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int_destruct.rvmat"
			};
		};
		class Eventhandlers : Eventhandlers
		{
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers
			{
			};
		};
	};
	class JAS_CUP_AV8B_Base : Plane
	{
		scope = 1;
		crew = "B_Pilot_F";
		destrType = "DestructWreck";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		picture = "\cup\airvehicles\cup_airvehicles_av8b\data\ui\av8b_CA.paa";
		Icon = "\cup\airvehicles\cup_airvehicles_av8b\data\ui\icomap_AV8B_CA.paa";
		mapSize = 14;
		side = 1;
		faction = "CUP_B_USMC";
		displayName = "AV-8B Harrier II (CAS)";
		vehicleClass = "Air";
		author = "Chairborne/-{GOL}-Jason";
		accuracy = 0.30000001;
		typicalCargo[] =
		{
			"B_Pilot_F"
		};
		simulation = "airplane";
		driverAction = "CUP_AV8B_Pilot";
		LockDetectionSystem = "2 + 4 + 8";
		incomingMissileDetectionSystem = 16;
		driverCanEject = 0;
		driverRightHandAnimName = "stick_pilot";
		class Turrets
		{
		};
		dammageHalf[] =
		{
			"\cup\airvehicles\cup_airvehicles_av8b\data\ah1z_monitor_glass_ca.paa",
			"\cup\airvehicles\cup_airvehicles_av8b\data\ah1z_monitor_glass_destr_co.paa"
		};
		dammageFull[] =
		{
			"\cup\airvehicles\cup_airvehicles_av8b\data\ah1z_monitor_glass_ca.paa",
			"\cup\airvehicles\cup_airvehicles_av8b\data\ah1z_monitor_glass_destr_co.paa"
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_glass.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_glass_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_glass_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_glass_in.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_glass_in_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_glass_in_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_int_destruct.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_destruct.rvmat"
			};
		};
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_usmc_ext_co.paa"
		};
		dustEffect = "HeliDust";
		waterEffect = "HeliWater";
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
		class Reflectors
		{
			class Left
			{
				position = "light_1_pos";
				direction = "light_1_dir";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				color[] = { 0.85000002, 0.94999999, 1 };
				ambient[] = { 0.0085000005, 0.0094999997, 0.0099999998 };
				intensity = 100000;
				size = 1;
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 500;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 5;
					quadratic = 2;
					hardLimitStart = 400;
					hardLimitEnd = 500;
				};
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust_1_pos";
				direction = "nozzle_1_1";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_2
			{
				position = "Exhaust_2_pos";
				direction = "nozzle_1_2";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_3
			{
				position = "Exhaust_3_pos";
				direction = "nozzle_2_1";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_4
			{
				position = "Exhaust_4_pos";
				direction = "nozzle_2_2";
				effect = "ExhaustsEffectJet";
			};
		};
		class MFD
		{
			class statichud
			{
				enableParallax = 0;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = { 0.48500001, 0.40000001 };
					pos10[] = { 1.225, 1.1 };
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0, 0.30000001, 0.050000001, 0.30000001 };
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = { 0.4975, 0.38 };
					};
					class Center
					{
						type = "fixed";
						pos[] =
						{
							0.4975,
							"(0.383)"
						};
					};
					class Velocity : Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.5, 0.38299999 };
						pos10[] = { 1.47, 1.483 };
					};
					class ASL_Instrument
					{
						type = "rotational";
						source = "altitudeASL";
						center[] = { 0.89999998, 0.340206 };
						min = 0;
						max = 20000;
						minAngle = 0;
						maxAngle = 72000;
						aspectRatio = 1.13402;
					};
					class Speed_Instrument : ASL_Instrument
					{
						source = "speed";
						center[] = { 0.1, 0.340206 };
						max = 555.55603;
						maxAngle = 7200;
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = { 0.4975, 0.38 };
						min = -0.52359998;
						max = 0.52359998;
						minAngle = 159.25;
						maxAngle = 200.75;
						aspectRatio = 1;
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = { 0.5, 0.40000001 };
						pos3[] = { 0.722, 0.40000001 };
					};
					class ILS_W : ILS_H
					{
						pos3[] = { 0.5, 0.61000001 };
					};
					class Level0 : Pos10Vector
					{
						pos0[] = { 0.4975, 0.38 };
						pos10[] = { 1.4675, 1.48 };
						type = "horizon";
						angle = 0;
					};
					class LevelP5 : Level0
					{
						angle = 5;
					};
					class LevelM5 : Level0
					{
						angle = -5;
					};
					class LevelP10 : Level0
					{
						angle = 10;
					};
					class LevelM10 : Level0
					{
						angle = -10;
					};
					class LevelP15 : Level0
					{
						angle = 15;
					};
					class LevelM15 : Level0
					{
						angle = -15;
					};
					class LevelP20 : Level0
					{
						angle = 20;
					};
					class LevelM20 : Level0
					{
						angle = -20;
					};
					class LevelP25 : Level0
					{
						angle = 25;
					};
					class LevelM25 : Level0
					{
						angle = -25;
					};
					class LevelP30 : Level0
					{
						angle = 30;
					};
					class LevelM30 : Level0
					{
						angle = -30;
					};
					class LevelP35 : Level0
					{
						angle = 35;
					};
					class LevelM35 : Level0
					{
						angle = -35;
					};
					class LevelP40 : Level0
					{
						angle = 40;
					};
					class LevelM40 : Level0
					{
						angle = -40;
					};
					class LevelP45 : Level0
					{
						angle = 45;
					};
					class LevelM45 : Level0
					{
						angle = -45;
					};
					class LevelP50 : Level0
					{
						angle = 50;
					};
					class LevelM50 : Level0
					{
						angle = -50;
					};
				};
				class draw
				{
					alpha = 0.30000001;
					color[] = { 0, 0.30000001, 0.050000001 };
					condition = "on";
					class PlaneW
					{
						clipTL[] = { 0, 1 };
						clipBR[] = { 1, 0 };
						type = "line";
						points[] =
						{

							{
								"PlaneW",
								{ -0.079999998, 0 },
								1
							},

							{
								"PlaneW",
								{ -0.029999999, 0 },
								1
							},

							{
								"PlaneW",
								{ -0.015, 0.028378399 },
								1
							},

							{
								"PlaneW",
								{ 0, 0 },
								1
							},

							{
								"PlaneW",
								{ 0.015, 0.028378399 },
								1
							},

							{
								"PlaneW",
								{ 0.029999999, 0 },
								1
							},

							{
								"PlaneW",
								{ 0.079999998, 0 },
								1
							}
						};
					};
					class HorizonBankRot
					{
						type = "line";
						points[] =
						{

							{
								"HorizonBankRot",
								{ 0, 0.396907 },
								1
							},

							{
								"HorizonBankRot",
								{ 0.0099999998, 0.419588 },
								1
							},

							{
								"HorizonBankRot",
								{ -0.0099999998, 0.419588 },
								1
							},

							{
								"HorizonBankRot",
								{ 0, 0.396907 },
								1
							}
						};
					};
					class Horizont
					{
						clipTL[] = { 0, 0 };
						clipBR[] = { 1, 1 };
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{ -0.2, 0 },
										1
									},

									{
										"Level0",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.050000001, 0 },
										1
									},

									{
										"Level0",
										{ 0.2, 0 },
										1
									}
								};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{ -0.23, -0.025 },
									1
								};
								right[] =
								{
									"Level0",
									{ -0.13, -0.025 },
									1
								};
								down[] =
								{
									"Level0",
									{ -0.23, 0.025 },
									1
								};
							};
							class VALM_2_0 : VALM_1_0
							{
								align = "right";
								pos[] =
								{
									"Level0",
									{ 0.22, -0.025 },
									1
								};
								right[] =
								{
									"Level0",
									{ 0.31999999, -0.025 },
									1
								};
								down[] =
								{
									"Level0",
									{ 0.22, 0.025 },
									1
								};
							};
							class LevelM5 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM5",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM5",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM5",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM5",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM5",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM5",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM5",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM5",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM5",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM5",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM5",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM5",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM5",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_5 : VALM_1_5
							{
								align = "right";
								pos[] =
								{
									"LevelM5",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM5",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM5",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP5 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP5",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP5",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP5",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP5",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP5",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP5",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP5",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP5",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP5",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_5 : VALP_1_5
							{
								align = "right";
								pos[] =
								{
									"LevelP5",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP5",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP5",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM10 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM10",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM10",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM10",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM10",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM10",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM10",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM10",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_10 : VALM_1_10
							{
								align = "right";
								pos[] =
								{
									"LevelM10",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM10",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM10",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP10 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP10",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP10",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP10",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP10",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP10",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP10",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP10",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP10",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP10",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_10 : VALP_1_10
							{
								align = "right";
								pos[] =
								{
									"LevelP10",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP10",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP10",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM15 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM15",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM15",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM15",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM15",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM15",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM15",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM15",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM15",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM15",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM15",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM15",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM15",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM15",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_15 : VALM_1_15
							{
								align = "right";
								pos[] =
								{
									"LevelM15",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM15",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM15",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP15 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP15",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP15",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP15",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP15",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP15",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP15",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP15",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP15",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP15",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_15 : VALP_1_15
							{
								align = "right";
								pos[] =
								{
									"LevelP15",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP15",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP15",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM20 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM20",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM20",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM20",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM20",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM20",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM20",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM20",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_20 : VALM_1_20
							{
								align = "right";
								pos[] =
								{
									"LevelM20",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM20",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM20",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP20 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP20",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP20",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP20",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP20",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP20",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP20",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP20",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP20",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP20",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_20 : VALP_1_20
							{
								align = "right";
								pos[] =
								{
									"LevelP20",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP20",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP20",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM25 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM25",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM25",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM25",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM25",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM25",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM25",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM25",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM25",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM25",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM25",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM25",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM25",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM25",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_25 : VALM_1_25
							{
								align = "right";
								pos[] =
								{
									"LevelM25",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM25",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM25",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP25 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP25",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP25",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP25",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP25",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP25",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP25",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP25",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP25",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP25",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_25 : VALP_1_25
							{
								align = "right";
								pos[] =
								{
									"LevelP25",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP25",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP25",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM30 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM30",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM30",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM30",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM30",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM30",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM30",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM30",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_30 : VALM_1_30
							{
								align = "right";
								pos[] =
								{
									"LevelM30",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM30",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM30",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP30 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP30",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP30",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP30",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP30",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP30",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP30",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP30",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP30",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP30",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_30 : VALP_1_30
							{
								align = "right";
								pos[] =
								{
									"LevelP30",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP30",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP30",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM35 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM35",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM35",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM35",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM35",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM35",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM35",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM35",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM35",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM35",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM35",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM35",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM35",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM35",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_35 : VALM_1_35
							{
								align = "right";
								pos[] =
								{
									"LevelM35",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM35",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM35",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP35 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP35",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP35",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP35",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP35",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP35",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP35",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP35",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP35",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP35",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_35 : VALP_1_35
							{
								align = "right";
								pos[] =
								{
									"LevelP35",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP35",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP35",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM40 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM40",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM40",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM40",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM40",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM40",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM40",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM40",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_40 : VALM_1_40
							{
								align = "right";
								pos[] =
								{
									"LevelM40",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM40",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM40",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP40 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP40",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP40",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP40",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP40",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP40",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP40",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP40",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP40",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP40",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_40 : VALP_1_40
							{
								align = "right";
								pos[] =
								{
									"LevelP40",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP40",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP40",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM45 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM45",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM45",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM45",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM45",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM45",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM45",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM45",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM45",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM45",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM45",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM45",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM45",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM45",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_45 : VALM_1_45
							{
								align = "right";
								pos[] =
								{
									"LevelM45",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM45",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM45",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP45 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP45",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP45",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP45",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP45",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP45",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP45",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP45",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP45",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP45",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_45 : VALP_1_45
							{
								align = "right";
								pos[] =
								{
									"LevelP45",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP45",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP45",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM50 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM50",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM50",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM50",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM50",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM50",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM50",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM50",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_50 : VALM_1_50
							{
								align = "right";
								pos[] =
								{
									"LevelM50",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM50",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM50",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP50 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP50",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP50",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP50",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP50",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP50",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP50",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP50",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP50",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP50",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_50 : VALP_1_50
							{
								align = "right";
								pos[] =
								{
									"LevelP50",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP50",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP50",
									{ 0.22, 0.085000001 },
									1
								};
							};
						};
					};
					class PlaneHeading
					{
						clipTL[] = { 0, 1 };
						clipBR[] = { 1, 0 };
						type = "line";
						points[] =
						{

							{
								"Velocity",
								{ 0, -0.0189189 },
								1
							},

							{
								"Velocity",
								{ 0.014, -0.0132432 },
								1
							},

							{
								"Velocity",
								{ 0.02, 0 },
								1
							},

							{
								"Velocity",
								{ 0.014, 0.0132432 },
								1
							},

							{
								"Velocity",
								{ 0, 0.0189189 },
								1
							},

							{
								"Velocity",
								{ -0.014, 0.0132432 },
								1
							},

							{
								"Velocity",
								{ -0.02, 0 },
								1
							},

							{
								"Velocity",
								{ -0.014, -0.0132432 },
								1
							},

							{
								"Velocity",
								{ 0, -0.0189189 },
								1
							},
							{},

							{
								"Velocity",
								{ 0.039999999, 0 },
								1
							},

							{
								"Velocity",
								{ 0.02, 0 },
								1
							},
							{},

							{
								"Velocity",
								{ -0.039999999, 0 },
								1
							},

							{
								"Velocity",
								{ -0.02, 0 },
								1
							},
							{},

							{
								"Velocity",
								{ 0, -0.0378378 },
								1
							},

							{
								"Velocity",
								{ 0, -0.0189189 },
								1
							},
							{}
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
								{ 0.20999999, 0.51999998 },
								1
							},

							{
								{ 0.19, 0.5 },
								1
							},

							{
								{ 0.20999999, 0.47999999 },
								1
							},
							{},

							{
								{ 0.18000001, 0.2 },
								1
							},

							{
								{ 0.18000001, 0.85000002 },
								1
							},
							{},

							{
								{ 0.79000002, 0.51999998 },
								1
							},

							{
								{ 0.81, 0.5 },
								1
							},

							{
								{ 0.79000002, 0.47999999 },
								1
							},
							{},

							{
								{ 0.81999999, 0.2 },
								1
							},

							{
								{ 0.81999999, 0.85000002 },
								1
							},
							{},

							{

								{
									0.51999998,
									"0.08+0.01"
								},
								1
							},

							{

								{
									0.5,
									"0.06+0.01"
								},
								1
							},

							{

								{
									0.47999999,
									"0.08+0.01"
								},
								1
							},
							{},

							{

								{
									0.2,
									"0.055+0.01"
								},
								1
							},

							{

								{
									0.80000001,
									"0.055+0.01"
								},
								1
							},
							{}
						};
					};
					class SpeedNumberbox
					{
						class Text
						{
							type = "text";
							source = "static";
							text = "SPD";
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.2, 0.311856 },
								1
							};
							right[] =
							{
								{ 0.25999999, 0.311856 },
								1
							};
							down[] =
							{
								{ 0.2, 0.36855701 },
								1
							};
						};
						class Box
						{
							type = "line";
							points[] =
							{

								{
									{ 0.18000001, 0.36855701 },
									1
								},

								{
									{ -1, 0.36855701 },
									1
								},

								{
									{ -1, 0.311856 },
									1
								},

								{
									{ 0.18000001, 0.311856 },
									1
								},

								{
									{ 0.18000001, 0.36855701 },
									1
								}
							};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.5999999;
						align = "center";
						scale = 1;
						pos[] =
						{
							{ 0.1, 0.311856 },
							1
						};
						right[] =
						{
							{ 0.16, 0.311856 },
							1
						};
						down[] =
						{
							{ 0.1, 0.36855701 },
							1
						};
					};
					class AltNumberASL
					{
						class Text
						{
							type = "text";
							source = "static";
							text = "ASL";
							align = "left";
							scale = 1;
							pos[] =
							{
								{ 0.80000001, 0.311856 },
								1
							};
							right[] =
							{
								{ 0.86000001, 0.311856 },
								1
							};
							down[] =
							{
								{ 0.80000001, 0.36855701 },
								1
							};
						};
						class Box
						{
							type = "line";
							points[] =
							{

								{
									{ 0.81999999, 0.36855701 },
									1
								},

								{
									{ 1, 0.36855701 },
									1
								},

								{
									{ 1, 0.311856 },
									1
								},

								{
									{ 0.81999999, 0.311856 },
									1
								},

								{
									{ 0.81999999, 0.36855701 },
									1
								}
							};
						};
					};
					class AltNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] =
						{
							{ 0.89999998, 0.311856 },
							1
						};
						right[] =
						{
							{ 0.95999998, 0.311856 },
							1
						};
						down[] =
						{
							{ 0.89999998, 0.36855701 },
							1
						};
					};
					class AltNumberAGL
					{
						class Text
						{
							type = "text";
							source = "static";
							text = "AGL";
							align = "left";
							scale = 1;
							pos[] =
							{
								{ 0.80000001, 0.53865999 },
								1
							};
							right[] =
							{
								{ 0.86000001, 0.53865999 },
								1
							};
							down[] =
							{
								{ 0.80000001, 0.59536099 },
								1
							};
						};
						class Box
						{
							type = "line";
							points[] =
							{

								{
									{ 0.81999999, 0.59536099 },
									1
								},

								{
									{ 1, 0.59536099 },
									1
								},

								{
									{ 1, 0.53865999 },
									1
								},

								{
									{ 0.81999999, 0.53865999 },
									1
								},

								{
									{ 0.81999999, 0.59536099 },
									1
								}
							};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] =
							{
								{ 0.89999998, 0.53865999 },
								1
							};
							right[] =
							{
								{ 0.95999998, 0.53865999 },
								1
							};
							down[] =
							{
								{ 0.89999998, 0.59536099 },
								1
							};
						};
					};
					class Gear
					{
						condition = "ils";
						color[] = { 0, 0.125, 0 };
						class Text
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "left";
							scale = 1;
							pos[] =
							{
								{ 0.99000001, 0.82216501 },
								1
							};
							right[] =
							{
								{ 1.05, 0.82216501 },
								1
							};
							down[] =
							{
								{ 0.99000001, 0.87886602 },
								1
							};
						};
					};
					class Flaps
					{
						condition = "flaps";
						color[] = { 0, 0.125, 0 };
						class Text
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "left";
							scale = 1;
							pos[] =
							{
								{ 0.99000001, 0.87886602 },
								1
							};
							right[] =
							{
								{ 1.05, 0.87886602 },
								1
							};
							down[] =
							{
								{ 0.99000001, 0.93556702 },
								1
							};
						};
					};
					class Lights
					{
						condition = "lights";
						color[] = { 0, 0.125, 0 };
						class Text
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.0099999998, 0.82216501 },
								1
							};
							right[] =
							{
								{ 0.07, 0.82216501 },
								1
							};
							down[] =
							{
								{ 0.0099999998, 0.87886602 },
								1
							};
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						color[] = { 0, 0.125, 0 };
						class Text
						{
							type = "text";
							source = "static";
							text = "ANTI-COL";
							align = "right";
							scale = 1;
							pos[] =
							{
								{ 0.0099999998, 0.87886602 },
								1
							};
							right[] =
							{
								{ 0.07, 0.87886602 },
								1
							};
							down[] =
							{
								{ 0.0099999998, 0.93556702 },
								1
							};
						};
					};
					class Stall
					{
						condition = "stall";
						color[] = { 1, 0, 0 };
						blinkingPattern[] = { 0.2, 0.2 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] =
							{
								{ 0.5, 0.204124 },
								1
							};
							right[] =
							{
								{ 0.56, 0.204124 },
								1
							};
							down[] =
							{
								{ 0.5, 0.26082501 },
								1
							};
						};
					};
					class Ammo
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] =
						{
							{ 0.5, 0.82216501 },
							1
						};
						right[] =
						{
							{ 0.56, 0.82216501 },
							1
						};
						down[] =
						{
							{ 0.5, 0.87886602 },
							1
						};
					};
					class Weapons
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] =
						{
							{ 0.5, 0.87886602 },
							1
						};
						right[] =
						{
							{ 0.56, 0.87886602 },
							1
						};
						down[] =
						{
							{ 0.5, 0.93556702 },
							1
						};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "Heading";
						sourceScale = 0.1;
						top = 0.2;
						center = 0.5;
						bottom = 0.80000001;
						lineXleft = 0.102062;
						lineYright = 0.0907216;
						lineXleftMajor = 0.102062;
						lineYrightMajor = 0.079381399;
						majorLineEach = 5;
						numberEach = 5;
						step = 0.2;
						StepSize = 0.029999999;
						align = "center";
						scale = 1;
						pos[] = { 0.2, 0.0198454 };
						right[] = { 0.25999999, 0.0198454 };
						down[] = { 0.2, 0.076546401 };
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = { 0, 0 };
							clipBR[] = { 1, 1 };
							class ILS
							{
								type = "line";
								points[] =
								{

									{
										"ILS_W",
										{ -0.23999999, 0 },
										1
									},

									{
										"ILS_W",
										{ 0.23999999, 0 },
										1
									},
									{},

									{
										"ILS_W",
										{ 0, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ 0, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ 0.12, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ 0.12, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ 0.23999999, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ 0.23999999, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ -0.12, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ -0.12, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ -0.23999999, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ -0.23999999, -0.0227027 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0, -0.227027 },
										1
									},

									{
										"ILS_H",
										{ 0, 0.227027 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, 0 },
										1
									},

									{
										"ILS_H",
										{ -0.024, 0 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, 0.113514 },
										1
									},

									{
										"ILS_H",
										{ -0.024, 0.113514 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, 0.227027 },
										1
									},

									{
										"ILS_H",
										{ -0.024, 0.227027 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, -0.113514 },
										1
									},

									{
										"ILS_H",
										{ -0.024, -0.113514 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, -0.227027 },
										1
									},

									{
										"ILS_H",
										{ -0.024, -0.227027 },
										1
									}
								};
							};
						};
					};
				};
			};
			class parallaxhud
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = { 0.48500001, 0.40000001 };
					pos10[] = { 1.225, 1.1 };
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0, 0.30000001, 0.050000001, 0.30000001 };
				class bones
				{
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
						pos0[] = { 0.5, 0.40000001 };
						pos10[] = { 1.24, 1.1 };
					};
				};
				class draw
				{
					class RadarTargets
					{
						type = "radar";
						pos0[] = { 0.48500001, 0.40000001 };
						pos10[] = { 1.225, 1.1 };
						points[] =
						{

							{
								{ -0.050000001, -0.047297299 },
								1
							},

							{
								{ 0.050000001, -0.047297299 },
								1
							},

							{
								{ 0.050000001, 0.047297299 },
								1
							},

							{
								{ -0.050000001, 0.047297299 },
								1
							},

							{
								{ -0.050000001, -0.047297299 },
								1
							}
						};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							points[] =
							{

								{
									"WeaponAim",
									{ 0.0099999998, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.0099999998, 0 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0, 0.0094594602 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.0094594602 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0, -0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ 0.048999999, -0.046351399 },
									1
								},

								{
									"WeaponAim",
									{ 0.07, 0 },
									1
								},

								{
									"WeaponAim",
									{ 0.048999999, 0.046351399 },
									1
								},

								{
									"WeaponAim",
									{ 0, 0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ -0.048999999, 0.046351399 },
									1
								},

								{
									"WeaponAim",
									{ -0.07, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.048999999, -0.046351399 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.066216201 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0, -0.132432 },
									1
								},

								{
									"WeaponAim",
									{ 0.07, -0.115216 },
									1
								},

								{
									"WeaponAim",
									{ 0.1218, -0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ 0.14, 0 },
									1
								},

								{
									"WeaponAim",
									{ 0.1218, 0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ 0.07, 0.115216 },
									1
								},

								{
									"WeaponAim",
									{ 0, 0.132432 },
									1
								},

								{
									"WeaponAim",
									{ -0.07, 0.115216 },
									1
								},

								{
									"WeaponAim",
									{ -0.1218, 0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ -0.14, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.1218, -0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ -0.07, -0.115216 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.132432 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0, -0.132432 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.151351 },
									1
								},
								{},

								{
									"WeaponAim",
									{ -0.07, -0.11469 },
									1
								},

								{
									"WeaponAim",
									{ -0.079999998, -0.131074 },
									1
								},
								{},

								{
									"WeaponAim",
									{ -0.121244, -0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ -0.13856401, -0.075675704 },
									1
								},
								{},

								{
									"WeaponAim",
									{ -0.14, 5.7888099e-009 },
									1
								},

								{
									"WeaponAim",
									{ -0.16, 6.6157799e-009 },
									1
								},
								{},

								{
									"WeaponAim",
									{ -0.121244, 0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ -0.13856401, 0.075675704 },
									1
								},
								{},

								{
									"WeaponAim",
									{ -0.07, 0.11469 },
									1
								},

								{
									"WeaponAim",
									{ -0.079999998, 0.131074 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 1.22392e-008, 0.132432 },
									1
								},

								{
									"WeaponAim",
									{ 1.39876e-008, 0.151351 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0.07, 0.11469 },
									1
								},

								{
									"WeaponAim",
									{ 0.079999998, 0.131074 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0.121244, 0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ 0.13856401, 0.075675704 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0.14, -1.57924e-009 },
									1
								},

								{
									"WeaponAim",
									{ 0.16, -1.80485e-009 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0.121244, -0.066216201 },
									1
								},

								{
									"WeaponAim",
									{ 0.13856401, -0.075675704 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0.07, -0.11469 },
									1
								},

								{
									"WeaponAim",
									{ 0.079999998, -0.131074 },
									1
								},
								{}
							};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							points[] =
							{

								{
									"WeaponAim",
									{ 0, -0.094594598 },
									1
								},

								{
									"WeaponAim",
									{ 0.050000001, -0.082297303 },
									1
								},

								{
									"WeaponAim",
									{ 0.086999997, -0.047297299 },
									1
								},

								{
									"WeaponAim",
									{ 0.1, 0 },
									1
								},

								{
									"WeaponAim",
									{ 0.086999997, 0.047297299 },
									1
								},

								{
									"WeaponAim",
									{ 0.050000001, 0.082297303 },
									1
								},

								{
									"WeaponAim",
									{ 0, 0.094594598 },
									1
								},

								{
									"WeaponAim",
									{ -0.050000001, 0.082297303 },
									1
								},

								{
									"WeaponAim",
									{ -0.086999997, 0.047297299 },
									1
								},

								{
									"WeaponAim",
									{ -0.1, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.086999997, -0.047297299 },
									1
								},

								{
									"WeaponAim",
									{ -0.050000001, -0.082297303 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.094594598 },
									1
								},
								{},

								{
									"Velocity",
									0.001,
									"WeaponAim",
									{ 0, 0 },
									1
								},

								{
									"Velocity",
									{ 0, 0 },
									1
								},
								{},

								{
									"Target",
									{ 0, -0.066216201 },
									1
								},

								{
									"Target",
									{ 0.07, 0 },
									1
								},

								{
									"Target",
									{ 0, 0.066216201 },
									1
								},

								{
									"Target",
									{ -0.07, 0 },
									1
								},

								{
									"Target",
									{ 0, -0.066216201 },
									1
								}
							};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							points[] =
							{

								{
									"WeaponAim",
									{ 0, -0.236486 },
									1
								},

								{
									"WeaponAim",
									{ 0.125, -0.205743 },
									1
								},

								{
									"WeaponAim",
									{ 0.2175, -0.118243 },
									1
								},

								{
									"WeaponAim",
									{ 0.25, 0 },
									1
								},

								{
									"WeaponAim",
									{ 0.2175, 0.118243 },
									1
								},

								{
									"WeaponAim",
									{ 0.125, 0.205743 },
									1
								},

								{
									"WeaponAim",
									{ 0, 0.236486 },
									1
								},

								{
									"WeaponAim",
									{ -0.125, 0.205743 },
									1
								},

								{
									"WeaponAim",
									{ -0.2175, 0.118243 },
									1
								},

								{
									"WeaponAim",
									{ -0.25, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.2175, -0.118243 },
									1
								},

								{
									"WeaponAim",
									{ -0.125, -0.205743 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.236486 },
									1
								},
								{},

								{
									"Target",
									{ 0, -0.066216201 },
									1
								},

								{
									"Target",
									{ 0.07, 0 },
									1
								},

								{
									"Target",
									{ 0, 0.066216201 },
									1
								},

								{
									"Target",
									{ -0.07, 0 },
									1
								},

								{
									"Target",
									{ 0, -0.066216201 },
									1
								}
							};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							points[] =
							{

								{
									"WeaponAim",
									{ 0, -0.17027 },
									1
								},

								{
									"WeaponAim",
									{ 0.090000004, -0.14813501 },
									1
								},

								{
									"WeaponAim",
									{ 0.1566, -0.085135102 },
									1
								},

								{
									"WeaponAim",
									{ 0.18000001, 0 },
									1
								},

								{
									"WeaponAim",
									{ 0.1566, 0.085135102 },
									1
								},

								{
									"WeaponAim",
									{ 0.090000004, 0.14813501 },
									1
								},

								{
									"WeaponAim",
									{ 0, 0.17027 },
									1
								},

								{
									"WeaponAim",
									{ -0.090000004, 0.14813501 },
									1
								},

								{
									"WeaponAim",
									{ -0.1566, 0.085135102 },
									1
								},

								{
									"WeaponAim",
									{ -0.18000001, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.1566, -0.085135102 },
									1
								},

								{
									"WeaponAim",
									{ -0.090000004, -0.14813501 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.17027 },
									1
								},
								{},

								{
									"Target",
									{ 0, -0.066216201 },
									1
								},

								{
									"Target",
									{ 0.07, 0 },
									1
								},

								{
									"Target",
									{ 0, 0.066216201 },
									1
								},

								{
									"Target",
									{ -0.07, 0 },
									1
								},

								{
									"Target",
									{ 0, -0.066216201 },
									1
								}
							};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							points[] =
							{

								{
									"WeaponAim",
									{ 0.0099999998, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.0099999998, 0 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0, 0.0094594602 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.0094594602 },
									1
								},
								{},

								{
									"WeaponAim",
									{ 0, -0.113514 },
									1
								},

								{
									"WeaponAim",
									{ 0.059999999, -0.098756798 },
									1
								},

								{
									"WeaponAim",
									{ 0.1044, -0.056756798 },
									1
								},

								{
									"WeaponAim",
									{ 0.12, 0 },
									1
								},

								{
									"WeaponAim",
									{ 0.1044, 0.056756798 },
									1
								},

								{
									"WeaponAim",
									{ 0.059999999, 0.098756798 },
									1
								},

								{
									"WeaponAim",
									{ 0, 0.113514 },
									1
								},

								{
									"WeaponAim",
									{ -0.059999999, 0.098756798 },
									1
								},

								{
									"WeaponAim",
									{ -0.1044, 0.056756798 },
									1
								},

								{
									"WeaponAim",
									{ -0.12, 0 },
									1
								},

								{
									"WeaponAim",
									{ -0.1044, -0.056756798 },
									1
								},

								{
									"WeaponAim",
									{ -0.059999999, -0.098756798 },
									1
								},

								{
									"WeaponAim",
									{ 0, -0.113514 },
									1
								},
								{}
							};
						};
					};
				};
			};
			class HUD_Cockpit
			{
				topLeft = "HUD LH2";
				topRight = "HUD PH2";
				bottomLeft = "HUD LD2";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0, 0.30000001, 0.050000001, 0.30000001 };
				enableParallax = 0;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = { 0.48500001, 0.40000001 };
					pos10[] = { 1.225, 1.1 };
				};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = { 0.48500001, 0.40000001 };
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
						pos0[] = { 0.5, 0.40000001 };
						pos10[] = { 1.24, 1.1 };
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = { 0.5, 0.40000001 };
						pos3[] = { 0.722, 0.40000001 };
					};
					class ILS_W : ILS_H
					{
						pos3[] = { 0.5, 0.61000001 };
					};
					class Level0 : Pos10Vector
					{
						pos0[] = { 0.5, 0.40000001 };
						pos10[] = { 1.24, 1.1 };
						type = "horizon";
						angle = 0;
					};
					class LevelP5 : Level0
					{
						angle = 5;
					};
					class LevelM5 : Level0
					{
						angle = -5;
					};
					class LevelP10 : Level0
					{
						angle = 10;
					};
					class LevelM10 : Level0
					{
						angle = -10;
					};
					class LevelP15 : Level0
					{
						angle = 15;
					};
					class LevelM15 : Level0
					{
						angle = -15;
					};
					class LevelP20 : Level0
					{
						angle = 20;
					};
					class LevelM20 : Level0
					{
						angle = -20;
					};
					class LevelP25 : Level0
					{
						angle = 25;
					};
					class LevelM25 : Level0
					{
						angle = -25;
					};
					class LevelP30 : Level0
					{
						angle = 30;
					};
					class LevelM30 : Level0
					{
						angle = -30;
					};
					class LevelP35 : Level0
					{
						angle = 35;
					};
					class LevelM35 : Level0
					{
						angle = -35;
					};
					class LevelP40 : Level0
					{
						angle = 40;
					};
					class LevelM40 : Level0
					{
						angle = -40;
					};
					class LevelP45 : Level0
					{
						angle = 45;
					};
					class LevelM45 : Level0
					{
						angle = -45;
					};
					class LevelP50 : Level0
					{
						angle = 50;
					};
					class LevelM50 : Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					alpha = 0.30000001;
					color[] = { 0, 0.30000001, 0.050000001 };
					condition = "on";
					class PlaneW
					{
						clipTL[] = { 0, 1 };
						clipBR[] = { 1, 0 };
						type = "line";
						points[] =
						{

							{
								"PlaneW",
								{ -0.079999998, 0 },
								1
							},

							{
								"PlaneW",
								{ -0.029999999, 0 },
								1
							},

							{
								"PlaneW",
								{ -0.015, 0.028378399 },
								1
							},

							{
								"PlaneW",
								{ 0, 0 },
								1
							},

							{
								"PlaneW",
								{ 0.015, 0.028378399 },
								1
							},

							{
								"PlaneW",
								{ 0.029999999, 0 },
								1
							},

							{
								"PlaneW",
								{ 0.079999998, 0 },
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[] = { 0, 1 };
						clipBR[] = { 1, 0 };
						type = "line";
						points[] =
						{

							{
								"Velocity",
								{ 0, -0.0189189 },
								1
							},

							{
								"Velocity",
								{ 0.014, -0.0132432 },
								1
							},

							{
								"Velocity",
								{ 0.02, 0 },
								1
							},

							{
								"Velocity",
								{ 0.014, 0.0132432 },
								1
							},

							{
								"Velocity",
								{ 0, 0.0189189 },
								1
							},

							{
								"Velocity",
								{ -0.014, 0.0132432 },
								1
							},

							{
								"Velocity",
								{ -0.02, 0 },
								1
							},

							{
								"Velocity",
								{ -0.014, -0.0132432 },
								1
							},

							{
								"Velocity",
								{ 0, -0.0189189 },
								1
							},
							{},

							{
								"Velocity",
								{ 0.039999999, 0 },
								1
							},

							{
								"Velocity",
								{ 0.02, 0 },
								1
							},
							{},

							{
								"Velocity",
								{ -0.039999999, 0 },
								1
							},

							{
								"Velocity",
								{ -0.02, 0 },
								1
							},
							{},

							{
								"Velocity",
								{ 0, -0.0378378 },
								1
							},

							{
								"Velocity",
								{ 0, -0.0189189 },
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[] = { 0, 0 };
						clipBR[] = { 1, 1 };
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] =
								{

									{
										"Level0",
										{ -0.2, 0 },
										1
									},

									{
										"Level0",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"Level0",
										{ 0.050000001, 0 },
										1
									},

									{
										"Level0",
										{ 0.2, 0 },
										1
									}
								};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"Level0",
									{ -0.23, -0.025 },
									1
								};
								right[] =
								{
									"Level0",
									{ -0.13, -0.025 },
									1
								};
								down[] =
								{
									"Level0",
									{ -0.23, 0.025 },
									1
								};
							};
							class VALM_2_0 : VALM_1_0
							{
								align = "right";
								pos[] =
								{
									"Level0",
									{ 0.22, -0.025 },
									1
								};
								right[] =
								{
									"Level0",
									{ 0.31999999, -0.025 },
									1
								};
								down[] =
								{
									"Level0",
									{ 0.22, 0.025 },
									1
								};
							};
							class LevelM5 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM5",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM5",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM5",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM5",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM5",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM5",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM5",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM5",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM5",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM5",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM5",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM5",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM5",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_5 : VALM_1_5
							{
								align = "right";
								pos[] =
								{
									"LevelM5",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM5",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM5",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP5 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP5",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP5",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP5",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP5",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP5",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP5",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP5",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP5",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP5",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_5 : VALP_1_5
							{
								align = "right";
								pos[] =
								{
									"LevelP5",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP5",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP5",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM10 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM10",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM10",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM10",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM10",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM10",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM10",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM10",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM10",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM10",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_10 : VALM_1_10
							{
								align = "right";
								pos[] =
								{
									"LevelM10",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM10",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM10",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP10 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP10",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP10",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP10",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP10",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP10",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP10",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP10",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP10",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP10",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_10 : VALP_1_10
							{
								align = "right";
								pos[] =
								{
									"LevelP10",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP10",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP10",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM15 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM15",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM15",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM15",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM15",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM15",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM15",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM15",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM15",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM15",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM15",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM15",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM15",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM15",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_15 : VALM_1_15
							{
								align = "right";
								pos[] =
								{
									"LevelM15",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM15",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM15",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP15 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP15",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP15",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP15",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP15",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP15",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP15",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP15",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP15",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP15",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_15 : VALP_1_15
							{
								align = "right";
								pos[] =
								{
									"LevelP15",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP15",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP15",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM20 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM20",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM20",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM20",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM20",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM20",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM20",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM20",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM20",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM20",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_20 : VALM_1_20
							{
								align = "right";
								pos[] =
								{
									"LevelM20",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM20",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM20",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP20 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP20",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP20",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP20",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP20",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP20",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP20",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP20",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP20",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP20",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_20 : VALP_1_20
							{
								align = "right";
								pos[] =
								{
									"LevelP20",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP20",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP20",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM25 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM25",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM25",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM25",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM25",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM25",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM25",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM25",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM25",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM25",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM25",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM25",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM25",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM25",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_25 : VALM_1_25
							{
								align = "right";
								pos[] =
								{
									"LevelM25",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM25",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM25",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP25 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP25",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP25",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP25",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP25",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP25",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP25",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP25",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP25",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP25",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_25 : VALP_1_25
							{
								align = "right";
								pos[] =
								{
									"LevelP25",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP25",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP25",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM30 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM30",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM30",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM30",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM30",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM30",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM30",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM30",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM30",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM30",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_30 : VALM_1_30
							{
								align = "right";
								pos[] =
								{
									"LevelM30",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM30",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM30",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP30 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP30",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP30",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP30",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP30",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP30",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP30",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP30",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP30",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP30",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_30 : VALP_1_30
							{
								align = "right";
								pos[] =
								{
									"LevelP30",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP30",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP30",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM35 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM35",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM35",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM35",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM35",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM35",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM35",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM35",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM35",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM35",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM35",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM35",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM35",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM35",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_35 : VALM_1_35
							{
								align = "right";
								pos[] =
								{
									"LevelM35",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM35",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM35",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP35 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP35",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP35",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP35",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP35",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP35",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP35",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP35",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP35",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP35",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_35 : VALP_1_35
							{
								align = "right";
								pos[] =
								{
									"LevelP35",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP35",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP35",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM40 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM40",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM40",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM40",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM40",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM40",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM40",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM40",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM40",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM40",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_40 : VALM_1_40
							{
								align = "right";
								pos[] =
								{
									"LevelM40",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM40",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM40",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP40 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP40",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP40",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP40",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP40",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP40",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP40",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP40",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP40",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP40",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_40 : VALP_1_40
							{
								align = "right";
								pos[] =
								{
									"LevelP40",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP40",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP40",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM45 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM45",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM45",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM45",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM45",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM45",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM45",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM45",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM45",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM45",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM45",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM45",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM45",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM45",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_45 : VALM_1_45
							{
								align = "right";
								pos[] =
								{
									"LevelM45",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM45",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM45",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP45 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP45",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP45",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP45",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP45",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP45",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP45",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP45",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP45",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP45",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_45 : VALP_1_45
							{
								align = "right";
								pos[] =
								{
									"LevelP45",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP45",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP45",
									{ 0.22, 0.085000001 },
									1
								};
							};
							class LevelM50 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelM50",
										{ -0.2, -0.029999999 },
										1
									},

									{
										"LevelM50",
										{ -0.2, 0 },
										1
									},

									{
										"LevelM50",
										{ -0.15000001, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ -0.1, 0 },
										1
									},

									{
										"LevelM50",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.1, 0 },
										1
									},
									{},

									{
										"LevelM50",
										{ 0.15000001, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.2, 0 },
										1
									},

									{
										"LevelM50",
										{ 0.2, -0.029999999 },
										1
									}
								};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelM50",
									{ -0.23, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM50",
									{ -0.13, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM50",
									{ -0.23, -0.035 },
									1
								};
							};
							class VALM_2_50 : VALM_1_50
							{
								align = "right";
								pos[] =
								{
									"LevelM50",
									{ 0.22, -0.085000001 },
									1
								};
								right[] =
								{
									"LevelM50",
									{ 0.31999999, -0.085000001 },
									1
								};
								down[] =
								{
									"LevelM50",
									{ 0.22, -0.035 },
									1
								};
							};
							class LevelP50 : Level0
							{
								type = "line";
								points[] =
								{

									{
										"LevelP50",
										{ -0.2, 0.029999999 },
										1
									},

									{
										"LevelP50",
										{ -0.2, 0 },
										1
									},

									{
										"LevelP50",
										{ -0.050000001, 0 },
										1
									},
									{},

									{
										"LevelP50",
										{ 0.050000001, 0 },
										1
									},

									{
										"LevelP50",
										{ 0.2, 0 },
										1
									},

									{
										"LevelP50",
										{ 0.2, 0.029999999 },
										1
									}
								};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] =
								{
									"LevelP50",
									{ -0.23, 0.035 },
									1
								};
								right[] =
								{
									"LevelP50",
									{ -0.13, 0.035 },
									1
								};
								down[] =
								{
									"LevelP50",
									{ -0.23, 0.085000001 },
									1
								};
							};
							class VALP_2_50 : VALP_1_50
							{
								align = "right";
								pos[] =
								{
									"LevelP50",
									{ 0.22, 0.035 },
									1
								};
								right[] =
								{
									"LevelP50",
									{ 0.31999999, 0.035 },
									1
								};
								down[] =
								{
									"LevelP50",
									{ 0.22, 0.085000001 },
									1
								};
							};
						};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = { 0.86000001, 0.81999999 };
						right[] = { 0.94, 0.81999999 };
						down[] = { 0.86000001, 0.87 };
						lineXleft = 0.82499999;
						lineYright = 0.83499998;
						lineXleftMajor = 0.82499999;
						lineYrightMajor = 0.84500003;
						bottom = 0.2;
						top = 0.85000002;
						center = 0.5;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class SpeedScale
					{
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.5999999;
						align = "right";
						pos[] =
						{
							0.059999999,
							"0.82-0.85+0.2"
						};
						right[] =
						{
							0.14,
							"0.82-0.85+0.2"
						};
						down[] =
						{
							0.059999999,
							"0.87-0.85+0.2"
						};
						lineXleft = "0.18 + 0.82 - 0.825";
						lineYright = "0.18 + 0.82 - 0.835";
						lineXleftMajor = "0.18 + 0.82 - 0.825";
						lineYrightMajor = "0.18 + 0.82 - 0.845";
						bottom = 0.85000002;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class VspeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] =
						{

							{
								0.86000001,
								"0.52-0.4"
							},
							1
						};
						right[] =
						{

							{
								0.94,
								"0.52-0.4"
							},
							1
						};
						down[] =
						{

							{
								0.86000001,
								"0.57-0.4"
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
							"0.21-0.01",
							0
						};
						right[] =
						{
							"0.29-0.01",
							0
						};
						down[] =
						{
							"0.21-0.01",
							0.050000001
						};
						lineXleft = 0.059999999;
						lineYright = 0.050000001;
						lineXleftMajor = 0.059999999;
						lineYrightMajor = 0.039999999;
						bottom = 0.80000001;
						center = 0.5;
						top = 0.2;
						step = "18/9";
						StepSize = "(0.80- 0.2)/20";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = { 0, 0 };
							clipBR[] = { 1, 1 };
							class ILS
							{
								type = "line";
								points[] =
								{

									{
										"ILS_W",
										{ -0.23999999, 0 },
										1
									},

									{
										"ILS_W",
										{ 0.23999999, 0 },
										1
									},
									{},

									{
										"ILS_W",
										{ 0, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ 0, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ 0.12, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ 0.12, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ 0.23999999, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ 0.23999999, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ -0.12, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ -0.12, -0.0227027 },
										1
									},
									{},

									{
										"ILS_W",
										{ -0.23999999, 0.0227027 },
										1
									},

									{
										"ILS_W",
										{ -0.23999999, -0.0227027 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0, -0.227027 },
										1
									},

									{
										"ILS_H",
										{ 0, 0.227027 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, 0 },
										1
									},

									{
										"ILS_H",
										{ -0.024, 0 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, 0.113514 },
										1
									},

									{
										"ILS_H",
										{ -0.024, 0.113514 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, 0.227027 },
										1
									},

									{
										"ILS_H",
										{ -0.024, 0.227027 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, -0.113514 },
										1
									},

									{
										"ILS_H",
										{ -0.024, -0.113514 },
										1
									},
									{},

									{
										"ILS_H",
										{ 0.024, -0.227027 },
										1
									},

									{
										"ILS_H",
										{ -0.024, -0.227027 },
										1
									}
								};
							};
						};
					};
				};
			};
		};
		class RenderTargets
		{
			class NVCam
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.40000001;
				};
			};
			class Mirror1
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 1.2;
				};
			};
			class Mirror2
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.69999999;
				};
			};
			class Mirror3
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.69999999;
				};
			};
		};
		maxSpeed = 1040;
		landingSpeed = 200;
		acceleration = 300;
		vtol = 1;
		aileronSensitivity = 0.80000001;
		elevatorSensitivity = 0.60000002;
		driveOnComponent[] =
		{
			"Wheel_1",
			"Wheel_2",
			"Wheel_3_1",
			"Wheel_3_2"
		};
		gunAimDown = 0.07;
		envelope[] = { 0, 0.2, 1.2, 3, 5.0999999, 7, 7.3000002, 7, 6.3000002, 5.1999998, 3.8, 1.8, 0.5, 0 };
		laserScanner = 1;
		irScanRangeMin = 500;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 2;
		armor = 60;
		damageResistance = 0.01246;
		cost = 20000000;
		weapons[] = {};
		magazines[] = {};
		insideSoundCoef = 0.2;
		fov = 0.5;
		type = 2;
		threat[] = { 0.80000001, 0.5, 1 };
		availableForSupportTypes[] =
		{
			"CAS_Bombing"
		};
		class AnimationSources
		{
			class VTOL
			{
				source = "user";
				animPeriod = 2.5;
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "CUP_Vacannon_GAU12_veh";
			};
			class ab_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class gps_targeting_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class damage_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class auxtank_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class refueling_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class eject_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class r_canopy_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class ejection_seat_hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class service_menu_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class rearming_done_switch
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class fuel_probe
			{
				source = "user";
				animPeriod = 3.2;
				initPhase = 0;
			};
			class burner_fire_1_left
			{
				source = "user";
				animPeriod = 9.9999997e-005;
				initPhase = 1;
			};
			class burner_fire_1_right
			{
				source = "user";
				animPeriod = 9.9999997e-005;
				initPhase = 1;
			};
			class Mirrors_pip_hide
			{
				source = "user";
				animPeriod = 9.9999997e-005;
				initPhase = 1;
			};
			class Buddy_Pod_attach
			{
				source = "user";
				animPeriod = 9.9999997e-005;
				initPhase = 1;
			};
			class fuel_drogue
			{
				source = "user";
				animPeriod = 8;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
		};
		class Library
		{
			libTextDesc = "The McDonnell Douglas (now Boeing) AV-8B Harrier II is a single-engine ground-attack aircraft that constitutes the second generation of the Harrier Jump Jet family. Capable of vertical or short takeoff and landing (V/STOL), the aircraft was designed in the late 1970s as an Anglo-American development of the British Hawker Siddeley Harrier, the first operational V/STOL aircraft. Named after a bird of prey,[6] it is primarily employed on light attack or multi-role missions, ranging from close air support of ground troops to armed reconnaissance.";
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] =
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getin",
			0.56234133,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			0.56234133,
			1,
			40
		};
		soundDammage[] =
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_start_int",
			1,
			1
		};
		soundEngineOnExt[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_start_ext",
			1.7782794,
			1,
			500
		};
		soundEngineOffInt[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_stop_int",
			1,
			1
		};
		soundEngineOffExt[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_stop_ext",
			1.7782794,
			1,
			500
		};
		soundLocked[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_radar_alarm_1",
			1,
			1
		};
		soundIncommingMissile[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		soundGearUp[] =
		{
			"A3\Sounds_F_EPC\CAS_01\gear_up",
			1,
			1,
			150
		};
		soundGearDown[] =
		{
			"A3\Sounds_F_EPC\CAS_01\gear_down",
			1,
			1,
			150
		};
		soundFlapsUp[] =
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Up",
			1,
			1,
			100
		};
		soundFlapsDown[] =
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Down",
			1,
			1,
			100
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] =
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext",
					1.7782794,
					1,
					2100
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineIdleOut
			{
				sound[] =
				{
					"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_idle_ext_2",
					1.5,
					1,
					1500
				};
				frequency = "1+(0.8*thrust)";
				volume = "camPos*(speed factor[5, 3])*(rpm factor[0.4, 1.1])";
			};
			class EngineHighOut
			{
				sound[] =
				{
					"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",
					1.7782794,
					1,
					2500
				};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] =
				{
					"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_fors_ext",
					1.7782794,
					0.99000001,
					2800
				};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = { 3.1400001, 3.9200001, 2, 0.5 };
			};
			class WindNoiseOut
			{
				sound[] =
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					0.56234133,
					1,
					150
				};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] =
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int",
					1,
					1
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineIdleIn
			{
				sound[] =
				{
					"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_idle_ext_2",
					1,
					1
				};
				frequency = "1+(0.3*thrust)";
				volume = "(1-camPos)*(speed factor[5, 3])*(rpm factor[0.4, 1.1])";
			};
			class EngineHighIn
			{
				sound[] =
				{
					"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_high_int_4",
					1,
					1
				};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class EngineNoiseIn
			{
				sound[] =
				{
					"cup\airvehicles\cup_airvehicles_av8b\sounds\cha_av8b_noise_int_1",
					0.80000001,
					1
				};
				frequency = "1+(0.4*thrust)";
				volume = "(1-camPos)*(speed factor[75, 150])*(0.3+((thrust factor[0.3, 0.9])*0.2))";
			};
			class ForsageIn
			{
				sound[] =
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int",
					1,
					1
				};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] =
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					0.50118721,
					1
				};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		memoryPointDriverOptics = "pip0_pos";
		unitInfoType = "RscOptics_AV_pilot";
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
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};
		class Eventhandlers : Eventhandlers
		{
			class CUP_AirVehicles_AV8B
			{
				init = "_this execVM ""\cup\airvehicles\cup_airvehicles_av8b\scripts\init_av8b.sqf""";
			};
		};
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = { 0, 4.5, -1.1 };
		LESH_WheelOffset[] = { 0, -4.5 };
	};
	class JAS_CUP_B_AV8B_USMC : JAS_CUP_AV8B_Base
	{
		scope = 2;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Grey";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCLIGHT.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\AV8B.jpg";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_GAU12",
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_GAU12_300rnd_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class AV8B_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
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
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targeting System";
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
		};
	};
	class JAS_CUP_B_AV8B_USMC2 : JAS_CUP_B_AV8B_USMC
	{
		scope = 0;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Dark";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC2";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCDARK.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II Dark";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_GAU12",
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_GAU12_300rnd_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_dark_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_dark_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class AV8B_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targeting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
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
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
		};
	};
	class JAS_CUP_B_AV8B_USMC3 : JAS_CUP_B_AV8B_USMC
	{
		scope = 0;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Aces";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC3";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCACES.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II Aces";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_GAU12",
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_GAU12_300rnd_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class AV8B_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targeting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
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
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
		};
	};
	class JAS_CUP_B_AV8B_USMC4 : JAS_CUP_B_AV8B_USMC
	{
		scope = 0;
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 USMC Black Sheep";
		fir_av8_custom_code="JAS_CUP_B_AV8B_USMC4";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8USMCSHEEP.paa";
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_GAU12",
			"FIR_MasterArm",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_GAU12_300rnd_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_2_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_2_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class AV8B_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targeting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
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
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
		};
	};
	class JAS_CUP_I_AV8B_AAF : JAS_CUP_B_AV8B_USMC
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		fir_av8_custom_skin=1;
		fir_av8_custom_name="AV-8 AAF";
		fir_av8_custom_code="JAS_CUP_I_AV8B_AAF";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8AAF.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\AV8BAAF.jpg";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		faction = "IND_F";
		crew = "I_pilot_F";
		side = 2;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
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
		};
	};
	class JAS_CUP_AV8B_AAC : JAS_CUP_B_AV8B_USMC
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		fir_av8_custom_skin=2;
		fir_av8_custom_name="AV-8 AAF";
		fir_av8_custom_code="JAS_CUP_I_AV8B_AAF";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8AAF.paa";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		crew = "B_pilot_F";
		side = 1;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
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
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
		};
	};
	class JAS_CUP_I_AV8B_AAC : JAS_CUP_B_AV8B_USMC
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_av8b";
		fir_av8_custom_skin=2;
		fir_av8_custom_name="AV-8 AAF";
		fir_av8_custom_code="JAS_CUP_I_AV8B_AAF";
		fir_av8_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\AV8AAF.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\AV8BAAF.jpg";
		displayName = "AV-8J Harrier II";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		dlc = "CUP_Vehicles";
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_PHANTOM";
		crew = "I_pilot_F";
		side = 2;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\AV8_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
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
		};
	};
	class JAS_CUP_B_GR9_GB : JAS_CUP_AV8B_Base
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_gr9";
		fir_gr9_custom_skin=1;
		fir_gr9_custom_name="GR9 RAF Grey";
		fir_gr9_custom_code="JAS_CUP_B_GR9_GB";
		fir_gr9_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\GR9GREY.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AV8\UI\editorpreview\GR9.jpg";
		displayName = "Harrier GR.9J";
		dlc = "CUP_Vehicles";
		faction = "CUP_B_GB";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_GAU12",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_GAU12_300rnd_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Library
		{
			libTextDesc = "The British Aerospace Harrier II is a second-generation vertical/short takeoff and landing (V/STOL) jet aircraft used previously by the Royal Air Force (RAF) and, between 2006 and 2010, the Royal Navy (RN). The aircraft was derived from the McDonnell Douglas AV-8B Harrier II, which itself was a development of the Hawker Siddeley Harrier. Initial deliveries of the Harrier II were designated in service as Harrier GR5; subsequently upgraded airframes were redesignated accordingly as GR7 and GR9.";
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
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
		};
	};
	class JAS_CUP_GR9_AAC : JAS_CUP_B_GR9_GB
	{
		scope = 2;
		model = "\cup\airvehicles\cup_airvehicles_av8b\cup_gr9";
		fir_gr9_custom_skin=1;
		fir_gr9_custom_name="GR9 RAF Green";
		fir_gr9_custom_code="JAS_CUP_GR9_AAC";
		fir_gr9_custom_preview_pic="\ARMA3_CUP_Enhancement_AV8\UI\preview\GR9GREEN.paa";
		displayName = "Harrier GR.9J";
		dlc = "CUP_Vehicles";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		accuracy = 1000;
		author = "CUP/-{GOL}-Jason";
		threat[] = { 1, 0.69999999, 1 };
		weapons[] =
		{
			"FIR_MasterArm",
			"FIR_GAU12",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"FIR_GAU12_300rnd_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class Library
		{
			libTextDesc = "The British Aerospace Harrier II is a second-generation vertical/short takeoff and landing (V/STOL) jet aircraft used previously by the Royal Air Force (RAF) and, between 2006 and 2010, the Royal Navy (RN). The aircraft was derived from the McDonnell Douglas AV-8B Harrier II, which itself was a development of the Hawker Siddeley Harrier. Initial deliveries of the Harrier II were designated in service as Harrier GR5; subsequently upgraded airframes were redesignated accordingly as GR7 and GR9.";
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"pip0"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa",
			"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa",
			"#(argb,512,512,1)r2t(rendertarget0,1.0)"
		};
		class UserActions
		{
			class CUP_AV8B_Eject
			{
				priority = 0.050000001;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>--Eject--</t>";
				condition = "this animationPhase ""eject_switch"" < 0.1 and player in this and isengineon this";
				statement = "[this, true, 'CUP_AV8B_Canopy', 'CUP_AV8B_EjectionSeat'] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
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
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AV8\sqs\loadout\GR9_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
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
		};
	};
	class JAS_AV8_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="AV-8b Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_AV8_Loadout";
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
						name="AIM-9L";
						value=1;
					};
					class hp1_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp1_ecm
					{
						name="ECM Pod";
						value=3;
					};
					class hp1_tgp
					{
						name="Sniper XR TGP";
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
						name="AIM-9L";
						value=1;
					};
					class hp2_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp2_ecm
					{
						name="ECM Pod";
						value=3;
					};
					class hp2_tgp
					{
						name="Sniper XR TGP";
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
					class hp3_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp3_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp3_AGM65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp3_AGM65G
					{
						name="AGM-65G";
						value=4;
					};
					class hp3_AGM65L
					{
						name="AGM-65L";
						value=5;
					};
					class hp3_AGM88
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
					class hp3_82s
					{
						name="Mk82 Snakeye";
						value=19;
					};
					class hp3_82
					{
						name="Mk82 GPB";
						value=20;
					};
					class hp3_84
					{
						name="Mk84 GPB";
						value=21;
					};
					class hp3_tank
					{
						name="Drop Tank";
						value=22;
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
					class hp4_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp4_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp4_AGM65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp4_AGM65G
					{
						name="AGM-65G";
						value=4;
					};
					class hp4_AGM65L
					{
						name="AGM-65L";
						value=5;
					};
					class hp4_AGM88
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
					class hp4_82s
					{
						name="Mk82 Snakeye";
						value=19;
					};
					class hp4_82
					{
						name="Mk82 GPB";
						value=20;
					};
					class hp4_84
					{
						name="Mk84 GPB";
						value=21;
					};
					class hp4_tank
					{
						name="Drop Tank";
						value=22;
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
					class hp5_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp5_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp5_AGM65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp5_AGM65DTER
					{
						name="AGM-65D x3";
						value=4;
					};
					class hp5_AGM65G
					{
						name="AGM-65G";
						value=5;
					};
					class hp5_AGM65GTER
					{
						name="AGM-65G x3";
						value=6;
					};
					class hp5_AGM65L
					{
						name="AGM-65L";
						value=7;
					};
					class hp5_AGM65LTER
					{
						name="AGM-65L x3";
						value=8;
					};
					class hp5_AGM88
					{
						name="AGM-88 HARM";
						value=9;
					};
					class hp5_10
					{
						name="GBU-10";
						value=10;
					};
					class hp5_12
					{
						name="GBU-12";
						value=11;
					};
					class hp5_12TER
					{
						name="GBU-12 x3";
						value=12;
					};
					class hp5_24A
					{
						name="GBU-24A";
						value=13;
					};
					class hp5_24B
					{
						name="GBU-24B";
						value=14;
					};
					class hp5_24118
					{
						name="GBU-24/118";
						value=15;
					};
					class hp5_31
					{
						name="GBU-31";
						value=16;
					};
					class hp5_32
					{
						name="GBU-32";
						value=17;
					};
					class hp5_38
					{
						name="GBU-38";
						value=18;
					};
					class hp5_87
					{
						name="CBU-87 CEM";
						value=19;
					};
					class hp5_89
					{
						name="CBU-89 GATOR";
						value=20;
					};
					class hp5_97
					{
						name="CBU-97 SFW";
						value=21;
					};
					class hp5_103
					{
						name="CBU-103 WCMD";
						value=22;
					};
					class hp5_82s
					{
						name="Mk82 Snakeye";
						value=23;
					};
					class hp5_82sTER
					{
						name="Mk82 Snakeye x3";
						value=24;
					};
					class hp5_82
					{
						name="Mk82 GPB";
						value=25;
					};
					class hp5_82TER
					{
						name="Mk82 GPB x3";
						value=26;
					};
					class hp5_84
					{
						name="Mk84 GPB";
						value=27;
					};
					class hp5_tank
					{
						name="Drop Tank";
						value=28;
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
					class hp6_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp6_aim120
					{
						name="AIM-120";
						value=2;
					};
					class hp6_AGM65D
					{
						name="AGM-65D";
						value=3;
					};
					class hp6_AGM65DTER
					{
						name="AGM-65D x3";
						value=4;
					};
					class hp6_AGM65G
					{
						name="AGM-65G";
						value=5;
					};
					class hp6_AGM65GTER
					{
						name="AGM-65G x3";
						value=6;
					};
					class hp6_AGM65L
					{
						name="AGM-65L";
						value=7;
					};
					class hp6_AGM65LTER
					{
						name="AGM-65L x3";
						value=8;
					};
					class hp6_AGM88
					{
						name="AGM-88 HARM";
						value=9;
					};
					class hp6_10
					{
						name="GBU-10";
						value=10;
					};
					class hp6_12
					{
						name="GBU-12";
						value=11;
					};
					class hp6_12TER
					{
						name="GBU-12 x3";
						value=12;
					};
					class hp6_24A
					{
						name="GBU-24A";
						value=13;
					};
					class hp6_24B
					{
						name="GBU-24B";
						value=14;
					};
					class hp6_24118
					{
						name="GBU-24/118";
						value=15;
					};
					class hp6_31
					{
						name="GBU-31";
						value=16;
					};
					class hp6_32
					{
						name="GBU-32";
						value=17;
					};
					class hp6_38
					{
						name="GBU-38";
						value=18;
					};
					class hp6_87
					{
						name="CBU-87 CEM";
						value=19;
					};
					class hp6_89
					{
						name="CBU-89 GATOR";
						value=20;
					};
					class hp6_97
					{
						name="CBU-97 SFW";
						value=21;
					};
					class hp6_103
					{
						name="CBU-103 WCMD";
						value=22;
					};
					class hp6_82s
					{
						name="Mk82 Snakeye";
						value=23;
					};
					class hp6_82sTER
					{
						name="Mk82 Snakeye x3";
						value=24;
					};
					class hp6_82
					{
						name="Mk82 GPB";
						value=25;
					};
					class hp6_82TER
					{
						name="Mk82 GPB x3";
						value=26;
					};
					class hp6_84
					{
						name="Mk84 GPB";
						value=27;
					};
					class hp6_tank
					{
						name="Drop Tank";
						value=28;
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
					class Grey
					{
						name="USMC Grey";
						value=0;
						default=1;
					};
					class Dark
					{
						name="USMC Dark";
						value=1;
					};
					class Aces
					{
						name="VMA-231 'Ace of Spades'";
						value=2;
					};
					class BlackSheep
					{
						name="VMA-214 'Black Sheep'";
						value=3;
					};
					class AAF
					{
						name="Altis Armed Forces";
						value=4;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="AV-8b Loadout Module";
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
	class JAS_GR9_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="GR9 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_GR9_Loadout";
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
						name="AIM-9L";
						value=1;
					};
					class hp1_crv7
					{
						name="CRV-7 x19";
						value=2;
					};
					class hp1_ecm
					{
						name="ECM Pod";
						value=3;
					};
					class hp1_tgp
					{
						name="Sniper XR TGP";
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
						name="AIM-9L";
						value=1;
					};
					class hp2_crv7
					{
						name="CRV-7 x19";
						value=2;
					};
					class hp2_ecm
					{
						name="ECM Pod";
						value=3;
					};
					class hp2_tgp
					{
						name="Sniper XR TGP";
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
					class hp3_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp3_AGM65D
					{
						name="AGM-65D";
						value=2;
					};
					class hp3_AGM65G
					{
						name="AGM-65G";
						value=3;
					};
					class hp3_AGM65L
					{
						name="AGM-65L";
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
					class hp3_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp3_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp3_84
					{
						name="Mk84 GPB";
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
					class hp4_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp4_AGM65D
					{
						name="AGM-65D";
						value=2;
					};
					class hp4_AGM65G
					{
						name="AGM-65G";
						value=3;
					};
					class hp4_AGM65L
					{
						name="AGM-65L";
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
					class hp4_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp4_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp4_84
					{
						name="Mk84 GPB";
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
					class hp5_aim9
					{
						name="AIM-9L";
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
					class hp6_aim9
					{
						name="AIM-9L";
						value=1;
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
					class hp7_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp7_agm65d
					{
						name="AGM-65D";
						value=2;
					};
					class hp7_agm65g
					{
						name="AGM-65G";
						value=3;
					};
					class hp7_agm65l
					{
						name="AGM-65L";
						value=4;
					};
					class hp7_gbu10
					{
						name="GBU-10";
						value=5;
					};
					class hp7_gbu12
					{
						name="GBU-12";
						value=6;
					};
					class hp7_gbu24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp7_gbu24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp7_gbu24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp7_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp7_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp7_84
					{
						name="Mk84 GPB";
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
					class hp8_aim9
					{
						name="AIM-9L";
						value=1;
					};
					class hp8_agm65d
					{
						name="AGM-65D";
						value=2;
					};
					class hp8_agm65g
					{
						name="AGM-65G";
						value=3;
					};
					class hp8_agm65l
					{
						name="AGM-65L";
						value=4;
					};
					class hp8_gbu10
					{
						name="GBU-10";
						value=5;
					};
					class hp8_gbu12
					{
						name="GBU-12";
						value=6;
					};
					class hp8_gbu24A
					{
						name="GBU-24A";
						value=7;
					};
					class hp8_gbu24B
					{
						name="GBU-24B";
						value=8;
					};
					class hp8_gbu24118
					{
						name="GBU-24/118";
						value=9;
					};
					class hp8_82s
					{
						name="Mk82 Snakeye";
						value=10;
					};
					class hp8_82
					{
						name="Mk82 GPB";
						value=11;
					};
					class hp8_84
					{
						name="Mk84 GPB";
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
					class hp9_tgp
					{
						name="Sniper XR TGP";
						value=1;
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
					class Grey
					{
						name="RAF Grey";
						value=0;
						default=1;
					};
					class Green
					{
						name="RAF Green";
						value=1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="GR9 Loadout Module";
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
