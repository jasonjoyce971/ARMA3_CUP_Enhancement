class CfgPatches
{
	class ARMA3_CUP_Enhancement_StrykerMCV
	{
		units[]=
		{
			"JAS_CUP_B_M1129_MC_MK19_Desert",
			"JAS_CUP_B_M1129_MC_MK19_Desert_Slat",
			"JAS_CUP_B_M1129_MC_MK19_Woodland",
			"JAS_CUP_B_M1129_MC_MK19_Woodland_Slat"
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
		name="Stryker Mortar Carrier";
		author="-{GOL}-Jason";
		url="https://github.com/jasonjoyce971/ARMA3_CUP_Enhancement#arma3_cup_enhancement";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ARMA3_CUP_Enhancement_StrykerMCV
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_StrykerMCV"
			};
		};
	};
};
class CfgVehicles
{
	class CUP_B_M1126_ICV_MK19_Desert;
	class CUP_B_M1129_MC_MK19_Desert;
	class CUP_B_M1129_MC_MK19_Desert_Slat;
	class CUP_B_M1129_MC_MK19_Woodland;
	class CUP_B_M1129_MC_MK19_Woodland_Slat;
	class JAS_CUP_B_M1129_MC_MK19_Desert: CUP_B_M1126_ICV_MK19_Desert
	{
		author="-{GOL}-Jason";
		class Turrets//: Turrets
		{
			class MainTurret//: MainTurret
			{
				weapons[]=
				{
					"mortar_82mm"
				};
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				soundServo[]=
				{
					"\CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\sound\servo3",
					"db-35",
					1
				};
				magazines[]=
				{
					"8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_Smoke_white",
					"8Rnd_82mm_Mo_Flare_white"
				};
				memoryPointGunnerOptics="gunnerview";
				gunnerName="Mortar Operator";
				forcehidegunner=1;
				visionMode[]={};
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minElev=-5;
				maxElev=35;
				initElev=0;
				gunBeg="muzzle";
				gunEnd="chamber";
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				soundAttenuationTurret="OpenCarAttenuation";
				elevationMode=1;

				initCamElev=0;
				minCamElev=-35;
				maxCamElev=35;
				cameraDir="look";
				discreteDistance[]={100,200,300,400,500,700,1000,1600,2000,2400,2800};
				discreteDistanceCameraPoint[]=
				{
					"eye"
				};
				discreteDistanceInitIndex=5;
				turretInfoType="RscWeaponRangeArtillery";
				gunnerForceOptics=0;
				gunnerOpticsModel="\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				class ViewOptics//: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.17399999;
					minFov=0.0077777999;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
			class ObsTurret//: ObsTurret
			{
				gunnerName="Commander";
				gunnerForceOptics=1;
				memoryPointGunnerOptics="commanderview";
			};
		};
	};
	class JAS_CUP_B_M1129_MC_MK19_Desert_Slat: CUP_B_M1129_MC_MK19_Desert
	{
		author="-{GOL}-Jason";
		displayName="M1129 MC MK19 CROWS (Desert - Slat)";
		armor=335;
		class AnimationSources//: AnimationSources
		{
			class HideSlat_Desert
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1129_MC_MK19_Desert_Slat.jpg";
	};
	class JAS_CUP_B_M1129_MC_MK19_Woodland: CUP_B_M1129_MC_MK19_Desert
	{
		author="-{GOL}-Jason";
		displayName="M1129 MC MK19 CROWS (Woodland)";
		HiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo10",
			"camo8",
			"camoDefault"
		};
		HiddenSelectionsTextures[]=
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_mortar_des_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1129_MC_MK19_Woodland.jpg";
	};
	class JAS_CUP_B_M1129_MC_MK19_Woodland_Slat: CUP_B_M1129_MC_MK19_Woodland
	{
		author="-{GOL}-Jason";
		displayName="M1129 MC MK19 CROWS (Woodland - Slat)";
		armor=335;
		class AnimationSources//: AnimationSources
		{
			class HideSlat_Woodland
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1129_MC_MK19_Woodland_Slat.jpg";
	};
};