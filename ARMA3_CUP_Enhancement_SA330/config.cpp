class CfgPatches
{
	class ARMA3_CUP_Enhancement_SA330
	{
		units[]=
		{
			"JAS_CUP_B_SA330_Puma_HC1_BAF",
			"JAS_CUP_B_SA330_Puma_HC2_BAF",
			"JAS_CUP_I_SA330_Puma_HC1_RACS",
			"JAS_CUP_I_SA330_Puma_HC2_RACS",
			"JAS_CUP_B_SA330_Puma_HC1_AAC",
			"JAS_CUP_B_SA330_Puma_HC2_AAC",
			"JAS_CUP_I_SA330_Puma_HC1_AAC",
			"JAS_CUP_I_SA330_Puma_HC2_AAC"
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
		class ARMA3_CUP_Enhancement_SA330
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_SA330"
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
			directory = "ARMA3_CUP_Enhancement_SA330\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_SA330\presentation\picture.paa";
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
		class SA330
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "SA-330 Puma";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Puma is the eternal bridsmaid of helicopter fleets around the world. Often forgotten about while people focus on its more famous stablemates, the Puma has quietly been transporting men for over 40 years in most theatres of war.<br/><br/>Factions:<br/><br/>%2United Kingdom<br/>%2Royal Army Corps of Sahrani";
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
	class JAS_CUP_SA330_Base: Helicopter_Base_H
	{
		scope=0;
		displayName="SA-330J Puma";
		model="\cup\airvehicles\cup_airvehicles_sa330\OFrP_Puma_CE";
		author="Operation Frenchpoint (IkåR)";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "ARMA3_CUP_Enhancement_SA330\rotorLib\RTD_Puma.xml";
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
		class mfd
		{
		};
		AGM_FastRoping=1;
		AGM_FastRoping_Positions[]=
		{
			{1.186,2.332,-0.69999999}
		};
		class MarkerLights
		{
			class RedStill
			{
				name="cerveny pozicni";
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
				name="zeleny pozicni";
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
			class WhiteBlinking
			{
				name="cerveny pozicni blik";
				color[]={0.89999998,0.15000001,0.1};
				intensity=50;
				ambient[]={0.090000004,0.015,0.0099999998};
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
		};
		tf_RadioType_api="tf_anarc210";
		tf_hasLRradio_api=1;
		tf_isolatedAmount_api=0.2;
		slingLoadMemoryPoint="slingLoad0";
		slingLoadMaxCargoMass=7000;
		slingLoadOperator=1;
		liftForceCoef=2.5;
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
		memoryPointDriverOptics="slingCamera";
		hideWeaponsCargo=1;
		transportSoldier=12;
		typicalCargo[]={};
		driverIsCommander=1;
		hasGunner=0;
		gunnerCanSee="31+32";
		irscanrangemax=2000;
		irscanrangemin=500;
		irscantoeyefactor=2;
		gunnerUsesPilotView=0;
		driverInAction="CUP_UH60_Pilot";
		driverAction="CUP_UH60_Pilot";
		cargoAction[]=
		{
			"CUP_UH60_Cargo02"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		driveOnComponent[]=
		{
			"ofrp_puma_train_d",
			"ofrp_puma_train_g",
			"ofrp_puma_train_av"
		};
		picture="\cup\airvehicles\cup_airvehicles_sa330\ico\vehicules\pic_puma.paa";
		icon="\cup\airvehicles\cup_airvehicles_sa330\ico\vehicules\ico_puma.paa";
		mapSize=15;
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
		hiddenselections[]=
		{
			"XXX"
		};
		armor=40;
		threat[]={0.80000001,0.5,0.1};
		supplyRadius=2.5;
		weapons[]=
		{
			"FIR_CMLauncher"
		};
		magazines[]=
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
		radarType=4;
		lockDetectionSystem="8 + 4";
		incommingMisslieDetectionSystem=16;
		maxSpeed=280;
		fuelCapacity=1955;
		gearRetracting=1;
		accuracy=1.5;
		castDriverShadow=1;
		castCargoShadow=1;
		castGunnerShadow=1;
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		memoryPointLMissile="L strela";
		memoryPointRMissile="P strela";
		memoryPointLRocket="L raketa";
		memoryPointRRocket="P raketa";
		selectionFireAnim="zasleh";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		dammageHalf[]={};
		dammageFull[]={};
		class Reflectors
		{
			class Left
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				brightness=1;
				intensity=100000;
				useFlare=1;
				flareSize=1.5;
				flareMaxDistance=500;
			};
			class Right
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=1;
				brightness=1;
				intensity=100000;
				useFlare=1;
				flareSize=1.5;
				flareMaxDistance=500;
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
		};
		class AnimationSources
		{
			class ofrp_instrument_01
			{
				source="user";
				animperiod=0.1;
				initphase=0;
			};
			class ofrp_instrument_02
			{
				source="user";
				animperiod=0.1;
				initphase=0;
			};
			class ofrp_instrument_03
			{
				source="user";
				animperiod=0.1;
				initphase=0;
			};
			class ofrp_instrument_04
			{
				source="user";
				animperiod=0.1;
				initphase=0;
			};
			class ofrp_instrument_05
			{
				source="user";
				animperiod=0.1;
				initphase=0;
			};
			class ofrp_puma_porte_droite
			{
				source="user";
				animperiod=2;
				initphase=1;
			};
			class ofrp_puma_porte_gauche
			{
				source="user";
				animperiod=2;
				initphase=1;
			};
		};
		class Library
		{
			libTextDesc="$STR_OFrP_LIB_Puma";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00e.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00e_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00e_destruc.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_destruc.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00r.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00r_damage.rvmat",
				"cup\airvehicles\cup_airvehicles_sa330\data\330_skin00r_destruc.rvmat"
			};
		};
	};
	class JAS_CUP_B_SA330_Puma_HC1_BAF: JAS_CUP_SA330_Base
	{
		scope=2;
		displayName="SA-330J Puma HC1";
		model="\cup\airvehicles\cup_airvehicles_sa330\OFrP_Puma_CE";
		hiddenSelections[]=
		{
			"_OFrP_330_skin01"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_1.paa"
		};
		side=1;
		crew="CUP_B_BAF_Pilot_DDPM";
		faction="CUP_B_GB";
		author="CUP/OFrP (IkåR)/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		driverInAction="CUP_UH60_Pilot";
		driverAction="CUP_UH60_Pilot";
		hideWeaponsCargo=1;
		transportSoldier=12;
		cargoAction[]=
		{
			"CUP_UH60_Cargo02"
		};
		picture="\cup\airvehicles\cup_airvehicles_sa330\ico\vehicules\pic_puma.paa";
		icon="\cup\airvehicles\cup_airvehicles_sa330\ico\vehicules\ico_puma.paa";
		enableSweep=0;
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC1_RAF.jpg";
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				primaryGunner=0;
				gunnerForceOptics=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				weapons[]={};
				magazines[]={};
				isCopilot=1;
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				memoryPointGunnerOptics="";
				gunnerName="Co-Pilot";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				priority=4;
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				slingLoadOperator=1;
				turretCanSee="1 + 2 + 4 + 8 + 16";
				class ViewGunner: ViewPilot
				{
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo right";
				memoryPointsGetInGunnerDir="pos cargo dir right";
				gunnerName="Passenger (Right Seat)";
				proxyIndex=13;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_right_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo left";
				memoryPointsGetInGunnerDir="pos cargo dir left";
				gunnerName="Passenger (Left Seat)";
				proxyIndex=14;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_left_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
		};
		class UserActions
		{
			class OpenRdoor
			{
				displayName="<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_droite"" > 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_droite"",0];";
			};
			class CloseRdoor
			{
				displayName="<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_droite"" < 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_droite"",1];";
			};
			class OpenLdoor
			{
				displayName="<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_gauche"" > 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_gauche"",0];";
			};
			class CloseLdoor
			{
				displayName="<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_gauche"" < 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_gauche"",1];";
			};
		};
	};
	class JAS_CUP_B_SA330_Puma_HC2_BAF: JAS_CUP_B_SA330_Puma_HC1_BAF
	{
		crew="CUP_B_BAF_Pilot_DDPM";
		model="\cup\airvehicles\cup_airvehicles_sa330\OFrP_Puma_VE";
		author="Community Upgrade Project/OFrP (IkåR)/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC2_RAF.jpg";
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				primaryGunner=0;
				gunnerForceOptics=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				weapons[]={};
				magazines[]={};
				isCopilot=1;
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				memoryPointGunnerOptics="";
				gunnerName="Co-Pilot";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				priority=4;
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				slingLoadOperator=1;
				turretCanSee="1 + 2 + 4 + 8 + 16";
				class ViewGunner: ViewPilot
				{
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo right";
				memoryPointsGetInGunnerDir="pos cargo dir right";
				gunnerName="Passenger (Right Seat)";
				proxyIndex=13;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_right_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo left";
				memoryPointsGetInGunnerDir="pos cargo dir left";
				gunnerName="Passenger (Left Seat)";
				proxyIndex=14;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_left_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
		};
		displayName="SA-330J Puma HC2";
		hiddenSelections[]=
		{
			"_OFrP_330_skin01"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_1.paa"
		};
	};
	class JAS_CUP_I_SA330_Puma_HC1_RACS: JAS_CUP_B_SA330_Puma_HC1_BAF
	{
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=2;
		crew="CUP_I_RACS_Pilot";
		faction="CUP_I_RACS";
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC1_RACS.jpg";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_racs.paa"
		};
	};
	class JAS_CUP_I_SA330_Puma_HC2_RACS: JAS_CUP_B_SA330_Puma_HC2_BAF
	{
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=2;
		crew="CUP_I_RACS_Pilot";
		faction="CUP_I_RACS";
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC2_RACS.jpg";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_racs.paa"
		};
	};
	class JAS_CUP_B_SA330_Puma_HC1_AAC: JAS_CUP_SA330_Base
	{
		scope=2;
		displayName="SA-330J Puma HC1";
		model="\cup\airvehicles\cup_airvehicles_sa330\OFrP_Puma_CE";
		hiddenSelections[]=
		{
			"_OFrP_330_skin01"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_1.paa"
		};
		side=1;
		crew="CUP_B_BAF_Pilot_DDPM";
		faction = "GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC1_RAF.jpg";
		author="CUP/OFrP (IkåR)/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		driverInAction="CUP_UH60_Pilot";
		driverAction="CUP_UH60_Pilot";
		hideWeaponsCargo=1;
		transportSoldier=12;
		cargoAction[]=
		{
			"CUP_UH60_Cargo02"
		};
		picture="\cup\airvehicles\cup_airvehicles_sa330\ico\vehicules\pic_puma.paa";
		icon="\cup\airvehicles\cup_airvehicles_sa330\ico\vehicules\ico_puma.paa";
		enableSweep=0;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				primaryGunner=0;
				gunnerForceOptics=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				weapons[]={};
				magazines[]={};
				isCopilot=1;
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				memoryPointGunnerOptics="";
				gunnerName="Co-Pilot";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				priority=4;
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				slingLoadOperator=1;
				turretCanSee="1 + 2 + 4 + 8 + 16";
				class ViewGunner: ViewPilot
				{
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo right";
				memoryPointsGetInGunnerDir="pos cargo dir right";
				gunnerName="Passenger (Right Seat)";
				proxyIndex=13;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_right_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo left";
				memoryPointsGetInGunnerDir="pos cargo dir left";
				gunnerName="Passenger (Left Seat)";
				proxyIndex=14;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_left_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
		};
		class UserActions
		{
			class OpenRdoor
			{
				displayName="<t color='#FF0000'>Open Right Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_droite"" > 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_droite"",0];";
			};
			class CloseRdoor
			{
				displayName="<t color='#FF0000'>Close Right Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_droite"" < 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_droite"",1];";
			};
			class OpenLdoor
			{
				displayName="<t color='#FF0000'>Open Left Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_gauche"" > 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_gauche"",0];";
			};
			class CloseLdoor
			{
				displayName="<t color='#FF0000'>Close Left Door</t>";
				displayNameDefault="";
				position="zamerny";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase ""ofrp_puma_porte_gauche"" < 0.5 AND Alive(this)";
				statement="this animate [""ofrp_puma_porte_gauche"",1];";
			};
		};
	};
	class JAS_CUP_B_SA330_Puma_HC2_AAC: JAS_CUP_B_SA330_Puma_HC1_AAC
	{
		crew="CUP_B_BAF_Pilot_DDPM";
		model="\cup\airvehicles\cup_airvehicles_sa330\OFrP_Puma_VE";
		author="Community Upgrade Project/OFrP (IkåR)/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC2_RAF.jpg";
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				primaryGunner=0;
				gunnerForceOptics=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				weapons[]={};
				magazines[]={};
				isCopilot=1;
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				memoryPointGunnerOptics="";
				gunnerName="Co-Pilot";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				priority=4;
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				slingLoadOperator=1;
				turretCanSee="1 + 2 + 4 + 8 + 16";
				class ViewGunner: ViewPilot
				{
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo right";
				memoryPointsGetInGunnerDir="pos cargo dir right";
				gunnerName="Passenger (Right Seat)";
				proxyIndex=13;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_right_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_inside_4";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo left";
				memoryPointsGetInGunnerDir="pos cargo dir left";
				gunnerName="Passenger (Left Seat)";
				proxyIndex=14;
				maxElev=15;
				minElev=-60;
				maxTurn=70;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_left_lynx";
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
		};
		displayName="SA-330J Puma HC2";
		hiddenSelections[]=
		{
			"_OFrP_330_skin01"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_1.paa"
		};
	};
	class JAS_CUP_I_SA330_Puma_HC1_AAC: JAS_CUP_B_SA330_Puma_HC1_BAF
	{
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=2;
		crew="CUP_I_RACS_Pilot";
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC1_RACS.jpg";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_racs.paa"
		};
	};
	class JAS_CUP_I_SA330_Puma_HC2_AAC: JAS_CUP_I_SA330_Puma_HC1_AAC
	{
		author="CUP/-{GOL}-Jason";
		dlc="CUP_Vehicles";
		side=2;
		crew="CUP_I_RACS_Pilot";
		faction = "GOL_AAC_INDEP";
		editorSubcategory="GOL_AAC_RAVEN";
		editorPreview="\ARMA3_CUP_Enhancement_SA330\UI\editorpreview\HC2_RACS.jpg";
		typicalCargo[]=
		{
			"CUP_I_RACS_Pilot",
			"CUP_I_RACS_Pilot"
		};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_racs.paa"
		};
	};
};
