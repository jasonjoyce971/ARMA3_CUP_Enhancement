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
		name="A-10 Thunderbolt II";
		author="-{GOL}-Jason";
		url="https://github.com/jasonjoyce971/ARMA3_CUP_Enhancement#arma3_cup_enhancement";
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

// Jets Content -> relates to sensor overhaul
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Components;

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
		class A10
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-10II Thunderbolt";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "Famous the world over for its performance and its ugly ass looks, the A-10 'Warthog' has been repeatedly touted as the greatest ground attack craft of modern times. Built from the ground up to kill tanks and ground emplacements, everything about the design is there to enhance its ground attack capabilities. This single mindedness of design however does mean that the A-10 is possibly the slowest jet in the game. When you're carrying more bombs than some bombers however, who cares how fast you are?<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2Mk82 GPB<br/>%2Mk82 SNAKE<br/>%2Mk84 GPB<br/>%2HYDRA Rockets<br/>%2APKWS Rockets<br/>%2ZUNI Rockets<br/>%2CRV-7 Rockets<br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2GBU-10<br/>%2GBU-12<br/>%2EGBU-12 II<br/>%2GBU-31<br/>%2GBU-38<br/>%2GBU-54<br/>%2CBU-87<br/>%2CBU-89<br/>%2CBU-97<br/>%2CBU-103<br/>%2CBU-105<br/>%2SUU-25<br/><br/>Factions:<br/><br/>%2US Army";
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
	class CUP_A10_Base;
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
			//minTurn=-160;
			//maxTurn=160;
			minTurn=-179;
			maxTurn=179;
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
		unitInfoType = "RscOptics_CAS_Pilot";
		weapons[] =
		{
			"JAS_CUP_Vacannon_GAU8_veh",
			"FIR_MasterArm",
			"FIR_CMLauncher"
			//"Laserdesignator_mounted"
		};
		magazines[] =
		{
			"JAS_CUP_1350Rnd_TE1_Red_Tracer_30mm_GAU8_M",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
			//"Laserbatteries"
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
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
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
			/*
			BIS Ejection system -> currently inop due to modelling
			class Plane_CAS_01_Eject
			{
				condition = "player in this and isengineon this";
				displayName = "Eject";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pilotcontrol";
				priority = 0.05;
				radius = 10;
				shortcut = "Eject";
				showWindow = 0;
				statement = "[this] spawn BIS_fnc_planeEjection";
			};*/
		};
		class EventHandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		/*class ACE_SelfActions 
		{
			class ECM_ON
			{
				displayName = "ECM JAMMER ON";
				condition = "this getvariable ""ECMJAMMER"" == ""yes"";";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
			};
			class A10J_Gui_Open
			{
				displayName = "Open Loadout Dialog";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_A10\sqs\loadout\A10J_GUI_Open.sqf""";
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targetting System";
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
			};
			class CUP_A10J_Eject
			{
				displayName = "Pull Ejection Cord";
				condition = "player in this and isengineon this";
				statement = "[this, false] spawn CUP_fnc_ejectPlayerFromAircraft";
			};
			CODE REFERENCE
			displayName = "dance"; 							// displayName	String	Text shown to user
            condition = "[_player] call onDanceFloor"; 		// condition	String (of code)	Condition to show the action
            exceptions[] = {};								// exceptions	Array (of strings)	Exceptions to canInteractWith conditions (e.g. "notOnMap") (OPTIONAL)
            statement = "_player switchMove 'TestDance'";	// statement	String (of code)	Statement run when selected
            icon = "\z\dance.paa";							// icon	String (file path)	Icon shown (OPTIONAL)
			
		};*/
		////////////////////////////////////////////////////////////////////
		// Jets Content
		////////////////////////////////////////////////////////////////////
		airBrake = 1;
		armor = 80;
		armorLights = 1;
		armorStructural = 2;
		camouflage = 100;
		crewCrashProtection = 0.15;
		ejectDamageLimit = 0.45;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		ejectSpeed[] = {0,60,0};
		headGforceLeaningFactor[] = {0.01,0.002,0.01};
		irScanGround = 1;
		irScanRangeMax = 5000;
		irScanRangeMin = 500;
		irScanToEyeFactor = 2;
		irTarget = 1;
		irTargetSize = 1;
		laserScanner = 1;
		laserTarget = 0;
		nvScanner = 0;
		nvTarget = 0;
		radarTarget = 1;
		radarTargetSize = 1;
		radarType = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=500;
						aimDown=0;
						animDirection="PilotCamera_V";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=500;
						aimDown=0;
						animDirection="PilotCamera_V";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		/*
		BIS Ejection System -> currently inop due to modelling
		class EjectionSystem
		{
			CanopyClass = "Plane_CAS_01_Canopy_F";
			CanopyForce = 30;
			CanopyHideAnim = "canopy_hide";
			CanopyPos = "pos_eject_canopy";
			EjectionDual = 0;
			EjectionParachute = "Steerable_Parachute_F";
			EjectionSeatClass = "Ejection_Seat_CAS_01_F";
			EjectionSeatEnabled = 1;
			EjectionSeatForce = 50;
			EjectionSeatHideAnim = "ejection_seat_hide";
			EjectionSeatPos = "pos_eject";
			EjectionSeatRailAnim = "ejection_seat_motion";
			EjectionSoundExt = "Plane_Fighter_01_ejection_ext_sound";
			EjectionSoundInt = "Plane_Fighter_01_ejection_in_sound";
		};
		*/
		class MFD
		{
			class AirplaneHUD
			{
				//topLeft="HUD_top_left";
				//topRight="HUD_top_right";
				//bottomLeft="HUD_bottom_left";
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=1;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.498,0.38};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class TargetingPodTarget
					{
						source="pilotcamera";
						type="vector";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPoint";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=1.25;
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
						angle=0;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class VerticalSpeed
					{
						type="linear";
						source="vspeed";
						sourceScale=1;
						min=-100;
						max=100;
						minPos[]={0,0.15000001};
						maxPos[]={0,-0.15000001};
					};
					class HorizonIndicatorBank
					{
						type="rotational";
						source="horizonBank";
						sourceScale=1;
						center[]={0.064999998,0.12};
						min=-3.1415927;
						max=3.1415927;
						minAngle=0;
						maxAngle=360;
						aspectRatio=1.25;
					};
					class HorizonIndicatorDive: HorizonIndicatorBank
					{
						source="horizonDive";
						min=-1.5707999;
						max=1.5707999;
						minAngle=90;
						maxAngle=-90;
					};
					class TerrainBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=200;
						minPos[]={0,0.88};
						maxPos[]={0,0.38};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=1.25;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.38};
						pos10[]={1.168,1.215};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.38};
						pos3[]={0.70039999,0.38};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.63050002};
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					condition="on";
					class PlaneOrientationCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.0099999998,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0099999998,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0,-0.0125},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0.0125},
								1
							},
							{}
						};
					};
					class PlaneMovementCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{0,0.025},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.02165},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0125},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.02165},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
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
								{0,-0.050000001},
								1
							},
							
							{
								"Velocity",
								{0,-0.025},
								1
							},
							{}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="mgun";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.079999998},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
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
									{0,-0.3125},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,0.3125},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,-0.054249998},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,-0.106875},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,-0.15625},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,-0.200875},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,-0.239375},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.270625},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,-0.29365599},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,-0.30774999},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.3125},
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
									{-0.15000001,-0.13},
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
									{-0.15000001,0.13},
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
									{0.15000001,-0.13},
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
									{0.15000001,0.13},
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
									{-0.13,-0.15000001},
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
									{-0.13,0.15000001},
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
									{0.13,-0.15000001},
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
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.025},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.025},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.050000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.1125},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0024999999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0024999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.1},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.01736},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.034200002},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.050000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.064280003},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.0766},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.086599998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.093970001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.098480001},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.079999998},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.1},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
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
							{0.050000001,0.85000002},
							1
						};
						right[]=
						{
							{0.090000004,0.85000002},
							1
						};
						down[]=
						{
							{0.050000001,0.88999999},
							1
						};
					};
					class AmmoCount
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.94999999,0.85000002},
							1
						};
						right[]=
						{
							{0.99000001,0.85000002},
							1
						};
						down[]=
						{
							{0.94999999,0.88999999},
							1
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.22499999},
							1
						};
						right[]=
						{
							{0.17,0.22499999},
							1
						};
						down[]=
						{
							{0.13,0.26499999},
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
							{0.11,0.22499999},
							1
						};
						right[]=
						{
							{0.15000001,0.22499999},
							1
						};
						down[]=
						{
							{0.11,0.26499999},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.27000001},
							1
						};
						right[]=
						{
							{0.17,0.27000001},
							1
						};
						down[]=
						{
							{0.13,0.31},
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
							{0.11,0.27000001},
							1
						};
						right[]=
						{
							{0.15000001,0.27000001},
							1
						};
						down[]=
						{
							{0.11,0.31},
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
							{0.13,0.36000001},
							1
						};
						right[]=
						{
							{0.17,0.36000001},
							1
						};
						down[]=
						{
							{0.13,0.40000001},
							1
						};
					};
					class SpeedText
					{
						type="text";
						source="static";
						text="SPEED";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.36000001},
							1
						};
						right[]=
						{
							{0.15000001,0.36000001},
							1
						};
						down[]=
						{
							{0.11,0.40000001},
							1
						};
					};
					class SpeedSeparator
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								{0.12,0.22499999},
								1
							},
							
							{
								{0.12,0.63300002},
								1
							}
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
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.44999999},
								1
							};
							right[]=
							{
								{0.15000001,0.44999999},
								1
							};
							down[]=
							{
								{0.11,0.49000001},
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
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.495},
								1
							};
							right[]=
							{
								{0.15000001,0.495},
								1
							};
							down[]=
							{
								{0.11,0.53500003},
								1
							};
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
										{-0.23999999,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.029999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.022500001},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.022500001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{0,0.029999999},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.022500001},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.022500001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.029999999},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.029999999},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0,0.30000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.30000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.15000001},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.15000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,0.15000001},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.15000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.30000001},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.30000001},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
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
							text="LLS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.54000002},
								1
							};
							right[]=
							{
								{0.15000001,0.54000002},
								1
							};
							down[]=
							{
								{0.11,0.57999998},
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
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.11,0.58499998},
								1
							};
							right[]=
							{
								{0.15000001,0.58499998},
								1
							};
							down[]=
							{
								{0.11,0.625},
								1
							};
						};
					};
					class Climb
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								"VerticalSpeed",
								{0.875,0.22},
								1
							},
							
							{
								"VerticalSpeed",
								{0.875,0.54000002},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86900002,0.23},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.23},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.25999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.25999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.28999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.28999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.31999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.31999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.86500001,0.34999999},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.34999999},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.85500002,0.38},
								1
							},
							
							{
								"VerticalSpeed",
								{0.87400001,0.38},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.41},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.41},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.44},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.44},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.47},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.47},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.5},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86500001,0.5},
								1
							},
							{},
							
							{
								"VerticalSpeed",
								{0.87400001,0.52999997},
								1
							},
							
							{
								"VerticalSpeed",
								{0.86900002,0.52999997},
								1
							}
						};
					};
					class ClimbMinGroup
					{
						type="group";
						clipTL[]={0,0.40000001};
						clipBR[]={1,0.75999999};
						class ClimbMin
						{
							type="text";
							source="static";
							text="-100";
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.866,0.51749998},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.89099997,0.51749998},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.866,0.54250002},
								1
							};
						};
					};
					class ClimbMaxGroup
					{
						type="group";
						clipTL[]={0,0};
						clipBR[]={1,0.36000001};
						class ClimbMax
						{
							type="text";
							source="static";
							text="100";
							align="left";
							scale=1;
							pos[]=
							{
								"VerticalSpeed",
								{0.866,0.2175},
								1
							};
							right[]=
							{
								"VerticalSpeed",
								{0.89099997,0.2175},
								1
							};
							down[]=
							{
								"VerticalSpeed",
								{0.866,0.24250001},
								1
							};
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
							{0.87,0.72100002},
							1
						};
						right[]=
						{
							{0.89499998,0.72100002},
							1
						};
						down[]=
						{
							{0.87,0.74599999},
							1
						};
					};
					class TerrainGroup
					{
						type="group";
						clipTL[]={0,0};
						clipBR[]={1,0.69999999};
						class TerrainLine
						{
							type="line";
							width=1;
							points[]=
							{
								
								{
									"TerrainBone",
									{0.74000001,0},
									1
								},
								
								{
									"TerrainBone",
									{0.90899998,0},
									1
								}
							};
						};
						class TerrainText
						{
							type="text";
							source="static";
							text="TERRAIN";
							align="right";
							scale=1;
							pos[]=
							{
								"TerrainBone",
								{0.74000001,0.003},
								1
							};
							right[]=
							{
								"TerrainBone",
								{0.76499999,0.003},
								1
							};
							down[]=
							{
								"TerrainBone",
								{0.74000001,0.028000001},
								1
							};
						};
						class TerrainNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								"TerrainBone",
								{0.74000001,-0.043000001},
								1
							};
							right[]=
							{
								"TerrainBone",
								{0.77999997,-0.043000001},
								1
							};
							down[]=
							{
								"TerrainBone",
								{0.74000001,-0.003},
								1
							};
						};
					};
					class AltitudeNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.84500003,0.36000001},
							1
						};
						right[]=
						{
							{0.88499999,0.36000001},
							1
						};
						down[]=
						{
							{0.84500003,0.40000001},
							1
						};
					};
					class AltitudeText
					{
						type="text";
						source="static";
						text="ASL";
						align="right";
						scale=1;
						pos[]=
						{
							{0.88,0.72000003},
							1
						};
						right[]=
						{
							{0.92000002,0.72000003},
							1
						};
						down[]=
						{
							{0.88,0.75999999},
							1
						};
					};
					class AltitudeArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.85699999,0.36399999},
								1
							},
							
							{
								{0.875,0.38},
								1
							},
							
							{
								{0.85699999,0.396},
								1
							},
							{},
							
							{
								{0.898,0.36399999},
								1
							},
							
							{
								{0.88,0.38},
								1
							},
							
							{
								{0.898,0.396},
								1
							}
						};
					};
					class AltitudeScale
					{
						type="scale";
						horizontal=0;
						source="altitudeASL";
						sourceScale=1;
						min=0;
						width=4;
						top=0.70999998;
						center=0.38;
						bottom=0.050000001;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=5;
						numberEach=10;
						step=10;
						stepSize=0.025;
						align="right";
						scale=1;
						pos[]={0.91000003,0.69};
						right[]={0.94999999,0.69};
						down[]={0.91000003,0.73000002};
					};
					class HeadingArrows
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.484,0.89700001},
								1
							},
							
							{
								{0.5,0.91500002},
								1
							},
							
							{
								{0.51599997,0.89700001},
								1
							},
							{},
							
							{
								{0.484,0.99800003},
								1
							},
							
							{
								{0.5,0.98000002},
								1
							},
							
							{
								{0.51599997,0.99800003},
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
						top=0.050000001;
						center=0.5;
						bottom=0.94999999;
						lineXleft=0.93000001;
						lineYright=0.92000002;
						lineXleftMajor=0.94;
						lineYrightMajor=0.92000002;
						majorLineEach=3;
						numberEach=9;
						step=5;
						stepSize=0.02;
						align="center";
						scale=1;
						pos[]={0.050000001,0.94};
						right[]={0.090000004,0.94};
						down[]={0.050000001,0.98000002};
					};
					class HorizontalLine
					{
						clipTL[]={0.2,0};
						clipBR[]={0.80000001,0.75999999};
						class HorizontalLineDraw
						{
							type="line";
							source="Level0";
							points[]=
							{
								
								{
									"Level0",
									{-0.22499999,0},
									1
								},
								
								{
									"Level0",
									{-0.1875,0},
									1
								},
								{},
								
								{
									"Level0",
									{-0.15000001,0},
									1
								},
								
								{
									"Level0",
									{-0.1125,0},
									1
								},
								{},
								
								{
									"Level0",
									{-0.075000003,0},
									1
								},
								
								{
									"Level0",
									{-0.037500001,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.037500001,0},
									1
								},
								
								{
									"Level0",
									{0.075000003,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.1125,0},
									1
								},
								
								{
									"Level0",
									{0.15000001,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.1875,0},
									1
								},
								
								{
									"Level0",
									{0.22499999,0},
									1
								}
							};
						};
					};
					class HorizonIndicatorBackground
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								{0.00059999502,0.12},
								1
							},
							
							{
								{0.1294,0.12},
								1
							}
						};
					};
					class HorizonIndicator
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"HorizonIndicatorBank",
								{-0.055199999,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.046,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.045434199,0.0079856003},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.043226201,0.015732},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.039836001,0.023},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.035236001,0.029568801},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.029568801,0.035236001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.023,0.039836001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.015732,0.043226201},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{-0.0079856003,0.045434199},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0,0.046},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.0079856003,0.045434199},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.015732,0.043226201},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.023,0.039836001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.029568801,0.035236001},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.035236001,0.029568801},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.039836001,0.023},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.043226201,0.015732},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.045434199,0.0079856003},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.046,0},
								1
							},
							
							{
								"HorizonIndicatorBank",
								{0.055199999,0},
								1
							}
						};
					};
					class RadarBoxes
					{
						type="radar";
						pos0[]={0.498,0.38};
						pos10[]={1.166,1.215};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0024999999},
								1
							},
							
							{
								{0.0020000001,-0.0024999999},
								1
							},
							
							{
								{0.0020000001,0.0024999999},
								1
							},
							
							{
								{-0.0020000001,0.0024999999},
								1
							},
							
							{
								{-0.0020000001,-0.0024999999},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.025},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.025},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.037500001},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.037500001},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.037500001},
									1
								}
							};
						};
					};
					class TargetingPodDir
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,0.0051731099},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,-0.0051731099},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,-0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,-0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,-0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041384902,-0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,-0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,-0.0147318},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.020805599,-0.0051731099},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.020805599,0.0051731202},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041384902,0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,0.0147318},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,0.0051731002},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.020805599,-0.0051731202},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0176381,-0.0147318},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{0.0117854,-0.0220477},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{0.0041384902,-0.026007},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0041385,-0.026007},
								1
							},
							{},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0117854,-0.0220477},
								1
							},
							
							{
								"TargetingPodTarget",
								1,
								{-0.0176381,-0.0147318},
								1
							},
							{},
							{}
						};
					};
					class LAR
					{
						type="group";
						condition="AAmissile";
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.23,0.25},
									1
								},
								
								{
									{0.20999999,0.25},
									1
								},
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.23,0.55000001},
									1
								},
								{},
								
								{
									{0.23,0.47499999},
									1
								},
								
								{
									{0.20999999,0.47499999},
									1
								},
								{},
								
								{
									{0.23,0.40000001},
									1
								},
								
								{
									{0.20999999,0.40000001},
									1
								},
								{},
								
								{
									{0.23,0.32499999},
									1
								},
								
								{
									{0.20999999,0.32499999},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.19,0.56999999},
									1
								},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.20999999,0.55000001},
									1
								},
								
								{
									"LarTargetDist",
									-0.30000001,
									{0.19,0.52999997},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.30000001,
										{0.211,0.55000001},
										1
									},
									
									{
										"LarAmmoMax",
										-0.30000001,
										{0.211,0.55000001},
										1
									},
									
									{
										"LarAmmoMax",
										-0.30000001,
										{0.228,0.55000001},
										1
									},
									
									{
										"LarAmmoMin",
										-0.30000001,
										{0.228,0.55000001},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25-0.02)"
								},
								1
							};
							right[]=
							{
								
								{
									"_EVAL(0.21+0.07)",
									"_EVAL(0.25-0.02)"
								},
								1
							};
							down[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25+0.02)"
								},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25-0.02+0.3*0.5)"
								},
								1
							};
							right[]=
							{
								
								{
									"_EVAL(0.21+0.07)",
									"_EVAL(0.25-0.02+0.3*0.5)"
								},
								1
							};
							down[]=
							{
								
								{
									"_EVAL(0.21+0.03)",
									"_EVAL(0.25+0.02+0.3*0.5)"
								},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.18000001,0.52999997},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.22,0.52999997},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.30000001,
								{0.18000001,0.56999999},
								1
							};
						};
					};
				};
			};
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
		scopeCurator = 2;
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
					class hp1_E12
					{
						name="EGBU-12 II";
						value=9;
					};
					class hp1_ALQ
					{
						name="ECM POD";
						value=10;
					};
					class hp1_SUU
					{
						name="SUU-25";
						value=11;
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
					class hp2_E12
					{
						name="EGBU-12 II";
						value=9;
					};
					class hp2_ALQ
					{
						name="ECM POD";
						value=10;
					};
					class hp2_SUU
					{
						name="SUU-25";
						value=11;
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
					class hp3_APKWS7
					{
						name="APKWS x7";
						value=7;
					};
					class hp3_zuni4
					{
						name="ZUNI x4";
						value=8;
					};
					class hp3_crv7
					{
						name="CRV7 x19";
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
					class hp3_87
					{
						name="CBU-87 CEM";
						value=13;
					};
					class hp3_89
					{
						name="CBU-89 GATOR";
						value=14;
					};
					class hp3_97
					{
						name="CBU-97 SFW";
						value=15;
					};
					class hp3_12
					{
						name="GBU-12";
						value=16;
					};
					class hp3_E12
					{
						name="EGBU-12 II";
						value=17;
					};
					class hp3_tgp
					{
						name="Lightning II POD";
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
					class hp4_APKWS7
					{
						name="APKWS x7";
						value=7;
					};
					class hp4_zuni4
					{
						name="ZUNI x4";
						value=8;
					};
					class hp4_crv7
					{
						name="CRV7 x19";
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
					class hp4_87
					{
						name="CBU-87 CEM";
						value=13;
					};
					class hp4_89
					{
						name="CBU-89 GATOR";
						value=14;
					};
					class hp4_97
					{
						name="CBU-97 SFW";
						value=15;
					};
					class hp4_12
					{
						name="GBU-12";
						value=16;
					};
					class hp4_E12
					{
						name="EGBU-12 II";
						value=17;
					};
					class hp4_tgp
					{
						name="Lightning II POD";
						value=18;
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
						name="CBU-103 CEM WCMD";
						value=9;
					};
					class hp5_105
					{
						name="CBU-105 SFW WCMD";
						value=10;
					};
					class hp5_10
					{
						name="GBU-10";
						value=11;
					};
					class hp5_12
					{
						name="GBU-12";
						value=12;
					};
					class hp5_12ter
					{
						name="GBU-12 x3";
						value=13;
					};
					class hp5_E12
					{
						name="EGBU-12 II";
						value=14;
					};
					class hp5_E12ter
					{
						name="EGBU-12 II x3";
						value=15;
					};
					class hp5_31
					{
						name="GBU-31";
						value=16;
					};
					class hp5_38
					{
						name="GBU-38";
						value=17;
					};
					class hp5_54
					{
						name="GBU-54";
						value=18;
					};
					class hp5_hydra7
					{
						name="HYDRA x7";
						value=19;
					};
					class hp5_hydraW
					{
						name="HYDRA Smoke White";
						value=20;
					};
					class hp5_hydraR
					{
						name="HYDRA Smoke Red";
						value=21;
					};
					class hp5_hydraO
					{
						name="HYDRA Smoke Orange";
						value=22;
					};
					class hp5_hydraP
					{
						name="HYDRA Smoke Purple";
						value=23;
					};
					class hp5_hydra19
					{
						name="HYDRA x19";
						value=24;
					};
					class hp5_hydra21
					{
						name="HYDRA x21";
						value=25;
					};
					class hp5_APKWS7
					{
						name="APKWS x7";
						value=26;
					};
					class hp5_APKWS21
					{
						name="APKWS x21";
						value=27;
					};
					class hp5_zuni4
					{
						name="ZUNI x4";
						value=28;
					};
					class hp5_crv7
					{
						name="CRV7 x19";
						value=29;
					};
					class hp5_65D
					{
						name="AGM-65D";
						value=30;
					};
					class hp5_65Dter
					{
						name="AGM-65D x3";
						value=31;
					};
					class hp5_65G
					{
						name="AGM-65G";
						value=32;
					};
					class hp5_65Gter
					{
						name="AGM-65G x3";
						value=33;
					};
					class hp5_65L
					{
						name="AGM-65L";
						value=34;
					};
					class hp5_65Lter
					{
						name="AGM-65L x3";
						value=35;
					};
					class hp5_65H
					{
						name="AGM-65H";
						value=36;
					};
					class hp5_65Hter
					{
						name="AGM-65H x3";
						value=37;
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
						name="CBU-103 CEM WCMD";
						value=9;
					};
					class hp6_105
					{
						name="CBU-105 SFW WCMD";
						value=10;
					};
					class hp6_10
					{
						name="GBU-10";
						value=11;
					};
					class hp6_12
					{
						name="GBU-12";
						value=12;
					};
					class hp6_12ter
					{
						name="GBU-12 x3";
						value=13;
					};
					class hp6_E12
					{
						name="EGBU-12 II";
						value=14;
					};
					class hp6_E12ter
					{
						name="EGBU-12 II x3";
						value=15;
					};
					class hp6_31
					{
						name="GBU-31";
						value=16;
					};
					class hp6_38
					{
						name="GBU-38";
						value=17;
					};
					class hp6_54
					{
						name="GBU-54";
						value=18;
					};
					class hp6_hydra7
					{
						name="HYDRA x7";
						value=19;
					};
					class hp6_hydraW
					{
						name="HYDRA Smoke White";
						value=20;
					};
					class hp6_hydraR
					{
						name="HYDRA Smoke Red";
						value=21;
					};
					class hp6_hydraO
					{
						name="HYDRA Smoke Orange";
						value=22;
					};
					class hp6_hydraP
					{
						name="HYDRA Smoke Purple";
						value=23;
					};
					class hp6_hydra19
					{
						name="HYDRA x19";
						value=24;
					};
					class hp6_hydra21
					{
						name="HYDRA x21";
						value=25;
					};
					class hp6_APKWS7
					{
						name="APKWS x7";
						value=26;
					};
					class hp6_APKWS21
					{
						name="APKWS x21";
						value=27;
					};
					class hp6_zuni4
					{
						name="ZUNI x4";
						value=28;
					};
					class hp6_crv7
					{
						name="CRV7 x19";
						value=29;
					};
					class hp6_65D
					{
						name="AGM-65D";
						value=30;
					};
					class hp6_65Dter
					{
						name="AGM-65D x3";
						value=31;
					};
					class hp6_65G
					{
						name="AGM-65G";
						value=32;
					};
					class hp6_65Gter
					{
						name="AGM-65G x3";
						value=33;
					};
					class hp6_65L
					{
						name="AGM-65L";
						value=34;
					};
					class hp6_65Lter
					{
						name="AGM-65L x3";
						value=35;
					};
					class hp6_65H
					{
						name="AGM-65H";
						value=36;
					};
					class hp6_65Hter
					{
						name="AGM-65H x3";
						value=37;
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
						name="CBU-103 CEM WCMD";
						value=9;
					};
					class hp7_105
					{
						name="CBU-105 SFW WCMD";
						value=10;
					};
					class hp7_10
					{
						name="GBU-10";
						value=11;
					};
					class hp7_12
					{
						name="GBU-12";
						value=12;
					};
					class hp7_12ter
					{
						name="GBU-12 x3";
						value=13;
					};
					class hp7_E12
					{
						name="EGBU-12 II";
						value=14;
					};
					class hp7_E12ter
					{
						name="EGBU-12 II x3";
						value=15;
					};
					class hp7_31
					{
						name="GBU-31";
						value=16;
					};
					class hp7_38
					{
						name="GBU-38";
						value=17;
					};
					class hp7_54
					{
						name="GBU-54";
						value=18;
					};
					class hp7_hydra7
					{
						name="HYDRA x7";
						value=19;
					};
					class hp7_hydra19
					{
						name="HYDRA x19";
						value=20;
					};
					class hp7_hydra21
					{
						name="HYDRA x21";
						value=21;
					};
					class hp7_APKWS7
					{
						name="APKWS x7";
						value=22;
					};
					class hp7_APKWS21
					{
						name="APKWS x21";
						value=23;
					};
					class hp7_zuni4
					{
						name="ZUNI x4";
						value=24;
					};
					class hp7_crv7
					{
						name="CRV7 x19";
						value=25;
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
						name="CBU-103 CEM WCMD";
						value=9;
					};
					class hp8_105
					{
						name="CBU-105 SFW WCMD";
						value=10;
					};
					class hp8_10
					{
						name="GBU-10";
						value=11;
					};
					class hp8_12
					{
						name="GBU-12";
						value=12;
					};
					class hp8_12ter
					{
						name="GBU-12 x3";
						value=13;
					};
					class hp8_E12
					{
						name="EGBU-12 II";
						value=14;
					};
					class hp8_E12ter
					{
						name="EGBU-12 II x3";
						value=15;
					};
					class hp8_31
					{
						name="GBU-31";
						value=16;
					};
					class hp8_38
					{
						name="GBU-38";
						value=17;
					};
					class hp8_54
					{
						name="GBU-54";
						value=18;
					};
					class hp8_hydra7
					{
						name="HYDRA x7";
						value=19;
					};
					class hp8_hydra19
					{
						name="HYDRA x19";
						value=20;
					};
					class hp8_hydra21
					{
						name="HYDRA x21";
						value=21;
					};
					class hp8_APKWS7
					{
						name="APKWS x7";
						value=22;
					};
					class hp8_APKWS21
					{
						name="APKWS x21";
						value=23;
					};
					class hp8_zuni4
					{
						name="ZUNI x4";
						value=24;
					};
					class hp8_crv7
					{
						name="CRV7 x19";
						value=25;
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
						name="CBU-103 CEM WCMD";
						value=7;
					};
					class hp9_105
					{
						name="CBU-105 SFW WCMD";
						value=8;
					};
					class hp9_10
					{
						name="GBU-10";
						value=9;
					};
					class hp9_12
					{
						name="GBU-12";
						value=10;
					};
					class hp9_E12
					{
						name="EGBU-12 II";
						value=11;
					};
					class hp9_31
					{
						name="GBU-31";
						value=12;
					};
					class hp9_38
					{
						name="GBU-38";
						value=13;
					};
					class hp9_54
					{
						name="GBU-54";
						value=14;
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
						name="CBU-103 CEM WCMD";
						value=7;
					};
					class hp10_105
					{
						name="CBU-105 SFW WCMD";
						value=8;
					};
					class hp10_10
					{
						name="GBU-10";
						value=9;
					};
					class hp10_12
					{
						name="GBU-12";
						value=10;
					};
					class hp10_E12
					{
						name="EGBU-12 II";
						value=11;
					};
					class hp10_31
					{
						name="GBU-31";
						value=12;
					};
					class hp10_38
					{
						name="GBU-38";
						value=13;
					};
					class hp10_54
					{
						name="GBU-54";
						value=14;
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
					class hp11_E12
					{
						name="EGBU-12 II";
						value=9;
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