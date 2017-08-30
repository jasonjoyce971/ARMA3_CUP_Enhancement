class CfgPatches
{
	class ARMA3_CUP_Enhancement_RHS
	{
		units[]=
		{
			"JAS_RHS_B_A10A_USA",
			"JAS_RHS_Loadout_Module"
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
			"A3_Modules_F"
		};
		name="A-10A Thunderbolt II";
		author="-{GOL}-Jason";
		url="https://github.com/jasonjoyce971/ARMA3_CUP_Enhancement";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ARMA3_RHS_Enhancement_A10
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_RHS"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_RHS_A10_Init_Function
		{
			class RHS_A10_Loadout
			{
				file="\ARMA3_CUP_Enhancement_RHS\sqs\modules\a10_loadout_module.sqf";
			};
			class RHS_A10_Loadout_set
			{
				file="\ARMA3_CUP_Enhancement_RHS\sqs\modules\a10_loadout_module_set.sqf";
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

class RHS_A10J_GUI
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
			text = "ARMA3_CUP_Enhancement_RHS\ui\A10J_background.paa";
		};
		/*class A10_Skin_Button: RscPicture
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
			action="_skinhandle = execVM ""\ARMA3_RHS_Enhancement_Systems\sqs\setskin\setskin_open.sqf""";
		};*/
		/*class rsc1 : RscText
		{
			idc = 1000;
			text = "Right Outboard";
			x = "0.64 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};*/
		/*class RscText_1101 : RscText
		{
			idc = 1101;
			text = "Left Outboard";
			x = "0.22 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};*/
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
		/*class RscText_11001 : RscText
		{
			idc = 11001;
			text = "Belly Centre";
			x = "0.43 * safezoneW + safezoneX";
			y = "0.52 * safezoneH + safezoneY";
			w = "0.5 * safezoneW";
			h = "0.028 * safezoneH";
		};*/
		/*class hp1 : RscCombo
		{
			idc = 2100;
			x = "0.64 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};*/
		/*class hp2 : RscCombo
		{
			idc = 2201;
			x = "0.22 * safezoneW + safezoneX";
			y = "0.276 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};*/
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
		/*class hp11 : RscCombo
		{
			idc = 21008;
			x = "0.43 * safezoneW + safezoneX";
			y = "0.546 * safezoneH + safezoneY";
			w = "0.0875 * safezoneW";
			h = "0.028 * safezoneH";
		};*/
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
			action = "_applyhandle = execVM ""\ARMA3_CUP_Enhancement_RHS\sqs\loadout\A10J_Loadout.sqf""";
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
			action = "_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_RHS\sqs\loadout\A10J_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_RHS\sqs\loadout\A10J_SaveCustom.sqf""";
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
			action = "_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_RHS\sqs\loadout\A10J_SaveCustom.sqf""";
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

class cfgAmmo
{
	class rhs_ammo_agm65;
	class rhs_ammo_agm65_x3;
	class JAS_rhs_ammo_agm65D: rhs_ammo_agm65
	{
		ais_ce_penetrators[] = { "rhs_ammo_agm65_penetrator" };
		simulation="shotMissile";
		hit=400;
		indirectHit=250;
		indirectHitRange=10.5;
		model="\rhsusf\addons\rhsusf_a2port_air\A10\AGM65_fly.p3d";
		proxyShape="\rhsusf\addons\rhsusf_a2port_air\A10\rhs_AGM65.p3d";
		trackOversteer=1;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		whistleDist=8;
		maxControlRange=11000;
		maneuvrability=14;
		simulationStep=0.002;
		airLock=0;
		irLock=1;
		laserLock=1;
		cmimmunity=0.8;
		manualControl=1;
		cost=1000;
		maxSpeed=400;
		timeToLive=45;
		airFriction=0.04;
		sideAirFriction=0.08;
		trackLead=1;
		initTime=0.15;
		thrustTime=2;
		thrust=366;
		fuseDistance=500;
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		class Hiteffects
		{
			hitWater="ImpactEffectsSmall";
		};
		weaponLockSystem = "2 + 16";
		maverickWeaponIndexOffset=50;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent:SensorTemplateIR
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 55;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 2000;
						class AirTarget
						{
							maxRange = 13000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_rhs_ammo_agm65D_x3: JAS_rhs_ammo_agm65D
	{
		maverickWeaponIndexOffset=60;
	};
	class JAS_rhs_ammo_agm65L: JAS_rhs_ammo_agm65D
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 55;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 13000;
							minRange = 13000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 13000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class JAS_rhs_ammo_agm65L_x3: JAS_rhs_ammo_agm65L
	{
		maverickWeaponIndexOffset=60;
	};
	class JAS_rhs_ammo_agm65G: JAS_rhs_ammo_agm65D
	{
		hit = 2800;
		indirectHit = 300;
		indirectHitRange = 20;
	};
};

class cfgMagazines
{
	class rhs_mag_agm65;
	class rhs_mag_agm65_x3;
	class rhs_mag_1000Rnd_30x173_mixed;
	class JAS_rhs_mag_GAU8: rhs_mag_1000Rnd_30x173_mixed
	{
		count=1350;
	};
	class JAS_rhs_mag_agm65D: rhs_mag_agm65
	{
		scope=2;
		displayName="AGM-65D";
		displayNameShort="AGM-65D";
		ammo="JAS_rhs_ammo_agm65D";
		initSpeed=0;
		maxLeadSpeed=220;
		count=1;
	};
	class JAS_rhs_mag_agm65D_x3: rhs_mag_agm65_x3
	{
		ammo="JAS_rhs_ammo_agm65D_x3";
	};
	class JAS_rhs_mag_agm65L: JAS_rhs_mag_agm65D
	{
		displayName="AGM-65L";
		displayNameShort="AGM-65L";
		ammo="JAS_rhs_ammo_agm65L";
	};
	class JAS_rhs_mag_agm65L_x3: JAS_rhs_mag_agm65D_x3
	{
		ammo="JAS_rhs_ammo_agm65L_x3";
	};
	class JAS_rhs_mag_agm65G: JAS_rhs_mag_agm65D
	{
		displayName="AGM-65G";
		displayNameShort="AGM-65G";
		ammo="JAS_rhs_ammo_agm65G";
	};
};

class cfgWeapons
{
	class rhs_weap_agm65;
	class RHS_weap_gau8;
	class JAS_RHS_weap_gau8 : RHS_weap_gau8
	{
		magazines[] = {"JAS_rhs_mag_GAU8"};
	};
	class JAS_rhs_weap_agm65D: rhs_weap_agm65
	{
		displayName="AGM-65D Maverick";
		displayNameMagazine="AGM-65D Maverick";
		shortNameMagazine="AGM-65D";
		missileLockCone = 65;
		magazines[]=
		{
			"JAS_rhs_mag_agm65D",
			"JAS_rhs_mag_agm65D_x3"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		weaponSoundEffect="DefaultRifle";
		weaponLockDelay=3;
		textureType="semi";
		minRange=300;
		minRangeProbab=0.25;
		midRange=2500;
		midRangeProbab=0.9;
		maxRange=9000;
		maxRangeProbab=0.01;
	};
	class JAS_rhs_weap_agm65L: JAS_rhs_weap_agm65D
	{
		displayName="AGM-65L Maverick";
		displayNameMagazine="AGM-65L Maverick";
		shortNameMagazine="AGM-65L";
		magazines[]=
		{
			"JAS_rhs_mag_agm65L",
			"JAS_rhs_mag_agm65L_x3"
		};
	};
	class JAS_rhs_weap_agm65G: JAS_rhs_weap_agm65D
	{
		displayName="AGM-65G Maverick";
		displayNameMagazine="AGM-65G Maverick";
		shortNameMagazine="AGM-65G";
		magazines[]=
		{
			"JAS_rhs_mag_agm65G"
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
	class RHS_A10;
	class JAS_RHS_B_A10A_USA : RHS_A10
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "A-10A Thunderbolt II";
		author = "RHS/-{GOL}-Jason";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_PHANTOM";
		expansion = 3;
		editorPreview = "\ARMA3_CUP_Enhancement_RHS\UI\editorpreview\USA10.jpg";
		forceInGarage = 1;
		//fir_a10RHSUS_custom_skin=1;
		//fir_a10RHSUS_custom_name="A-10 US Army Standard Grey";
		//fir_a10RHSUS_custom_code="JAS_RHS_A10_USA";
		//fir_a10RHSUS_custom_preview_pic="\ARMA3_RHS_Enhancement_A10\UI\preview\USGrey.paa";
		weapons[] =
		{
			"JAS_RHS_weap_gau8",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			/*
			"FIR_Empty_1rnd_M",				// not displayed -> suspect should be right outboard
			"FIR_Empty_1rnd_M",				// right midline
			"FIR_Empty_1rnd_M",				// right inboard
			"FIR_Empty_1rnd_M",				// right belly outer
			"FIR_Empty_1rnd_M",				// left belly outer
			"FIR_Empty_1rnd_M",				// belly centre
			"FIR_Empty_1rnd_M",				// right belly inner
			"FIR_Empty_1rnd_M",				// left belly inner
			"FIR_Empty_1rnd_M",				// left inboard
			"FIR_Empty_1rnd_M",				// left midline
			"FIR_Empty_1rnd_M",				// not displayed -> suspect should be left outboard -> hard coded to winder dual rack?
			// Proxies start here?
			"FIR_Empty_1rnd_M",				// right outboard?
			"FIR_Empty_1rnd_M",				// Winder proxy
			"FIR_Empty_1rnd_M",				// Winder proxy
			"FIR_Empty_1rnd_M",				// not displayed
			"FIR_Empty_1rnd_M",				// not displayed
			"FIR_Empty_1rnd_M",				// not displayed
			"FIR_Empty_1rnd_M",				// not displayed
			"FIR_Empty_1rnd_M",				// not displayed
			"FIR_Empty_1rnd_M",				// not displayed
			"FIR_Empty_1rnd_M",				// right midline? 
			*/
			//"rhs_mag_1000Rnd_30x173_mixed",
			"JAS_rhs_mag_GAU8",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
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
				statement = "this execVM ""\ARMA3_CUP_Enhancement_RHS\sqs\loadout\A10J_GUI_Open.sqf""";
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
			class SAFEMODE
			{
				displayName="<t color='#00FF7F'>MASTERSAFE</t>";
				condition="(call rhsusf_fnc_findPlayer) in this";
				statement="(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), 0];";
				position="";
				radius=10;
				priority=10.5;
				onlyforplayer=1;
				showWindow=0;
				shortcut="user13";
				hideOnUse=1;
			};
		};
		class EventHandlers
		{
			Init = "[_this select 0] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\initSEAD.sqf"";";
			fired = "fcs = [_this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\init\fcs.sqf"";_this call RHS_fnc_a10_shake;";
			getout="[_this select 0, _this select 2,'rhs_a10_canopy'] call rhs_fnc_ACESII_seatEjection";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
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
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class JAS_RHS_A10_Loadout_Module: Module_F
	{
		scope=2;
		author = "-{GOL}-Jason";
		displayName="A-10 Loadout Module";
		category="ObjectModifiers";
		function="JAS_fnc_RHS_A10_Loadout";
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