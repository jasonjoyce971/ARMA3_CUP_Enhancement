class CfgPatches
{
	class ARMA3_CUP_Enhancement_AW159
	{
		units[]=
		{
			"JAS_CUP_B_AW159_Unarmed_GB",
			"JAS_CUP_B_AW159_Hellfire_GB",
			"JAS_CUP_B_AW159_Cannon_GB",
			"JAS_CUP_B_Wildcat_Unarmed_RN_Grey",
			"JAS_CUP_B_AW159_Hellfire_RN_Grey",
			"JAS_CUP_B_AW159_Cannon_RN_Grey",
			"JAS_CUP_B_Wildcat_Unarmed_Digital_AAF",
			"JAS_CUP_B_Wildcat_Hellfire_Armed_Digital_AAF",
			"JAS_CUP_B_Wildcat_Cannon_Armed_Digital_AAF",
			"JAS_CUP_B_AW159_Unarmed_AAC",
			"JAS_CUP_B_AW159_Hellfire_AAC",
			"JAS_CUP_B_AW159_Cannon_AAC"
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
		class ARMA3_CUP_Enhancement_AW159
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_AW159"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_AW159_Init_Function
		{
			class AW159_Loadout
			{
				file="\ARMA3_CUP_Enhancement_AW159\sqs\modules\aw159_loadout_module.sqf";
			};
			class AW159_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_AW159\sqs\modules\aw159_loadout_module_set.sqf";
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
			directory = "ARMA3_CUP_Enhancement_AW159\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_AW159\presentation\picture.paa";
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
		class AW159
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AW159 Wildcat";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The AW159 came about as an upgrade to the Westland Lynx. Almost everything about the Lynx has been modified and the Wildcat now only shares its basic shape and legendary speed with its predecessor. The Wildcats charm lies in its versatility, it can transport, sling load, provide recon, kill tanks or barrage areas depending on the variant deployed.<br/><br/>Variants:<br/><br/>%2Clean - Basic Transport<br/>%2Anti-Tank - Tank Hunting Gunship<br/>%2General Purpose - Multirole Direct Action Penetrator<br/><br/>Factions:<br/><br/>%2NATO<br/>%2United Kingdom<br/>%2Altis Armed Forces";
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
class AW159_GUI
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
			text = "ARMA3_CUP_Enhancement_AW159\ui\AW159_Background.paa";
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
			text = "Right Pylon";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1101 : RscText
		{
			idc = 1101;
			text = "Left Pylon";
			x = "0.22 * safezoneW + safezoneX";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_SaveCustom.sqf""";
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
	class JAS_CUP_AW159_Unarmed_Base : Helicopter_Base_H
	{
		fir_lynxAAC_custom_skin=2;
		fir_lynxAAC_custom_name="Wildcat British Army Air Corps";
		fir_lynxAAC_custom_code="JAS_CUP_AW159_Unarmed_Base";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\AV8USMCLIGHT.paa";
		dlc="CUP_Vehicles";
		scope=1;
		side=1;
		scopeCurator=0;
		faction="Blu_F";
		author="DeltaGamer/-{GOL}-Jason";
		driveOnComponent[]=
		{
			"Wheels"
		};
		selectionHRotorStill="main rotor static";
		selectionHRotorMove="main rotor blur";
		selectionVRotorStill="tail rotor static";
		selectionVRotorMove="tail rotor blur";
		mainBladeCenter="main_rotor_center";
		tailBladeCenter="tail_rotor_center";
		class MFD
		{
			class AirplaneHUD
			{
				class Bones
				{
				};
				class Draw
				{
				};
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={0,0,0};
				helmetRight[]={0,0,0};
				helmetDown[]={0,0,0};
			};
			class Kimi_HUD_1
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]=
						{
							0.5,
							"0.9 - 0.04 + 0.02667"
						};
						pos10[]=
						{
							"0.5 + 0.0111",
							"0.9 - 0.04 + 0.02667 + 0.0133"
						};
					};
					class Target
					{
						source="target";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.85000002,0.85000002};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.64999998,0.64999998};
					};
					class Velocity_slip
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.84500003};
						pos10[]={0.52999997,0.84500003};
					};
					class VspeedBone
					{
						type="linear";
						source="vspeed";
						sourceScale=1;
						min=-10;
						max=10;
						minPos[]={0.93000001,0.2};
						maxPos[]={0.93000001,0.80000001};
					};
					class RadarAltitudeBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=60;
						minPos[]={0.96499997,0.2};
						maxPos[]={0.96499997,0.80000001};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.235,0.235};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.75300002,0.75300002};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.5};
						pos10[]={0.77999997,0.77999997};
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
					class LevelP55: Level0
					{
						angle=55;
					};
					class LevelM55: Level0
					{
						angle=-55;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP65: Level0
					{
						angle=65;
					};
					class LevelM65: Level0
					{
						angle=-65;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP75: Level0
					{
						angle=75;
					};
					class LevelM75: Level0
					{
						angle=-75;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP85: Level0
					{
						angle=85;
					};
					class LevelM85: Level0
					{
						angle=-85;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class Horizont
					{
						clipTL[]={0.15000001,0.15000001};
						clipBR[]={0.85000002,0.85000002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.41999999,0},
										1
									},
									
									{
										"Level0",
										{-0.38,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.37,0},
										1
									},
									
									{
										"Level0",
										{-0.33000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.31999999,0},
										1
									},
									
									{
										"Level0",
										{-0.28,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.27000001,0},
										1
									},
									
									{
										"Level0",
										{-0.23,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.22,0},
										1
									},
									
									{
										"Level0",
										{-0.18000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.17,0},
										1
									},
									
									{
										"Level0",
										{-0.13,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.12,0},
										1
									},
									
									{
										"Level0",
										{-0.079999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.41999999,0},
										1
									},
									
									{
										"Level0",
										{0.38,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.37,0},
										1
									},
									
									{
										"Level0",
										{0.33000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.31999999,0},
										1
									},
									
									{
										"Level0",
										{0.28,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.27000001,0},
										1
									},
									
									{
										"Level0",
										{0.23,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.22,0},
										1
									},
									
									{
										"Level0",
										{0.18000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.17,0},
										1
									},
									
									{
										"Level0",
										{0.13,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.12,0},
										1
									},
									
									{
										"Level0",
										{0.079999998,0},
										1
									}
								};
							};
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							}
						};
					};
					class Static_HAD_BOX
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=5;
						points[]=
						{
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									"0.5-0.1",
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									"0.5+0.1",
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									"0.5+0.1",
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04+0.02667"
								},
								1
							},
							
							{
								
								{
									"0.5-0.092",
									"0.9-0.04+0.02667"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5+0.1",
									"0.9-0.04+0.02667"
								},
								1
							},
							
							{
								
								{
									"0.5+0.092",
									"0.9-0.04+0.02667"
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.9-0.032"
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.9+0.032"
								},
								1
							},
							{}
						};
					};
					class Gunner_HAD
					{
						type="line";
						width=6;
						points[]=
						{
							
							{
								"GunnerAim",
								{-0.015,-0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{-0.015,0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{0.015,0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{0.015,-0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{-0.015,-0.0080000004},
								1
							}
						};
					};
					class Centerline
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.52999997},
								1
							},
							{},
							
							{
								{0.49000001,0.5},
								1
							},
							
							{
								{0.47,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.52999997,0.5},
								1
							},
							{}
						};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.075"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.075"
									},
									1
								}
							};
						};
						class Slip_ball
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								}
							};
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
							{0.61000001,0.86000001},
							1
						};
						right[]=
						{
							{0.64999998,0.86000001},
							1
						};
						down[]=
						{
							{0.61000001,0.89999998},
							1
						};
					};
					class Ammo_ALL
					{
						type="group";
						condition="on";
						class Ammo_count_ALL
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.61000001,0.88999999},
								1
							};
							right[]=
							{
								{0.64999998,0.88999999},
								1
							};
							down[]=
							{
								{0.61000001,0.93000001},
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
									"0.53 + 0.055"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.055"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.095"
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
									"0.53 + 0.105"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.105"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.145"
								},
								1
							};
						};
					};
					class ATMissileTOFGroup
					{
						condition="ATmissile";
						type="group";
						class TOFtext
						{
							type="text";
							align="right";
							source="static";
							text="TOF=";
							scale=1;
							pos[]=
							{
								{0.61000001,0.92000002},
								1
							};
							right[]=
							{
								{0.64999998,0.92000002},
								1
							};
							down[]=
							{
								{0.61000001,0.95999998},
								1
							};
						};
						class TOFnumber
						{
							type="text";
							source="targetDist";
							sourcescale=0.0024999999;
							align="right";
							scale=1;
							pos[]=
							{
								{0.69,0.92000002},
								1
							};
							right[]=
							{
								{0.73000002,0.92000002},
								1
							};
							down[]=
							{
								{0.69,0.95999998},
								1
							};
						};
					};
					class RangeNumber
					{
						type="text";
						source="targetDist";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.38999999,0.88999999},
							1
						};
						right[]=
						{
							{0.43000001,0.88999999},
							1
						};
						down[]=
						{
							{0.38999999,0.93000001},
							1
						};
					};
					class RangeText
					{
						type="text";
						source="static";
						text="RNG";
						align="left";
						scale=1;
						pos[]=
						{
							{0.38999999,0.86000001},
							1
						};
						right[]=
						{
							{0.43000001,0.86000001},
							1
						};
						down[]=
						{
							{0.38999999,0.89999998},
							1
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
							{0.029999999,0.47499999},
							1
						};
						right[]=
						{
							{0.079999998,0.47499999},
							1
						};
						down[]=
						{
							{0.029999999,0.52499998},
							1
						};
					};
					class TorqueNumber
					{
						condition="simulRTD";
						class Torque_number
						{
							type="text";
							align="left";
							scale=1;
							source="rtdRotorTorque";
							sourceScale=363;
							pos[]=
							{
								{0.064999998,0.175},
								1
							};
							right[]=
							{
								{0.115,0.175},
								1
							};
							down[]=
							{
								{0.064999998,0.22499999},
								1
							};
						};
						class Torquetext
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]=
							{
								{0.07,0.175},
								1
							};
							right[]=
							{
								{0.12,0.175},
								1
							};
							down[]=
							{
								{0.07,0.22499999},
								1
							};
						};
					};
					class AltNumber: SpeedNumber
					{
						align="right";
						source="altitudeAGL";
						sourceScale=1;
						pos[]=
						{
							{0.82999998,0.47499999},
							1
						};
						right[]=
						{
							{0.88,0.47499999},
							1
						};
						down[]=
						{
							{0.82999998,0.52499998},
							1
						};
					};
					class ASLNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.83499998,0.18000001},
							1
						};
						right[]=
						{
							{0.875,0.18000001},
							1
						};
						down[]=
						{
							{0.83499998,0.22},
							1
						};
					};
					class VspeedScalePosta
					{
						type="line";
						width=5;
						points[]=
						{
							
							{
								{0.98000002,0.2},
								1
							},
							
							{
								{1,0.2},
								1
							},
							{},
							
							{
								{0.93000001,0.2},
								1
							},
							
							{
								{0.94999999,0.2},
								1
							},
							{},
							
							{
								{0.98000002,0.34999999},
								1
							},
							
							{
								{1,0.34999999},
								1
							},
							{},
							
							{
								{0.93000001,0.34999999},
								1
							},
							
							{
								{0.94999999,0.34999999},
								1
							},
							{},
							
							{
								{0.94,0.38},
								1
							},
							
							{
								{0.94999999,0.38},
								1
							},
							{},
							
							{
								{0.94,0.41},
								1
							},
							
							{
								{0.94999999,0.41},
								1
							},
							{},
							
							{
								{0.94,0.44},
								1
							},
							
							{
								{0.94999999,0.44},
								1
							},
							{},
							
							{
								{0.94,0.47},
								1
							},
							
							{
								{0.94999999,0.47},
								1
							},
							{},
							
							{
								{0.98000002,0.5},
								1
							},
							
							{
								{1,0.5},
								1
							},
							{},
							
							{
								{0.93000001,0.5},
								1
							},
							
							{
								{0.94999999,0.5},
								1
							},
							{},
							
							{
								{0.94,0.52999997},
								1
							},
							
							{
								{0.94999999,0.52999997},
								1
							},
							{},
							
							{
								{0.94,0.56},
								1
							},
							
							{
								{0.94999999,0.56},
								1
							},
							{},
							
							{
								{0.94,0.58999997},
								1
							},
							
							{
								{0.94999999,0.58999997},
								1
							},
							{},
							
							{
								{0.94,0.62},
								1
							},
							
							{
								{0.94999999,0.62},
								1
							},
							{},
							
							{
								{0.98000002,0.64999998},
								1
							},
							
							{
								{1,0.64999998},
								1
							},
							{},
							
							{
								{0.93000001,0.64999998},
								1
							},
							
							{
								{0.94999999,0.64999998},
								1
							},
							{},
							
							{
								{0.99000001,0.68000001},
								1
							},
							
							{
								{0.98000002,0.68000001},
								1
							},
							{},
							
							{
								{0.99000001,0.70999998},
								1
							},
							
							{
								{0.98000002,0.70999998},
								1
							},
							{},
							
							{
								{0.99000001,0.74000001},
								1
							},
							
							{
								{0.98000002,0.74000001},
								1
							},
							{},
							
							{
								{0.99000001,0.76999998},
								1
							},
							
							{
								{0.98000002,0.76999998},
								1
							},
							{},
							
							{
								{0.98000002,0.80000001},
								1
							},
							
							{
								{1,0.80000001},
								1
							},
							{},
							
							{
								{0.93000001,0.80000001},
								1
							},
							
							{
								{0.94999999,0.80000001},
								1
							},
							{}
						};
					};
					class RadarAltitudeBand
					{
						clipTL[]={0,0.2};
						clipBR[]={1,0.80000001};
						class radarbanda
						{
							type="line";
							width=17;
							points[]=
							{
								
								{
									"RadarAltitudeBone",
									{0,0},
									1
								},
								
								{
									"RadarAltitudeBone",
									{0,0.60000002},
									1
								}
							};
						};
					};
					class VspeedBand
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,-0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							{}
						};
					};
					class HeadingNumber: SpeedNumber
					{
						source="heading";
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.0099999998},
							1
						};
						right[]=
						{
							{0.56,0.0099999998},
							1
						};
						down[]=
						{
							{0.5,0.059999999},
							1
						};
					};
					class Center_box
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.44,0.0049999999},
								1
							},
							
							{
								
								{
									"0.44 + 0.12",
									0.0049999999
								},
								1
							},
							
							{
								
								{
									"0.44 + 0.12",
									"0.005 + 0.06"
								},
								1
							},
							
							{
								
								{
									0.44,
									"0.005 + 0.06"
								},
								1
							},
							
							{
								{0.44,0.0049999999},
								1
							}
						};
					};
					class HeadingArrow
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								
								{
									"0.5",
									"0.128 + 0.03"
								},
								1
							},
							
							{
								{0.5,0.12800001},
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
						width=5;
						top=0.12;
						center=0.5;
						bottom=0.88;
						lineXleft="0.03 + 0.085";
						lineYright="0.02 + 0.085";
						lineXleftMajor="0.04 + 0.085";
						lineYrightMajor="0.02 + 0.085";
						majorLineEach=3;
						numberEach=3;
						step=10;
						stepSize="0.05";
						align="center";
						scale=1;
						pos[]=
						{
							0.119,
							"0.0 + 0.065"
						};
						right[]=
						{
							0.15899999,
							"0.0 + 0.065"
						};
						down[]=
						{
							0.119,
							"0.04 + 0.065"
						};
					};
					class Fuel_Text
					{
						type="text";
						source="static";
						text="Fuel";
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.89999998},
							1
						};
						right[]=
						{
							{0.07,0.89999998},
							1
						};
						down[]=
						{
							{0.029999999,0.94},
							1
						};
					};
					class Fuel_Number
					{
						type="text";
						source="fuel";
						sourceScale=100;
						align="right";
						scale=1;
						pos[]=
						{
							{0.1,0.89999998},
							1
						};
						right[]=
						{
							{0.14,0.89999998},
							1
						};
						down[]=
						{
							{0.1,0.94},
							1
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.039999999,0.039999999,0.1};
				helmetRight[]={0.079999998,0,0};
				helmetDown[]={0,-0.079999998,0};
			};
			class Kimi_HUD_2
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.75,0.75};
					};
					class ForwardVec1
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25299999,0.25299999};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.75300002,0.75300002};
					};
					class WeaponAim1
					{
						type="vector";
						source="weapon";
						pos0[]={0,0};
						pos10[]={0.25299999,0.23};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.5,0.5};
						pos10[]={0.75300002,0.75300002};
					};
					class RadarContact
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class PlaneMovementCrosshair
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.039999999},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							}
						};
					};
					class Gunner_AIM
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,-0.022500001},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,-0.032499999},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,0.022500001},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0,0.032499999},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{-0.022500001,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{-0.032499999,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0.022500001,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"WeaponAim",
								1,
								{0.032499999,0},
								1
							}
						};
					};
					class TargetACQ
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.059999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.055},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.050000001},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.045000002},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.039999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.035},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.029999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.025},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.02},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.015},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.0099999998},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.0049999999},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.059999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.055},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.050000001},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.045000002},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.039999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.035},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.029999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.025},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.02},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.015},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.0099999998},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.0049999999},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.059999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.055,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.050000001,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.045000002,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.039999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.035,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.029999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.025,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.02,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.015,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.0099999998,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.0049999999,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.059999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.055,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.050000001,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.045000002,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.039999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.035,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.029999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.025,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.02,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.015,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.0099999998,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.0049999999,0},
								1
							},
							{}
						};
					};
					class AC_Centerline
					{
						type="group";
						condition="on";
						class AC_Cross
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									
									{
										" -0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									
									{
										" 0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									
									{
										" -0.0 + 0.5",
										"0.006 + 0.5"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									
									{
										" 0.0 + 0.5",
										"-0.006 + 0.5"
									},
									1
								}
							};
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.035,0.035,0.1};
				helmetRight[]={0.07,0,0};
				helmetDown[]={0,-0.07,0};
			};
		};
		tf_RadioType_api="tf_anarc210";
		tf_hasLRradio_api=1;
		tf_isolatedAmount_api=0.2;
		displayname="AW159 Wildcat (Base)";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_AW159_LYNX_BAF_LIBRARY0";
		};
		simulation="Helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_AW159\rotorLib\RTD_Lynx.xml";
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
		slingLoadMemoryPoint="slingLoad0";
		slingLoadMaxCargoMass=1500;
		slingLoadOperator=1;
		liftForceCoef=2.5;
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
		};
		memoryPointDriverOptics="slingCamera";
		mapSize=20;
		mainBladeRadius=0;
		tailBladeRadius=0;
		crew="B_Helipilot_F";
		crewVulnerable=1;
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		driverAction="AW159_Pilot_BAF";
		GetInAction="GetInHigh";
		GetOutAction="GetOutHigh";
		cargoAction[]=
		{
			"AW159_Cargo_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF"
		};
		cargoIsCoDriver[]={1,0};
		memoryPointsGetInGunner[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInGunnerDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		gunnerUsesPilotView=0;
		driverCanSee=31;
		gunnerCanSee=31;
		hideWeaponsCargo=1;
		transportSoldier=6;
		transportMaxBackpacks=15;
		radarType=4;
		enableManualFire=0;
		maxSpeed=293;
		accuracy=1.5;
		cost=10000000;
		armor=60;
		damageResistance=0.0055499999;
		vehicleClass="Air";
		laserScanner=1;
		MainRotorSpeed=0.5;
		backRotorSpeed=3;
		altFullForce=4170;
		altNoForce=5370;
		LockDetectionSystem="8+ 4";
		IncommingMisslieDetectionSystem=16;
		gunBeg="muzzle_1";
		gunEnd="chamber_1";
		memoryPointLMissile="missile_1";
		memoryPointRMissile="missile_2";
		memoryPointGun="muzzle_1";
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		HeadAimDown=-5.1999998;
		threat[]={1,1,0.5};
		destrType="DestructWreck";
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
			class _xx_B_Kitbag
			{
				backpack="B_Kitbag_cbr";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=5;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=5;
			};
		};
		class RenderTargets
		{
			class camera
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="laserstart";
					pointDirection="commanderview";
					renderQuality=4;
					renderVisionMode=2;
					fov=0.46599999;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class CargoDoorR
			{
				source="door";
				animPeriod=1;
				initPhase=0;
				sound="MetalOldBigDoorsSound";
			};
			class CargoDoorL
			{
				source="door";
				animPeriod=1;
				initPhase=0;
				sound="MetalOldBigDoorsSound";
			};
			class CargoDoorR_action: CargoDoorR
			{
				source="user";
			};
			class CargoDoorL_action: CargoDoorL
			{
				source="user";
			};
			class HidePIPMFDPILY
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class HidePIPMFDPILYCO
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class hide_radar
			{
				source="user";
				animPeriod=0;
				initPhase=0;
				displayName="Add Radar";
			};
			class hide_struts
			{
				source="user";
				animPeriod=0;
				initPhase=1;
				displayName="Add Weapon Struts";
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
			class foldRotor
			{
				displayName="Fold Rotor";
				author="CUP_AUTHOR_STRING";
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
				mass=0;
				onPhaseChanged="_this call compile preprocessFileLineNumbers '\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf';";
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName="<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault="";
				position="";
				radius=3.5999999;
				onlyForplayer=1;
				condition="this animationPhase ""copip6"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip6"",1];";
				priority=9;
			};
			class Pimfdpip1OFF
			{
				displayName="<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault="";
				position="";
				radius=3.5999999;
				onlyForplayer=1;
				condition="this animationPhase ""copip6"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip6"",0];";
				priority=9;
			};
			class PimfdpipON
			{
				displayName="<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault="";
				position="";
				radius=3.5999999;
				onlyForplayer=1;
				condition="this animationPhase ""copip4"" < 0.5 AND (player == (gunner this) && (alive this)) ";
				statement="this animate [""copip4"",1];";
				priority=9;
			};
			class PimfdpipOFF
			{
				displayName="<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault="";
				position="";
				radius=3.5999999;
				onlyForplayer=1;
				condition="this animationPhase ""copip4"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip4"",0];";
				priority=9;
			};
			class OpenRdoor
			{
				displayName="<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault="";
				position="door_right_axis_beg";
				radius=3.7;
				onlyForplayer=0;
				priority=0;
				condition="this doorPhase ""CargoDoorR"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement="this animateDoor [""CargoDoorR"",1];";
			};
			class CloseRdoor
			{
				displayName="<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault="";
				position="door_right_axis_beg";
				radius=3.7;
				onlyForplayer=0;
				priority=0;
				condition="this doorPhase ""CargoDoorR"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement="this animateDoor [""CargoDoorR"",0];";
			};
			class OpenLdoor
			{
				displayName="<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault="";
				position="door_left_axis_beg";
				radius=3.7;
				onlyForplayer=0;
				priority=0;
				condition="this doorPhase ""CargoDoorL"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement="this animateDoor [""CargoDoorL"",1];";
			};
			class CloseLdoor
			{
				displayName="<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault="";
				position="door_left_axis_beg";
				radius=3.7;
				onlyForplayer=0;
				priority=0;
				condition="this doorPhase ""CargoDoorL"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement="this animateDoor [""CargoDoorL"",0];";
			};
			class Pack
			{
				displayName="Pack";
				displayNameDefault="Pack";
				position="PackAction";
				radius=10;
				onlyForPlayer=1;
				condition="(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement="[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class unPack
			{
				displayName="UnPack";
				displayNameDefault="Unpack";
				position="PackAction";
				radius=10;
				onlyForPlayer=1;
				condition="this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement="[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
		};
		class MarkerLights
		{
			class GreenStill
			{
				name="light_nav_right";
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
				name="light_nav_top";
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=50;
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class RedStill
			{
				name="light_nav_left";
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
			class WhiteStill
			{
				name="light_nav_back";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				intensity=75;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewpInOptics=1;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="MainTurret";
				gunnerCompartments="Compartment1";
				gun="MainGun";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				stabilizedInAxes=3;
				gunnername="Co-Pilot";
				isCopilot=1;
				memoryPointGunnerOptics="commanderview";
				minElev=-40;
				maxElev=20;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				gunBeg="commanderview";
				gunEnd="laserstart";
				memoryPointGun="laserstart";
				canLock=2;
				turretInfoType="RscOptics_UAV_gunner";
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				proxyType="CPGunner";
				inGunnerMayFire=1;
				gunnerAction="AW159_Pilot_BAF";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerOpticsEffect[]={};
				gunnerOpticsModel="";
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
				startEngine=0;
				gunnerHasFlares=0;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo right";
				memoryPointsGetInGunnerDir="pos cargo dir right";
				gunnerName="Passenger (Right Seat)";
				proxyIndex=7;
				maxElev=15;
				minElev=-60;
				maxTurn=-23;
				minTurn=-100;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="CargoDoorR";
				gunnerDoor="CargoDoorR";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
				LODTurnedIn=1;
				LODTurnedOut=1;
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo left";
				memoryPointsGetInGunnerDir="pos cargo dir left";
				gunnerName="Passenger (Left Seat)";
				proxyIndex=8;
				maxElev=15;
				minElev=-60;
				maxTurn=100;
				minTurn=23;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="CargoDoorL";
				gunnerDoor="CargoDoorL";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
				LODTurnedIn=1;
				LODTurnedOut=1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor=0.5;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.5;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.5;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.5;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.5;
			};
			class HitEngine
			{
				armor=0.5;
				material=51;
				name="motor";
				visual="motor";
				passThrough=0.5;
			};
			class HitAvionics
			{
				armor=0.15000001;
				material=51;
				name="elektronika";
				visual="elektronika";
				passThrough=0.2;
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
			class HitGlass6
			{
				armor=0.5;
				material=-1;
				name="glass6";
				visual="glass6";
				passThrough=0;
			};
			class HitGlass7
			{
				armor=0.5;
				material=-1;
				name="glass7";
				visual="glass7";
				passThrough=0;
			};
			class HitGlass8
			{
				armor=0.5;
				material=-1;
				name="glass8";
				visual="glass8";
				passThrough=0;
			};
			class HitGlass9
			{
				armor=0.5;
				material=-1;
				name="glass9";
				visual="glass9";
				passThrough=0;
			};
			class HitGlass10
			{
				armor=0.5;
				material=-1;
				name="glass10";
				visual="glass10";
				passThrough=0;
			};
			class HitGlass11
			{
				armor=0.5;
				material=-1;
				name="glass11";
				visual="glass11";
				passThrough=0;
			};
		};
		class Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=20;
				outerAngle=135;
				coneFadeCoef=10;
				position="laserstart";
				direction="commanderview";
				hitpoint="glass11";
				selection="glass11";
				useFlare=1;
				dayLight=0;
				FlareSize=15;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_base.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_base_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_base_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_glass.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_glass_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_interior.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_interior_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Lynx_interior_destruct.rvmat"
			};
		};
		attenuationEffectType="OpenHeliAttenuation";
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
			"A3\Sounds_F\vehicles\air\Heli_Light_03\open",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_int",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_ext",
			2.5118864,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_int",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_ext",
			2.5118864,
			1,
			600
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
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			150
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
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
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
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
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
			"A3\Sounds_F\dummysound",
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
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",
					1.7782794,
					1,
					700
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",
					1.4125376,
					1,
					1100
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",
					1,
					1,
					300
				};
				frequency=1;
				volume="camPos * (rotorThrust factor [0.7, 0.9])";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",
					1.7782794,
					1
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
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
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
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
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
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
					"A3\Sounds_F\vehicles\air\noises\wind_open_int",
					0.56234133,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.35481337,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
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
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",
						1.7782794,
						1,
						700
					};
					frequency="rotorSpeed";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",
						1.4125376,
						1,
						1100
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",
						1,
						1,
						300
					};
					frequency=1;
					volume="camPos * (rotorThrust factor [0.7, 0.9])";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",
						1,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",
						1.7782794,
						1
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
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
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
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
						"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
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
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
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
						"A3\Sounds_F\vehicles\air\noises\wind_open_int",
						0.56234133,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
						0.35481337,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		class TextureSources
		{
			class BAFGreen
			{
				displayname="British Green";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
				};
				factions[]={};
			};
			class RNGrey
			{
				displayname="Royal Navy Gray";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_grey_co.paa",
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
				};
				factions[]={};
			};
			class RNBlackCat
			{
				displayname="Royal Navy BlackCat";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_blackcats_co.paa",
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
				};
				factions[]={};
			};
			class AAFGreen
			{
				displayname="AAF Green";
				author="Community Upgrade Project";
				textures[]=
				{
					"\a3\air_f_epb\Heli_Light_03\data\heli_light_03_base_co.paa",
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
				};
				factions[]={};
			};
			class AAFDigital
			{
				displayname="AAF Digital";
				author="Community Upgrade Project";
				textures[]=
				{
					"\a3\air_f_epb\Heli_Light_03\data\heli_light_03_base_indp_co.paa",
					"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
				};
				factions[]={};
			};
		};
		class EventHandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		ace_refuel_fuelCapacity=1004;
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,5,1};
		LESH_WheelOffset[]={0,-1};
	};
	class JAS_CUP_B_AW159_Unarmed_GB : JAS_CUP_AW159_Unarmed_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		fir_lynxAAC_custom_skin=1;
		fir_lynxAAC_custom_name="Wildcat British Army Air Corps";
		fir_lynxAAC_custom_code="JAS_CUP_B_AW159_Unarmed_GB";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\WildcatBAF.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AW159\UI\editorpreview\WildcatBAF.jpg";
		displayname = "AW159J AAC Clean";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		_generalMacro = "CUP_B_AW159_Unarmed_GB";
		faction = "CUP_B_GB";
		crew = "CUP_B_BAF_Pilot_DDPM";
		typicalCargo[] =
		{
			"CUP_B_BAF_Pilot_DDPM"
		};
		animationList[]=
		{
			"hide_radar",
			0,
			"hide_struts",
			0
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
			class CargoTurret_01 : CargoTurret_01
			{
			};
			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",1];";
				priority = 9;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",0];";
				priority = 9;
			};
			class PimfdpipON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" < 0.5 AND (player == (gunner this) && (alive this)) ";
				statement = "this animate [""copip4"",1];";
				priority = 9;
			};
			class PimfdpipOFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip4"",0];";
				priority = 9;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",1];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",0];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",1];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",0];";
			};
			class Pack
			{
				displayName = "Pack";
				displayNameDefault = "Pack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement = "[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class unPack
			{
				displayName = "UnPack";
				displayNameDefault = "Unpack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement = "[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			//Init = "[_this select 0,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
			Init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}; [_this,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
		};
	};
	class JAS_CUP_B_Wildcat_Unarmed_RN_Grey : JAS_CUP_B_AW159_Unarmed_GB
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "AW159J RN Clean";
		fir_lynxAAC_custom_skin=1;
		fir_lynxAAC_custom_name="Wildcat Royal Navy";
		fir_lynxAAC_custom_code="JAS_CUP_B_Wildcat_Unarmed_RN_Grey";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\WildcatRN.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AW159\UI\editorpreview\WildcatRN.jpg";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_ca.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_grey_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		animationList[]=
		{
			"hide_radar",
			0,
			"hide_struts",
			0
		};
		_generalMacro = "CUP_Wildcat_Unarmed_RN_Grey";
		faction = "CUP_B_GB";
		crew = "CUP_B_BAF_Pilot_DDPM";
		typicalCargo[] =
		{
			"CUP_B_BAF_Pilot_DDPM"
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
			class CargoTurret_01 : CargoTurret_01
			{
			};
			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
		class AnimationSources : AnimationSources
		{
			class hide_radar
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",1];";
				priority = 9;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",0];";
				priority = 9;
			};
			class PimfdpipON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" < 0.5 AND (player == (gunner this) && (alive this)) ";
				statement = "this animate [""copip4"",1];";
				priority = 9;
			};
			class PimfdpipOFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip4"",0];";
				priority = 9;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",1];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",0];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",1];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",0];";
			};
			class Pack
			{
				displayName = "Pack";
				displayNameDefault = "Pack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement = "[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class unPack
			{
				displayName = "UnPack";
				displayNameDefault = "Unpack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement = "[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			//Init = "[_this select 0,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
			Init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}; [_this,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
		};
	};
	class JAS_CUP_B_Wildcat_Unarmed_RN_Blackcat: JAS_CUP_B_AW159_Unarmed_GB
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		scopeCurator=1;
		displayname="AW159 RN Blackcat Wildcat (Unarmed)";
		fir_lynxAAC_custom_skin=1;
		fir_lynxAAC_custom_name="Royal Navy Blackcats";
		fir_lynxAAC_custom_code="JAS_CUP_B_Wildcat_Unarmed_RN_Blackcat";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\WildcatBC.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_ca.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_blackcats_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		_generalMacro="CUP_Wildcat_Unarmed_RN_Blackcat";
		faction="CUP_B_GB";
		crew="CUP_B_BAF_Pilot_DDPM";
		animationList[]=
		{
			"hide_radar",
			0,
			"hide_struts",
			0
		};
		typicalCargo[]=
		{
			"CUP_B_BAF_Pilot_DDPM"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class hide_radar
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",1];";
				priority = 9;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",0];";
				priority = 9;
			};
			class PimfdpipON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" < 0.5 AND (player == (gunner this) && (alive this)) ";
				statement = "this animate [""copip4"",1];";
				priority = 9;
			};
			class PimfdpipOFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip4"",0];";
				priority = 9;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",1];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",0];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",1];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",0];";
			};
			class Pack
			{
				displayName = "Pack";
				displayNameDefault = "Pack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement = "[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class unPack
			{
				displayName = "UnPack";
				displayNameDefault = "Unpack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement = "[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			//Init = "[_this select 0,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
			Init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}; [_this,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_Wildcat_Unarmed_RN_Blackcat.jpg";
	};
	class JAS_CUP_B_Wildcat_Unarmed_Digital_AAF : JAS_CUP_AW159_Unarmed_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "AW159J AAF Clean";
		fir_lynxAAC_custom_skin=1;
		fir_lynxAAC_custom_name="Wildcat Altis Armed Forces";
		fir_lynxAAC_custom_code="JAS_CUP_B_Wildcat_Unarmed_Digital_AAF";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\WildcatAAFDigi.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AW159\UI\editorpreview\WildcatAAF.jpg";
		faction = "IND_F";
		crew = "I_helipilot_F";
		typicalCargo[] =
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		side = 2;
		animationList[]=
		{
			"hide_radar",
			0,
			"hide_struts",
			0
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_ca.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\a3\air_f_epb\Heli_Light_03\data\heli_light_03_base_indp_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		_generalMacro = "CUP_Wildcat_Unarmed_Digital_AAF";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
			class CargoTurret_01 : CargoTurret_01
			{
			};
			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",1];";
				priority = 9;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",0];";
				priority = 9;
			};
			class PimfdpipON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" < 0.5 AND (player == (gunner this) && (alive this)) ";
				statement = "this animate [""copip4"",1];";
				priority = 9;
			};
			class PimfdpipOFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip4"",0];";
				priority = 9;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",1];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",0];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",1];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",0];";
			};
			class Pack
			{
				displayName = "Pack";
				displayNameDefault = "Pack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement = "[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class unPack
			{
				displayName = "UnPack";
				displayNameDefault = "Unpack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement = "[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			//Init = "[_this select 0,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
			Init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}; [_this,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
		};
	};
	class JAS_CUP_B_Wildcat_Unarmed_Green_AAF: JAS_CUP_B_Wildcat_Unarmed_Digital_AAF
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		scopeCurator=1;
		displayname="AW159 AAF Green Wildcat (Unarmed)";
		fir_lynxAAC_custom_skin=1;
		fir_lynxAAC_custom_name="Wildcat Altis Armed Forces";
		fir_lynxAAC_custom_code="JAS_CUP_B_Wildcat_Unarmed_Green_AAF";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\WildcatAAFGreen.paa";
		faction="IND_F";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		side=2;
		animationList[]=
		{
			"hide_radar",
			0,
			"hide_struts",
			0
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_ca.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f_epb\Heli_Light_03\data\heli_light_03_base_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		_generalMacro="CUP_Wildcat_Unarmed_Green_AAF";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_Wildcat_Unarmed_Green_AAF.jpg";
	};
	class JAS_CUP_B_AW159_Unarmed_AAC : JAS_CUP_AW159_Unarmed_Base
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "AW159J";
		fir_lynxAAC_custom_skin=2;
		fir_lynxAAC_custom_name="Wildcat British Army Air Corps";
		fir_lynxAAC_custom_code="JAS_CUP_B_AW159_Unarmed_AAC";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\AV8USMCLIGHT.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AW159\UI\editorpreview\WildcatBAF.jpg";
		class Attributes // Eden attributes
		{
			class RopeExpansion_SAR
			{
				//--- Mandatory properties
				displayName = "Enable SAR Winch"; // Name assigned to UI control class Title
				tooltip = "Enable the Search and Rescue Winch System"; // Tooltip assigned to UI control class Title
				property = "RopeExpansion_SAR_Property"; // Unique config property name saved in SQM
				control = "CheckboxNumber";
				expression = "_this setVariable ['RopeExpansion_SAR',_value, true];";
				defaultValue = "0";
				condition = "object"; // Condition for attribute to appear (see the table below)
				typeName = "NUMBER"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};
			/*class RopeExpansion_SPIE
			{
				//--- Mandatory properties
				displayName = "Enable SPIE Rig"; // Name assigned to UI control class Title
				tooltip = "tooltip"; // Tooltip assigned to UI control class Title
				property = "RopeExpansion_SPIE_Property"; // Unique config property name saved in SQM
				control = "Checkbox"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
				// Expression called when applying the attribute in Eden and at the scenario start. Entity is passed as _this, value is passed as _value
				// %s is replaced by attribute config name. It can be used only once in the expression
				expression = "_this setVariable ['%s',_value,true];";
				defaultValue = "0";
				//--- Optional properties
				unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
				validate = "none"; // Validate the value before saving. Can be "none", "expression", "condition", "number" or "variable"
				condition = "object"; // Condition for attribute to appear (see the table below)
				typeName = "BOOL"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};*/
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		animationList[]=
		{
			"hide_radar",
			0,
			"hide_struts",
			0
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_ca.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
		};
		_generalMacro = "CUP_B_AW159_Unarmed_GB";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		crew = "CUP_B_BAF_Pilot_DDPM";
		typicalCargo[] =
		{
			"CUP_B_BAF_Pilot_DDPM"
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
			class CargoTurret_01 : CargoTurret_01
			{
			};
			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",1];";
				priority = 9;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",0];";
				priority = 9;
			};
			class PimfdpipON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" < 0.5 AND (player == (gunner this) && (alive this)) ";
				statement = "this animate [""copip4"",1];";
				priority = 9;
			};
			class PimfdpipOFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip4"",0];";
				priority = 9;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",1];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",0];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",1];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",0];";
			};
			class Pack
			{
				displayName = "Pack";
				displayNameDefault = "Pack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement = "[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class unPack
			{
				displayName = "UnPack";
				displayNameDefault = "Unpack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement = "[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			//Init = "[_this select 0,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
			Init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}; [_this,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
		};
	};
	class JAS_CUP_I_AW159_Unarmed_AAC : JAS_CUP_B_Wildcat_Unarmed_Digital_AAF
	{
		author = "CUP/-{GOL}-Jason";
		scope = 2;
		scopeCurator = 2;
		displayname = "AW159J AAC Clean";
		fir_lynxAAC_custom_skin=2;
		fir_lynxAAC_custom_name="Wildcat British Army Air Corps";
		fir_lynxAAC_custom_code="JAS_CUP_B_AW159_Unarmed_AAC";
		fir_lynxAAC_custom_preview_pic="\ARMA3_CUP_Enhancement_AW159\UI\preview\AV8USMCLIGHT.paa";
		editorPreview = "\ARMA3_CUP_Enhancement_AW159\UI\editorpreview\WildcatAAF.jpg";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		animationList[]=
		{
			"hide_radar",
			0,
			"hide_struts",
			0
		};
		model="\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159";
		picture="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_ca.paa";
		icon="\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_ca.paa";
		_generalMacro = "CUP_I_AW159_Unarmed_GB";
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
			class CargoTurret_01 : CargoTurret_01
			{
			};
			class CargoTurret_02 : CargoTurret_02
			{
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",1];";
				priority = 9;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip6"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip6"",0];";
				priority = 9;
			};
			class PimfdpipON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" < 0.5 AND (player == (gunner this) && (alive this)) ";
				statement = "this animate [""copip4"",1];";
				priority = 9;
			};
			class PimfdpipOFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.5999999;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement = "this animate [""copip4"",0];";
				priority = 9;
			};
			class OpenRdoor
			{
				displayName = "<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",1];";
			};
			class CloseRdoor
			{
				displayName = "<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault = "";
				position = "door_right_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorR"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""CargoDoorR"",0];";
			};
			class OpenLdoor
			{
				displayName = "<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" < 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",1];";
			};
			class CloseLdoor
			{
				displayName = "<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault = "";
				position = "door_left_axis_beg";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""CargoDoorL"" > 0.5 AND ((this getCargoIndex player) isEqualTo 1)";
				statement = "this animateDoor [""CargoDoorL"",0];";
			};
			class Pack
			{
				displayName = "Pack";
				displayNameDefault = "Pack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this < 1)}";
				statement = "[this,1] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class unPack
			{
				displayName = "UnPack";
				displayNameDefault = "Unpack";
				position = "PackAction";
				radius = 10;
				onlyForPlayer = 1;
				condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
				statement = "[this,0] execvm ""\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\Scripts\AW159_fold.sqf""";
			};
			class Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_AW159\sqs\loadout\AW159_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
		};
		class eventhandlers
		{
			//Init = "[_this select 0,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
			Init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}; [_this,JAS_CUP_B_AW159_Unarmed_AACX] call JAS_fnc_ROPE_INIT;AP_CUSTOM_RAPPEL_POINTS = [['JAS_CUP_B_AW159_Unarmed_AACX',[[1.15,1.0,1.25],[-1.15,1.0,1.25]]]];";
		};
	};
	class JAS_AW159_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="AW-159 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_AW159_Loadout";
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
					class hp1_621
					{
						name="M-621 Gun Pod";
						value=1;
					};
					class hp1_crv
					{
						name="CRV-7";
						value=2;
					};
					class hp1_hellk
					{
						name="AGM-114K";
						value=3;
					};
					class hp1_helln
					{
						name="AGM-114N";
						value=4;
					};
					class hp1_hellc
					{
						name="AGM-114 Combi";
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
					class hp2_621
					{
						name="M-621 Gun Pod";
						value=1;
					};
					class hp2_crv
					{
						name="CRV-7";
						value=2;
					};
					class hp2_hellk
					{
						name="AGM-114K";
						value=3;
					};
					class hp2_helln
					{
						name="AGM-114N";
						value=4;
					};
					class hp2_hellc
					{
						name="AGM-114 Combi";
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
					class UKAAC
					{
						name="UK Army Air Corps";
						value=0;
						default=1;
					};
					class UKRN
					{
						name="Royal Navy Grey";
						value=1;
					};
					class UKRNBC
					{
						name="Royal Navy Blackcats";
						value=2;
					};
					class AAFDIGI
					{
						name="AAF Digital Camo";
						value=3;
					};
					class AAFGREEN
					{
						name="AAF Green";
						value=4;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="AW159 Loadout Module";
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
