class CfgPatches
{
	class ARMA3_CUP_Enhancement_A10
	{
		units[]=
		{
			"JAS_CUP_B_A10_USA",
			"JAS_CUP_B_A10_AAC_6",
			"JAS_A10_Loadout_Module"
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
			"FIR_AirWeaponSystem_US",
			"ARMA3_CUP_Enhancement_Systems",
			"ARMA3_CUP_Enhancement_Weapons",
			"CUP_BaseData",
			"CUP_BaseConfigs",
			"CUP_AirVehicles_Core",
			"CUP_AirVehicles_a10",
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
		class ARMA3_CUP_Enhancement_A10
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_A10"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_A10_Init_Function
		{
			class A10_Loadout
			{
				file="\ARMA3_CUP_Enhancement_A10\sqs\modules\a10_loadout_module.sqf";
			};
			class A10_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_A10\sqs\modules\a10_loadout_module_set.sqf";
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
			directory = "ARMA3_CUP_Enhancement_A10\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_A10\presentation\picture.paa";
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
		class A10
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-10II Thunderbolt";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "Famous the world over for its performance and its ugly ass looks, the A-10 'Warthog' has been repeatedly touted as the greatest ground attack craft of modern times. Built from the ground up to kill tanks and ground emplacements, everything about the design is there to enhance its ground attack capabilities. This single mindedness of design however does mean that the A-10 is possibly the slowest jet in the game. When you're carrying more bombs than some bombers however, who cares how fast you are?<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2Mk82 GPB<br/>%2Mk82 SNAKE<br/>%2Mk84 GPB<br/>%2HYDRA Rockets<br/>%2ZUNI Rockets<br/>%2CRV-7 Rockets<br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-31<br/>%2GBU-38<br/>%2CBU-87<br/>%2CBU-89<br/>%2CBU-97<br/>%2CBU-103<br/>%2SUU-25<br/><br/>Factions:<br/><br/>%2US Army";
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
class A10J_GUI
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
		class A10J_picture_background : RscPicture
		{
			idc = 1200;
			x = "0.15 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.7 * safezoneW";
			h = "0.7 * safezoneH";
			text = "ARMA3_CUP_Enhancement_A10\ui\A10J_background.paa";
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
		class RscText_1005 : RscText
		{
			idc = 1005;
			text = "Belly Right Outer";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Belly Left Outer";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1102 : RscText
		{
			idc = 1102;
			text = "Belly Right Inner";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1007 : RscText
		{
			idc = 1007;
			text = "Belly Left Inner";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.466 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_11001 : RscText
		{
			idc = 11001;
			text = "Belly Centre";
			x = "0.43 * safezoneW + safezoneX";
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
			idc = 21008;
			x = "0.43 * safezoneW + safezoneX";
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
		class A10J_refuel_Button : RscPicture
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
		class A10J_repair_Button : RscPicture
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
		class A10J_Apply_Button : RscPicture
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_A10\sqs\loadout\A10J_Loadout.sqf""";
		};
		class A10J_Cancel_Button : RscPicture
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
		class A10J_custom_save_Buttonpic_1 : RscPicture
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_A10\sqs\loadout\A10J_SaveCustom.sqf""";
		};
		class A10J_custom_save_Buttonpic_2 : RscPicture
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_A10\sqs\loadout\A10J_SaveCustom.sqf""";
		};
		class A10J_custom_save_Buttonpic_3 : RscPicture
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_A10\sqs\loadout\A10J_SaveCustom.sqf""";
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
class AAC_Texture_GUI
{
	idd=9914;
	movingenable="false";
	class controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.22 * safezoneW + safezoneX";
			y="0.206 * safezoneH + safezoneY";
			w="0.525 * safezoneW";
			h="0.504 * safezoneH";
		};
		class setskin_background: RscPicture
		{
			idc=1900;
			x="0.22 * safezoneW + safezoneX";
			y="0.206 * safezoneH + safezoneY";
			w="0.525 * safezoneW";
			h="0.504 * safezoneH";
			text="FIR_AirWeaponSystem_US\ui\background_skin.paa";
		};
		class RscText_1000: RscText
		{
			idc=1000;
			text="Select Texture";
			x="0.22875 * safezoneW + safezoneX";
			y="0.234 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.028 * safezoneH";
		};
		class Texture_Text: RscText
		{
			idc=1001;
			text="";
			x="0.59625 * safezoneW + safezoneX";
			y="0.234 * safezoneH + safezoneY";
			w="0.13125 * safezoneW";
			h="0.028 * safezoneH";
		};
		class texture_preview: RscPicture
		{
			idc=1980;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="0.3425 * safezoneW + safezoneX";
			y="0.262 * safezoneH + safezoneY";
			w="0.385 * safezoneW";
			h="0.336 * safezoneH";
		};
		class texture_combo: RscCombo
		{
			idc=2160;
			x="0.2375 * safezoneW + safezoneX";
			y="0.262 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
			onLBSelChanged="_changehandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\setskin\change_preview.sqf"";";
		};
		class apply_btn_pic: RscPicture
		{
			idc=1700;
			text="FIR_AirWeaponSystem_US\ui\button_apply.paa";
			x="0.57 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
		};
		class apply_btn: RscButton
		{
			idc=1600;
			text="";
			x="0.57 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\setskin\change_skin.sqf"";";
		};
		class cancel_btn_pic: RscPicture
		{
			idc=1701;
			text="FIR_AirWeaponSystem_US\ui\button_cancel.paa";
			x="0.6575 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
		};
		class cancel_btn: RscButton
		{
			idc=1601;
			text="";
			x="0.6575 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			action="closeDialog 0";
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
	class CUP_A10_Base : Plane
	{
		simulation="airplane";
		dlc="CUP_Vehicles";
		displayName="A-10 Thunderbolt II";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_01_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"
		};
		faction="CUP_B_US_Army";
		crew="B_pilot_F";
		typicalCargo[]=
		{
			"B_pilot_F"
		};
		weapons[]={};
		magazines[]={};
		scope=0;
		side=1;
		vehicleClass="air";
		model="\CUP\AirVehicles\CUP_AirVehicles_A10\CUP_A10.p3d";
		picture="\CUP\AirVehicles\CUP_AirVehicles_A10\data\ui\Picture_A10_CA.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_A10\data\ui\Icon_A10_CA.paa";
		mapSize=17;
		camouflage=10;
		accuracy=0.2;
		supplyRadius=8;
		minFireTime=10;
		gunAimDown=0.07;
		HeadAimDown=3;
		driverAction="CUP_A10_Pilot_EDIT";
		maxSpeed=750;
		landingAoa="rad 10";
		landingSpeed=220;
		flapsFrictionCoef=0.30000001;
		envelope[]={0,0.1,0.64999998,2.2,3.7,5.3000002,6,5.5,5.5999999,4.8000002,3.5999999,1.8,0};
		gearUpTime=4.5;
		gearDownTime=3;
		threat[]={1,1,1};
		armor=75;
		destrType="DestructWreck";
		damageResistance=0.0048500001;
		armorStructured=1;
		altFullForce=12200;
		altNoForce=15700;
		aileronSensitivity=0.40000001;
		elevatorSensitivity=0.69999999;
		driveOnComponent[]=
		{
			"wheel_1",
			"wheel_2",
			"wheel_3"
		};
		driverRightHandAnimName="stick_pilot";
		driverLeftHandAnimName="";
		class Turrets
		{
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_skla.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_skla_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_skla_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_cockpit_glass_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_cockpit_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_cockpit_glass_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\A10_01.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\A10_01_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\A10_01_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\A10_02.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\A10_02_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_A10\data\A10_02_destruct.rvmat"
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov=1;
			minFov=0.30000001;
			maxFov=1.2;
			initAngleX=0;
			minAngleX=-40;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		laserScanner=1;
		radarType=4;
		LockDetectionSystem="2 + 4 + 8";
		incomingMissiLeDetectionSystem=16;
		insideSoundCoef=0.2;
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_EPC\CAS_01\getin_wipeout",
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
		};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.50999999,0.30500001};
					pos10[]={1.3099999,1.1849999};
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
						pos[]={0.50999999,0.375};
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
						pos0[]={0.5,0.30500001};
						pos10[]={1.3,1.1849999};
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.30500001};
						pos3[]={0.74000001,0.30500001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.375};
						pos10[]={1.3,1.255};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					alpha=0.40000001;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								{-0.079999998,0},
								1
							},
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.015,0.033},
								1
							},
							
							{
								"PlaneW",
								{0,0},
								1
							},
							
							{
								"PlaneW",
								{0.015,0.033},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{0.079999998,0},
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.022},
								1
							},
							
							{
								"Velocity",
								{0.014,-0.0154},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.014,0.0154},
								1
							},
							
							{
								"Velocity",
								{0,0.022},
								1
							},
							
							{
								"Velocity",
								{-0.014,0.0154},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.014,-0.0154},
								1
							},
							
							{
								"Velocity",
								{0,-0.022},
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
								{0,-0.044},
								1
							},
							
							{
								"Velocity",
								{0,-0.022},
								1
							},
							{}
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
								{0.20999999,0.51999998},
								1
							},
							
							{
								{0.19,0.5},
								1
							},
							
							{
								{0.20999999,0.47999999},
								1
							},
							{},
							
							{
								{0.18000001,0.2},
								1
							},
							
							{
								{0.18000001,0.85000002},
								1
							},
							{},
							
							{
								{0.79000002,0.51999998},
								1
							},
							
							{
								{0.81,0.5},
								1
							},
							
							{
								{0.79000002,0.47999999},
								1
							},
							{},
							
							{
								{0.81999999,0.2},
								1
							},
							
							{
								{0.81999999,0.85000002},
								1
							},
							{},
							
							{
								{0.51999998,0.090000004},
								1
							},
							
							{
								{0.5,0.07},
								1
							},
							
							{
								{0.47999999,0.090000004},
								1
							},
							{},
							
							{
								{0.2,0.064999998},
								1
							},
							
							{
								{0.80000001,0.064999998},
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[]={0,0};
						clipBR[]={1,1};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.2,0},
										1
									},
									
									{
										"Level0",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.050000001,0},
										1
									},
									
									{
										"Level0",
										{0.2,0},
										1
									}
								};
							};
							class VALM_1_0
							{
								type="text";
								source="static";
								text=0;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									{-0.23,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{-0.13,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{-0.23,0.025},
									1
								};
							};
							class VALM_2_0: VALM_1_0
							{
								align="right";
								pos[]=
								{
									"Level0",
									{0.22,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{0.31999999,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{0.22,0.025},
									1
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM5",
										{-0.2,0},
										1
									},
									
									{
										"LevelM5",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_5: VALM_1_5
							{
								align="right";
								pos[]=
								{
									"LevelM5",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.22,-0.035},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP5",
										{-0.2,0},
										1
									},
									
									{
										"LevelP5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_5: VALP_1_5
							{
								align="right";
								pos[]=
								{
									"LevelP5",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.22,-0.035},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM15",
										{-0.2,0},
										1
									},
									
									{
										"LevelM15",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_15: VALM_1_15
							{
								align="right";
								pos[]=
								{
									"LevelM15",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.22,-0.035},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP15",
										{-0.2,0},
										1
									},
									
									{
										"LevelP15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_15: VALP_1_15
							{
								align="right";
								pos[]=
								{
									"LevelP15",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.22,-0.035},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM25",
										{-0.2,0},
										1
									},
									
									{
										"LevelM25",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_25: VALM_1_25
							{
								align="right";
								pos[]=
								{
									"LevelM25",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.22,-0.035},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP25",
										{-0.2,0},
										1
									},
									
									{
										"LevelP25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_25: VALP_1_25
							{
								align="right";
								pos[]=
								{
									"LevelP25",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.22,-0.035},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM35",
										{-0.2,0},
										1
									},
									
									{
										"LevelM35",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_35: VALM_1_35
							{
								align="right";
								pos[]=
								{
									"LevelM35",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.22,-0.035},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP35",
										{-0.2,0},
										1
									},
									
									{
										"LevelP35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_35: VALP_1_35
							{
								align="right";
								pos[]=
								{
									"LevelP35",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.22,-0.035},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM45",
										{-0.2,0},
										1
									},
									
									{
										"LevelM45",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_45: VALM_1_45
							{
								align="right";
								pos[]=
								{
									"LevelM45",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.22,-0.035},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP45",
										{-0.2,0},
										1
									},
									
									{
										"LevelP45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_45: VALP_1_45
							{
								align="right";
								pos[]=
								{
									"LevelP45",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.22,-0.035},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.22,0.085000001},
									1
								};
							};
						};
					};
					class RadarTargets
					{
						type="radar";
						pos0[]={0.50999999,0.30500001};
						pos10[]={1.3099999,1.1849999};
						points[]=
						{
							
							{
								{-0.050000001,-0.055},
								1
							},
							
							{
								{0.050000001,-0.055},
								1
							},
							
							{
								{0.050000001,0.055},
								1
							},
							
							{
								{-0.050000001,0.055},
								1
							},
							
							{
								{-0.050000001,-0.055},
								1
							}
						};
					};
					class MGun
					{
						condition="mgun";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.011},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.011},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.077},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,-0.0539},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,0.0539},
									1
								},
								
								{
									"WeaponAim",
									{0,0.077},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,0.0539},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,-0.0539},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.077},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.154},
									1
								},
								
								{
									"WeaponAim",
									{0.07,-0.13398001},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,-0.077},
									1
								},
								
								{
									"WeaponAim",
									{0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,0.077},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0.13398001},
									1
								},
								
								{
									"WeaponAim",
									{0,0.154},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0.13398001},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,0.077},
									1
								},
								
								{
									"WeaponAim",
									{-0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,-0.077},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,-0.13398001},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.154},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.154},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.176},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,-0.133368},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,-0.15242},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,-0.077},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,-0.088},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.14,6.73155e-009},
									1
								},
								
								{
									"WeaponAim",
									{-0.16,7.6931999e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,0.077},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,0.088},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,0.133368},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,0.15242},
									1
								},
								{},
								
								{
									"WeaponAim",
									{1.22392e-008,0.154},
									1
								},
								
								{
									"WeaponAim",
									{1.39876e-008,0.176},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,0.133368},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,0.15242},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,0.077},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,0.088},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.14,-1.83643e-009},
									1
								},
								
								{
									"WeaponAim",
									{0.16,-2.09878e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,-0.077},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,-0.088},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,-0.133368},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,-0.15242},
									1
								},
								{}
							};
						};
					};
					class Bomb
					{
						condition="bomb";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.11},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.095700003},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,-0.055},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,0.055},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.095700003},
									1
								},
								
								{
									"WeaponAim",
									{0,0.11},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.095700003},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,0.055},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,-0.055},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.095700003},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.11},
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
								},
								{},
								
								{
									"Target",
									{0,-0.077},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.077},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.077},
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
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.27500001},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.23925},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,-0.1375},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,0.1375},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.23925},
									1
								},
								
								{
									"WeaponAim",
									{0,0.27500001},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.23925},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,0.1375},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,-0.1375},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.23925},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.27500001},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.077},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.077},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.077},
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
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.198},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,-0.17226},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,-0.098999999},
									1
								},
								
								{
									"WeaponAim",
									{0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,0.098999999},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,0.17226},
									1
								},
								
								{
									"WeaponAim",
									{0,0.198},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,0.17226},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,0.098999999},
									1
								},
								
								{
									"WeaponAim",
									{-0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,-0.098999999},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,-0.17226},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.198},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.077},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.077},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.077},
									1
								}
							};
						};
					};
					class Rockets
					{
						condition="Rocket";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.011},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.011},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.132},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,-0.11484},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,-0.066},
									1
								},
								
								{
									"WeaponAim",
									{0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,0.066},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,0.11484},
									1
								},
								
								{
									"WeaponAim",
									{0,0.132},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,0.11484},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,0.066},
									1
								},
								
								{
									"WeaponAim",
									{-0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,-0.066},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,-0.11484},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.132},
									1
								},
								{}
							};
						};
					};
					class AltScale
					{
						type="scale";
						scale=1;
						source="altitudeASL";
						sourceScale=1;
						align="right";
						pos[]={0.86000001,0.81999999};
						right[]={0.94,0.81999999};
						down[]={0.86000001,0.87};
						lineXleft=0.82499999;
						lineYright=0.83499998;
						lineXleftMajor=0.82499999;
						lineYrightMajor=0.84500003;
						bottom=0.2;
						top=0.85000002;
						center=0.5;
						step=20;
						StepSize=0.032499999;
						horizontal=0;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class SpeedScale
					{
						type="scale";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						align="right";
						pos[]={0.059999999,0.17};
						right[]={0.14,0.17};
						down[]={0.059999999,0.22};
						lineXleft=0.175;
						lineYright=0.16500001;
						lineXleftMajor=0.175;
						lineYrightMajor=0.155;
						bottom=0.85000002;
						center=0.5;
						top=0.2;
						step=20;
						StepSize=0.032499999;
						horizontal=0;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class Gear
					{
						condition="ils";
						class text
						{
							type="text";
							source="static";
							text="GEAR";
							align="right";
							scale=0.5;
							sourceScale=1;
							pos[]=
							{
								{0.83999997,0.88},
								1
							};
							right[]=
							{
								{0.89999998,0.88},
								1
							};
							down[]=
							{
								{0.83999997,0.92000002},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class text
						{
							type="text";
							source="static";
							text="FLAPS";
							align="right";
							scale=0.5;
							sourceScale=1;
							pos[]=
							{
								{0.83999997,0.93000001},
								1
							};
							right[]=
							{
								{0.89999998,0.93000001},
								1
							};
							down[]=
							{
								{0.83999997,0.97000003},
								1
							};
						};
					};
					class weapons
					{
						type="text";
						source="weapon";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.88},
							1
						};
						right[]=
						{
							{0.16,0.88},
							1
						};
						down[]=
						{
							{0.1,0.92000002},
							1
						};
					};
					class ammo
					{
						type="text";
						source="ammo";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.93000001},
							1
						};
						right[]=
						{
							{0.16,0.93000001},
							1
						};
						down[]=
						{
							{0.1,0.97000003},
							1
						};
					};
					class VspeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="vspeed";
						sourceScale=1;
						pos[]=
						{
							{0.86000001,0.12},
							1
						};
						right[]=
						{
							{0.94,0.12},
							1
						};
						down[]=
						{
							{0.86000001,0.17},
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
						pos[]={0.2,0};
						right[]={0.28,0};
						down[]={0.2,0.050000001};
						lineXleft=0.059999999;
						lineYright=0.050000001;
						lineXleftMajor=0.059999999;
						lineYrightMajor=0.039999999;
						bottom=0.80000001;
						center=0.5;
						top=0.2;
						step=2;
						StepSize=0.029999999;
						horizontal=1;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
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
										{0,0.0264},
										1
									},
									
									{
										"ILS_W",
										{0,-0.0264},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,0.0264},
										1
									},
									
									{
										"ILS_W",
										{0.12,-0.0264},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,0.0264},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,-0.0264},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,0.0264},
										1
									},
									
									{
										"ILS_W",
										{-0.12,-0.0264},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,0.0264},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,-0.0264},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.264},
										1
									},
									
									{
										"ILS_H",
										{0,0.264},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.132},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.132},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.264},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.264},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.132},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.132},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.264},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.264},
										1
									}
								};
							};
						};
					};
				};
			};
		};
		class Library
		{
			libEnable=0;
			libTextDesc="$STR_LIB_A10";
		};
		class UserActions
		{
		};
		class AnimationSources
		{
			class Gatling
			{
				source="revolving";
				weapon="CUP_Vacannon_GAU8_veh";
			};
			class Muzzle_rot_gau8
			{
				source="ammorandom";
				weapon="CUP_Vacannon_GAU8_veh";
			};
			class Muzzle_hide_gau8
			{
				source="reload";
				weapon="CUP_Vacannon_GAU8_veh";
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
		class RenderTargets
		{
			class NoseCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.40000001;
				};
			};
		};
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
			controllable=1;
		};
		memoryPointDriverOptics="slingCamera";
		unitInfoType="RscOptics_AV_pilot";
		//unitInfoType="RscOptics_CAS_Pilot";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,7.5,0.19};
		LESH_WheelOffset[]={0,-1};
	};
	class JAS_CUP_B_A10_USA : CUP_A10_Base
	{
		scope = 2;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="CUP_B_US_Army";
		expansion = 3;
		editorPreview = "\ARMA3_CUP_Enhancement_A10\UI\editorpreview\USA10.jpg";
		forceInGarage = 1;
		dlc = "CUP_Vehicles";
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 US Army Standard Grey";
		fir_a10US_custom_code="JAS_CUP_B_A10_USA";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGrey.paa";
		weapons[] =
		{
			"JAS_CUP_Vacannon_GAU8_veh",
			"FIR_MasterArm",
			"FIR_CMLauncher",
			"Laserdesignator_mounted"
		};
		magazines[] =
		{
			"CUP_1350Rnd_TE1_Red_Tracer_30mm_GAU8_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_01_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"
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
			class A10J_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_A10\sqs\loadout\A10J_GUI_Open.sqf""";
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
			/*class ITGT_VT_1
			{
				displayName = "Visual Targeting ON";
				position = "pos cano";
				radius = 15;
				condition = "player in this and isengineon this and this getvariable ""TGT_POD"" == ""yes"" and this getvariable ""ITGT_VT"" == ""no""";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\FIR_AWS_VT.sqf"";this setvariable [""ITGT_VT"",""yes"",true]";
				onlyforplayer = "false";
				shortcut = "User9";
			};
			class ITGT_VT_2
			{
				displayName = "Visual Targeting OFF";
				position = "pos cano";
				radius = 15;
				condition = "player in this and isengineon this and this getvariable ""TGT_POD"" == ""yes"" and this getvariable ""ITGT_VT"" == ""yes""";
				statement = "this setvariable [""ITGT_VT"",""no"",true]";
				onlyforplayer = "false";
				shortcut = "User9";
			};*/
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
		};
		class eventhandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
		};
	};
	class JAS_CUP_B_A10_AAC_2 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Grey Hog";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_2";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreyHog.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_hog.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_3 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Grey Panther";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_3";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreyPanther.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_panth.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_4 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Grey Shark";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_4";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreyShark.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_shark.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_5 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Black";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_5";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USBlack.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_6 : JAS_CUP_B_A10_USA
	{
		scope = 2;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		forceInGarage = 1;
		editorSubcategory="GOL_AAC_PHANTOM";
		editorPreview = "\ARMA3_CUP_Enhancement_A10\UI\editorpreview\AACA10.jpg";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Black Shark";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_6";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USBlackShark.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black_shark.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_7 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Black Hog";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_7";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USBlackHog.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black_hog.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_8 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Black Panther";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_8";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USBlackPanther.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black_panth.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_9 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Desert";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_9";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USDesert.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_desert.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_desert.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_10 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Green";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_10";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreen.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_11 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Green Hog";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_11";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreenHog.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green_hog.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_12 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Green Shark";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_12";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USGreenShark.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green_shark.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"
		};
	};
	class JAS_CUP_B_A10_AAC_13 : JAS_CUP_B_A10_USA
	{
		scope = 0;
		displayName = "A-10J Thunderbolt II";
		author = "CUP/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="EdSubcat_Planes";
		expansion = 3;
		fir_a10US_custom_skin=1;
		fir_a10US_custom_name="A-10 AAC Winter";
		fir_a10US_custom_code="JAS_CUP_B_A10_AAC_13";
		fir_a10US_custom_preview_pic="\ARMA3_CUP_Enhancement_A10\UI\preview\USWinter.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_winter.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_winter.paa"
		};
	};
	class JAS_A10_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="A-10 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_A10_Loadout";
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
					class hp1_82s
					{
						name="Mk82 Snakeye";
						value=2;
					};
					class hp1_82
					{
						name="Mk82 GPB";
						value=3;
					};
					class hp1_84
					{
						name="Mk84 GPB";
						value=4;
					};
					class hp1_87
					{
						name="CBU-87 CEM";
						value=5;
					};
					class hp1_89
					{
						name="CBU-89 GATOR";
						value=6;
					};
					class hp1_97
					{
						name="CBU-97 SFW";
						value=7;
					};
					class hp1_12
					{
						name="GBU-12";
						value=8;
					};
					class hp1_ALQ
					{
						name="ECM POD";
						value=9;
					};
					class hp1_SUU
					{
						name="SUU-25";
						value=10;
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
					class hp2_82s
					{
						name="Mk82 Snakeye";
						value=2;
					};
					class hp2_82
					{
						name="Mk82 GPB";
						value=3;
					};
					class hp2_84
					{
						name="Mk84 GPB";
						value=4;
					};
					class hp2_87
					{
						name="CBU-87 CEM";
						value=5;
					};
					class hp2_89
					{
						name="CBU-89 GATOR";
						value=6;
					};
					class hp2_97
					{
						name="CBU-97 SFW";
						value=7;
					};
					class hp2_12
					{
						name="GBU-12";
						value=8;
					};
					class hp2_ALQ
					{
						name="ECM POD";
						value=9;
					};
					class hp2_SUU
					{
						name="SUU-25";
						value=10;
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
					class hp3_hydra7
					{
						name="HYDRA x7";
						value=1;
					};
					class hp3_hydraW
					{
						name="HYDRA Smoke White";
						value=2;
					};
					class hp3_hydraR
					{
						name="HYDRA Smoke Red";
						value=3;
					};
					class hp3_hydraO
					{
						name="HYDRA Smoke Orange";
						value=4;
					};
					class hp3_hydraP
					{
						name="HYDRA Smoke Purple";
						value=5;
					};
					class hp3_hydra19
					{
						name="HYDRA x19";
						value=6;
					};
					class hp3_zuni4
					{
						name="ZUNI x4";
						value=7;
					};
					class hp3_crv7
					{
						name="CRV7 x19";
						value=8;
					};
					class hp3_82s
					{
						name="Mk82 Snakeye";
						value=9;
					};
					class hp3_82
					{
						name="Mk82 GPB";
						value=10;
					};
					class hp3_84
					{
						name="Mk84 GPB";
						value=11;
					};
					class hp3_87
					{
						name="CBU-87 CEM";
						value=12;
					};
					class hp3_89
					{
						name="CBU-89 GATOR";
						value=13;
					};
					class hp3_97
					{
						name="CBU-97 SFW";
						value=14;
					};
					class hp3_12
					{
						name="GBU-12";
						value=15;
					};
					class hp3_tgp
					{
						name="Lightning II POD";
						value=16;
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
					class hp4_hydra7
					{
						name="HYDRA x7";
						value=1;
					};
					class hp4_hydraW
					{
						name="HYDRA Smoke White";
						value=2;
					};
					class hp4_hydraR
					{
						name="HYDRA Smoke Red";
						value=3;
					};
					class hp4_hydraO
					{
						name="HYDRA Smoke Orange";
						value=4;
					};
					class hp4_hydraP
					{
						name="HYDRA Smoke Purple";
						value=5;
					};
					class hp4_hydra19
					{
						name="HYDRA x19";
						value=6;
					};
					class hp4_zuni4
					{
						name="ZUNI x4";
						value=7;
					};
					class hp4_crv7
					{
						name="CRV7 x19";
						value=8;
					};
					class hp4_82s
					{
						name="Mk82 Snakeye";
						value=9;
					};
					class hp4_82
					{
						name="Mk82 GPB";
						value=10;
					};
					class hp4_84
					{
						name="Mk84 GPB";
						value=11;
					};
					class hp4_87
					{
						name="CBU-87 CEM";
						value=12;
					};
					class hp4_89
					{
						name="CBU-89 GATOR";
						value=13;
					};
					class hp4_97
					{
						name="CBU-97 SFW";
						value=14;
					};
					class hp4_12
					{
						name="GBU-12";
						value=15;
					};
					class hp4_tgp
					{
						name="Lightning II POD";
						value=16;
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
					class hp5_82s
					{
						name="Mk82 Snakeye";
						value=1;
					};
					class hp5_82ster
					{
						name="Mk82 Snakeye x3";
						value=2;
					};
					class hp5_82
					{
						name="Mk82 GPB";
						value=3;
					};
					class hp5_82ter
					{
						name="Mk82 GPB x3";
						value=4;
					};
					class hp5_84
					{
						name="Mk84 GPB";
						value=5;
					};
					class hp5_87
					{
						name="CBU-87 CEM";
						value=6;
					};
					class hp5_89
					{
						name="CBU-89 GATOR";
						value=7;
					};
					class hp5_97
					{
						name="CBU-97 SFW";
						value=8;
					};
					class hp5_103
					{
						name="CBU-103 WCMD";
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
					class hp5_12ter
					{
						name="GBU-12 x3";
						value=12;
					};
					class hp5_31
					{
						name="GBU-31";
						value=13;
					};
					class hp5_38
					{
						name="GBU-38";
						value=14;
					};
					class hp5_hydra7
					{
						name="HYDRA x7";
						value=15;
					};
					class hp5_hydraW
					{
						name="HYDRA Smoke White";
						value=16;
					};
					class hp5_hydraR
					{
						name="HYDRA Smoke Red";
						value=17;
					};
					class hp5_hydraO
					{
						name="HYDRA Smoke Orange";
						value=18;
					};
					class hp5_hydraP
					{
						name="HYDRA Smoke Purple";
						value=19;
					};
					class hp5_hydra19
					{
						name="HYDRA x19";
						value=20;
					};
					class hp5_hydra21
					{
						name="HYDRA x21";
						value=21;
					};
					class hp5_zuni4
					{
						name="ZUNI x4";
						value=22;
					};
					class hp5_crv7
					{
						name="CRV7 x19";
						value=23;
					};
					class hp5_65D
					{
						name="AGM-65D";
						value=24;
					};
					class hp5_65Dter
					{
						name="AGM-65D x3";
						value=25;
					};
					class hp5_65G
					{
						name="AGM-65G";
						value=26;
					};
					class hp5_65Gter
					{
						name="AGM-65G x3";
						value=27;
					};
					class hp5_65L
					{
						name="AGM-65L";
						value=28;
					};
					class hp5_65Lter
					{
						name="AGM-65L x3";
						value=29;
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
					class hp6_82s
					{
						name="Mk82 Snakeye";
						value=1;
					};
					class hp6_82ster
					{
						name="Mk82 Snakeye x3";
						value=2;
					};
					class hp6_82
					{
						name="Mk82 GPB";
						value=3;
					};
					class hp6_82ter
					{
						name="Mk82 GPB x3";
						value=4;
					};
					class hp6_84
					{
						name="Mk84 GPB";
						value=5;
					};
					class hp6_87
					{
						name="CBU-87 CEM";
						value=6;
					};
					class hp6_89
					{
						name="CBU-89 GATOR";
						value=7;
					};
					class hp6_97
					{
						name="CBU-97 SFW";
						value=8;
					};
					class hp6_103
					{
						name="CBU-103 WCMD";
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
					class hp6_12ter
					{
						name="GBU-12 x3";
						value=12;
					};
					class hp6_31
					{
						name="GBU-31";
						value=13;
					};
					class hp6_38
					{
						name="GBU-38";
						value=14;
					};
					class hp6_hydra7
					{
						name="HYDRA x7";
						value=15;
					};
					class hp6_hydraW
					{
						name="HYDRA Smoke White";
						value=16;
					};
					class hp6_hydraR
					{
						name="HYDRA Smoke Red";
						value=17;
					};
					class hp6_hydraO
					{
						name="HYDRA Smoke Orange";
						value=18;
					};
					class hp6_hydraP
					{
						name="HYDRA Smoke Purple";
						value=19;
					};
					class hp6_hydra19
					{
						name="HYDRA x19";
						value=20;
					};
					class hp6_hydra21
					{
						name="HYDRA x21";
						value=21;
					};
					class hp6_zuni4
					{
						name="ZUNI x4";
						value=22;
					};
					class hp6_crv7
					{
						name="CRV7 x19";
						value=23;
					};
					class hp6_65D
					{
						name="AGM-65D";
						value=24;
					};
					class hp6_65Dter
					{
						name="AGM-65D x3";
						value=25;
					};
					class hp6_65G
					{
						name="AGM-65G";
						value=26;
					};
					class hp6_65Gter
					{
						name="AGM-65G x3";
						value=27;
					};
					class hp6_65L
					{
						name="AGM-65L";
						value=28;
					};
					class hp6_65Lter
					{
						name="AGM-65L x3";
						value=29;
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
					class hp7_82s
					{
						name="Mk82 Snakeye";
						value=1;
					};
					class hp7_82ster
					{
						name="Mk82 Snakeye x3";
						value=2;
					};
					class hp7_82
					{
						name="Mk82 GPB";
						value=3;
					};
					class hp7_82ter
					{
						name="Mk82 GPB x3";
						value=4;
					};
					class hp7_84
					{
						name="Mk84 GPB";
						value=5;
					};
					class hp7_87
					{
						name="CBU-87 CEM";
						value=6;
					};
					class hp7_89
					{
						name="CBU-89 GATOR";
						value=7;
					};
					class hp7_97
					{
						name="CBU-97 SFW";
						value=8;
					};
					class hp7_103
					{
						name="CBU-103 WCMD";
						value=9;
					};
					class hp7_10
					{
						name="GBU-10";
						value=10;
					};
					class hp7_12
					{
						name="GBU-12";
						value=11;
					};
					class hp7_12ter
					{
						name="GBU-12 x3";
						value=12;
					};
					class hp7_31
					{
						name="GBU-31";
						value=13;
					};
					class hp7_38
					{
						name="GBU-38";
						value=14;
					};
					class hp7_hydra7
					{
						name="HYDRA x7";
						value=15;
					};
					class hp7_hydra19
					{
						name="HYDRA x19";
						value=16;
					};
					class hp7_hydra21
					{
						name="HYDRA x21";
						value=17;
					};
					class hp7_zuni4
					{
						name="ZUNI x4";
						value=18;
					};
					class hp7_crv7
					{
						name="CRV7 x19";
						value=19;
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
					class hp8_82s
					{
						name="Mk82 Snakeye";
						value=1;
					};
					class hp8_82ster
					{
						name="Mk82 Snakeye x3";
						value=2;
					};
					class hp8_82
					{
						name="Mk82 GPB";
						value=3;
					};
					class hp8_82ter
					{
						name="Mk82 GPB x3";
						value=4;
					};
					class hp8_84
					{
						name="Mk84 GPB";
						value=5;
					};
					class hp8_87
					{
						name="CBU-87 CEM";
						value=6;
					};
					class hp8_89
					{
						name="CBU-89 GATOR";
						value=7;
					};
					class hp8_97
					{
						name="CBU-97 SFW";
						value=8;
					};
					class hp8_103
					{
						name="CBU-103 WCMD";
						value=9;
					};
					class hp8_10
					{
						name="GBU-10";
						value=10;
					};
					class hp8_12
					{
						name="GBU-12";
						value=11;
					};
					class hp8_12ter
					{
						name="GBU-12 x3";
						value=12;
					};
					class hp8_31
					{
						name="GBU-31";
						value=13;
					};
					class hp8_38
					{
						name="GBU-38";
						value=14;
					};
					class hp8_hydra7
					{
						name="HYDRA x7";
						value=15;
					};
					class hp8_hydra19
					{
						name="HYDRA x19";
						value=16;
					};
					class hp8_hydra21
					{
						name="HYDRA x21";
						value=17;
					};
					class hp8_zuni4
					{
						name="ZUNI x4";
						value=18;
					};
					class hp8_crv7
					{
						name="CRV7 x19";
						value=19;
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
					class hp9_82s
					{
						name="Mk82 Snakeye";
						value=1;
					};
					class hp9_82
					{
						name="Mk82 GPB";
						value=2;
					};
					class hp9_84
					{
						name="Mk84 GPB";
						value=3;
					};
					class hp9_87
					{
						name="CBU-87 CEM";
						value=4;
					};
					class hp9_89
					{
						name="CBU-89 GATOR";
						value=5;
					};
					class hp9_97
					{
						name="CBU-97 SFW";
						value=6;
					};
					class hp9_103
					{
						name="CBU-103 WCMD";
						value=7;
					};
					class hp9_10
					{
						name="GBU-10";
						value=8;
					};
					class hp9_12
					{
						name="GBU-12";
						value=9;
					};
					class hp9_31
					{
						name="GBU-31";
						value=10;
					};
					class hp9_38
					{
						name="GBU-38";
						value=11;
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
					class hp10_82s
					{
						name="Mk82 Snakeye";
						value=1;
					};
					class hp10_82
					{
						name="Mk82 GPB";
						value=2;
					};
					class hp10_84
					{
						name="Mk84 GPB";
						value=3;
					};
					class hp10_87
					{
						name="CBU-87 CEM";
						value=4;
					};
					class hp10_89
					{
						name="CBU-89 GATOR";
						value=5;
					};
					class hp10_97
					{
						name="CBU-97 SFW";
						value=6;
					};
					class hp10_103
					{
						name="CBU-103 WCMD";
						value=7;
					};
					class hp10_10
					{
						name="GBU-10";
						value=8;
					};
					class hp10_12
					{
						name="GBU-12";
						value=9;
					};
					class hp10_31
					{
						name="GBU-31";
						value=10;
					};
					class hp10_38
					{
						name="GBU-38";
						value=11;
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
					class hp11_82s
					{
						name="Mk82 Snakeye";
						value=1;
					};
					class hp11_82
					{
						name="Mk82 GPB";
						value=2;
					};
					class hp11_84
					{
						name="Mk84 GPB";
						value=3;
					};
					class hp11_87
					{
						name="CBU-87 CEM";
						value=4;
					};
					class hp11_89
					{
						name="CBU-89 GATOR";
						value=5;
					};
					class hp11_97
					{
						name="CBU-97 SFW";
						value=6;
					};
					class hp11_10
					{
						name="GBU-10";
						value=7;
					};
					class hp11_12
					{
						name="GBU-12";
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
					class Black
					{
						name="Black";
						value=0;
						default=1;
					};
					class BlackHog
					{
						name="Black Hog";
						value=1;
					};
					class BlackPanther
					{
						name="Black Panther";
						value=2;
					};
					class BlackShark
					{
						name="Black Shark";
						value=3;
					};
					class Desert
					{
						name="Desert";
						value=4;
					};
					class Green
					{
						name="Green";
						value=5;
					};
					class GreenHog
					{
						name="Green Hog";
						value=6;
					};
					class GreenShark
					{
						name="Green Shark";
						value=7;
					};
					class Grey
					{
						name="Grey";
						value=8;
					};
					class GreyHog
					{
						name="Grey Hog";
						value=9;
					};
					class GreyPanther
					{
						name="Grey Panther";
						value=10;
					};
					class GreyShark
					{
						name="Grey Shark";
						value=11;
					};
					class Winter
					{
						name="Winter";
						value=12;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="A-10 Loadout Module";
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
