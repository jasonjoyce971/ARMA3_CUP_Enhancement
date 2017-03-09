#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class ARMA3_CUP_Enhancement_Vanilla
	{
		units[]=
		{
			"JAS_B_Lifeboat",
			"JAS_Boat_Transport_01_F",
			"JAS_O_Boat_Transport_01_F",
			"JAS_I_Boat_Transport_01_F",
			"JAS_O_Lifeboat",
			"JAS_SDV_01_F",
			"JAS_SDV_02_F",
			"JAS_SDV_03_F",
			"JAS_FIR_A164J",
			"JAS_FIR_A164J_AAC",
			"JAS_FIR_A143J",
			"JAS_FIR_A143J_AAC",
			"JAS_O_Plane_CAS_02_F"

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
		class ARMA3_CUP_Enhancement_Vanilla
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_Vanilla"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_A164_Init_Function
		{
			class A164_Loadout
			{
				file="\ARMA3_CUP_Enhancement_Vanilla\sqs\modules\A164_loadout_module.sqf";
			};
			class A164_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_Vanilla\sqs\modules\A164_loadout_module_set.sqf";
			};
		};
		class JAS_A143_Init_Function
		{
			class A143_Loadout
			{
				file="\ARMA3_CUP_Enhancement_Vanilla\sqs\modules\A143_loadout_module.sqf";
			};
			class A143_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_Vanilla\sqs\modules\A143_loadout_module_set.sqf";
			};
		};
		class JAS_YAK_Init_Function
		{
			class YAK_Loadout
			{
				file="\ARMA3_CUP_Enhancement_Vanilla\sqs\modules\YAK_loadout_module.sqf";
			};
			class YAK_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_Vanilla\sqs\modules\YAK_loadout_module_set.sqf";
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
		class A143R
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A143R Buzzard";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Air superiority Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Buzzard is the fictional fast air of the AAF and is loosely based on the L39 Albatros. The Buzzard is the worst of the vanilla aircraft in that its payload is tiny. The 'R' variant goes someway toward fixing this by offering payload customisation but the limited stations mean that the Buzzard is still out classed in the ground attack role. It is however, quite fast and very nimble making it useful in a dog fight or for baiting SAMs in the SEAD role.<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2AIM-120<br/>%2HYDRA Rockets<br/>%2ZUNI Rockets<br/>%2Mk82 GPB<br/>%2Mk82 SNAKE<br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2GBU-12<br/>%2GBU-38<br/>%2CBU-87<br/>%2CBU-89<br/>%2CBU-97<br/>%2CBU-103<br/>%2LANTIRN Pod for self designating targets<br/><br/>Factions:<br/><br/>%2AAF";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class A164J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-164J Wipeout";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Future Ground Strike Aircraft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The A-164 is the fictional ARMA replacement for the A-10 and is available for the NATO faction. The 'J' variant has the option of adjusting its payload for specific mission requirements and incorporates a CCIP system to improve accuracy with unguided munitions.<br/><br/>Payload Options:<br/><br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-31<br/>%2GBU-32<br/>%2GBU-38<br/>%2CBU-87<br/>%2CBU-89<br/>%2CBU-97<br/>%2CBU-103<br/>%2Mk82 GPB<br/>%2Mk82 Snakeye<br/>%2BLU-107<br/>%2AIM-9M<br/>%2AIM-9X<br/><br/>Factions:<br/><br/>%2NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class YAK130
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Yak-131";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Yak-130 is a next generation jet trainer produced by Yakovlev for the Russian Air Force. The 131 variant was intended to operate as a light strike fighter to replace the ageing Su-25 but the Russian Air Force decided against this and pushed the production of the Su-35 instead. Performance wise the 130 is pretty nimble and fast for a ground attack aircraft but, as with all soviet systems, it lacks modern guidance systems such as GPS.<br/><br/>Payload Options:<br/>%2R-73<br/>%2S-8 Rockets<br/>%2S-13 Rockets<br/>%2Kh-25 ARM<br/>%2Kh-29<br/>%2VIKHIR<br/>%2FAB-250<br/>%2KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2CSAT";
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
#include "gui.hpp"
class JAS_A164_GUI
{
	idd=-1;
	movingenable="false";
	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
			colorActive[]={1,1,1,1};
		};
		class a164_picture_background: RscPicture
		{
			idc=1200;
			x="0.15 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.7 * safezoneH";
			text="ARMA3_CUP_Enhancement_Vanilla\ui\a164_background.paa";
		};
		class a164_loadout_pic: RscPicture
		{
			idc=1201;
			text="ARMA3_CUP_Enhancement_Vanilla\ui\a164_loadout_ca.paa";
			x="0.1675 * safezoneW + safezoneX";
			y="0.206 * safezoneH + safezoneY";
			w="0.56 * safezoneW";
			h="0.392 * safezoneH";
		};
		class rsc1: RscText
		{
			idc=1000;
			text="1";
			x="0.71 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1001: RscText
		{
			idc=1001;
			text="3";
			x="0.61375 * safezoneW + safezoneX";
			y="0.654 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1002: RscText
		{
			idc=1002;
			text="4";
			x="0.54375 * safezoneW + safezoneX";
			y="0.71 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1003: RscText
		{
			idc=1003;
			text="Rockets";
			x="0.4825 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.5 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1004: RscText
		{
			idc=1004;
			text="Rockets";
			x="0.36875 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.5 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1005: RscText
		{
			idc=1005;
			text="7";
			x="0.33375 * safezoneW + safezoneX";
			y="0.71 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1006: RscText
		{
			idc=1006;
			text="8";
			x="0.26375 * safezoneW + safezoneX";
			y="0.654 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1007: RscText
		{
			idc=1007;
			text="10";
			x="0.1675 * safezoneW + safezoneX";
			y="0.612 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1103: RscText
		{
			idc=1103;
			text="5";
			x="0.4825 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1104: RscText
		{
			idc=1104;
			text="6";
			x="0.36875 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0175 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp1: RscCombo
		{
			idc=2100;
			x="0.64 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp3: RscCombo
		{
			idc=2101;
			x="0.5875 * safezoneW + safezoneX";
			y="0.682 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp4: RscCombo
		{
			idc=2102;
			x="0.50875 * safezoneW + safezoneX";
			y="0.738 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp5: RscCombo
		{
			idc=2103;
			x="0.45625 * safezoneW + safezoneX";
			y="0.794 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp6: RscCombo
		{
			idc=2104;
			x="0.3425 * safezoneW + safezoneX";
			y="0.794 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp7: RscCombo
		{
			idc=2105;
			x="0.3075 * safezoneW + safezoneX";
			y="0.738 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp8: RscCombo
		{
			idc=2106;
			x="0.2375 * safezoneW + safezoneX";
			y="0.682 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp10: RscCombo
		{
			idc=2107;
			x="0.1675 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp11: RscCombo
		{
			idc=2113;
			x="0.45625 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class hp12: RscCombo
		{
			idc=2114;
			x="0.3425 * safezoneW + safezoneX";
			y="0.64 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
		class RscText_1008: RscText
		{
			idc=1008;
			text="select loadout";
			x="0.73625 * safezoneW + safezoneX";
			y="0.276 * safezoneH + safezoneY";
			w="0.11375 * safezoneW";
			h="0.014 * safezoneH";
		};
		class A164_refuel_Button: RscPicture
		{
			idc=1904;
			text="FIR_AirWeaponSystem_US\ui\button_refuel.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.346 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
		};
		class btn_refuel: RscButton
		{
			idc=1600;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.346 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Refuel the Aircraft";
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\loadout\A164_Refuel.sqf""";
		};
		class A164_repair_Button: RscPicture
		{
			idc=1904;
			text="FIR_AirWeaponSystem_US\ui\button_repair.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.444 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
		};
		class btn_repair: RscButton
		{
			idc=1601;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.444 * safezoneH + safezoneY";
			w="0.09625 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Repair the Aircraft";
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\loadout\A164_Repair.sqf""";
		};
		class A164_Apply_Button: RscPicture
		{
			idc=1902;
			text="FIR_AirWeaponSystem_US\ui\button_apply.paa";
			x="0.64 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
		};
		class btn_apply: RscButton
		{
			idc=1602;
			text="";
			x="0.64 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Apply the Current Loadout";
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\A164_Loadout.sqf""";
		};
		class A164_Cancel_Button: RscPicture
		{
			idc=1903;
			text="FIR_AirWeaponSystem_US\ui\button_cancel.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
		};
		class btn_cancel: RscButton
		{
			idc=1603;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.766 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip="Close";
			action="closeDialog 0";
		};
		class a164_custom_save_Buttonpic_1: RscPicture
		{
			idc=1905;
			text="FIR_AirWeaponSystem_US\ui\button_save1_ca.paa";
			x="0.745 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
		};
		class btn_slot1: RscButton
		{
			idc=1604;
			text="";
			x="0.745 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip = "Save Loadout to Custom Slot 1";
			action="_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\a164_SaveCustom.sqf""";
		};
		class a164_custom_save_Buttonpic_2: RscPicture
		{
			idc=1906;
			text="FIR_AirWeaponSystem_US\ui\button_save2_ca.paa";
			x="0.78 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
		};
		class btn_slot2: RscButton
		{
			idc=1605;
			text="";
			x="0.78 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip = "Save Loadout to Custom Slot 2";
			action="_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\a164_SaveCustom.sqf""";
		};
		class a164_custom_save_Buttonpic_3: RscPicture
		{
			idc=1906;
			text="FIR_AirWeaponSystem_US\ui\button_save3_ca.paa";
			x="0.815 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
		};
		class btn_slot3: RscButton
		{
			idc=1606;
			text="";
			x="0.815 * safezoneW + safezoneX";
			y="0.542 * safezoneH + safezoneY";
			w="0.02625 * safezoneW";
			h="0.042 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			tooltip = "Save Loadout to Custom Slot 3";
			action="_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\a164_SaveCustom.sqf""";
		};
		class loadout_combo: RscCombo
		{
			idc=2108;
			x="0.745 * safezoneW + safezoneX";
			y="0.304 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
		};
	};
};
class JAS_YAK_GUI
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
			text = "ARMA3_CUP_Enhancement_Vanilla\UI\Yak_Background.paa";
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
			text = "Right Wingpit";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1006 : RscText
		{
			idc = 1006;
			text = "Left Wingpit";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1112 : RscText
		{
			idc = 1112;
			text = "Rockets";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscText_1122 : RscText
		{
			idc = 1122;
			text = "Rockets";
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\Yak_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\Yak_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\Yak_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\Yak_SaveCustom.sqf""";
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
		model = "\ARMA3_CUP_Enhancement_Vanilla\wep\EAWS_TRD.p3d";
		icon = "\ARMA3_CUP_Enhancement_Vanilla\data\ico\ico.paa";
		mapSize = 10;
		cost = 999999999;
		armor = 50;
	};
	class B_Plane_CAS_01_F;
	class SDV_01_base_F;
	class B_T_Boat_Transport_01_F;
	class O_Plane_CAS_02_F;
	class I_Plane_Fighter_03_AA_F; 
	class JAS_FIR_A143R: I_Plane_Fighter_03_AA_F
	{
		scope = 2;
		author = "Bohimia Interactive /Firewill";
		displayname = "A-143J Buzzard-E";
		hiddenselectionstextures[] = 
		{
			"ARMA3_CUP_Enhancement_Vanilla\skin\plane_fighter_03_body_1_aaf_co.paa",
			"ARMA3_CUP_Enhancement_Vanilla\skin\plane_fighter_03_body_2_aaf_co.paa"
		};
		weapons[] = 
		{
			"FIR_MasterArm",
			"JAS_gatling_20mm",
			"FIR_CMLauncher"
		};	
		magazines[] = 
		{
			"JAS_300Rnd_20mm_shells",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
	
		#include "UserAction.hpp"
	
		class eventhandlers
	    {
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	class JAS_FIR_A143R_AAC: JAS_FIR_A143R
	{
		scope = 2;
		author = "Bohimia Interactive /Firewill";
		displayname = "A-143J Buzzard-E";
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_BANSHEE";
		hiddenselectionstextures[] = 
		{
			"ARMA3_CUP_Enhancement_Vanilla\skin\plane_fighter_03_body_1_aaf_co.paa",
			"ARMA3_CUP_Enhancement_Vanilla\skin\plane_fighter_03_body_2_aaf_co.paa"
		};
	
		#include "UserAction.hpp"
	
		class eventhandlers
	    {
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	class JAS_B_Lifeboat: B_T_Boat_Transport_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="Para Rescue Boat";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"
		};
		textureList[]=
		{
			"Rescue",
			1
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass              = B_Parachute_02_F;        // Type of parachute used when dropped in air. When empty then parachute is not used.
				parachuteHeightLimit        = 30;                               // Minimal height above terrain when parachute is used.
				canBeTransported            = 1;                             // 0 (false) / 1 (true)
				dimensions[]                = {"BBox_1_1_pos", "BBox_1_2_pos"}; // Memory-point-based override of automatic bounding box
			};
		};
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"Damagehide",
					0
				},
				
				{
					"Damagehide_zbytek",
					0
				},
				
				{
					"damage_unhide",
					0
				},
				
				{
					"DrivingWheel",
					0
				},
				
				{
					"propeller",
					0
				}
			};
			hide[]=
			{
				"zasleh"
			};
			verticalOffset=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Lifeboat.jpg";
		_generalMacro="B_Lifeboat";
		scope=2;
		crew="B_Soldier_F";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_SPECIAL";
		side=1;
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		forceInGarage=0;
	};
	class JAS_Boat_Transport_01_F: B_T_Boat_Transport_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"Damagehide",
					0
				},
				
				{
					"Damagehide_zbytek",
					0
				},
				
				{
					"damage_unhide",
					0
				},
				
				{
					"DrivingWheel",
					0
				},
				
				{
					"propeller",
					0
				}
			};
			hide[]=
			{
				"zasleh"
			};
			verticalOffset=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Transport_01_F.jpg";
		displayName="Para Assault Boat";
		_generalMacro="JAS_Boat_Transport_01_F";
		scope=2;
		crew="B_Soldier_F";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_SPECIAL";
		side=1;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass              = B_Parachute_02_F;        // Type of parachute used when dropped in air. When empty then parachute is not used.
				parachuteHeightLimit        = 30;                               // Minimal height above terrain when parachute is used.
				canBeTransported            = 1;                             // 0 (false) / 1 (true)
				dimensions[]                = {"BBox_1_1_pos", "BBox_1_2_pos"}; // Memory-point-based override of automatic bounding box
			};
		};
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class JAS_O_Boat_Transport_01_F: JAS_Boat_Transport_01_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Boat_Transport_01_F.jpg";
		_generalMacro="JAS_O_Boat_Transport_01_F";
		scope=2;
		crew="O_Soldier_F";
		faction="GOL_AAC_OPFOR";
		side=0;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"
		};
		textureList[]=
		{
			"Hex",
			1
		};
	};
	class JAS_I_Boat_Transport_01_F: JAS_Boat_Transport_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"Damagehide",
					0
				},
				
				{
					"Damagehide_zbytek",
					0
				},
				
				{
					"damage_unhide",
					0
				},
				
				{
					"DrivingWheel",
					0
				},
				
				{
					"propeller",
					0
				}
			};
			hide[]=
			{
				"zasleh"
			};
			verticalOffset=0;
			verticalOffsetWorld=-0.020246999;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_Boat_Transport_01_F.jpg";
		_generalMacro="I_Boat_Transport_01_F";
		scope=2;
		crew="I_soldier_F";
		faction="GOL_AAC_INDEP";
		side=2;
		typicalCargo[]=
		{
			"I_soldier_F",
			"I_soldier_F"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"
		};
		textureList[]=
		{
			"Digital",
			1
		};
	};
	class JAS_O_Lifeboat: JAS_B_Lifeboat
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"Damagehide",
					0
				},
				
				{
					"Damagehide_zbytek",
					0
				},
				
				{
					"damage_unhide",
					0
				},
				
				{
					"DrivingWheel",
					0
				},
				
				{
					"propeller",
					0
				}
			};
			hide[]=
			{
				"zasleh"
			};
			verticalOffset=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Lifeboat.jpg";
		_generalMacro="O_Lifeboat";
		scope=2;
		crew="O_Soldier_F";
		faction="GOL_AAC_OPFOR";
		side=0;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
	};
	class JAS_SDV_01_F: SDV_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"DrivingWheel",
					0
				},
				
				{
					"HideScope",
					0
				},
				
				{
					"Damagehide",
					0
				},
				
				{
					"vrtule",
					0
				},
				
				{
					"Steering",
					0
				},
				
				{
					"HidedrivingWheel",
					0
				},
				
				{
					"DamageHidedrivingWheel",
					0
				},
				
				{
					"Elevating",
					0
				},
				
				{
					"drivingWheel_elev",
					0
				},
				
				{
					"HidedrivingWheel_elev",
					0
				},
				
				{
					"DamageHidedrivingWheel_elev",
					0
				},
				
				{
					"ElevatingFlapFL",
					0
				},
				
				{
					"ElevatingFlapFR",
					0
				},
				
				{
					"ObsTurret",
					0
				},
				
				{
					"HideObsTurret",
					0
				},
				
				{
					"ObsGun",
					0
				},
				
				{
					"periscope",
					0
				},
				
				{
					"Antenna",
					0
				},
				
				{
					"DamageHideAntenna",
					0
				},
				
				{
					"door_1_1",
					1
				},
				
				{
					"Hidedoor_1_1",
					0
				},
				
				{
					"DamageHidedoor_1_1",
					0
				},
				
				{
					"door_1_2",
					1
				},
				
				{
					"Hidedoor_1_2",
					0
				},
				
				{
					"DamageHidedoor_1_2",
					0
				},
				
				{
					"door_2_1",
					1
				},
				
				{
					"Hidedoor_2_1",
					0
				},
				
				{
					"DamageHidedoor_2_1",
					0
				},
				
				{
					"door_2_2",
					1
				},
				
				{
					"Hidedoor_2_2",
					0
				},
				
				{
					"DamageHidedoor_2_2",
					0
				},
				
				{
					"Gauges",
					0
				},
				
				{
					"IndicatorCompass_1",
					-0.00079999998
				},
				
				{
					"IndicatorCompass_2",
					-0.00079999998
				},
				
				{
					"fuel",
					1
				},
				
				{
					"IndicatorVertSpeed",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"display_on_R",
					0
				},
				
				{
					"ind_alt_1_10m",
					-0.042199999
				},
				
				{
					"ind_alt_1_100m",
					-0.042199999
				},
				
				{
					"ind_alt_2_10m",
					-0.042199999
				},
				
				{
					"ind_alt_2_100m",
					-0.042199999
				},
				
				{
					"ind_horizonDive_1",
					-0.0144
				},
				
				{
					"horizonDive_1",
					-0.0144
				},
				
				{
					"ind_horizonDive_2",
					-0.0144
				},
				
				{
					"ind_horizonBank_1",
					0.090000004
				},
				
				{
					"ind_horizonBank_2",
					0.090000004
				},
				
				{
					"ind_rpm",
					0
				}
			};
			hide[]=
			{
				"zasleh"
			};
			verticalOffset=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_SDV_01_F.jpg";
		_generalMacro="B_SDV_01_F";
		scope=2;
		crew="B_diver_F";
		displayname="Para SDV";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_SPECIAL";
		side=1;
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass              = B_Parachute_02_F;        // Type of parachute used when dropped in air. When empty then parachute is not used.
				parachuteHeightLimit        = 30;                               // Minimal height above terrain when parachute is used.
				canBeTransported            = 1;                             // 0 (false) / 1 (true)
				dimensions[]                = {"BBox_1_1_pos", "BBox_1_2_pos"}; // Memory-point-based override of automatic bounding box
			};
		};
	};
	class JAS_SDV_02_F: SDV_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"DrivingWheel",
					0
				},
				
				{
					"HideScope",
					0
				},
				
				{
					"Damagehide",
					0
				},
				
				{
					"vrtule",
					0
				},
				
				{
					"Steering",
					0
				},
				
				{
					"HidedrivingWheel",
					0
				},
				
				{
					"DamageHidedrivingWheel",
					0
				},
				
				{
					"Elevating",
					0
				},
				
				{
					"drivingWheel_elev",
					0
				},
				
				{
					"HidedrivingWheel_elev",
					0
				},
				
				{
					"DamageHidedrivingWheel_elev",
					0
				},
				
				{
					"ElevatingFlapFL",
					0
				},
				
				{
					"ElevatingFlapFR",
					0
				},
				
				{
					"ObsTurret",
					0
				},
				
				{
					"HideObsTurret",
					0
				},
				
				{
					"ObsGun",
					0
				},
				
				{
					"periscope",
					0
				},
				
				{
					"Antenna",
					0
				},
				
				{
					"DamageHideAntenna",
					0
				},
				
				{
					"door_1_1",
					1
				},
				
				{
					"Hidedoor_1_1",
					0
				},
				
				{
					"DamageHidedoor_1_1",
					0
				},
				
				{
					"door_1_2",
					1
				},
				
				{
					"Hidedoor_1_2",
					0
				},
				
				{
					"DamageHidedoor_1_2",
					0
				},
				
				{
					"door_2_1",
					1
				},
				
				{
					"Hidedoor_2_1",
					0
				},
				
				{
					"DamageHidedoor_2_1",
					0
				},
				
				{
					"door_2_2",
					1
				},
				
				{
					"Hidedoor_2_2",
					0
				},
				
				{
					"DamageHidedoor_2_2",
					0
				},
				
				{
					"Gauges",
					0
				},
				
				{
					"IndicatorCompass_1",
					-0.00079999998
				},
				
				{
					"IndicatorCompass_2",
					-0.00079999998
				},
				
				{
					"fuel",
					1
				},
				
				{
					"IndicatorVertSpeed",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"display_on_R",
					0
				},
				
				{
					"ind_alt_1_10m",
					-0.042199999
				},
				
				{
					"ind_alt_1_100m",
					-0.042199999
				},
				
				{
					"ind_alt_2_10m",
					-0.042199999
				},
				
				{
					"ind_alt_2_100m",
					-0.042199999
				},
				
				{
					"ind_horizonDive_1",
					-0.0144
				},
				
				{
					"horizonDive_1",
					-0.0144
				},
				
				{
					"ind_horizonDive_2",
					-0.0144
				},
				
				{
					"ind_horizonBank_1",
					0.090000004
				},
				
				{
					"ind_horizonBank_2",
					0.090000004
				},
				
				{
					"ind_rpm",
					0
				}
			};
			hide[]=
			{
				"zasleh"
			};
			verticalOffset=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_SDV_01_F.jpg";
		_generalMacro="B_SDV_01_F";
		scope=2;
		crew="O_diver_F";
		displayname="Para SDV";
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_SPECIAL";
		side=0;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass              = B_Parachute_02_F;        // Type of parachute used when dropped in air. When empty then parachute is not used.
				parachuteHeightLimit        = 30;                               // Minimal height above terrain when parachute is used.
				canBeTransported            = 1;                             // 0 (false) / 1 (true)
				dimensions[]                = {"BBox_1_1_pos", "BBox_1_2_pos"}; // Memory-point-based override of automatic bounding box
			};
		};
	};
	class JAS_SDV_03_F: SDV_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"DrivingWheel",
					0
				},
				
				{
					"HideScope",
					0
				},
				
				{
					"Damagehide",
					0
				},
				
				{
					"vrtule",
					0
				},
				
				{
					"Steering",
					0
				},
				
				{
					"HidedrivingWheel",
					0
				},
				
				{
					"DamageHidedrivingWheel",
					0
				},
				
				{
					"Elevating",
					0
				},
				
				{
					"drivingWheel_elev",
					0
				},
				
				{
					"HidedrivingWheel_elev",
					0
				},
				
				{
					"DamageHidedrivingWheel_elev",
					0
				},
				
				{
					"ElevatingFlapFL",
					0
				},
				
				{
					"ElevatingFlapFR",
					0
				},
				
				{
					"ObsTurret",
					0
				},
				
				{
					"HideObsTurret",
					0
				},
				
				{
					"ObsGun",
					0
				},
				
				{
					"periscope",
					0
				},
				
				{
					"Antenna",
					0
				},
				
				{
					"DamageHideAntenna",
					0
				},
				
				{
					"door_1_1",
					1
				},
				
				{
					"Hidedoor_1_1",
					0
				},
				
				{
					"DamageHidedoor_1_1",
					0
				},
				
				{
					"door_1_2",
					1
				},
				
				{
					"Hidedoor_1_2",
					0
				},
				
				{
					"DamageHidedoor_1_2",
					0
				},
				
				{
					"door_2_1",
					1
				},
				
				{
					"Hidedoor_2_1",
					0
				},
				
				{
					"DamageHidedoor_2_1",
					0
				},
				
				{
					"door_2_2",
					1
				},
				
				{
					"Hidedoor_2_2",
					0
				},
				
				{
					"DamageHidedoor_2_2",
					0
				},
				
				{
					"Gauges",
					0
				},
				
				{
					"IndicatorCompass_1",
					-0.00079999998
				},
				
				{
					"IndicatorCompass_2",
					-0.00079999998
				},
				
				{
					"fuel",
					1
				},
				
				{
					"IndicatorVertSpeed",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"display_on_R",
					0
				},
				
				{
					"ind_alt_1_10m",
					-0.042199999
				},
				
				{
					"ind_alt_1_100m",
					-0.042199999
				},
				
				{
					"ind_alt_2_10m",
					-0.042199999
				},
				
				{
					"ind_alt_2_100m",
					-0.042199999
				},
				
				{
					"ind_horizonDive_1",
					-0.0144
				},
				
				{
					"horizonDive_1",
					-0.0144
				},
				
				{
					"ind_horizonDive_2",
					-0.0144
				},
				
				{
					"ind_horizonBank_1",
					0.090000004
				},
				
				{
					"ind_horizonBank_2",
					0.090000004
				},
				
				{
					"ind_rpm",
					0
				}
			};
			hide[]=
			{
				"zasleh"
			};
			verticalOffset=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_SDV_01_F.jpg";
		_generalMacro="B_SDV_01_F";
		scope=2;
		crew="I_diver_F";
		displayname="Para SDV";
		faction="GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_SPECIAL";
		side=2;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass              = B_Parachute_02_F;        // Type of parachute used when dropped in air. When empty then parachute is not used.
				parachuteHeightLimit        = 30;                               // Minimal height above terrain when parachute is used.
				canBeTransported            = 1;                             // 0 (false) / 1 (true)
				dimensions[]                = {"BBox_1_1_pos", "BBox_1_2_pos"}; // Memory-point-based override of automatic bounding box
			};
		};
	};
	class JAS_FIR_A164J: B_Plane_CAS_01_F
	{
		scope=2;
		author="Bohimia Interactive /Firewill /-{GOL}-Jason";
		displayname="A-164J Wipeout-J";
		weapons[]=
		{
			"FIR_MasterArm",
			"JAS_Gatling_30mm_Plane_CAS_01_F",
			"FIR_CMLauncher",
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F"
		};
		magazines[]=
		{
			"JAS_1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F"
		};
		class UserActions
		{
			class ECM_ON
			{
				displayName="ECM JAMMER ON";
				position="pos cano";
				radius=15;
				shortcut="User4";
				condition="this getvariable ""ECMJAMMER"" == ""yes"";";
				statement="[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer="False";
			};
			class A164_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\A164_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
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
			class CUP_A164J_Eject
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
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\init.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_FIR_A164J_AAC: JAS_FIR_A164J
	{
		scope=2;
		author="Bohimia Interactive /Firewill /-{GOL}-Jason";
		displayname="A-164J Wipeout-J";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
	};	
	class JAS_O_Plane_CAS_02_F: O_Plane_CAS_02_F
	{
		author="Bohemia Interactive/-{GOL}-Jason";
		scope=2;
		displayName="YAK-131J";
		side=0;
		faction="OPF_F";
		weapons[]=
		{
			"FIR_MasterArm",
			"JAS_Cannon_30mm_Plane_CAS_02_F",
			"FIR_CMLauncher"
		};
		magazines[]=
		{
			"JAS_500Rnd_Gatling_30mm_Plane_CAS_02_F",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
		class UserActions
		{
			class Yak_Gui_Open
			{
				displayName="<t color='#739eff'>Open Dialog</t>";
				position="pos cano";
				radius=15;
				shortcut="User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement="this execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\loadout\Yak_GUI_Open.sqf""";
				onlyforplayer="false";
				priority=6;
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
			class CUP_A164J_Eject
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
			Init="[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEADRUS.sqf"";";
			fired="fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class JAS_O_Plane_CAS_02_F_AAC: JAS_O_Plane_CAS_02_F
	{
		author="Bohemia Interactive/-{GOL}-Jason";
		scope=2;
		displayName="YAK-131J";
		side=0;
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
	};
	/*class JAS_O_Plane_CAS_02_F_AACX: JAS_O_Plane_CAS_02_F
	{
		author="Bohemia Interactive/-{GOL}-Jason";
		scope=2;
		displayName="YAK-131X Prototype";
		side=0;
		faction="GOL_AAC_OPFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		weapons[]=
		{
			"FIR_MasterArm",
			"JAS_Gatling_30mm_Plane_CAS_01_F",
			"FIR_CMLauncher",
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"JAS_R77_LAU"
		};
		magazines[]=
		{
			"JAS_1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"FIR_240rnd_CMFlare_Chaff_Magazine",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"JAS_R77_1rnd_M"
		};
	};*/
	class JAS_A164_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="A-164 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_A164_Loadout";
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
					class hp1_aim9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp1_aim9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp1_suu
					{
						name="SUU-25";
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
					class hp2_mav
					{
						name="AGM-65D x3";
						value=1;
					};
					class hp2_12
					{
						name="GBU-12 x2";
						value=2;
					};
					class hp2_38
					{
						name="GBU-38 x3";
						value=3;
					};
					class hp2_82s
					{
						name="Mk82 Snakeye x3";
						value=4;
					};
					class hp2_82
					{
						name="Mk82 GPB x3";
						value=5;
					};
					class hp2_107
					{
						name="BLU-107/B x3";
						value=6;
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
					class hp3_65G
					{
						name="AGM-65G";
						value=1;
					};
					class hp3_65L
					{
						name="AGM-65L";
						value=2;
					};
					class hp3_10
					{
						name="GBU-10";
						value=3;
					};
					class hp3_12
					{
						name="GBU-12";
						value=4;
					};
					class hp3_24A
					{
						name="GBU-24A";
						value=5;
					};
					class hp3_24B
					{
						name="GBU-24B";
						value=6;
					};
					class hp3_24118
					{
						name="GBU-24/118";
						value=7;
					};
					class hp3_31
					{
						name="GBU-31";
						value=8;
					};
					class hp3_32
					{
						name="GBU-32";
						value=9;
					};
					class hp3_38
					{
						name="GBU-38";
						value=10;
					};
					class hp3_87
					{
						name="CBU-87 CEM";
						value=11;
					};
					class hp3_89
					{
						name="CBU-89 GATOR";
						value=12;
					};
					class hp3_97
					{
						name="CBU-97 SFW";
						value=13;
					};
					class hp3_103
					{
						name="CBU-103 WCMD";
						value=14;
					};
					class hp3_82s
					{
						name="Mk82 Snakeye";
						value=15;
					};
					class hp3_82
					{
						name="Mk82 GPB";
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
					class hp4_65G
					{
						name="AGM-65G";
						value=1;
					};
					class hp4_65L
					{
						name="AGM-65L";
						value=2;
					};
					class hp4_10
					{
						name="GBU-10";
						value=3;
					};
					class hp4_12
					{
						name="GBU-12";
						value=4;
					};
					class hp4_24A
					{
						name="GBU-24A";
						value=5;
					};
					class hp4_24B
					{
						name="GBU-24B";
						value=6;
					};
					class hp4_24118
					{
						name="GBU-24/118";
						value=7;
					};
					class hp4_31
					{
						name="GBU-31";
						value=8;
					};
					class hp4_32
					{
						name="GBU-32";
						value=9;
					};
					class hp4_38
					{
						name="GBU-38";
						value=10;
					};
					class hp4_87
					{
						name="CBU-87 CEM";
						value=11;
					};
					class hp4_89
					{
						name="CBU-89 GATOR";
						value=12;
					};
					class hp4_97
					{
						name="CBU-97 SFW";
						value=13;
					};
					class hp4_103
					{
						name="CBU-103 CEM WCMD";
						value=14;
					};
					class hp4_105
					{
						name="CBU-105 SFW WCMD";
						value=15;
					};
					class hp4_82s
					{
						name="Mk82 Snakeye";
						value=16;
					};
					class hp4_82
					{
						name="Mk82 GPB";
						value=17;
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
					class hp5_65G
					{
						name="AGM-65G";
						value=1;
					};
					class hp5_65L
					{
						name="AGM-65L";
						value=2;
					};
					class hp5_10
					{
						name="GBU-10";
						value=3;
					};
					class hp5_12
					{
						name="GBU-12";
						value=4;
					};
					class hp5_24A
					{
						name="GBU-24A";
						value=5;
					};
					class hp5_24B
					{
						name="GBU-24B";
						value=6;
					};
					class hp5_24118
					{
						name="GBU-24/118";
						value=7;
					};
					class hp5_31
					{
						name="GBU-31";
						value=8;
					};
					class hp5_32
					{
						name="GBU-32";
						value=9;
					};
					class hp5_38
					{
						name="GBU-38";
						value=10;
					};
					class hp5_87
					{
						name="CBU-87 CEM";
						value=11;
					};
					class hp5_89
					{
						name="CBU-89 GATOR";
						value=12;
					};
					class hp5_97
					{
						name="CBU-97 SFW";
						value=13;
					};
					class hp5_103
					{
						name="CBU-103 CEM WCMD";
						value=14;
					};
					class hp5_105
					{
						name="CBU-105 SFW WCMD";
						value=15;
					};
					class hp5_82s
					{
						name="Mk82 Snakeye";
						value=16;
					};
					class hp5_82
					{
						name="Mk82 GPB";
						value=17;
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
					class hp6_65G
					{
						name="AGM-65G";
						value=1;
					};
					class hp6_65L
					{
						name="AGM-65L";
						value=2;
					};
					class hp6_10
					{
						name="GBU-10";
						value=3;
					};
					class hp6_12
					{
						name="GBU-12";
						value=4;
					};
					class hp6_24A
					{
						name="GBU-24A";
						value=5;
					};
					class hp6_24B
					{
						name="GBU-24B";
						value=6;
					};
					class hp6_24118
					{
						name="GBU-24/118";
						value=7;
					};
					class hp6_31
					{
						name="GBU-31";
						value=8;
					};
					class hp6_32
					{
						name="GBU-32";
						value=9;
					};
					class hp6_38
					{
						name="GBU-38";
						value=10;
					};
					class hp6_87
					{
						name="CBU-87 CEM";
						value=11;
					};
					class hp6_89
					{
						name="CBU-89 GATOR";
						value=12;
					};
					class hp6_97
					{
						name="CBU-97 SFW";
						value=13;
					};
					class hp6_103
					{
						name="CBU-103 CEM WCMD";
						value=14;
					};
					class hp4_105
					{
						name="CBU-105 SFW WCMD";
						value=15;
					};
					class hp6_82s
					{
						name="Mk82 Snakeye";
						value=16;
					};
					class hp6_82
					{
						name="Mk82 GPB";
						value=17;
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
					class hp7_mav
					{
						name="AGM-65D x3";
						value=1;
					};
					class hp7_12
					{
						name="GBU-12 x2";
						value=2;
					};
					class hp7_38
					{
						name="GBU-38 x3";
						value=3;
					};
					class hp7_82s
					{
						name="Mk82 Snakeye x3";
						value=4;
					};
					class hp7_82
					{
						name="Mk82 GPB x3";
						value=5;
					};
					class hp7_107
					{
						name="BLU-107/B x3";
						value=6;
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
					class hp8_aim9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp8_aim9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp8_ECM
					{
						name="ECM Pod";
						value=3;
					};
					class hp8_XR
					{
						name="Sniper XR Pod";
						value=4;
					};
					class hp8_suu
					{
						name="SUU-25";
						value=5;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="A-164 Loadout Module";
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
	class JAS_A143_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="A-143 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_A143_Loadout";
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
					class hp1_aim9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp1_aim9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp1_120
					{
						name="AIM-120";
						value=3;
					};
					class hp1_88
					{
						name="AGM-88 HARM";
						value=4;
					};
					class hp1_HYDRA
					{
						name="HYDRA x7";
						value=5;
					};
					class hp1_ZUNI
					{
						name="ZUNI x4";
						value=6;
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
					class hp2_9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp2_9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp2_120
					{
						name="AIM-120";
						value=3;
					};
					class hp2_65D
					{
						name="AGM-65D";
						value=4;
					};
					class hp2_65G
					{
						name="AGM-65G";
						value=5;
					};
					class hp2_65L
					{
						name="AGM-65L";
						value=6;
					};
					class hp2_88
					{
						name="AGM-88 HARM";
						value=7;
					};
					class hp2_12
					{
						name="GBU-12";
						value=8;
					};
					class hp2_38
					{
						name="GBU-38";
						value=9;
					};
					class hp2_87
					{
						name="CBU-87 CEM";
						value=10;
					};
					class hp2_89
					{
						name="CBU-89 GATOR";
						value=11;
					};
					class hp2_97
					{
						name="CBU-97 SFW";
						value=12;
					};
					class hp2_103
					{
						name="CBU-103 CEM WCMD";
						value=13;
					};
					class hp2_105
					{
						name="CBU-105 SFW WCMD";
						value=14;
					};
					class hp2_82s
					{
						name="Mk82 Snakeye";
						value=15;
					};
					class hp2_82
					{
						name="Mk82 GPB";
						value=16;
					};
					class hp2_HYDRA
					{
						name="HYDRA x7";
						value=17;
					};
					class hp2_ZUNI
					{
						name="ZUNI x4";
						value=18;
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
					class hp3_9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp3_9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp3_120
					{
						name="AIM-120";
						value=3;
					};
					class hp3_65D
					{
						name="AGM-65D";
						value=4;
					};
					class hp3_65G
					{
						name="AGM-65G";
						value=5;
					};
					class hp3_65L
					{
						name="AGM-65L";
						value=6;
					};
					class hp3_88
					{
						name="AGM-88 HARM";
						value=7;
					};
					class hp3_12
					{
						name="GBU-12";
						value=8;
					};
					class hp3_38
					{
						name="GBU-38";
						value=9;
					};
					class hp3_87
					{
						name="CBU-87 CEM";
						value=10;
					};
					class hp3_89
					{
						name="CBU-89 GATOR";
						value=11;
					};
					class hp3_97
					{
						name="CBU-97 SFW";
						value=12;
					};
					class hp3_103
					{
						name="CBU-103 CEM WCMD";
						value=13;
					};
					class hp3_105
					{
						name="CBU-105 SFW WCMD";
						value=14;
					};
					class hp3_82s
					{
						name="Mk82 Snakeye";
						value=15;
					};
					class hp3_82
					{
						name="Mk82 GPB";
						value=16;
					};
					class hp3_HYDRA
					{
						name="HYDRA x7";
						value=17;
					};
					class hp3_ZUNI
					{
						name="ZUNI x4";
						value=18;
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
					class hp4_9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp4_9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp4_120
					{
						name="AIM-120";
						value=3;
					};
					class hp4_65D
					{
						name="AGM-65D";
						value=4;
					};
					class hp4_65G
					{
						name="AGM-65G";
						value=5;
					};
					class hp4_65L
					{
						name="AGM-65L";
						value=6;
					};
					class hp4_88
					{
						name="AGM-88 HARM";
						value=7;
					};
					class hp4_12
					{
						name="GBU-12";
						value=8;
					};
					class hp4_38
					{
						name="GBU-38";
						value=9;
					};
					class hp4_87
					{
						name="CBU-87 CEM";
						value=10;
					};
					class hp4_89
					{
						name="CBU-89 GATOR";
						value=11;
					};
					class hp4_97
					{
						name="CBU-97 SFW";
						value=12;
					};
					class hp4_103
					{
						name="CBU-103 CEM WCMD";
						value=13;
					};
					class hp4_105
					{
						name="CBU-105 SFW WCMD";
						value=14;
					};
					class hp4_82s
					{
						name="Mk82 Snakeye";
						value=15;
					};
					class hp4_82
					{
						name="Mk82 GPB";
						value=16;
					};
					class hp4_HYDRA
					{
						name="HYDRA x7";
						value=17;
					};
					class hp4_ZUNI
					{
						name="ZUNI x4";
						value=18;
					};
					class hp4_lantirn
					{
						name="LANTIRN POD";
						value=19;
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
					class hp5_9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp5_9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp5_120
					{
						name="AIM-120";
						value=3;
					};
					class hp5_65D
					{
						name="AGM-65D";
						value=4;
					};
					class hp5_65G
					{
						name="AGM-65G";
						value=5;
					};
					class hp5_65L
					{
						name="AGM-65L";
						value=6;
					};
					class hp5_88
					{
						name="AGM-88 HARM";
						value=7;
					};
					class hp5_12
					{
						name="GBU-12";
						value=8;
					};
					class hp5_38
					{
						name="GBU-38";
						value=9;
					};
					class hp5_87
					{
						name="CBU-87 CEM";
						value=10;
					};
					class hp5_89
					{
						name="CBU-89 GATOR";
						value=11;
					};
					class hp5_97
					{
						name="CBU-97 SFW";
						value=12;
					};
					class hp5_103
					{
						name="CBU-103 CEM WCMD";
						value=13;
					};
					class hp5_105
					{
						name="CBU-105 SFW WCMD";
						value=14;
					};
					class hp5_82s
					{
						name="Mk82 Snakeye";
						value=15;
					};
					class hp5_82
					{
						name="Mk82 GPB";
						value=16;
					};
					class hp5_HYDRA
					{
						name="HYDRA x7";
						value=17;
					};
					class hp5_ZUNI
					{
						name="ZUNI x4";
						value=18;
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
					class hp6_aim9m
					{
						name="AIM-9M";
						value=1;
					};
					class hp6_aim9x
					{
						name="AIM-9X";
						value=2;
					};
					class hp6_120
					{
						name="AIM-120";
						value=3;
					};
					class hp6_88
					{
						name="AGM-88 HARM";
						value=4;
					};
					class hp6_HYDRA
					{
						name="HYDRA x7";
						value=5;
					};
					class hp6_ZUNI
					{
						name="ZUNI x4";
						value=6;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="A-143 Loadout Module";
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
	class JAS_YAK_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="Yak-131 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_YAK_Loadout";
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
						name="R-73";
						value=1;
					};
					class hp1_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp1_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp1_25
					{
						name="Kh-25 ARM";
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
					class hp2_r73
					{
						name="R-73";
						value=1;
					};
					class hp2_s8
					{
						name="S-8 Rockets";
						value=2;
					};
					class hp2_s13
					{
						name="S-13 Rockets";
						value=3;
					};
					class hp2_25
					{
						name="Kh-25 ARM";
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
					class hp3_r73
					{
						name="R-73";
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
					class hp3_25
					{
						name="Kh-25 ARM";
						value=4;
					};
					class hp3_29
					{
						name="Kh-29";
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
					class hp3_rbk
					{
						name="RBK-250";
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
					class hp4_r73
					{
						name="R-73";
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
					class hp4_25
					{
						name="Kh-25 ARM";
						value=4;
					};
					class hp4_29
					{
						name="Kh-29";
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
					class hp4_rbk
					{
						name="RBK-250";
						value=8;
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
					class hp5_r73
					{
						name="R-73";
						value=1;
					};
					class hp5_gsh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp5_s8
					{
						name="S-8 Rockets";
						value=3;
					};
					class hp5_s13
					{
						name="S-13 Rockets";
						value=4;
					};
					class hp5_25
					{
						name="Kh-25 ARM";
						value=5;
					};
					class hp5_29
					{
						name="Kh-29";
						value=6;
					};
					class hp5_at16
					{
						name="VIKHIR";
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
					class hp6_r73
					{
						name="R-73";
						value=1;
					};
					class hp6_gsh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp6_s8
					{
						name="S-8 Rockets";
						value=3;
					};
					class hp6_s13
					{
						name="S-13 Rockets";
						value=4;
					};
					class hp6_kh25
					{
						name="Kh-25 ARM";
						value=5;
					};
					class hp6_kh29
					{
						name="Kh-29";
						value=6;
					};
					class hp6_at16
					{
						name="VIKHIR";
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
					class hp7_r73
					{
						name="R-73";
						value=1;
					};
					class hp7_gsh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp7_s8
					{
						name="S-8 Rockets";
						value=3;
					};
					class hp7_s13
					{
						name="S-13 Rockets";
						value=4;
					};
					class hp7_kh25
					{
						name="Kh-25 ARM";
						value=5;
					};
					class hp7_kh29
					{
						name="Kh-29";
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
					class hp8_r73
					{
						name="R-73";
						value=1;
					};
					class hp8_gsh
					{
						name="GSh-23 Gun Pod";
						value=2;
					};
					class hp8_s8
					{
						name="S-8 Rockets";
						value=3;
					};
					class hp8_s13
					{
						name="S-13 Rockets";
						value=4;
					};
					class hp8_kh25
					{
						name="Kh-25 ARM";
						value=5;
					};
					class hp8_kh29
					{
						name="Kh-29";
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
		};
		class ModuleDescription: ModuleDescription
		{
			description="Yak-131 Loadout Module";
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
