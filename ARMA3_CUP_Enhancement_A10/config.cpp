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
		};
		class EventHandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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