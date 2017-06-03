class CfgPatches
{
	class ARMA3_CUP_Enhancement_Weapons
	{
		units[]=
		{
			
		};
		weapons[]=
		{
			"EAWS_BrimstoneLauncher",
			"EAWS_SCALPLauncher",
			"JAS_FIR_AGM65",
			"JAS_CUP_Vmlauncher_S8_veh",
			"JAS_CUP_Vmlauncher_S13_veh",
			"JAS_CUP_Vblauncher_Fab250_veh",
			"JAS_CUP_Vmlauncher_AT16_veh"
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
			"CUP_AirVehicles_F35",
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
		class ARMA3_CUP_Enhancement_Weapons
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_Weapons"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	/*class ProxyJAS_R77 : ProxyWeapon
	{
		model = "\ARMA3_CUP_Enhancement_Weapons\R77\R77.p3d";
		simulation = "maverickweapon";
	};*/
	class ProxySCALP_proxy : ProxyWeapon
	{
		displayName = "SCALP";
		model = "\ARMA3_CUP_Enhancement_Weapons\wep\SCALP.p3d";
		simulation = "maverickweapon";
	};
	class ProxySCALP : ProxyWeapon
	{
		displayName = "SCALP";
		model = "\ARMA3_CUP_Enhancement_Weapons\wep\SCALP_fly.p3d";
		simulation = "maverickweapon";
	};
	class Proxybrimstone_proxy : ProxyWeapon
	{
		displayName = "B-AGM";
		model = "\ARMA3_CUP_Enhancement_Weapons\wep\brimstone.p3d";
		simulation = "maverickweapon";
	};
	class Proxybrimstone : ProxyWeapon
	{
		displayName = "B-AGM";
		model = "\ARMA3_CUP_Enhancement_Weapons\wep\brimstone_fly.p3d";
		simulation = "maverickweapon";
	};
	class ProxyAGM114Hellfire : ProxyWeapon
	{
		displayName = "AGM-114 Hellfire";
		model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\weapons\AGM114\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAGM122 : ProxyWeapon
	{
		displayName = "AGM-122 Sidearm";
		model = "\FIR_AirWeaponSystem_US\data\AIM9L\AIM9L";
		simulation = "maverickweapon";
	};
};
class CfgCloudlets 
{
	access = 0;

	class Default ;
	class JAS_FIR_AWS_SmokeShellWhite : Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {
				"colorR", "colorG", "colorB", "colorA"
		};
		sizeCoef = 2;
		position[] = {
				0, 0, 0
		};
		interval = "0.03";
		circleRadius = 0;
		circleVelocity[] = {
				0, 0, 0
		};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.100000;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "60";
		moveVelocity[] = {
				0.200000, 0.100000, 0.100000
		};
		rotationVelocity = 1;
		weight = 6.4;
		volume = 5;
		rubbing = 0.050000;
		size[] = {
				2.500000, 6.5, 18.8
		};
		color[] = {
				{0.600000, 0.600000, 0.600000, 0.200000}, {0.600000, 0.600000, 0.600000, 0.050000}, {0.600000, 0.600000, 0.600000, 0}
		};
		animationSpeed[] = {
				1.500000, 0.500000
		};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.040000;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {
				0, 0, 0
		};
		MoveVelocityVar[] = {
				0.250000, 0.250000, 0.250000
		};
		rotationVelocityVar = 20;
		sizeVar = 0.500000;
		colorVar[] = {
				0, 0, 0, 0.350000
		};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class JAS_FIR_AWS_SmokeShellWhite2 : JAS_FIR_AWS_SmokeShellWhite
	{
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 4;
		particleFSLoop = 0;
		color[] = {
				{0.600000, 0.600000, 0.600000, 1}, {0.600000, 0.600000, 0.600000, 0.500000}, {0.600000, 0.600000, 0.600000, 0}
		};
	};	
};
class JAS_FIR_AWS_SmokeShellWhiteEffect
{

	class JAS_FIR_AWS_SmokeShellWhite 
	{
		simulation = "particles";
		type = "JAS_FIR_AWS_SmokeShellWhite";
		position[] = {
				0, 0, 0
		};
		intensity = 1;
		interval = 1;
	};

	class JAS_FIR_AWS_SmokeShellWhite2
	{
		simulation = "particles";
		type = "JAS_FIR_AWS_SmokeShellWhite2";
		position[] = {
				0, 0, 0
		};
		intensity = 1;
		interval = 1;
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

class cfgAmmo
{
	class MissileBase;
	class M_Air_AA;
	class BulletBase;
	class M_AT;
	class Bo_GBU12_LGB;
	class RocketBase;
	class Bo_Mk82;
	class SmokeShell;
	class B_30mm_HE;
	class Missile_AGM_02_F;
	class FIR_AIM120;
	class JAS_FIR_AIM120B : FIR_AIM120
	{
		airLock = 2;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 90;
		missileLockCone = 80;
		missileLockMaxDistance = 100000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 1702;
		trackLead = 1;
		weaponLockSystem = 8;
        //maxspeed = 900;
		maxspeed = 1372;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							maxRange = 100000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						componentType = "ActiveRadarSensorComponent";
						typeRecognitionDistance = 55000;
						maxGroundNoiseDistance = 200;
						color[] = {0,1,1,1};
						animDirection = "";
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	/*class JAS_R77 : M_Air_AA
	{
		model = "\ARMA3_CUP_Enhancement_Weapons\R77\R77.p3d";
		proxyShape ="\ARMA3_CUP_Enhancement_Weapons\R77\R77.p3d";
		hit = 300;
		indirectHit = 250;
		indirectHitRange = 5;
		fuseDistance = 800;
		weaponLockSystem = "8 + 16";
        timetoLive = 40;
		maneuvrability = 35;
		cmimmunity = 0.98;
		lockType = 0;
		airLock = 2;
		irLock = "true";
		laserLock = "false";
		initTime = 0.5;
		thrustTime = 20;
        maxspeed = 820;
		maxControlRange = 3800;
		trackOversteer = 1;
		trackLead = 1;
		thrust = 400;
		effectsMissile = "FIR_MissileEffect";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,1800};
		holdsterAnimValue = 1;
	};*/
	class JAS_B_20mm: BulletBase
	{
		hit=60;
		indirectHit=6;
		indirectHitRange=0.40000001;
		explosive=0.40000001;
		caliber=3.4000001;
		cost=30;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=0;
		typicalSpeed=1030;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			1.7782794,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			1.7782794,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			1.7782794,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
			1.7782794,
			1,
			1300
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		explosionSoundEffect="DefaultExplosion";
		airLock=2;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		airFriction=-0.00078;
		muzzleEffect="";
		class CamShakeExplode
		{
			power="(20*0.2)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((1 + 20^0.5)*8)";
		};
		class CamShakeHit
		{
			power=20;
			duration="((round (20^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(20^0.25)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class JAS_Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red.p3d";
		cost=20;
		hit=180;
		indirectHit=4;
		indirectHitRange=3;
		caliber=5;
		explosive=0.40000001;
		airlock=2;
		deflecting=5;
		airFriction=-0.00036000001;
		typicalSpeed=960;
		visibleFire=32;
		audibleFire=250;
		visibleFireTime=3;
		fuseDistance=10;
		dangerRadiusBulletClose=20;
		dangerRadiusHit=60;
		suppressionRadiusBulletClose=12;
		suppressionRadiusHit=24;
		tracerScale=2.5;
		tracerStartTime=0.1;
		tracerEndTime=4.6999998;
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ExploAmmoExplosionPlaneCAS";
		craterEffects="ExploAmmoCrater";
		soundSetSonicCrack[]=
		{
			"BulletSonicCrack_Gatling_SoundSet"
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
			3.1622777,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
			3.1622777,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
			3.1622777,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
			3.1622777,
			1,
			1300
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power="(30*0.2)";
			duration="((round (30^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((3 + 30^0.5)*8)";
		};
		class CamShakeHit
		{
			power=30;
			duration="((round (30^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(25^0.25)";
			duration="((round (25^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="";
			hitGlassArmored="";
			hitWood="ImpactWood";
			hitMetal="";
			hitMetalPlate="";
			hitBuilding="";
			hitPlastic="";
			hitRubber="";
			hitConcrete="";
			hitMan="";
			hitGroundSoft="";
			hitGroundHard="";
			hitWater="ImpactEffectsWater";
			hitVirtual="";
		};
	};
	class JAS_Cannon_30mm_HE_Plane_CAS_02_F: JAS_Gatling_30mm_HE_Plane_CAS_01_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green.p3d";
		hit=150;
		indirectHit=4;
		indirectHitRange=4;
		caliber=3;
		explosive=0.60000002;
	};
	class JAS_CUP_B_30mm_HE_Red_Tracer: B_30mm_HE
	{
		airLock=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class JAS_CUP_B_23mm_APHE_Tracer_Green: BulletBase
	{
		SoundSetExplosion[]=
		{
			"Shell19mm25mm_Exp_SoundSet"
		};
		hit=120;
		indirectHit=80;
		indirectHitRange=2;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=4;
		soundHit[]=
		{
			"CUP\Weapons\CUP_Weapons_Ammunition\23mm_AA\data\sounds\AZP85_explosion1",
			"db10",
			1,
			1500
		};
		explosive=0.5;
		airLock=2;
		cost=150;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		model="\a3\weapons_f\data\bullettracer\tracer_green";
		tracerScale=1.85;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
		airFriction=-0.00082399999;
		muzzleEffect="BIS_Effects_HeavyCaliber";
		caliber=3;
	};
	class JAS_B_25mm: BulletBase
	{
		hit=70;
		indirectHit=6;
		indirectHitRange=0.40000001;
		explosive=0.40000001;
		caliber=3.8;
		cost=20;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=1;
		typicalSpeed=1030;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		explosionSoundEffect="DefaultExplosion";
		airLock=2;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		airFriction=-0.00076000002;
		muzzleEffect="";
		class CamShakeExplode
		{
			power="(25*0.2)";
			duration="((round (25^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power=25;
			duration="((round (25^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(25^0.25)";
			duration="((round (25^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class JAS_CUP_B_30mm_HE_Red_Tracer_GAU8: BulletBase
	{
		SoundSetExplosion[]=
		{
			"Shell30mm40mm_Exp_SoundSet",
			"Shell30mm40mm_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		hit=90;
		airlock=2;
		indirectHit=15;
		indirectHitRange=4;
		explosive=0.80000001;
		caliber=2.5;
		cost=20;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2.5;
		tracerStartTime=0.1;
		tracerEndTime=2;
		nvgOnly=0;
		typicalSpeed=1030;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=4;
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_1",
			3.1622777,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_2",
			3.1622777,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_3",
			3.1622777,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_4",
			3.1622777,
			1,
			1800
		};
		soundHit5[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_5",
			3.1622777,
			1,
			1800
		};
		soundHit6[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_6",
			3.1622777,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.1,
			"soundHit5",
			0.15000001,
			"soundHit6",
			0.15000001
		};
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		airFriction=-0.00076000002;
		muzzleEffect="";
		class CamShakeExplode
		{
			power="(25 * 0.2)";
			duration="((round (25^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power=25;
			duration="((round (25^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(25^0.25)";
			duration="((round (25^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class JAS_CUP_B_25mm_HE_White_Tracer: BulletBase
	{
		SoundSetExplosion[]=
		{
			"Shell19mm25mm_Exp_SoundSet"
		};
		hit=30;
		indirectHit=8;
		indirectHitRange=3;
		explosive=0.80000001;
		caliber=1.4;
		cost=20;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=2.5;
		tracerStartTime=0.1;
		tracerEndTime=2;
		nvgOnly=0;
		typicalSpeed=1030;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=4;
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_1",
			3.1622777,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_2",
			3.1622777,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_3",
			3.1622777,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_4",
			3.1622777,
			1,
			1800
		};
		soundHit5[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_5",
			3.1622777,
			1,
			1800
		};
		soundHit6[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_6",
			3.1622777,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.1,
			"soundHit5",
			0.15000001,
			"soundHit6",
			0.15000001
		};
		explosionSoundEffect="DefaultExplosion";
		airLock=2;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		airFriction=-0.00076000002;
		muzzleEffect="";
		class CamShakeExplode
		{
			power="(25 * 0.2)";
			duration="((round (25^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power=25;
			duration="((round (25^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(25^0.25)";
			duration="((round (25^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((25^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class JAS_CUP_R_57mm_HE: RocketBase
	{
		SoundSetExplosion[]=
		{
			"RocketsLight_Exp_SoundSet",
			"RocketsLight_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		model="\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		proxyShape="\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		hit=150;
		indirectHit=40;
		indirectHitRange=12;
		cost=200;
		maxSpeed=580;
		thrustTime=1.1;
		thrust=450;
		sideAirFriction=0.15000001;
		fuseDistance=40;
		timeToLive=20;
		whistleDist=24;
	};
	class JAS_CUP_S5_Pod_Small_Dummy: Bo_GBU12_LGB
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="\CUP\Weapons\CUP_Weapons_Pods\UB16\CUP_UB16.p3d";
		proxyShape="\CUP\Weapons\CUP_Weapons_Pods\UB16\CUP_UB16.p3d";
	};
	class JAS_FIR_AWS_SmokeShell : SmokeShell
	{
		smokeColor[] = {1, 1, 1, 1};
		effectsSmoke = "JAS_FIR_AWS_SmokeShellWhiteEffect";	
	};
	class JAS_FIR_AWS_SmokeShell_Red : JAS_FIR_AWS_SmokeShell
	{
		smokeColor[] = {1, 0, 0, 1};
		effectsSmoke = "JAS_FIR_AWS_SmokeShellWhiteEffect";	
	};
	class JAS_FIR_AWS_SmokeShell_Orange : JAS_FIR_AWS_SmokeShell
	{
		smokeColor[] = {0.669700, 0.227500, 0.100530, 1};
		effectsSmoke = "JAS_FIR_AWS_SmokeShellWhiteEffect";	
	};
	class JAS_FIR_AWS_SmokeShell_Purple : JAS_FIR_AWS_SmokeShell
	{
		smokeColor[] = {0.434100, 0.138800, 0.414400, 1};
		effectsSmoke = "JAS_FIR_AWS_SmokeShellWhiteEffect";	
	};
	class JAS_FIR_Hydra_Rocket_Smoke_Ammo: RocketBase
	{
		simulation = "shotRocket";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
		effectsSmoke = "SmokeShellWhiteEffect";
		FIR_AWS_SMOKE_RKT = 1;
		FIR_AWS_SMOKE_RKT_COLOR = "WHITE";
	};
	class JAS_FIR_Hydra_Rocket_Smoke_Red_Ammo: RocketBase
	{
		simulation = "shotRocket";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
		effectsSmoke = "SmokeShellWhiteEffect";
		FIR_AWS_SMOKE_RKT = 1;
		FIR_AWS_SMOKE_RKT_COLOR = "RED";
	};
	class JAS_FIR_Hydra_Rocket_Smoke_Orange_Ammo: RocketBase
	{
		simulation = "shotRocket";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
		effectsSmoke = "SmokeShellWhiteEffect";
		FIR_AWS_SMOKE_RKT = 1;
		FIR_AWS_SMOKE_RKT_COLOR = "ORANGE";
	};
	class JAS_FIR_Hydra_Rocket_Smoke_Purple_Ammo: RocketBase
	{
		simulation = "shotRocket";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
		effectsSmoke = "SmokeShellWhiteEffect";
		FIR_AWS_SMOKE_RKT = 1;
		FIR_AWS_SMOKE_RKT_COLOR = "PURPLE";
	};
	class JAS_FIR_mk84: Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\mk82\mk84_gp";
		proxyshape = "\FIR_AirWeaponSystem_US\data\mk82\mk84_gp";
		hit = 30000;
		indirectHit = 28000;
		indirectHitRange = 60;
		airFriction=-7;
		sideAirFriction = 1;
		cost = 400;
		canlock = 0;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		trackOversteer = 1;
		trackLead = 0.950000;
		maneuvrability = 20;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		soundHit1[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_1",2.5118864,1,2400};
		soundHit2[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_2",2.5118864,1,2400};
		soundHit3[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_3",2.5118864,1,2400};
		soundHit4[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_1",2.5118864,1,2400};
		soundHit5[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_2",2.5118864,1,2400};
		whistleDist = 24;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		FIR_AWS_Crater = 3;	
	};
	class JAS_M_9K121_Vikhr_AT16_Scallion_AT: MissileBase
	{
		SoundSetExplosion[]=
		{
			"RocketsHeavy_Exp_SoundSet",
			"RocketsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		model="\CUP\Weapons\CUP_Weapons_Ammunition\AT1_Generic\CUP_AT1_fly.p3d";
		proxyShape="";
		hit=800;
		indirectHit=20;
		indirectHitRange=2;
		cost=10000;
		irLock=0;
		airLock=0;
		laserLock=1;
		manualControl=1;
		maxControlRange=8000;
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\explosion_antitank_1",
			5.6234131,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\explosion_antitank_2",
			5.6234131,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		effectsMissile = "FIR_MissileEffect2";
		initTime=0;
		trackOversteer=1;
		trackLead=1;
		timeToLive=23;
		maneuvrability=11;
		simulationStep=0.0020000001;
		sideAirFriction=0.039999999;
		maxSpeed=600;
		thrustTime=4;
		thrust=366;
		fuseDistance=50;
		whistleDist=4;
		weaponLockSystem="16 + 4";
		cmImmunity=0.94999999;
	};
	class JAS_FIR_CBU103 : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\CBU103\CBU103_Deploy";
		proxyshape = "\FIR_AirWeaponSystem_US\data\CBU103\CBU103";
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 1;
		CraterEffects="GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		FIR_AWS_Cluster = 1;
		FIR_AWS_GPS_Bomb_Guide = 1;
	};
	class JAS_M_Hellfire_Base: MissileBase
	{
		model="\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II_fly.p3d";
		proxyShape="\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II.p3d";
		hit=1100;
		indirectHit=20;
		indirectHitRange=2;
		cost=1000;
		maxSpeed=475;
		effectsMissile="missile2";
		effectsMissileInit="MissileDAR1";
		irLock=1;
		laserLock=1;
		lockType = 0;
		maxControlRange=8000;
		maneuvrability=7;
		weaponLockSystem="2 + 16";
		sideAirFriction=0.2;
		fuseDistance=200;
		initTime=0;
		thrustTime=3;
		thrust=180;
		timeToLive=40;
		whistleDist=4;
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		aiAmmoUsageFlags="128 + 256";
		ace_frag_enabled=1;
		ace_frag_classes[]=
		{
			"ACE_frag_medium",
			"ACE_frag_medium_HD"
		};
		ace_frag_metal=8000;
		ace_frag_charge=2400;
		ace_frag_gurney_c=2700;
		ace_frag_gurney_k="1/2";
	};
	class JAS_M_Hellfire_K: JAS_M_Hellfire_Base
	{
		hit=1400;
		indirectHit=200;
		indirectHitRange=4;
		irLock=0;
		laserLock=1;
		manualControl = 0; // Titan AT missile
		trackLead = 1; // Missile intercepts
		weaponLockSystem=4;
		canLock = 2;
	};
	class JAS_M_Hellfire_L: JAS_M_Hellfire_Base
	{
		hit=1400;
		indirectHit=200;
		indirectHitRange=4;
		irLock=1;
		laserLock=1;
		canLock = 2;
		airLock = 0;
		autoSeekTarget = 0;
		cameraViewAvailable = 1;
		lockType = 0;
		maneuvrability = 10;
		missileKeepLockedCone = 90;
		missileLockCone = 60;
		missileLockMaxDistance = 10000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 80;
		trackLead = 1;
		weaponLockSystem = 8;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent 
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 160;
						angleRangeVertical = 160;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "ActiveRadarSensorComponent ";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = 0;
						maxSpeedThreshold = 120;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 23;
						minSpeedThreshold = 27;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 5000;
						class AirTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent
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
	class JAS_M_Hellfire_N: JAS_M_Hellfire_Base
	{
		hit=1100;
		indirectHit=200;
		indirectHitRange=7;
		irLock=0;
		laserLock=1;
		manualControl = 0; // Titan AT missile
		trackLead = 1; // Missile intercepts
		weaponLockSystem=4;
		explosionEffects="BombExplosion";
		aiAmmoUsageFlags="64 + 128";
		canLock = 2;
	};
	class JAS_AGM122: M_Air_AA
	{
		model="\FIR_AirWeaponSystem_US\data\AIM9L\AIM9L";
		proxyShape="\FIR_AirWeaponSystem_US\data\AIM9L\AIM9L";
		hit=4000;
		indirectHit=4000;
		indirectHitRange=10;
		timetoLive=60;
		maneuvrability=60;
		airLock=0;
		irLock=0;
		laserLock=1;
		lockType = 0;
		canLock = 2;
		missileLockCone = 180;
		initTime=0.1;
		thrustTime=10;
		maxspeed=500;
		maxControlRange=2800;
		trackOversteer=1;
		trackLead=1;
		thrust=300;
		weaponLockSystem = 4;
		effectsMissile="FIR_MissileEffect2";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622777,
			1,
			1800
		};
		JAS_AWS_SIDEARM=1;
		/*class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent : SensorTemplateAntiRadiation
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 100;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 23;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 6000;
						class AirTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};*/
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AntiRadiationSensorComponent : SensorTemplateAntiRadiation
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "AntiRadiationSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 100;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 23;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 6000;
						class AirTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class JAS_CUP_R_70mm_Hydra_HE: RocketBase
	{
		SoundSetExplosion[]=
		{
			"RocketsLight_Exp_SoundSet",
			"RocketsLight_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		model="\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		proxyShape="\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		hit=150;
		indirectHit=40;
		indirectHitRange=12;
		cost=200;
		maxSpeed=720;
		thrustTime=1.0700001;
		thrust=900;
		sideAirFriction=0.1;
		timeToLive=20;
		fuseDistance=40;
		whistleDist=24;
	};
	class JAS_CUP_R_CRV7_FAT: JAS_CUP_R_70mm_Hydra_HE
	{
		model="\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		proxyShape="\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";
		timeToLive=20;
		maneuvrability=5;
		maxControlRange=2000;
		initTime=0.050000001;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=20;
		cost=2000;
		deflecting=5;
		hit=550;
		indirectHit=100;
		indirectHitRange=10;
		maxSpeed=720;
		thrustTime=1.0700001;
		thrust=900;
		sideAirFriction=0.1;
		fuseDistance=40;
		whistleDist=24;
		IrLock=1;
		laserLock=1;
		nvLock=1;
		missileLockCone = 60;
		lockType = 1;
		trackLead = 0;
		trackOversteer = 0.5;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
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
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class IRSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
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
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class NVSensorComponent 
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "NVSensorComponent ";
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
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_mk82_Snakeye: Bo_GBU12_LGB
	{
		model="\FIR_AirWeaponSystem_US\data\mk82\mk82_snakeye_Deploy";
		proxyshape="\FIR_AirWeaponSystem_US\data\mk82\mk82_snakeye";
		hit=5000;
		indirectHit=2500;
		indirectHitRange=25;
		airFriction=-4;
		sideAirFriction=1;
		cost=400;
		canlock=0;
		airLock=0;
		irLock=0;
		laserLock=0;
		trackOversteer=1;
		trackLead=0.94999999;
		maneuvrability=20;
		initTime=0;
		thrustTime=0;
		thrust=0;
		multiSoundHit[]=
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.2,
			"soundHit5",
			0.2
		};
		soundHit1[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_big_1",
			2.5118864,
			1,
			2400
		};
		soundHit2[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_big_2",
			2.5118864,
			1,
			2400
		};
		soundHit3[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_big_3",
			2.5118864,
			1,
			2400
		};
		soundHit4[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_shell_1",
			2.5118864,
			1,
			2400
		};
		soundHit5[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_shell_2",
			2.5118864,
			1,
			2400
		};
		whistleDist=24;
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
		FIR_AWS_LowDrag=1;
		FIR_AWS_Crater=1;
	};
	class JAS_CUP_M_3M11_AT2_Falanga_AT: MissileBase
	{
		SoundSetExplosion[]=
		{
			"RocketsMedium_Exp_SoundSet",
			"RocketsMedium_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		model="\CUP\Weapons\CUP_Weapons_Ammunition\3M11_Falanga_AT2\CUP_3M11_Falanga_AT2_fly.p3d";
		proxyShape="\CUP\Weapons\CUP_Weapons_Ammunition\3M11_Falanga_AT2\CUP_3M11_Falanga_AT2_proxy.p3d";
		hit=400;
		indirectHit=10;
		indirectHitRange=1;
		deflecting=0;
		cost=7000;
		irLock=1;
		manualControl=1;
		maxControlRange=3750;
		trackOversteer=0.75;
		trackLead=0.75;
		maneuvrability=3;
		simulationStep=0.0049999999;
		sideAirFriction=0.075999998;
		initTime=0.15099999;
		thrustTime=1.45;
		thrust=144;
		maxSpeed=230;
		timeToLive=26;
		effectsMissile="missile2";
		whistleDist=2;
		weaponLockSystem="16 + 1";
		cmImmunity=0.80000001;
		class CamShakeExplode
		{
			power="(55 * 0.2)";
			duration="((round (55^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power=110;
			duration="((round (110^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(60^0.25)";
			duration="((round (60^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class JAS_FIR_RBK250: Bo_GBU12_LGB
	{
		model="\CUP\Weapons\CUP_Weapons_Ammunition\FAB250\CUP_FAB250.p3d";
		proxyshape="\CUP\Weapons\CUP_Weapons_Ammunition\FAB250\CUP_FAB250.p3d";
		canlock=0;
		airLock=0;
		irLock=0;
		laserLock=0;
		hit=100;
		indirectHit=100;
		indirectHitRange=1;
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
		FIR_AWS_Cluster=1;
	};
	class JAS_FIR_KH25: M_Air_AA
	{
		model="\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_fly_F.p3d";
		proxyShape="\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
		hit=4000;
		indirectHit=4000;
		indirectHitRange=10;
		timetoLive=60;
		maneuvrability=60;
		airLock=0;
		irLock=0;
		laserLock=1;
		initTime=0.1;
		thrustTime=10;
		maxspeed=500;
		maxControlRange=2800;
		trackOversteer=1;
		trackLead=1;
		thrust=300;
		effectsMissile="FIR_MissileEffect2";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622777,
			1,
			1800
		};
		FIR_AWS_HARM=1;
	};
	class JAS_CUP_GSH23_gunpod_Dummy : Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\GSH23\CUP_GSH23_gunpod.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\GSH23\CUP_GSH23_gunpod.p3d";
	};
	class JAS_CUP_Igla_Rack_Twin_Dummy : Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\Igla_pod\CUP_igla_rack_twin.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\Igla_pod\CUP_igla_rack_twin.p3d";
	};
	class JAS_CUP_Bo_KAB250_LGB : Bo_GBU12_LGB
	{
		model = "\a3\weapons_f_epc\Ammo\Bomb_03_F.p3d";
		proxyShape = "\a3\weapons_f_epc\Ammo\Bomb_03_F.p3d";
	};
	class JAS_CUP_FAB250 : Bo_Mk82
	{
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\FAB250\CUP_FAB250.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\FAB250\CUP_FAB250.p3d";
		maverickweapon = 1;
	};
	class JAS_FIR_Zuni_Rocket_Ammo : RocketBase
	{
		simulation = "shotRocket";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		hit = 900;
		indirectHit = 250;
		indirectHitRange = 25;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
	};
	class JAS_CUP_S13_Pod_Heli_Dummy : Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\S13\CUP_S13_Launcher.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\S13\CUP_S13_Launcher.p3d";
	};
	class JAS_CUP_AGM_Rack_Dummy : Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\AGM114HellfirePod\CUP_AGM114HellfirePod.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\AGM114HellfirePod\CUP_AGM114HellfirePod.p3d";
	};
	class M_CRV7_AT : M_AT
	{
		model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\Weapons\70mmRocket\70mmRocket.p3d";
		hit = 400;
		indirectHit = 60;
		indirectHitRange = 15;
		cost = 500;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
		irlock = 0;
		laserlock = 0;
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
	};
	class CUP_B_20mm_AP : BulletBase
	{
		hit = 40;
		indirectHit = 10;
		indirectHitRange = 2;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.60000002;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00076999998;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 2.3299999;
	};
	class M_Hellfire_AT : MissileBase
	{
		model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\weapons\AGM114\AGM114Hellfire";
		proxyShape = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\weapons\AGM114\AGM114Hellfire_proxy";
		hit = 1100;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 1000;
		maxSpeed = 425;
		irLock = 1;
		laserLock = 1;
		airLock = 0;
		manualControl = 0;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 9;
		timeToLive = 20;
		simulationStep = 0.0099999998;
		sideAirFriction = 0.2;
		initTime = 0;
		thrustTime = 3.25;
		thrust = 130;
		fuseDistance = 5;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		weaponLockSystem = "2 + 16";
		whistleDist = 4;
	};
	class M_Hellfire_K_AT : M_Hellfire_AT
	{
		irlock = 0;
		hit = 1400;
		indirecthit = 200;
		indirecthitrange = 4;
		timetolive = 40;
		weaponlocksystem = 4;
		manualcontrol = 0;
		lockType = 0;
		maneuvrability = 7;
		laserLock = 1;
		maxControlRange = 8000;
		maxSpeed = 1500;
		nameSound = "missiles";
		cost = 1000;
	};
	class M_Hellfire_N_AT : M_Hellfire_AT
	{
		irlock = 0;
		hit = 1100;
		indirecthit = 200;
		indirecthitrange = 7;
		timetolive = 40;
		weaponlocksystem = 4;
		manualcontrol = 0;
		lockType = 0;
		maneuvrability = 7;
		laserLock = 1;
		maxControlRange = 8000;
		maxSpeed = 1500;
		explosionEffects = "BombExplosion";
		cost = 1000;
	};
	class M_Hellfire_L_AT : M_Hellfire_AT
	{
		hit = 1400;
		indirecthit = 200;
		indirecthitrange = 4;
		timetolive = 40;
		weaponlocksystem = 8;
		manualcontrol = 0;
		lockType = 0;
		laserLock = 0;
		airLock = 0;
		irlock = 1;
		maneuvrability = 7;
		maxSpeed = 1500;
		cost = 1000;
	};
	class CM_US_Jammer_Ammo_Kimi : BulletBase
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 0.1;
		thrustTime = 2;
		airFriction = -0.0099999998;
		simulation = "shotCM";
		weaponLockSystem = "2 + 8";
		model = "\A3\weapons_f\empty";
		maxControlRange = -1;
		initTime = 0;
	};
	class EAWS_Brimstone_ammo : MissileBase
	{
		model = "\ARMA3_CUP_Enhancement_Weapons\wep\brimstone_fly.p3d";
		proxyShape = "\ARMA3_CUP_Enhancement_Weapons\wep\brimstone.p3d";
		hit = 1900;
		indirectHit = 50;
		indirectHitRange = 5;
		cost = 1000;
		maxSpeed = 425;
		irLock = 1;
		laserLock = 1;
		maxControlRange = 12000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 9;
		simulationStep = 0.0099999998;
		sideAirFriction = 0.075000003;
		initTime = 0;
		thrust = 150;
		thrustTime = 5;
		fuseDistance = 5;
		effectsMissile = "FIR_MissileEffect2";
		effectsMissileInit = "MissileDAR1";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		whistleDist = 4;
		timeToLive = 60;
		weaponLockSystem = "4 + 8";
		cmImmunity = 0.80000001;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent 
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 160;
						angleRangeVertical = 160;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "ActiveRadarSensorComponent ";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = 0;
						maxSpeedThreshold = 120;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 23;
						minSpeedThreshold = 27;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 5000;
						class AirTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent
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
	class EAWS_SCALP_ammo : EAWS_Brimstone_ammo
	{
		model = "\ARMA3_CUP_Enhancement_Weapons\wep\SCALP_fly.p3d";
		proxyShape = "\ARMA3_CUP_Enhancement_Weapons\wep\SCALP.p3d";
		hit = 30000;
		indirectHit = 25000;
		indirectHitRange = 65;
		cost = 1500;
		maxSpeed = 425;
		maxControlRange = 25000;
		sideAirFriction = 0.090000004;
		initTime = 3;
		thrustTime = 90;
		effectsMissile = "FIR_MissileEffect2";
		timeToLive = 120;
		weaponLockSystem = "2 + 4 + 8";
		cmImmunity = 0.98000002;
		FIR_AWS_GPS_Mssl_Guide = 1;
	};
	class JAS_CUP_S8_Pod_Heli_Dummy : Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher.p3d";
	};
	////////////////////////////////////////////////////////////////////////////////////////////////
	// Jets Content
	////////////////////////////////////////////////////////////////////////////////////////////////
	class FIR_AIM9L;
	class FIR_AIM7;
	class FIR_AGM84H;
	class FIR_AGM88;
	class FIR_EGBU12;
	class FIR_GBU54;
	class ammo_Missile_AMRAAM_D;
	class FIR_Hydra_APKWS_Ammo;
	class ammo_Missile_BIM9X;
	class ammo_Missile_AA_R77;
	class ammo_Missile_AA_R73;
	class Missile_AGM_01_F;
	class FIR_IRIS_T;
	class FIR_Meteor;
	class ammo_Missile_AMRAAM_C;
	class R_80mm_HE;
	class Bomb_03_F;
	class FIR_AIM132;
	class FIR_PAVEWAY_IV;
	class JAS_Bomb_03_F_KAB:Bomb_03_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class JAS_Bomb_03_F_RBK:Bomb_03_F
	{
		FIR_AWS_Cluster=1;
	};
	class JAS_S8KOR_80mm_HE: R_80mm_HE
	{
		autoSeekTarget = 1;
		laserLock = 1;
		lockSeekRadius = 100;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 90;
		missileLockCone = 5;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 42;
		sideAirFriction = 0.2;
		trackOversteer = 1;
		trackLead = 1;
		weaponLockSystem = 4;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_Meteor : FIR_Meteor
	{
		airLock = 2;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 90;
		missileLockCone = 80;
		missileLockMaxDistance = 160000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 1702;
		trackLead = 1;
		weaponLockSystem = 8;
        //maxspeed = 900;
		maxspeed = 1372;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							maxRange = 160000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						componentType = "ActiveRadarSensorComponent";
						typeRecognitionDistance = 55000;
						maxGroundNoiseDistance = 200;
						color[] = {0,1,1,1};
						animDirection = "";
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class JAS_FIR_Hydra_APKWS_Ammo: FIR_Hydra_APKWS_Ammo
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	// BIS MAVERICK CLONE
	class JAS_BIS_AGM65D : Missile_AGM_02_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
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
	class JAS_BIS_AGM65H : Missile_AGM_02_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "VisualSensorComponent";
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
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_BIS_AGM65L : Missile_AGM_02_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
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
	class JAS_FIR_AGM65D : Missile_AGM_02_F
	{
		cameraViewAvailable = 1;
		model = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65D.p3d";
		proxyShape = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65D.p3d";
		hit = 2100;
		indirectHit = 85;
		indirectHitRange = 8;
		timetoLive = 60;
		maneuvrability = 20;
		initTime = 0.1;
		thrustTime = 10;
		maxspeed = 500;
		maxControlRange = 2800;
		trackOversteer = 1;
		trackLead = 1;
		thrust = 300;
		effectsMissile = "FIR_MissileEffect2";
		soundHit[] =
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622777,
			1,
			1800
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
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
	class JAS_FIR_AGM65H : Missile_AGM_02_F
	{
		cameraViewAvailable = 1;
		model = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65D.p3d";
		proxyShape = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65D.p3d";
		hit = 2100;
		indirectHit = 85;
		indirectHitRange = 8;
		timetoLive = 60;
		maneuvrability = 20;
		initTime = 0.1;
		thrustTime = 10;
		maxspeed = 500;
		maxControlRange = 2800;
		trackOversteer = 1;
		trackLead = 1;
		thrust = 300;
		effectsMissile = "FIR_MissileEffect2";
		soundHit[] =
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622777,
			1,
			1800
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "VisualSensorComponent";
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
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_AGM65G : JAS_FIR_AGM65D
	{
		model = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65G.p3d";
		proxyShape = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65G.p3d";
		hit = 2800;
		indirectHit = 300;
		indirectHitRange = 20;
		timetoLive = 60;
		maneuvrability = 20;
		initTime = 0.1;
		thrustTime = 10;
		maxspeed = 500;
		maxControlRange = 2800;
		trackOversteer = 1;
		trackLead = 1;
		thrust = 300;
		effectsMissile = "FIR_MissileEffect2";
		soundHit[] =
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622777,
			1,
			1800
		};
	};
	class JAS_FIR_AGM65L : JAS_FIR_AGM65D
	{
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		model = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65L.p3d";
		proxyShape = "\FIR_AirWeaponSystem_US\data\AGM65\AGM65L.p3d";
		hit = 2800;
		indirectHit = 100;
		indirectHitRange = 8;
		timetoLive = 60;
		maneuvrability = 20;
		initTime = 0.1;
		thrustTime = 10;
		maxspeed = 500;
		maxControlRange = 2800;
		trackOversteer = 1;
		trackLead = 1;
		thrust = 300;
		effectsMissile = "FIR_MissileEffect2";
		soundHit[] =
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622777,
			1,
			1800
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
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
	class JAS_FIR_GBU10 : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\GBU10\GBU10_Fly.p3d";
		proxyshape = "\FIR_AirWeaponSystem_US\data\GBU10\GBU10.p3d";
		hit = 5000;
		indirectHit = 2500;
		indirectHitRange = 25;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		FIR_AWS_Crater = 1;	
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
	class JAS_FIR_GBU12 : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\GBU12\GBU12_Fly.p3d";
		proxyshape = "\FIR_AirWeaponSystem_US\data\GBU12\GBU12.p3d";
		hit = 5000;
		indirectHit = 2500;
		indirectHitRange = 25;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		FIR_AWS_Crater = 1;	
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
	class JAS_FIR_GBU24A : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\GBU24\GBU24A_Fly.p3d";
		proxyshape = "\FIR_AirWeaponSystem_US\data\GBU24\GBU24A.p3d";
		hit = 30000;
		indirectHit = 28000;
		indirectHitRange = 60;
		CraterEffects = "FIR_2000lb_BombCrater";
		explosionEffects = "FIR_2000lb_BombExplosion";
		FIR_AWS_Crater = 3;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
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
	class JAS_FIR_GBU24B : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\GBU24\GBU24B_Fly.p3d";
		proxyshape = "\FIR_AirWeaponSystem_US\data\GBU24\GBU24B.p3d";
		hit = 30000;
		indirectHit = 28000;
		indirectHitRange = 60;
		CraterEffects = "FIR_2000lb_BombCrater";
		explosionEffects = "FIR_2000lb_BombExplosion";
		FIR_AWS_Crater = 3;	
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
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
	class JAS_FIR_GBU24A_BLU118 : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\GBU24\GBU24A_Fly.p3d";
		proxyshape = "\FIR_AirWeaponSystem_US\data\GBU24\GBU24A.p3d";
		hit = 20000;
		indirectHit = 28000;
		indirectHitRange = 120;
		CraterEffects = "FIR_blu118_BombCrater";
		explosionEffects = "FIR_blu118_BombExplosion";
		FIR_AWS_Crater = 0;	
		FIR_AWS_FAEB = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
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
	class JAS_FIR_KAB500KR : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\kab500\kab500kr";
		proxyshape = "\FIR_AirWeaponSystem_US\data\kab500\kab500kr";
		hit = 15000;
		indirectHit = 7500;
		indirectHitRange = 45;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		FIR_AWS_Crater = 2;	
		//FIR_AWS_TV_bomb_Guide = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "VisualSensorComponent";
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
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_KAB500SE : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\kab500\kab500se";
		proxyshape = "\FIR_AirWeaponSystem_US\data\kab500\kab500se";
		hit = 15000;
		indirectHit = 7500;
		indirectHitRange = 45;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		FIR_AWS_Crater = 2;	
		FIR_AWS_GPS_Bomb_Guide = 1;
	};
	class JAS_FIR_KAB500L : Bo_GBU12_LGB
	{
		model = "\FIR_AirWeaponSystem_US\data\kab500\kab500l";
		proxyshape = "\FIR_AirWeaponSystem_US\data\kab500\kab500l";
		hit = 15000;
		indirectHit = 7500;
		indirectHitRange = 45;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		FIR_AWS_Crater = 2;	
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
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
	class JAS_BIS_KH25MTP : Missile_AGM_01_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
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
	class JAS_BIS_KH25MT : Missile_AGM_01_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "VisualSensorComponent";
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
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_BIS_KH25ML : Missile_AGM_01_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
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
	class JAS_BIS_KH25MA : Missile_AGM_01_F
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent 
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "ActiveRadarSensorComponent ";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 100;
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
	class JAS_BIS_KH25MS : Missile_AGM_01_F
	{
		cameraViewAvailable = 1;
		FIR_AWS_GPS_Mssl_Guide = 1;
	};
	class JAS_BIS_KH25R : Missile_AGM_01_F
	{
		manualControl = 1;
		maxControlRange = 6000;
	};
	class JAS_BIS_KH25MPU : Missile_AGM_01_F
	{
		JAS_AWS_SIDEARM=1;
		FIR_AWS_HARM = 1;
		airLock = 0;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		lockAcquire = 1;
		cameraViewAvailable = 1;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 120;
		missileLockCone = 120;
		missileLockMaxDistance = 13000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 80;
		trackLead = 1;
		weaponLockSystem = 0;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar// Original = PassiveRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 100;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 23;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						class AirTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class JAS_R73 : ammo_Missile_AA_R73
	{
		airLock = 2;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 90;
		missileLockCone = 50;
		missileLockMaxDistance = 30000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 1702;
		trackLead = 1;
		weaponLockSystem = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
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
							maxRange = 30000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_R77 : ammo_Missile_AA_R77
	{
		airLock = 2;
		cmImmunity = 0.9;
		lockType = 0;
		maneuvrability = 14;
		missileKeepLockedCone = 120;
		missileLockCone = 60;
		missileLockMaxDistance = 80000;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 420;
		sideAirFriction = 0.1;
		trackLead = 1;
		trackOversteer = 1;
		weaponLockSystem = 8;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							maxRange = 80000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						componentType = "ActiveRadarSensorComponent";
						typeRecognitionDistance = 50000;
						maxGroundNoiseDistance = 200;
						color[] = {0,1,1,1};
						animDirection = "";
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class JAS_FIR_AIM9L : ammo_Missile_BIM9X
	{
		airLock = 2;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 90;
		missileLockCone = 50;
		missileLockMaxDistance = 14000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 1702;
		trackLead = 1;
		weaponLockSystem = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
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
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_AIM120 : ammo_Missile_AMRAAM_D
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							maxRange = 160000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						componentType = "ActiveRadarSensorComponent";
						typeRecognitionDistance = 55000;
						maxGroundNoiseDistance = 200;
						color[] = {0,1,1,1};
						animDirection = "";
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class JAS_FIR_AIM120C : ammo_Missile_AMRAAM_C
	{
		canLock = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							maxRange = 100000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						componentType = "ActiveRadarSensorComponent";
						typeRecognitionDistance = 55000;
						maxGroundNoiseDistance = 200;
						color[] = {0,1,1,1};
						animDirection = "";
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class JAS_FIR_AIM7 : ammo_Missile_AMRAAM_D
	{
		model = "\FIR_AirWeaponSystem_US\data\AIM7\AIM7";
		proxyShape = "\FIR_AirWeaponSystem_US\data\AIM7\AIM7";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							maxRange = 37000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.1;
						aimDown = 0;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						componentType = "ActiveRadarSensorComponent";
						typeRecognitionDistance = 18000;
						maxGroundNoiseDistance = 200;
						color[] = {0,1,1,1};
						animDirection = "";
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class JAS_FIR_AGM84H: FIR_AGM84H
	{
		airLock = 0;
		autoSeekTarget = 0;
		cameraViewAvailable = 1;
		lockType = 0;
		maneuvrability = 10;
		missileKeepLockedCone = 90;
		missileLockCone = 60;
		missileLockMaxDistance = 10000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 80;
		trackLead = 1;
		weaponLockSystem = 8;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent 
					{
						aimDown = 35;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "ActiveRadarSensorComponent ";
						groundNoiseDistanceCoef = 0;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = 0;
						maxSpeedThreshold = 100;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 23;
						minSpeedThreshold = 27;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 5000;
						class AirTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
		FIR_AWS_GPS_Mssl_Guide = 0;
	};
	class JAS_FIR_AGM84SLAM: JAS_FIR_AGM84H
	{
		FIR_AWS_GPS_Mssl_Guide = 1;
	};
	class JAS_FIR_AGM88: FIR_AGM88
	{
		airLock = 0;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		lockAcquire = 1;
		cameraViewAvailable = 1;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 120;
		missileLockCone = 120;
		missileLockMaxDistance = 13000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 80;
		trackLead = 1;
		weaponLockSystem = 0;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar// Original = PassiveRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 100;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 23;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						class AirTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 13000;
							minRange = 100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_EGBU12 : FIR_EGBU12
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
	class JAS_FIR_GBU54 : FIR_GBU54
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
	class JAS_FIR_IRIS_T : FIR_IRIS_T
	{
		airLock = 2;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 90;
		missileLockCone = 50;
		missileLockMaxDistance = 14000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 1702;
		trackLead = 1;
		weaponLockSystem = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
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
							maxRange = 25000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_AIM132 : FIR_AIM132
	{
		airLock = 2;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		lockType = 0;
		maneuvrability = 20;
		missileKeepLockedCone = 90;
		missileLockCone = 50;
		missileLockMaxDistance = 14000;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 1702;
		trackLead = 1;
		weaponLockSystem = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
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
							maxRange = 25000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 0;
							minRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class JAS_FIR_PAVEWAY_IV : FIR_PAVEWAY_IV
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
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
};
class cfgMagazines
{
	class VehicleMagazine;
	class CA_Magazine;
	class 38Rnd_80mm_rockets;
	class 2Rnd_LG_Scalpel;
	class 2Rnd_Missile_AA_03_F;
	class FIR_AIM120_1rnd_M;
	class FIR_GBU24A_1rnd_M;
	class FIR_GBU24B_1rnd_M;
	class FIR_GBU24A_BLU118_1rnd_M;
	class JAS_FIR_GBU24A_1rnd_M : FIR_GBU24A_1rnd_M
	{
		ammo = "JAS_FIR_GBU24A";
	};
	class JAS_FIR_GBU24B_1rnd_M : FIR_GBU24B_1rnd_M
	{
		ammo = "JAS_FIR_GBU24B";
	};
	class JAS_FIR_GBU24A_BLU118_1rnd_M : FIR_GBU24A_BLU118_1rnd_M
	{
		ammo = "JAS_FIR_GBU24A_BLU118";
	};
	class JAS_FIR_AIM120B_1rnd_M : FIR_AIM120_1rnd_M
	{
		ammo = "JAS_FIR_AIM120B";
	};
	class JAS_FIR_AIM132_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "AIM-132 ASRAAM";
		displayNameShort = "Short-Range";
		ammo = "JAS_FIR_AIM132";
		initSpeed = 0;
		nameSound = "missiles";
		count = 1;
		maxLeadSpeed = 300;
	};
	class JAS_FIR_AIM120_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "AIM-120C AMRAAM";
		displayNameShort = "Mid-Range";
		count = 1;
		nameSound = "missiles";
		ammo = "JAS_FIR_AIM120B";
		initSpeed = 0;
		maxLeadSpeed = 300;
	};
	class JAS_FIR_PavewayIV_1rnd_M_int: VehicleMagazine
	{
		scope=2;
		displayName="Paveway IV Internal Bay";
		displayNameShort="Laser Guided";
		count=1;
		ammo="JAS_FIR_PAVEWAY_IV";
		initSpeed=0;
	};
	class JAS_FIR_EGBU12_1rnd_M_int: VehicleMagazine
	{
		scope=2;
		displayName="EGBU-12 Internal Bay";
		displayNameShort="Laser Guided";
		count=1;
		ammo="JAS_FIR_EGBU12";
		initSpeed=0;
	};
	class JAS_FIR_CBU105_1rnd_M_int: VehicleMagazine
	{
		scope=2;
		displayName="CBU-105 Internal Bay";
		displayNameShort="WCMD SFW";
		count=1;
		ammo="FIR_CBU105";
		initSpeed=0;
	};
	class JAS_FIR_gbu54_1rnd_M_int: VehicleMagazine
	{
		scope=2;
		displayName="GBU-54 Internal Bay";
		displayNameShort="LJDAM";
		count=1;
		ammo="JAS_FIR_GBU54";
		initSpeed=0;
	};
	class JAS_R77_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "R-77";
		displayNameShort = "Long-Range";
		count = 1;
		nameSound = "missiles";
		ammo = "JAS_R77";
		initSpeed = 0;
		maxLeadSpeed = 300;
	};
	class JAS_1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="30mm CM";
		ammo="JAS_Gatling_30mm_HE_Plane_CAS_01_F";
		count=1000;
		initSpeed=1120;
		maxLeadSpeed=300;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622773,
			1
		};
		nameSound="cannon";
		tracersEvery=1;
	};
	class JAS_300Rnd_20mm_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="JAS_B_20mm";
		count=300;
		initSpeed=1030;
		maxLeadSpeed=300;
		tracersEvery=5;
		nameSound="cannon";
	};
	class JAS_500Rnd_Gatling_30mm_Plane_CAS_02_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="";
		ammo="JAS_Cannon_30mm_HE_Plane_CAS_02_F";
		count=500;
		initSpeed=1120;
		maxLeadSpeed=300;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622773,
			1
		};
		nameSound="cannon";
		tracersEvery=1;
	};
	class JAS_CUP_180Rnd_TE1_30mm_GSh302K_HE_M: VehicleMagazine
	{
		scope=2;
		displayName="180Rnd GSh302K Mag";
		ammo="JAS_CUP_B_30mm_HE_Red_Tracer";
		count=180;
		initSpeed=870;
		maxLeadSpeed=600;
		tracersEvery=1;
		nameSound="cannon";
	};
	class JAS_CUP_750Rnd_TE1_30mm_GSh302K_HE_M: VehicleMagazine
	{
		scope=2;
		displayName="750Rnd GSh302K Mag";
		ammo="JAS_CUP_B_30mm_HE_Red_Tracer";
		count=750;
		initSpeed=870;
		maxLeadSpeed=600;
		tracersEvery=1;
		nameSound="cannon";
	};
	class JAS_CUP_150Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M: VehicleMagazine
	{
		scope=2;
		displayName="23mm APHE";
		ammo="JAS_CUP_B_23mm_APHE_Tracer_Green";
		count=150;
		initSpeed=715;
		maxLeadSpeed=200;
		tracersEvery=2;
		lastRoundTracers=1000;
		nameSound="cannon";
	};
	class JAS_FIR_GAU12_300rnd_M : VehicleMagazine
	{
		scope = 2;
		initSpeed = 1440;
		maxLeadSpeed = 300;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		nameSound = "cannon";
		displayName = "GAU12 Equalizer";
		ammo = "JAS_B_25mm";
		count = 300;		
		displayNameShort = "25mm";
	};
	class JAS_CUP_1350Rnd_TE1_Red_Tracer_30mm_GAU8_M: VehicleMagazine
	{
		scope=2;
		displayName="GAU-8/A 30mm HE Magazine";
		ammo="JAS_CUP_B_30mm_HE_Red_Tracer_GAU8";
		count=1350;
		initSpeed=1040;
		maxLeadSpeed=300;
		tracersEvery=1;
		nameSound="cannon";
	};
	class JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M: VehicleMagazine
	{
		scope=2;
		displayName="25mm Cannon";
		ammo="JAS_CUP_B_25mm_HE_White_Tracer";
		count=220;
		initSpeed=1040;
		maxLeadSpeed=300;
		tracersEvery=1;
		nameSound="cannon";
	};
	class JAS_CUP_16Rnd_57mm: VehicleMagazine
	{
		scope=2;
		displayName="16Rnd 57mm Rockets";
		ammo="JAS_CUP_R_57mm_HE";
		initSpeed=44;
		maxLeadSpeed=200;
		nameSound="rockets";
		sound[]=
		{
			"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\rocketLauncher_Shot21",
			3.1622777,
			1
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.1,
			700
		};
		reloadSound[]=
		{
			"\A3\sounds_f\dummysound",
			"db-70",
			1
		};
		count=16;
	};
	class JAS_CUP_1Rnd_S5_Pod_Small_M: VehicleMagazine
	{
		scope=2;
		displayName="UB-16-57 Pods";
		ammo="JAS_CUP_S5_Pod_Small_Dummy";
		count=1;
	};
	class JAS_FIR_Hydra_Smoke_7rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Hydra 70mm RKT SMK";
		displayNameShort = "RKT SMK W";
		count = 7;
		ammo = "JAS_FIR_Hydra_Rocket_Smoke_Ammo";
		initSpeed = 0;
	};
	class JAS_FIR_Hydra_Smoke_Red_7rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Hydra 70mm RKT SMK";
		displayNameShort = "RKT SMK R";
		count = 7;
		ammo = "JAS_FIR_Hydra_Rocket_Smoke_Red_Ammo";
		initSpeed = 0;
	};
	class JAS_FIR_Hydra_Smoke_Orange_7rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Hydra 70mm RKT SMK";
		displayNameShort = "RKT SMK O";
		count = 7;
		ammo = "JAS_FIR_Hydra_Rocket_Smoke_Orange_Ammo";
		initSpeed = 0;
	};
	class JAS_FIR_Hydra_Smoke_Purple_7rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Hydra 70mm RKT SMK";
		displayNameShort = "RKT SMK P";
		count = 7;
		ammo = "JAS_FIR_Hydra_Rocket_Smoke_Purple_Ammo";
		initSpeed = 0;
	};
	class JAS_FIR_mk84_gp_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "mk84";
		displayNameShort = "UGBL GP";
		count = 1;
		ammo = "JAS_FIR_mk84";
		initSpeed = 0;
	};
	class JAS_FIR_Hydra_SMKP_Pod_1rnd_M : VehicleMagazine
	{
		scope = 1;
		ammo = "FIR_Hydra_7_Pod";
		count = 1;
	};
	class JAS_FIR_Hydra_SMKO_Pod_1rnd_M : VehicleMagazine
	{
		scope = 1;
		ammo = "FIR_Hydra_7_Pod";
		count = 1;
	};
	class JAS_FIR_Hydra_SMKR_Pod_1rnd_M : VehicleMagazine
	{
		scope = 1;
		ammo = "FIR_Hydra_7_Pod";
		count = 1;
	};
	class JAS_FIR_Hydra_SMKW_Pod_1rnd_M : VehicleMagazine
	{
		scope = 1;
		ammo = "FIR_Hydra_7_Pod";
		count = 1;
	};
	class JAS_FIR_Hydra_APKWS_Pod_1rnd_M : VehicleMagazine
	{
		scope = 1;
		ammo = "FIR_Hydra_7_Pod";
		count = 1;
	};
	class JAS_EAWS_Brimstone_M_int : VehicleMagazine
	{
		scope = 2;
		ammo = "EAWS_Brimstone_ammo";
		count = 1;
		displayName = "BRIMSTONE-AGM Internal";
		descriptionShort = "BRIMSTONE AGM";
		displayNameShort = "BRIM-AGM";
		initSpeed = 0;
		maxLeadSpeed = 500;
		sound[] =
		{
			"ARMA3_CUP_Enhancement_Weapons\wep\data\TOW_2",
			4,
			1
		};
		soundFly[] =
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.1,
			700
		};
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		reloadSound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1
		};
		nameSound = "missiles";
	};
	class JAS_FIR_AGM154C_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "AGM154C Internal";
		displayNameShort = "JSOW GPB";
		count = 1;
		ammo = "FIR_AGM154C";
		initSpeed = 0;
	};
	class JAS_FIR_AGM154A_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "AGM154A Internal";
		displayNameShort = "JSOW CEM";
		count = 1;
		ammo = "FIR_AGM154A";
		initSpeed = 0;
	};
	class JAS_FIR_gbu53_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-53 Internal";
		displayNameShort = "SDB II";
		count = 1;
		ammo = "FIR_gbu53";
		initSpeed = 0;
	};
	class JAS_FIR_gbu39_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-39 Internal";
		displayNameShort = "SDB";
		count = 1;
		ammo = "FIR_gbu39";
		initSpeed = 0;
	};
	class JAS_FIR_CBU103_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "CBU-103 Internal";
		displayNameShort = "WCMD AP";
		count = 1;
		ammo = "JAS_FIR_CBU103";
		initSpeed = 0;
	};
	class JAS_FIR_CBU97_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "CBU-97 Internal";
		displayNameShort = "SFW";
		count = 1;
		ammo = "FIR_CBU97";
		initSpeed = 0;
	};
	class JAS_FIR_CBU89_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "CBU-89 Internal";
		displayNameShort = "Gator";
		count = 1;
		ammo = "FIR_CBU89";
		initSpeed = 0;
	};
	class JAS_FIR_CBU87_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "CBU-87 Internal";
		displayNameShort = "Cluster";
		count = 1;
		ammo = "FIR_CBU87";
		initSpeed = 0;
	};
	class JAS_FIR_mk82_gp_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "mk82 Internal";
		displayNameShort = "UGB GP";
		count = 1;
		ammo = "FIR_Mk82_gp";
		initSpeed = 0;
	};
	class JAS_FIR_mk82_snakeye_1rnd_M_int: VehicleMagazine
	{
		scope=2;
		displayName="Snakeye Internal";
		displayNameShort="UGB LDGP";
		count=1;
		ammo="JAS_FIR_Mk82_snakeye";
		initSpeed=0;
	};
	class JAS_FIR_gbu38_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-38 Internal";
		displayNameShort = "JDAM";
		count = 1;
		ammo = "FIR_gbu38";
		initSpeed = 0;
	};
	class JAS_FIR_GBU12_1rnd_M_int : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-12 Internal";
		displayNameShort = "Laser Guided";
		count = 1;
		ammo = "JAS_FIR_GBU12";
		initSpeed = 0;
	};
	class JAS_FIR_CBU103_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "CBU-103";
		displayNameShort = "WCMD AP";
		count = 1;
		ammo = "JAS_FIR_CBU103";
		initSpeed = 0;
	};
	class JAS_AGM114N_1rnd_M: VehicleMagazine
	{
		scope=2;
		displayName="AGM-114N Hellfire II";
		displayNameShort="Thermobaric";
		count=1;
		nameSound="missiles";
		ammo="JAS_M_Hellfire_N";
		initSpeed=0;
	};
	class JAS_AGM114L_1rnd_M: VehicleMagazine
	{
		scope=2;
		displayName="AGM-114L Longbow Hellfire";
		displayNameShort="HEAT";
		count=1;
		nameSound="missiles";
		ammo="JAS_M_Hellfire_L";
		initSpeed=0;
	};
	class JAS_AGM114K_1rnd_M: VehicleMagazine
	{
		scope=2;
		displayName="AGM-114K Hellfire II";
		displayNameShort="HEAT";
		count=1;
		nameSound="missiles";
		ammo="JAS_M_Hellfire_K";
		initSpeed=0;
	};
	class JAS_AGM122_1rnd_M: VehicleMagazine
	{
		scope=2;
		displayName="AGM-122 SIDEARM";
		displayNameShort="Anti-Radiation";
		count=1;
		nameSound="missiles";
		ammo="JAS_AGM122";
		initSpeed=0;
	};
	class JAS_CUP_14Rnd_FFAR_M: VehicleMagazine
	{
		scope=2;
		displayName="$STR_CUP_DN_FFAR";
		ammo="CUP_R_70mm_Hydra_HE";
		count=14;
		initSpeed=44;
		maxLeadSpeed=200;
		nameSound="rockets";
		sound[]=
		{
			"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\rocketLauncher_Shot21",
			3.1622777,
			1
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1
		};
	};
	class JAS_CUP_19Rnd_CRV7_FAT_M: JAS_CUP_14Rnd_FFAR_M
	{
		count=19;
		ammo="JAS_CUP_R_CRV7_FAT";
		displayName="CRV7-FAT";
		displayNameShort="FAT";
		descriptionShort="CRV7 Flechette Anti-Tank Rocket";
	};
	class JAS_CUP_12Rnd_CRV7_FAT_M: JAS_CUP_19Rnd_CRV7_FAT_M
	{
		count=12;
	};
	class JAS_FIR_mk82_snakeye_1rnd_M: VehicleMagazine
	{
		scope=2;
		displayName="Snakeye";
		displayNameShort="UGB LDGP";
		count=1;
		ammo="JAS_FIR_Mk82_snakeye";
		initSpeed=0;
	};
	class JAS_CUP_1Rnd_AT6_M: 2Rnd_LG_Scalpel
	{
		scope=2;
		displayname="1Rnd AT-6 Missile";
		count=1;
		ammo="CUP_M_Shturm_9K114_AT6_Spiral_AT";
	};
	class JAS_CUP_2Rnd_AT6_Rack_M: VehicleMagazine
	{
		scope=2;
		displayName="AT-6 Shturm Pod";
		ammo="CUP_AT6_Rackcomplete_Dummy";
		initSpeed=1;
		maxLeadSpeed=1000;
		nameSound="";
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
	};
	class JAS_CUP_1Rnd_AT2_M: 2Rnd_LG_Scalpel
	{
		scope=2;
		displayname="1Rnd AT-2 Missile";
		count=1;
		ammo="JAS_CUP_M_3M11_AT2_Falanga_AT";
	};
	class JAS_CUP_1Rnd_AT2_DummyRack_M: VehicleMagazine
	{
		scope=2;
		displayName="AT-2 Falanga Pod";
		ammo="CUP_AT2_Rack_Dummy";
		initSpeed=1;
		maxLeadSpeed=1000;
		nameSound="";
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
	};
	class 1Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_03_F
	{
		count=1;
	};
	class JAS_FIR_CBU250_1rnd_M: VehicleMagazine
	{
		scope=2;
		displayName="RBK-250";
		displayNameShort="Cluster";
		count=1;
		ammo="JAS_FIR_RBK250";
		initSpeed=0;
	};
	class JAS_KH25_1rnd_M: VehicleMagazine
	{
		scope=2;
		displayName="Kh-25 ARM";
		displayNameShort="Anti-Radiation";
		count=1;
		nameSound="missiles";
		ammo="JAS_FIR_KH25";
		initSpeed=0;
	};
	class JAS_CUP_1Rnd_S8_Pod_Air_M: VehicleMagazine
	{
		scope=2;
		displayName="B-8V-20 Pods";
		ammo="CUP_S8_Pod_Air_Dummy";
		count=1;
	};
	class JAS_CUP_2Rnd_GSh23_Pod_Heli_M : VehicleMagazine
	{
		scope = 2;
		displayName = "GSh-23 Gunpods";
		ammo = "JAS_CUP_GSH23_gunpod_Dummy";
		count = 1;
	};
	class JAS_CUP_2Rnd_Igla_Rack_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Igla Pod";
		ammo = "JAS_CUP_Igla_Rack_Twin_Dummy";
		count = 1;
	};
	class JAS_CUP_1Rnd_Kh29L_M : 2Rnd_LG_Scalpel
	{
		ammo = "CUP_M_KH29L_AT";
		displayname = "Kh-29L Missile";
		count = 1;
	};
	class JAS_CUP_6Rnd_AT16_M : 2Rnd_LG_Scalpel
	{
		displayname = "6Rnd AT-16 Missiles";
		count = 6;
		ammo = "JAS_M_9K121_Vikhr_AT16_Scallion_AT";
	};
	class JAS_CUP_Khedge_Rack_6Rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Khedge 6Rnd Pods";
		ammo = "CUP_Vikhr_Rack_6rnd_Dummy";
		count = 1;
	};
	class JAS_CUP_Vikhr_Rack_6Rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Vikhr 6Rnd Pods";
		ammo = "CUP_Vikhr_Rack_6rnd_Dummy";
		count = 1;
	};
	class JAS_CUP_1Rnd_KAB250_M : VehicleMagazine
	{
		scope = 2;
		displayName = "KAB-250";
		ammo = "JAS_CUP_Bo_KAB250_LGB";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] =
		{
			"db0",
			1
		};
		reloadSound[] =
		{
			"db-70",
			1
		};
		count = 1;
		nameSound = "missiles";
	};
	class JAS_CUP_1Rnd_FAB250_M : VehicleMagazine
	{
		scope = 2;
		displayName = "FAB-250";
		initSpeed = 0;
		maxLeadSpeed = 0;
		count = 1;
		nameSound = "missiles";
		ammo = "CUP_FAB250";
	};
	class JAS_S13_5rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "S-13 122mm Rocket";
		displayNameShort = "122mm FFAR";
		count = 4;
		ammo = "JAS_FIR_Zuni_Rocket_Ammo";
		initSpeed = 0;
	};
	class JAS_CUP_S13_Pod_Heli_M : VehicleMagazine
	{
		scope = 2;
		displayName = "S13 Pod";
		ammo = "JAS_CUP_S13_Pod_Heli_Dummy";
		count = 1;
	};
	class JAS_CUP_40Rnd_S8_M : 38Rnd_80mm_rockets
	{
		scope = 2;
		displayName = "40Rnd S8 Rockets";
		count = 40;
		sound[] =
		{
			"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\rocketLauncher_Shot21",
			3.1622777,
			1
		};
		reloadSound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1
		};
	};
	class JAS_CUP_1Rnd_S8_Pod_Heli_M : VehicleMagazine
	{
		scope = 2;
		displayName = "B-8V-20 Pods";
		ammo = "JAS_CUP_S8_Pod_Heli_Dummy";
		count = 1;
	};
	class 8Rnd_Hellfire : VehicleMagazine
	{
		scope = 2;
		displayName = "HELLFIRE";
		count = 8;
		ammo = "M_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 200;
		sound[] =
		{
			"A3\Sounds_F\weapons\Rockets\titan_3",
			1.2589254,
			1,
			1000
		};
		weaponSoundEffect = "DefaultRifle";
		reloadSound[] =
		{
			"",
			0.00031622776,
			1,
			20
		};
		nameSound = "missiles";
	};
	class 4Rnd_Hellfire_K : 8Rnd_Hellfire
	{
		displayName = "AGM-114K";
		displayNameShort = "SAL 2 AT";
		ammo = "M_Hellfire_K_AT";
		displayNameMagazine = "SAL 2 AT";
		count = 4;
	};
	class 4Rnd_Hellfire_N : 4Rnd_Hellfire_K
	{
		displayName = "AGM-114N";
		displayNameShort = "SAL 2 Thermobaric";
		ammo = "M_Hellfire_N_AT";
		displayNameMagazine = "SAL 2 Thermobaric";
	};
	class 4Rnd_Hellfire_L : 4Rnd_Hellfire_K
	{
		displayName = "AGM-114L";
		displayNameShort = "RF AT";
		ammo = "M_Hellfire_L_AT";
		displayNameMagazine = "RF AT";
	};
	class US_Jammer_Magazine_Kimi : CA_Magazine
	{
		count = 120;
		ammo = "CM_US_Jammer_Ammo_Kimi";
		initSpeed = 30;
	};
	class 12Rnd_CRV7 : VehicleMagazine
	{
		scope = 2;
		displayName = "CRV7 (HEISAP)";
		displayNameShort = "HEISAP";
		ammo = "M_CRV7_AT";
		count = 12;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_AW159\data\Sound\rocketLauncher_Shot21",
			3.1622777,
			1
		};
		reloadSound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1
		};
	};
	class 1000Rnd_20mm_shells;
	class 1200Rnd_20mm_M621 : 1000Rnd_20mm_shells
	{
		ammo = "CUP_B_20mm_AP";
		displayNameShort = "HE";
		count = 400;
	};
	class EAWS_Brimstone_mag18x : VehicleMagazine
	{
		scope = 2;
		ammo = "EAWS_Brimstone_ammo";
		count = 18;
		displayName = "BRIMSTONE-AGM";
		descriptionShort = "BRIMSTONE AGM";
		displayNameShort = "BRIM-AGM";
		initSpeed = 0;
		maxLeadSpeed = 500;
		sound[] =
		{
			"ARMA3_CUP_Enhancement_Weapons\wep\data\TOW_2",
			4,
			1
		};
		soundFly[] =
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.1,
			700
		};
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		reloadSound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1
		};
		nameSound = "missiles";
	};
	class EAWS_Brimstone_mag1x : EAWS_Brimstone_mag18x
	{
		count = 1;
	};
	class EAWS_SCALP_mag2x : VehicleMagazine
	{
		scope = 2;
		ammo = "EAWS_SCALP_ammo";
		count = 2;
		displayName = "SCALP-ER";
		descriptionShort = "SCALP-ER AGM";
		displayNameShort = "SCALP-ER";
		initSpeed = 0;
		maxLeadSpeed = 500;
		sound[] =
		{
			"ARMA3_CUP_Enhancement_Weapons\wep\data\TOW_2",
			4,
			1
		};
		soundFly[] =
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.1,
			700
		};
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		reloadSound[] =
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1
		};
		nameSound = "missiles";
	};
	class EAWS_SCALP_mag1x : EAWS_SCALP_mag2x
	{
		count = 1;
	};
	class JAS_FIR_AGM65D_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-65D Maverick";
		displayNameShort = "AGM-65D";
		count = 1;
		nameSound = "missiles";
		ammo = "JAS_FIR_AGM65D";
		initSpeed = 0;
	};
	class JAS_FIR_AGM65D_3rnd_M : JAS_FIR_AGM65D_1rnd_M
	{
		count = 3;
	};
	class JAS_FIR_AGM65G_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-65G Maverick";
		displayNameShort = "AGM-65G";
		count = 1;
		nameSound = "missiles";
		ammo = "JAS_FIR_AGM65G";
		initSpeed = 0;
	};
	class JAS_FIR_AGM65G_3rnd_M : JAS_FIR_AGM65G_1rnd_M
	{
		count = 3;
	};
	class JAS_FIR_AGM65L_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-65L Maverick";
		displayNameShort = "AGM-65L";
		count = 1;
		nameSound = "missiles";
		ammo = "JAS_FIR_AGM65L";
		initSpeed = 0;
	};
	class JAS_FIR_AGM65L_3rnd_M : JAS_FIR_AGM65L_1rnd_M
	{
		count = 3;
	};
	class JAS_FIR_AGM65H_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-65H Maverick";
		displayNameShort = "AGM-65H";
		count = 1;
		nameSound = "missiles";
		ammo = "JAS_FIR_AGM65H";
		initSpeed = 0;
	};
	class JAS_FIR_AGM65H_3rnd_M : JAS_FIR_AGM65L_1rnd_M
	{
		count = 3;
	};
	class JAS_CUP_1Rnd_AGM_Rack_M : VehicleMagazine
	{
		scope = 2;
		displayName = "AGM Quad Rack";
		ammo = "JAS_CUP_AGM_Rack_Dummy";
		count = 1;
	};
	class JAS_FIR_AIM9L_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "AIM-9M Sidewinder";
		displayNameShort = "Short-Range";
		ammo = "JAS_FIR_AIM9L";
		initSpeed = 0;
		nameSound = "missiles";
		count = 1;
		maxLeadSpeed = 300;
	};
	class JAS_FIR_GBU10_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-10";
		displayNameShort = "Laser Guided";
		count = 1;
		ammo = "JAS_FIR_GBU10";
		initSpeed = 0;
	};
	class JAS_FIR_GBU12_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-12";
		displayNameShort = "Laser Guided";
		count = 1;
		ammo = "JAS_FIR_GBU12";
		initSpeed = 0;
	};
	class JAS_FIR_EGBU12_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "EGBU-12";
		displayNameShort = "Laser Guided";
		count = 1;
		ammo = "JAS_FIR_EGBU12";
		initSpeed = 0;
	};
	class JAS_FIR_gbu54_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-54 500lb LJDAM";
		displayNameShort = "LJDAM";
		count = 1;
		ammo = "JAS_FIR_GBU54";
		initSpeed = 0;
	};
	////////////////////////////////////////////////////////////////////////////////////////////////
	// Jets Content
	////////////////////////////////////////////////////////////////////////////////////////////////
	class FIR_AIM132_1rnd_M;
	class FIR_SUU25_P_8rnd_M;
	class PylonMissile_Bomb_GBU12_x1;
	class PylonMissile_Missile_AGM_02_x1;
	class FIR_GBU10_P_1rnd_M;
	class FIR_GBU12_P_1rnd_M;
	class FIR_GBU24A_P_1rnd_M;
	class FIR_GBU24B_P_1rnd_M;
	class FIR_GBU24A_BLU118_P_1rnd_M;
	class FIR_Mk82_GP_P_1rnd_M;
	class FIR_Mk82_snakeye_P_1rnd_M;
	class FIR_mk84_gp_1rnd_M;
	class FIR_AIM9L_1rnd_M;
	class FIR_GBU31_1rnd_M;
	class FIR_GBU38_1rnd_M;
	class FIR_EGBU12_1rnd_M;
	class FIR_gbu54_1rnd_M;
	class FIR_CBU103_P_1rnd_M;
	class FIR_CBU105_P_1rnd_M;
	class FIR_AIM7_1rnd_M;
	class FIR_AGM84H_1rnd_M;
	class FIR_AGM88_1rnd_M;
	class FIR_AGM154A_1rnd_M;
	class FIR_AGM154C_1rnd_M;
	class FIR_gbu32_1rnd_M;
	class FIR_CBU89_P_1rnd_M;
	class FIR_Hydra_APKWS_7rnd_M;
	class FIR_AGM65D_P_1rnd_M;
	class FIR_AGM65D_P_3rnd_M;
	class FIR_CBU87_P_1rnd_M;
	class FIR_CBU97_P_1rnd_M;
	class FIR_Mk84_GP_P_1rnd_M;
	class FIR_GBU31_P_1rnd_M;
	class FIR_GBU38_P_1rnd_M;
	class FIR_EGBU12_P_1rnd_M;
	class FIR_GBU54_P_1rnd_M;
	class FIR_AIM7_P_1rnd_M;
	class FIR_AGM88_P_1rnd_M;
	class FIR_AGM154A_P_1rnd_M;
	class FIR_AGM154C_P_1rnd_M;
	class FIR_GBU32_P_1rnd_M;
	class PylonRack_Missile_AGM_02_x1;
	class PylonRack_Missile_AGM_02_x2;
	class PylonRack_Missile_AMRAAM_D_x1;
	class PylonRack_3Rnd_Missile_AGM_02_F;
	class PylonRack_Missile_BIM9X_x1;
	class PylonMissile_Missile_AA_R77_x1;
	class PylonMissile_Missile_AA_R73_x1;
	class PylonMissile_Missile_AGM_KH25_x1;
	class PylonRack_Missile_AMRAAM_D_x2;
	class PylonRack_Missile_BIM9X_x2;
	class PylonMissile_Missile_AMRAAM_D_INT_x1;
	class PylonMissile_1Rnd_Mk82_F;
	class PylonRack_Missile_AMRAAM_C_x2;
	class PylonRack_Missile_AMRAAM_C_x1;
	class PylonMissile_1Rnd_AAA_missiles;
	class PylonRack_19Rnd_Rocket_Skyfire;
	class PylonRack_20Rnd_Rocket_03_AP_F;
	class PylonRack_20Rnd_Rocket_03_HE_F;
	class PylonMissile_1Rnd_Bomb_03_F;
	class PylonRack_4Rnd_LG_scalpel;
	class PylonWeapon_300Rnd_20mm_shells;
	class JAS_PylonWeapon_300Rnd_20mm_shells: PylonWeapon_300Rnd_20mm_shells
	{
		descriptionShort = "PL-20 Gun Pod";
		displayName = "PL-20 PLAMEN 20mm Gun Pod";
		displayNameShort = "PL-20";
		ammo = "B_20mm";
		count = 300;
		hardpoints[] = {"JAS_ALCA_GPOD"};
		pylonWeapon = "JAS_Twin_Cannon_20mm";
	};
	class JAS_CUP_1Rnd_GSh23_PylonPod_M : JAS_CUP_2Rnd_GSh23_Pod_Heli_M
	{
		descriptionShort = "GSh-23 Pod";
		displayName = "GSh-23 Gun Pod";
		displayNameShort = "GSh-23";
		ammo = "B_25mm_Tracer_Red";
		count = 1000;
		hardpoints[] = {"JAS_YAK_AAM"};
		pylonWeapon = "JAS_CUP_Vacannon_GSh23L_PYLON";
		model="\CUP\Weapons\CUP_Weapons_Pods\GSH23\CUP_GSH23_gunpod.p3d";
		mass = 350;
		weight = 350;
	};
	class JAS_4Rnd_LG_scalpel: PylonRack_4Rnd_LG_scalpel
	{
		hardpoints[] = {"JAS_YAK_AAM"};
		pylonWeapon = "JAS_missiles_SCALPEL";
	};
	class JAS_1Rnd_Bomb_03_F_RBK: PylonMissile_1Rnd_Bomb_03_F
	{
		ammo = "JAS_Bomb_03_F_RBK";
		author = "-{GOL}-Jason";
		displayName = "RBK-250";
		displayNameShort = "Bomb";
		hardpoints[] = {"JAS_YAK_AAM"};
		pylonWeapon = "JAS_Bomb_03_Plane_CAS_02_F_RBK";
	};
	class JAS_1Rnd_Bomb_03_F_PYLON: PylonMissile_1Rnd_Bomb_03_F
	{
		ammo = "JAS_Bomb_03_F_KAB";
		author = "-{GOL}-Jason";
		displayName = "KAB-250";
		displayNameShort = "Bomb";
		hardpoints[] = {"JAS_YAK_AAM"};
		pylonWeapon = "JAS_1Rnd_Bomb_03_F";
	};
	class JAS_20Rnd_Rocket_03_HE_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		ammo = "Rocket_03_HE_F";
		displayName = "S-8 20x HE";
		displayNameShort = "80mm HE";
		hardpoints[] = {"JAS_YAK_AAM"};
		pylonWeapon = "JAS_Rocket_03_HE_Plane_CAS_02_F";
	};
	class JAS_20Rnd_Rocket_03_AP_F: PylonRack_20Rnd_Rocket_03_AP_F
	{
		ammo = "Rocket_03_AP_F";
		displayName = "S-8 20x AP";
		displayNameShort = "80mm AP";
		hardpoints[] = {"JAS_YAK_AAM"};
		pylonWeapon = "JAS_Rocket_03_AP_Plane_CAS_02_F";
	};
	class JAS_19Rnd_Rocket_Skyfire: PylonRack_19Rnd_Rocket_Skyfire
	{
		ammo = "JAS_S8KOR_80mm_HE";
		author = "-{GOL}-Jason";
		displayName = "S-8KOR 19x";
		displayNameShort = "80mm HE";
		hardpoints[] = {"JAS_YAK_AAM"};
		pylonWeapon = "JAS_rockets_Skyfire";
	};
	class JAS_FIR_Hydra_APKWS_7rnd_M : FIR_Hydra_APKWS_7rnd_M
	{
		scope = 2;
		displayName = "Hydra 70mm APKWS";
		displayNameShort = "70mm APKWS";
		count = 7;
		ammo = "JAS_FIR_Hydra_APKWS_Ammo";
		initSpeed = 0;
	};
	class JAS_AGM122_1rnd_PYLON_M: JAS_AGM122_1rnd_M
	{
		displayName="AGM-122 SIDEARM";
		count=1;
		pylonWeapon = "JAS_AGM122_Pylon";
		model="\FIR_AirWeaponSystem_US\data\AIM9L\AIM9L";
		hardpoints[]=
		{
			"JAS_SIDEARM_PYLON"
		};
		mass=90;
	};
	class JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M : JAS_FIR_Hydra_APKWS_Pod_1rnd_M
	{
		ammo = "JAS_FIR_Hydra_APKWS_PYLON_Ammo";
		displayName = "70mm APKWS";
		count = 7;
        pylonWeapon = "JAS_FIR_APKWS_Pylon_Launcher";
		model="\fir_airweaponSystem_US\data\rocket\Hydra_7_Pod.p3d";
		hardpoints[]=
		{
			"JAS_APKWS_PYLON"
		};
		mass=15;
	};
	class JAS_FIR_Hellfire_L_1rnd_PYLON_M : JAS_AGM114L_1rnd_M
	{
        pylonWeapon = "JAS_HellfireLauncher_L_Pylon";
		model="\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II.p3d";
		hardpoints[]=
		{
			"JAS_HELLFIREL_PYLON"
		};
		mass=49;
	};
	class JAS_FIR_Hellfire_N_1rnd_PYLON_M : JAS_AGM114N_1rnd_M
	{
        pylonWeapon = "JAS_HellfireLauncher_N_Pylon";
		model="\CUP\Weapons\CUP_Weapons_Ammunition\AGM_114K_Hellfire_II\CUP_AGM_114K_Hellfire_II.p3d";
		hardpoints[]=
		{
			"JAS_HELLFIREK_PYLON","JAS_HELLFIREL_PYLON"
		};
		mass=48;
	};
	class JAS_FIR_AIM132_1rnd_PYLON_M : PylonMissile_1Rnd_AAA_missiles
	{
		pylonWeapon = "JAS_FIR_AIM132_Pylon";
		hardpoints[]=
		{
			"JAS_ASRAAM_PYLON","JAS_ALCA_AAM"
		};
		mass=88;
	};
	class JAS_FIR_SUU25_PYLON_M : FIR_SUU25_P_8rnd_M
	{
		ammo = "FIR_SUU25_Rocket";
		hardpoints[] = {"JAS_SUU_25"};
		initSpeed = 0;
		mass = 230;
		pylonWeapon = "JAS_FIR_SUU25_pylon";
		simulation = "ProxyMagazines";
		weight = 230;
	};
	class JAS_FIR_GBU12_PYLON_M : FIR_GBU12_P_1rnd_M
	{
		descriptionShort = "GBU-12 500lb";
		displayName = "GBU-12 Paveway II";
		displayNameShort = "GBU-12";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_NATO_NAVY_BOMB_INT","JAS_INDEP_BOMB","JAS_ALCA_AGM"};
		initSpeed = 0;
		mass = 230;
		pylonWeapon = "JAS_FIR_GBU12_Pylon";
		simulation = "ProxyMagazines";
		weight = 230;
	};
	class JAS_FIR_GBU12_P_3rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-12 Paveway II x3";
		displayNameShort = "Laser Guided";
		ammo = "FIR_GBU12";
		initSpeed = 0;
		count = 3;
		maxLeadSpeed = 0;
		model = "\FIR_AirWeaponSystem_US\data\proxies\rack_3x_gbu12.p3d";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_INDEP_BOMB","JAS_ALCA_AGM"};
		pylonWeapon = "JAS_FIR_GBU12_Pylon";
		mirrorMissilesIndexes[] = { 3, 2, 1 };
		mass = 690;
		FIR_AWS_SMS_F16_CODE = "FIR_AirWeaponSystem_US\ui\sms\f16\sms_gbu12_3_ca.paa";	
	};
	class JAS_FIR_GBU12_P_2rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "GBU-12 Paveway II x2";
		displayNameShort = "Laser Guided";
		ammo = "FIR_GBU12";
		initSpeed = 0;
		count = 2;
		maxLeadSpeed = 0;
		model = "\FIR_AirWeaponSystem_US\data\proxies\rack_3x_gbu12.p3d";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_INDEP_BOMB","JAS_ALCA_AGM"};
		pylonWeapon = "JAS_FIR_GBU12_Pylon";
		mirrorMissilesIndexes[] = { 3, 2, 1 };
		mass = 460;
		FIR_AWS_SMS_F16_CODE = "FIR_AirWeaponSystem_US\ui\sms\f16\sms_gbu12_2_ca.paa";	
	};
	class JAS_FIR_GBU10_PYLON_M : FIR_GBU10_P_1rnd_M
	{
		descriptionShort = "GBU-10 2000lb";
		displayName = "GBU-10 Paveway II";
		displayNameShort = "GBU-10";
		hardpoints[] = {"JAS_NATO_BOMB"};
		initSpeed = 0;
		mass = 907;
		pylonWeapon = "JAS_FIR_GBU10_Pylon";
		simulation = "ProxyMagazines";
		weight = 907;
	};
	class JAS_FIR_GBU24A_PYLON_M : FIR_GBU24A_P_1rnd_M
	{
		descriptionShort = "GBU-24A 2000lb";
		displayName = "GBU-24A Paveway III";
		displayNameShort = "GBU-24A";
		hardpoints[] = {"JAS_NATO_BOMB"};
		initSpeed = 0;
		mass = 1050;
		pylonWeapon = "JAS_FIR_GBU24A_Pylon";
		simulation = "ProxyMagazines";
		weight = 1050;
	};
	class JAS_FIR_GBU24B_PYLON_M : FIR_GBU24B_P_1rnd_M
	{
		descriptionShort = "GBU-24B 2000lb";
		displayName = "GBU-24B Paveway III";
		displayNameShort = "GBU-24B";
		hardpoints[] = {"JAS_NATO_BOMB"};
		initSpeed = 0;
		mass = 1050;
		pylonWeapon = "JAS_FIR_GBU24B_Pylon";
		simulation = "ProxyMagazines";
		weight = 1050;
	};
	class JAS_FIR_GBU24A_BLU118_PYLON_M : FIR_GBU24A_BLU118_P_1rnd_M
	{
		descriptionShort = "GBU-24/118 2000lb";
		displayName = "GBU-24/118 Paveway III";
		displayNameShort = "GBU-24/118";
		hardpoints[] = {"JAS_NATO_BOMB"};
		initSpeed = 0;
		mass = 1050;
		pylonWeapon = "JAS_FIR_GBU24118_Pylon";
		simulation = "ProxyMagazines";
		weight = 1050;
	};
	class JAS_PylonRack_MAV_D_x1 : FIR_AGM65D_P_1rnd_M
	{
		displayName = "AGM-65D";
		displayNameShort = "AGM IR";
		descriptionShort = "AGM-65D Maverick";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_INDEP_AGM","JAS_ALCA_AGM"};
		pylonWeapon = "JAS_BIS_weapon_AGM_65Launcher";
		mass = 304;
		weight = 304;
	};
	class JAS_PylonRack_3Rnd_MAV_D : FIR_AGM65D_P_3rnd_M
	{
		displayName = "AGM-65D x3";
		displayNameShort = "AGM IR";
		descriptionShort = "AGM-65D Maverick";
		pylonWeapon = "JAS_BIS_weapon_AGM_65Launcher";
		hardpoints[] = {"JAS_NATO_BOMB"};
		mass = 912;
		weight = 912;
	};
	class JAS_PylonRack_MAV_D_x2 : PylonRack_Missile_AGM_02_x2
	{
		displayName = "AGM-65D x2";
		displayNameShort = "AGM IR";
		descriptionShort = "AGM-65D Maverick";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE","JAS_INDEP_AGM"};
		pylonWeapon = "JAS_BIS_weapon_AGM_65Launcher";
		//ammo = "JAS_BIS_AGM65D";
		ammo = "FIR_AGM65D";
		author = "Bohemia Interactive/-{GOL}-Jason";
		mass = 608;
		weight = 608;
	};
	class JAS_PylonRack_MAV_H_x1 : JAS_PylonRack_MAV_D_x1
	{
		displayName = "AGM-65H";
		displayNameShort = "AGM CCD";
		descriptionShort = "AGM-65H Maverick";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_INDEP_AGM","JAS_ALCA_AGM"};
		pylonWeapon = "JAS_BIS_weapon_AGM_65HLauncher";
		ammo = "JAS_BIS_AGM65H";
		author = "Bohemia Interactive/-{GOL}-Jason";
		mass = 304;
		weight = 304;
	};
	class JAS_PylonRack_3Rnd_MAV_H : PylonRack_3Rnd_Missile_AGM_02_F
	{
		displayName = "AGM-65H x3";
		displayNameShort = "AGM CCD";
		descriptionShort = "AGM-65H Maverick";
		count = 3;
		ammo = "JAS_BIS_AGM65H";
		pylonWeapon = "JAS_BIS_weapon_AGM_65HLauncher";
		mirrorMissilesIndexes[] = {2,1,3};
		hardpoints[] = {"JAS_NATO_BOMB"};
		mass = 912;
		weight = 912;
	};
	class JAS_PylonRack_MAV_H_x2 : JAS_PylonRack_MAV_D_x2
	{
		displayName = "AGM-65H x2";
		displayNameShort = "AGM CCD";
		descriptionShort = "AGM-65H Maverick";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE","JAS_INDEP_AGM"};
		pylonWeapon = "JAS_BIS_weapon_AGM_65HLauncher";
		ammo = "JAS_BIS_AGM65H";
		author = "Bohemia Interactive/-{GOL}-Jason";
		mass = 608;
		weight = 608;
	};
	class JAS_PylonRack_MAV_L_x1 : JAS_PylonRack_MAV_D_x1
	{
		displayName = "AGM-65L";
		displayNameShort = "AGM Laser";
		descriptionShort = "AGM-65L Maverick";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_INDEP_AGM","JAS_ALCA_AGM"};
		pylonWeapon = "JAS_BIS_weapon_AGM_65LLauncher";
		ammo = "JAS_BIS_AGM65L";
		author = "Bohemia Interactive/-{GOL}-Jason";
		mass = 304;
		weight = 304;
	};
	class JAS_PylonRack_3Rnd_MAV_L : PylonRack_3Rnd_Missile_AGM_02_F
	{
		displayName = "AGM-65L x3";
		displayNameShort = "AGM Laser";
		descriptionShort = "AGM-65L Maverick";
		count = 3;
		ammo = "JAS_BIS_AGM65L";
		pylonWeapon = "JAS_BIS_weapon_AGM_65LLauncher";
		mirrorMissilesIndexes[] = {2,1,3};
		hardpoints[] = {"JAS_NATO_BOMB"};
		mass = 912;
		weight = 912;
	};
	class JAS_PylonRack_MAV_L_x2 : JAS_PylonRack_MAV_D_x2
	{
		displayName = "AGM-65L x2";
		displayNameShort = "AGM Laser";
		descriptionShort = "AGM-65L Maverick";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE","JAS_INDEP_AGM"};
		pylonWeapon = "JAS_BIS_weapon_AGM_65LLauncher";
		ammo = "JAS_BIS_AGM65L";
		author = "Bohemia Interactive/-{GOL}-Jason";
		mass = 608;
		weight = 608;
	};
	class JAS_FIR_CBU87_PYLON_M : FIR_CBU87_P_1rnd_M
	{
		descriptionShort = "CBU-87 CEM";
		displayName = "CBU-87 CEM";
		displayNameShort = "CBU-87";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_NATO_NAVY_BOMB_INT","JAS_ALCA_AGM"};
		initSpeed = 0;
		mass = 430;
		pylonWeapon = "JAS_FIR_CBU87_Pylon";

		weight = 430;
	};
	class JAS_FIR_CBU89_PYLON_M : FIR_CBU89_P_1rnd_M
	{
		descriptionShort = "CBU-89 GATOR";
		displayName = "CBU-89 GATOR";
		displayNameShort = "CBU-89";
		hardpoints[] = {"JAS_NATO_BOMB"};
		initSpeed = 0;
		mass = 222;
		pylonWeapon = "JAS_FIR_CBU89_Pylon";
		weight = 222;
	};
	class JAS_FIR_CBU97_PYLON_M : FIR_CBU97_P_1rnd_M
	{
		descriptionShort = "CBU-97 SFW";
		displayName = "CBU-97 SFW";
		displayNameShort = "CBU-97";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_NATO_NAVY_BOMB_INT"};
		initSpeed = 0;
		mass = 450;
		pylonWeapon = "JAS_FIR_CBU97_Pylon";
		weight = 450;
	};
	class JAS_FIR_MK82_GP_PYLON_M : FIR_Mk82_GP_P_1rnd_M
	{
		descriptionShort = "Mk82 GPB";
		displayName = "Mk82 GPB";
		displayNameShort = "Mk82 GPB";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_NATO_NAVY_BOMB_INT","JAS_INDEP_BOMB","JAS_ALCA_AGM"};
		initSpeed = 0;
		mass = 227;
		pylonWeapon = "JAS_FIR_MK82_Pylon";
		weight = 227;
	};
	class JAS_FIR_Mk82_GP_P_3rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Mk82 GPB x3";
		displayNameShort = "GPB";
		ammo = "FIR_mk82_GP";
		initSpeed = 0;
		count = 3;
		maxLeadSpeed = 0;
		model = "\FIR_AirWeaponSystem_US\data\proxies\rack_3x_gbu12.p3d";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_INDEP_BOMB","JAS_ALCA_AGM"};
		pylonWeapon = "JAS_FIR_MK82_Pylon";
		mirrorMissilesIndexes[] = { 1, 3, 2 };
		mass = 750;
		FIR_AWS_SMS_F16_CODE = "FIR_AirWeaponSystem_US\ui\sms\f16\sms_mk82_3_ca.paa";	
	};
	class JAS_FIR_mk82_snakeye_PYLON_M : FIR_Mk82_snakeye_P_1rnd_M
	{
		ammo = "FIR_mk82_Snakeye";
		count = 1;
		descriptionShort = "Mk82 AIR";
		displayName = "Mk82 AIR";
		displayNameShort = "Mk82 AIR";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_NATO_NAVY_BOMB_INT"};
		initSpeed = 0;
		mass = 227;
		model = "\FIR_AirWeaponSystem_US\data\mk82\mk82_snakeye.p3d";
		pylonWeapon = "JAS_FIR_MK82AIR_Pylon";
		weight = 227;
	};
	class JAS_FIR_Mk82_snakeye_P_3rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Mk82 Snakeye x3";
		displayNameShort = "High Drag";
		ammo = "FIR_mk82_Snakeye";
		initSpeed = 0;
		count = 3;
		maxLeadSpeed = 0;
		model = "\FIR_AirWeaponSystem_US\data\proxies\rack_3x_gbu12.p3d";
		hardpoints[] = {"JAS_NATO_BOMB","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB"};
		pylonWeapon = "JAS_FIR_MK82AIR_Pylon";
		mirrorMissilesIndexes[] = { 1, 3, 2 };
		mass = 750;
		FIR_AWS_SMS_F16_CODE = "FIR_AirWeaponSystem_US\ui\sms\f16\sms_mk82_3_ca.paa";	
	};
	class JAS_FIR_MK84_GP_PYLON_M : FIR_Mk84_GP_P_1rnd_M
	{
		descriptionShort = "Mk84 GPB";
		displayName = "Mk84 GPB";
		displayNameShort = "Mk84 GPB";
		hardpoints[] = {"JAS_NATO_BOMB"};
		initSpeed = 0;
		mass = 925;
		pylonWeapon = "JAS_FIR_MK84_Pylon";
		weight = 925;
	};
	class JAS_FIR_GBU31_PYLON_M : FIR_GBU31_P_1rnd_M
	{
		descriptionShort = "GBU-31 JDAM";
		displayName = "GBU-31";
		displayNameShort = "GBU-31 JDAM";
		hardpoints[] = {"JAS_NATO_JDAM"};
		initSpeed = 0;
		mass = 907;
		pylonWeapon = "JAS_FIR_GBU31_Pylon";
		weight = 907;
	};
	class JAS_FIR_GBU38_PYLON_M : FIR_GBU38_P_1rnd_M
	{
		descriptionShort = "GBU-38 JDAM";
		displayName = "GBU-38";
		displayNameShort = "GBU-38 JDAM";
		hardpoints[] = {"JAS_NATO_JDAM","JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB"};
		initSpeed = 0;
		mass = 230;
		pylonWeapon = "JAS_FIR_GBU38_Pylon";
		weight = 230;
	};
	class JAS_FIR_EGBU12_PYLON_M : FIR_EGBU12_P_1rnd_M
	{
		descriptionShort = "EGBU-12 Paveway";
		displayName = "EGBU-12 Enhanced Paveway II";
		displayNameShort = "LSR/GPS Dual";
		hardpoints[] = {"JAS_NATO_JDAM"};
		initSpeed = 0;
		mass = 277;
		pylonWeapon = "JAS_FIR_EGBU12_Pylon";
		weight = 277;
	};
	class JAS_FIR_EGBU12_P_2rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "EGBU-12 Enhanced Paveway II x2";
		displayNameShort = "LSR/GPS Dual";
		ammo = "FIR_EGBU12";
		initSpeed = 0;
		count = 2;
		maxLeadSpeed = 0;
		model = "\FIR_AirWeaponSystem_US\data\proxies\rack_3x_gbu12.p3d";
		hardpoints[] = {"JAS_NATO_JDAM"};
		pylonWeapon = "JAS_FIR_EGBU12_Pylon";
		mirrorMissilesIndexes[] = { 3, 2, 1 };
		mass = 554;	
	};
	class JAS_FIR_EGBU12_P_3rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "EGBU-12 Enhanced Paveway II x3";
		displayNameShort = "LSR/GPS Dual";
		ammo = "FIR_EGBU12";
		initSpeed = 0;
		count = 3;
		maxLeadSpeed = 0;
		model = "\FIR_AirWeaponSystem_US\data\proxies\rack_3x_gbu12.p3d";
		hardpoints[] = {"JAS_NATO_JDAM"};
		pylonWeapon = "JAS_FIR_EGBU12_Pylon";
		mirrorMissilesIndexes[] = { 3, 2, 1 };
		mass = 831;	
	};
	class JAS_FIR_gbu54_PYLON_M : FIR_GBU54_P_1rnd_M
	{
		descriptionShort = "GBU-54 LJDAM";
		displayName = "GBU-54 LJDAM";
		displayNameShort = "GBU-54";
		hardpoints[] = {"JAS_NATO_JDAM"};
		initSpeed = 0;
		mass = 227;
		pylonWeapon = "JAS_FIR_GBU54_Pylon";
		weight = 227;
	};
	class JAS_FIR_CBU103_PYLON_M : FIR_CBU103_P_1rnd_M
	{
		descriptionShort = "CBU-103 WCMD";
		displayName = "CBU-103 CEM WCMD";
		displayNameShort = "CBU-103";
		hardpoints[] = {"JAS_NATO_JDAM"};
		initSpeed = 0;
		mass = 431;
		pylonWeapon = "JAS_FIR_CBU103_Pylon";
		weight = 431;
	};
	class JAS_FIR_CBU105_PYLON_M : FIR_CBU105_P_1rnd_M
	{
		descriptionShort = "CBU-105 WCMD";
		displayName = "CBU-105 SFW WCMD";
		displayNameShort = "CBU-105";
		hardpoints[] = {"JAS_NATO_JDAM"};
		initSpeed = 0;
		mass = 450;
		pylonWeapon = "JAS_FIR_CBU105_Pylon";
		weight = 450;
	};
	class JAS_FIR_KAB500KR_x1 : PylonMissile_Bomb_GBU12_x1
	{
		ammo = "JAS_FIR_KAB500KR";
		count = 1;
		descriptionShort = "KAB-500KR";
		displayName = "KAB-500KR TV Guided";
		displayNameShort = "KAB-500KR";
		hardpoints[] = {"JAS_RUS_BOMB"};
		initSpeed = 0;
		mass = 500;
		model = "\FIR_AirWeaponSystem_US\data\kab500\kab500kr.p3d";
		pylonWeapon = "JAS_FIR_KAB500KR_Launcher";
		simulation = "ProxyMagazines";
		weight = 500;
	};
	class JAS_FIR_KAB500SE_x1 : PylonMissile_Bomb_GBU12_x1
	{
		ammo = "JAS_FIR_KAB500SE";
		count = 1;
		descriptionShort = "KAB-500SE";
		displayName = "KAB-500SE GPS Guided";
		displayNameShort = "KAB-500SE";
		hardpoints[] = {"JAS_RUS_BOMB"};
		initSpeed = 0;
		mass = 500;
		model = "\FIR_AirWeaponSystem_US\data\kab500\kab500se.p3d";
		pylonWeapon = "JAS_FIR_KAB500SE_Launcher";
		simulation = "ProxyMagazines";
		weight = 500;
	};
	class JAS_FIR_KAB500L_x1 : PylonMissile_Bomb_GBU12_x1
	{
		ammo = "JAS_FIR_KAB500L";
		count = 1;
		descriptionShort = "KAB-500L";
		displayName = "KAB-500L Laser Guided";
		displayNameShort = "KAB-500L";
		hardpoints[] = {"JAS_RUS_BOMB"};
		initSpeed = 0;
		mass = 500;
		model = "\FIR_AirWeaponSystem_US\data\kab500\kab500l.p3d";
		pylonWeapon = "JAS_FIR_KAB500L_Launcher";
		simulation = "ProxyMagazines";
		weight = 500;
	};
	class JAS_KH25MPU_x1 : PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "JAS_BIS_KH25MPU";
		count = 1;
		descriptionShort = "Kh-25MPU";
		displayName = "Kh-25MPU ARM";
		displayNameShort = "Kh-25MPU";
		hardpoints[] = {"JAS_RUS_KH25","JAS_YAK_AAM"};
		mass = 299;
		pylonWeapon = "JAS_BIS_weapon_AGM_KH25MPU";
		weight = 299;
	};
	class JAS_KH25R_x1 : PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "JAS_BIS_KH25R";
		count = 1;
		descriptionShort = "Kh-25R";
		displayName = "Kh-25R Radio Guided";
		displayNameShort = "Kh-25R";
		hardpoints[] = {"JAS_RUS_KH25","JAS_YAK_AAM","JAS_RUS_KH25_MI48"};
		mass = 299;
		pylonWeapon = "JAS_BIS_weapon_AGM_KH25R";
		weight = 299;
	};
	class JAS_KH25MTP_x1 : PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "JAS_BIS_KH25MTP";
		count = 1;
		descriptionShort = "Kh-25MTP";
		displayName = "Kh-25MTP IR Guided";
		displayNameShort = "Kh-25MTP";
		hardpoints[] = {"JAS_RUS_KH25","JAS_YAK_AAM","JAS_RUS_KH25_MI48"};
		mass = 299;
		pylonWeapon = "JAS_BIS_weapon_AGM_KH25MTP";
		weight = 299;
	};
	class JAS_KH25MT_x1 : PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "JAS_BIS_KH25MT";
		count = 1;
		descriptionShort = "Kh-25MT";
		displayName = "Kh-25MT TV Guided";
		displayNameShort = "Kh-25MT";
		hardpoints[] = {"JAS_RUS_KH25","JAS_YAK_AAM","JAS_RUS_KH25_MI48"};
		mass = 299;
		pylonWeapon = "JAS_BIS_weapon_AGM_KH25MT";
		weight = 299;
	};
	class JAS_KH25MS_x1 : PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "JAS_BIS_KH25MS";
		count = 1;
		descriptionShort = "Kh-25MS";
		displayName = "Kh-25MS GPS Guided";
		displayNameShort = "Kh-25MS";
		hardpoints[] = {"JAS_RUS_KH25","JAS_YAK_AAM"};
		mass = 299;
		pylonWeapon = "JAS_BIS_weapon_AGM_KH25MS";
		weight = 299;
	};
	/*class JAS_KH25MA_x1 : PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "JAS_BIS_KH25MA";
		count = 1;
		descriptionShort = "Kh-25MA";
		displayName = "Kh-25MA Radar Guided";
		displayNameShort = "Kh-25MA";
		hardpoints[] = {"JAS_RUS_KH25"};
		mass = 299;
		pylonWeapon = "JAS_BIS_weapon_AGM_KH25MA";
		weight = 299;
	};*/
	class JAS_KH25ML_x1 : PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "JAS_BIS_KH25ML";
		count = 1;
		descriptionShort = "Kh-25ML";
		displayName = "Kh-25ML Laser Guided";
		displayNameShort = "Kh-25ML";
		hardpoints[] = {"JAS_RUS_KH25","JAS_YAK_AAM","JAS_RUS_KH25_MI48"};
		mass = 299;
		pylonWeapon = "JAS_BIS_weapon_AGM_KH25ML";
		weight = 299;
	};
	class JAS_R73_PYLON_M : PylonMissile_Missile_AA_R73_x1
	{
		ammo = "JAS_R73";
		count = 1;
		descriptionShort = "Vympel R-73";
		displayName = "Vympel R73 Archer";
		displayNameShort = "R-73";
		hardpoints[] = {"JAS_RUS_AAM","JAS_YAK_AAM"};
		mass = 105;
		pylonWeapon = "JAS_BIS_weapon_R73Launcher";
		weight = 105;
	};
	class JAS_R77_PYLON_M : PylonMissile_Missile_AA_R77_x1
	{
		ammo = "JAS_R77";
		count = 1;
		descriptionShort = "Vympel R-77";
		displayName = "Vympel R77 Adder";
		displayNameShort = "R-77";
		hardpoints[] = {"JAS_RUS_AAM"};
		mass = 190;
		pylonWeapon = "JAS_BIS_weapon_R77Launcher";
		weight = 190;
	};
	class JAS_FIR_AIM9L_PYLON_M : PylonRack_Missile_BIM9X_x1
	{
		ammo = "JAS_FIR_AIM9L";
		count = 1;
		descriptionShort = "AIM-9X";
		displayName = "AIM-9X Sidewinder";
		displayNameShort = "AIM-9X";
		hardpoints[] = {"JAS_NATO_AAM","JAS_NATO_AAM_INT","JAS_INDEP_AAM","JAS_ALCA_AAM"};
		initSpeed = 0;
		mass = 86;
		pylonWeapon = "JAS_FIR_AIM9L_Pylon";
		simulation = "ProxyMagazines";
		weight = 86;
	};
	class JAS_FIR_AIM120_PYLON_M : PylonRack_Missile_AMRAAM_D_x1
	{
		ammo = "JAS_FIR_AIM120";
		count = 1;
		descriptionShort = "AIM-120D AMRAAM";
		displayName = "AIM-120D AMRAAM";
		displayNameShort = "AIM-120D";
		hardpoints[] = {"JAS_NATO_AAM"};
		mass = 152;
		pylonWeapon = "JAS_FIR_AIM120_Pylon";
		weight = 152;
	};
	class JAS_FIR_AIM120_PYLON_M_int : PylonMissile_Missile_AMRAAM_D_INT_x1
	{
		ammo = "JAS_FIR_AIM120";
		count = 1;
		descriptionShort = "AIM-120D AMRAAM";
		displayName = "AIM-120D AMRAAM";
		displayNameShort = "AIM-120D";
		hardpoints[] = {"JAS_NATO_AAM_INTBAY"};
		mass = 152;
		pylonWeapon = "JAS_FIR_AIM120_Pylon";
		weight = 152;
	};
	class JAS_FIR_AIM9L_PYLON_Mx2 : PylonRack_Missile_BIM9X_x2 
	{
		ammo = "JAS_FIR_AIM9L";
		count = 2;
		descriptionShort = "AIM-9X";
		displayName = "AIM-9X Sidewinder x2";
		displayNameShort = "AIM-9X";
		hardpoints[] = {"JAS_NATO_AAM","JAS_INDEP_AAM"};
		initSpeed = 0;
		mass = 172;
		pylonWeapon = "JAS_FIR_AIM9L_Pylon";
		weight = 172;
	};
	class JAS_FIR_AIM120_PYLON_Mx2 : PylonRack_Missile_AMRAAM_D_x2
	{
		ammo = "JAS_FIR_AIM120";
		count = 2;
		descriptionShort = "AIM-120D AMRAAM";
		displayName = "AIM-120D AMRAAM x2";
		displayNameShort = "AIM-120D";
		hardpoints[] = {"JAS_NATO_AAM"};
		mass = 304;
		pylonWeapon = "JAS_FIR_AIM120_Pylon";
		weight = 304;
	};
	class JAS_FIR_AIM7_PYLON_M : FIR_AIM7_P_1rnd_M
	{
		descriptionShort = "AIM-7 Sparrow";
		displayName = "AIM-7 Sparrow";
		displayNameShort = "AIM-7";
		hardpoints[] = {"JAS_NATO_AAM"};
		mass = 230;
		pylonWeapon = "JAS_FIR_AIM7_Pylon";
		weight = 230;
		/*class mfdElements // Single pylon
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						pos[] = {0,0};
						type = "fixed";
					};
				};
				class Draw
				{
					class Default
					{
						alpha = 0.22;
						color[] = {0,0.12,0};
						condition = "PylonAmmoRelative>0";
						class PylonText1
						{
							align = "center";
							down[] = {"Center",1,[-0.005,0.065],1};
							pos[] = {"Center",1,[-0.005,0.02],1};
							right[] = {"Center",1,[0.045,0.02],1};
							scale = 1;
							source = "static";
							sourceScale = 1;
							text = "ARH";
							type = "text";
						};
						class Shape
						{
							points[] = {["Center",[0,-0.0147436],1],["Center",[0.0075,-0.0127679],1],["Center",[0.01299,-0.00737179],1],["Center",[0.015,0],1],["Center",[0.01299,0.00737179],1],["Center",[0.0075,0.0127679],1],["Center",[0,0.0147436],1],["Center",[-0.0075,0.0127679],1],["Center",[-0.01299,0.00737179],1],["Center",[-0.015,0],1],["Center",[-0.01299,-0.00737179],1],["Center",[-0.0075,-0.0127679],1],["Center",[0,-0.0147436],1],[],["Center",[0.0106066,-0.0104253],1],["Center",[0.0212132,-0.0208506],1],[],["Center",[0.0106066,0.0104253],1],["Center",[0.0212132,0.0208506],1],[],["Center",[-0.0106066,0.0104253],1],["Center",[-0.0212132,0.0208506],1],[],["Center",[-0.0106066,-0.0104253],1],["Center",[-0.0212132,-0.0208506],1],[]};
							type = "line";
							width = 4;
						};
					};
					class Empty
					{
						alpha = 1;
						color[] = {1,0,0,1};
						condition = "PylonAmmoRelative <= 0";
						class Background
						{
							points[] = {[["Center",1,[0,0],1],["Center",[0.0106066,-0.0104253],1],["Center",[0.015,6.44463e-010],1],["Center",[0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[0.0106066,0.0104253],1],["Center",[-1.31134e-009,0.0147436],1],["Center",[-0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,0.0104253],1],["Center",[-0.015,-1.75816e-010],1],["Center",[-0.0106066,-0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,-0.0104253],1],["Center",[2.62268e-009,-0.0147436],1],["Center",[0.0106066,-0.0104253],1]]};
							type = "polygon";
						};
						class PylonText1
						{
							align = "center";
							down[] = {"Center",1,[-0.005,0.065],1};
							pos[] = {"Center",1,[-0.005,0.02],1};
							right[] = {"Center",1,[0.045,0.02],1};
							scale = 1;
							source = "static";
							sourceScale = 1;
							text = "ARH";
							type = "text";
						};
						class Shape
						{
							points[] = {["Center",[0,-0.0147436],1],["Center",[0.0075,-0.0127679],1],["Center",[0.01299,-0.00737179],1],["Center",[0.015,0],1],["Center",[0.01299,0.00737179],1],["Center",[0.0075,0.0127679],1],["Center",[0,0.0147436],1],["Center",[-0.0075,0.0127679],1],["Center",[-0.01299,0.00737179],1],["Center",[-0.015,0],1],["Center",[-0.01299,-0.00737179],1],["Center",[-0.0075,-0.0127679],1],["Center",[0,-0.0147436],1],[],["Center",[0.0106066,-0.0104253],1],["Center",[0.0212132,-0.0208506],1],[],["Center",[0.0106066,0.0104253],1],["Center",[0.0212132,0.0208506],1],[],["Center",[-0.0106066,0.0104253],1],["Center",[-0.0212132,0.0208506],1],[],["Center",[-0.0106066,-0.0104253],1],["Center",[-0.0212132,-0.0208506],1],[]};
							type = "line";
							width = 4;
						};
					};
					class Selected
					{
						alpha = 1;
						color[] = {0,0.12,0};
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						class Background
						{
							points[] = {[["Center",1,[0,0],1],["Center",[0.0106066,-0.0104253],1],["Center",[0.015,6.44463e-010],1],["Center",[0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[0.0106066,0.0104253],1],["Center",[-1.31134e-009,0.0147436],1],["Center",[-0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,0.0104253],1],["Center",[-0.015,-1.75816e-010],1],["Center",[-0.0106066,-0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,-0.0104253],1],["Center",[2.62268e-009,-0.0147436],1],["Center",[0.0106066,-0.0104253],1]]};
							type = "polygon";
						};
						class PylonText1
						{
							align = "center";
							down[] = {"Center",1,[-0.005,0.065],1};
							pos[] = {"Center",1,[-0.005,0.02],1};
							right[] = {"Center",1,[0.045,0.02],1};
							scale = 1;
							source = "static";
							sourceScale = 1;
							text = "ARH";
							type = "text";
						};
						class Shape
						{
							points[] = {["Center",[0,-0.0147436],1],["Center",[0.0075,-0.0127679],1],["Center",[0.01299,-0.00737179],1],["Center",[0.015,0],1],["Center",[0.01299,0.00737179],1],["Center",[0.0075,0.0127679],1],["Center",[0,0.0147436],1],["Center",[-0.0075,0.0127679],1],["Center",[-0.01299,0.00737179],1],["Center",[-0.015,0],1],["Center",[-0.01299,-0.00737179],1],["Center",[-0.0075,-0.0127679],1],["Center",[0,-0.0147436],1],[],["Center",[0.0106066,-0.0104253],1],["Center",[0.0212132,-0.0208506],1],[],["Center",[0.0106066,0.0104253],1],["Center",[0.0212132,0.0208506],1],[],["Center",[-0.0106066,0.0104253],1],["Center",[-0.0212132,0.0208506],1],[],["Center",[-0.0106066,-0.0104253],1],["Center",[-0.0212132,-0.0208506],1],[]};
							type = "line";
							width = 4;
						};
					};
				};
			};
		};*/
	};
	class JAS_FIR_AGM84H_PYLON_M : FIR_AGM84H_1rnd_M
	{
		ammo = "JAS_FIR_AGM84H";
		count = 1;
		descriptionShort = "AGM-84 ASM";
		displayName = "AGM-84 Harpoon";
		displayNameShort = "AGM-84";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE"};
		initSpeed = 0;
		mass = 2691;
		model = "\FIR_AirWeaponSystem_US\data\AGM84H\AGM84H.p3d";
		pylonWeapon = "JAS_FIR_AGM84H_Pylon";
		simulation = "ProxyMagazines";
		weight = 2691;
	};
	class JAS_FIR_AGM84SLAM_PYLON_M : JAS_FIR_AGM84H_PYLON_M
	{
		ammo = "JAS_FIR_AGM84SLAM";
		descriptionShort = "AGM-84H SLAM ER";
		displayName = "AGM-84H SLAM ER";
		displayNameShort = "AGM-84H SLAM";
		mass = 675;
		weight = 675;
		pylonWeapon = "JAS_FIR_AGM84SLAM_Pylon";
	};
	class JAS_FIR_AGM88_PYLON_M : FIR_AGM88_P_1rnd_M
	{
		descriptionShort = "AGM-88 HARM";
		displayName = "AGM-88 HARM";
		displayNameShort = "AGM-88";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE"};
		initSpeed = 0;
		mass = 355;
		pylonWeapon = "JAS_FIR_AGM88_Pylon";
		weight = 355;
		/*class mfdElements // Single pylon
		{
			class Plane_Fighter_01
			{
				//class Bones : Bones	{};
				class Draw
				{
					class Default
					{
						//alpha = 0.22;
						//color[] = {0,0.12,0};
						//condition = "PylonAmmoRelative>0";
						class PylonText1
						{
							//align = "center";
							//down[] = {"Center",1,[-0.005,0.065],1};
							//pos[] = {"Center",1,[-0.005,0.02],1};
							//right[] = {"Center",1,[0.045,0.02],1};
							//scale = 1;
							//source = "static";
							//sourceScale = 1;
							text = "ARM";
							//type = "text";
						};
						class Shape
						{
							//points[] = {["Center",[0,-0.0147436],1],["Center",[0.0075,-0.0127679],1],["Center",[0.01299,-0.00737179],1],["Center",[0.015,0],1],["Center",[0.01299,0.00737179],1],["Center",[0.0075,0.0127679],1],["Center",[0,0.0147436],1],["Center",[-0.0075,0.0127679],1],["Center",[-0.01299,0.00737179],1],["Center",[-0.015,0],1],["Center",[-0.01299,-0.00737179],1],["Center",[-0.0075,-0.0127679],1],["Center",[0,-0.0147436],1],[],["Center",[0.0106066,-0.0104253],1],["Center",[0.0212132,-0.0208506],1],[],["Center",[0.0106066,0.0104253],1],["Center",[0.0212132,0.0208506],1],[],["Center",[-0.0106066,0.0104253],1],["Center",[-0.0212132,0.0208506],1],[],["Center",[-0.0106066,-0.0104253],1],["Center",[-0.0212132,-0.0208506],1],[]};
							type = "line";
							width = 4;
						};
					};
					class Selected
					{
						//alpha = 1;
						//color[] = {0,0.12,0};
						//condition = "(PylonSelected +  PylonAmmoRelative)/2";
						class Background
						{
							//points[] = {[["Center",1,[0,0],1],["Center",[0.0106066,-0.0104253],1],["Center",[0.015,6.44463e-010],1],["Center",[0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[0.0106066,0.0104253],1],["Center",[-1.31134e-009,0.0147436],1],["Center",[-0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,0.0104253],1],["Center",[-0.015,-1.75816e-010],1],["Center",[-0.0106066,-0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,-0.0104253],1],["Center",[2.62268e-009,-0.0147436],1],["Center",[0.0106066,-0.0104253],1]]};
							type = "polygon";
						};
						class PylonText1
						{
							//align = "center";
							//down[] = {"Center",1,[-0.005,0.065],1};
							//pos[] = {"Center",1,[-0.005,0.02],1};
							//right[] = {"Center",1,[0.045,0.02],1};
							//scale = 1;
							//source = "static";
							//sourceScale = 1;
							text = "ARM";
							//type = "text";
						};
						class Shape : Shape
						{
							//points[] = {["Center",[0,-0.0147436],1],["Center",[0.0075,-0.0127679],1],["Center",[0.01299,-0.00737179],1],["Center",[0.015,0],1],["Center",[0.01299,0.00737179],1],["Center",[0.0075,0.0127679],1],["Center",[0,0.0147436],1],["Center",[-0.0075,0.0127679],1],["Center",[-0.01299,0.00737179],1],["Center",[-0.015,0],1],["Center",[-0.01299,-0.00737179],1],["Center",[-0.0075,-0.0127679],1],["Center",[0,-0.0147436],1],[],["Center",[0.0106066,-0.0104253],1],["Center",[0.0212132,-0.0208506],1],[],["Center",[0.0106066,0.0104253],1],["Center",[0.0212132,0.0208506],1],[],["Center",[-0.0106066,0.0104253],1],["Center",[-0.0212132,0.0208506],1],[],["Center",[-0.0106066,-0.0104253],1],["Center",[-0.0212132,-0.0208506],1],[]};
							type = "line";
							width = 4;
						};
					};
					class Empty
					{
						//alpha = 1;
						//color[] = {1,0,0,1};
						//condition = "PylonAmmoRelative <= 0";
						class Background : Background
						{
							//points[] = {[["Center",1,[0,0],1],["Center",[0.0106066,-0.0104253],1],["Center",[0.015,6.44463e-010],1],["Center",[0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[0.0106066,0.0104253],1],["Center",[-1.31134e-009,0.0147436],1],["Center",[-0.0106066,0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,0.0104253],1],["Center",[-0.015,-1.75816e-010],1],["Center",[-0.0106066,-0.0104253],1]],[["Center",1,[0,0],1],["Center",[-0.0106066,-0.0104253],1],["Center",[2.62268e-009,-0.0147436],1],["Center",[0.0106066,-0.0104253],1]]};
							type = "polygon";
						};
						class PylonText1
						{
							//align = "center";
							//down[] = {"Center",1,[-0.005,0.065],1};
							//pos[] = {"Center",1,[-0.005,0.02],1};
							//right[] = {"Center",1,[0.045,0.02],1};
							//scale = 1;
							//source = "static";
							//sourceScale = 1;
							text = "ARM";
							//type = "text";
						};
						class Shape : Shape
						{
							//points[] = {["Center",[0,-0.0147436],1],["Center",[0.0075,-0.0127679],1],["Center",[0.01299,-0.00737179],1],["Center",[0.015,0],1],["Center",[0.01299,0.00737179],1],["Center",[0.0075,0.0127679],1],["Center",[0,0.0147436],1],["Center",[-0.0075,0.0127679],1],["Center",[-0.01299,0.00737179],1],["Center",[-0.015,0],1],["Center",[-0.01299,-0.00737179],1],["Center",[-0.0075,-0.0127679],1],["Center",[0,-0.0147436],1],[],["Center",[0.0106066,-0.0104253],1],["Center",[0.0212132,-0.0208506],1],[],["Center",[0.0106066,0.0104253],1],["Center",[0.0212132,0.0208506],1],[],["Center",[-0.0106066,0.0104253],1],["Center",[-0.0212132,0.0208506],1],[],["Center",[-0.0106066,-0.0104253],1],["Center",[-0.0212132,-0.0208506],1],[]};
							type = "line";
							width = 4;
						};
					};
				};
			};
		};*/
	};
	class JAS_FIR_AGM154A_PYLON_M : FIR_AGM154A_P_1rnd_M
	{
		descriptionShort = "AGM154A JSOW CEM";
		displayName = "AGM154A";
		displayNameShort = "AGM154A JSOW";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_NATO_NAVY_BOMB_INT"};
		initSpeed = 0;
		mass = 497;
		pylonWeapon = "JAS_FIR_AGM154A_Pylon";
		weight = 497;
	};	
	class JAS_FIR_AGM154C_PYLON_M : FIR_AGM154C_P_1rnd_M
	{
		descriptionShort = "AGM154C GPB";
		displayName = "AGM154C";
		displayNameShort = "AGM154C GPB";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB","JAS_NATO_NAVY_BOMB_INT"};
		initSpeed = 0;
		mass = 483;
		pylonWeapon = "JAS_FIR_AGM154C_Pylon";
		weight = 483;
	};
	class JAS_FIR_GBU32_PYLON_M : FIR_GBU32_P_1rnd_M
	{
		descriptionShort = "GBU-32 1000lb JDAM";
		displayName = "GBU-32";
		displayNameShort = "GBU-32 JDAM";
		hardpoints[] = {"JAS_NATO_NAVY_STRIKE","JAS_NATO_NAVY_BOMB"};
		initSpeed = 0;
		mass = 450;
		pylonWeapon = "JAS_FIR_GBU32_Pylon";
		weight = 450;
	};
	class JAS_FIR_IRIS_T_PYLON_M : PylonRack_Missile_BIM9X_x1
	{
		ammo = "JAS_FIR_IRIS_T";
		count = 1;
		descriptionShort = "IRIS-T";
		displayName = "IRIS-T IR AAM";
		displayNameShort = "IRIS-T";
		hardpoints[] = {"JAS_INDEP_AAM","JAS_ALCA_AAM"};
		model = "\FIR_AirWeaponSystem_US\data\IRIS_T\IRIS_T.p3d";
		initSpeed = 0;
		mass = 88;
		pylonWeapon = "JAS_FIR_IRIS_T_Launcher";
		simulation = "ProxyMagazines";
		weight = 88;
	};
	class JAS_FIR_Meteor_PYLON_M : PylonRack_Missile_AMRAAM_D_x1
	{
		ammo = "JAS_FIR_Meteor";
		count = 1;
		descriptionShort = "Meteor BVRAAM";
		displayName = "Meteor BVRAAM";
		displayNameShort = "Meteor";
		hardpoints[] = {"JAS_INDEP_AAM"};
		mass = 185;
		model = "\FIR_AirWeaponSystem_US\data\Meteor\Meteor.p3d";
		pylonWeapon = "JAS_FIR_Meteor_Launcher";
		weight = 185;
	};
	class JAS_FIR_AIM120C_PYLON_M : PylonRack_Missile_AMRAAM_C_x1
	{
		ammo = "JAS_FIR_AIM120C";
		count = 1;
		descriptionShort = "AIM-120C AMRAAM";
		displayName = "AIM-120C AMRAAM";
		displayNameShort = "AIM-120C";
		hardpoints[] = {"JAS_INDEP_AAM","JAS_ALCA_AAM"};
		mass = 152;
		pylonWeapon = "JAS_FIR_AIM120C_Pylon";
		weight = 152;
	};
	class JAS_FIR_AIM120C_PYLON_Mx2 : PylonRack_Missile_AMRAAM_C_x2
	{
		ammo = "JAS_FIR_AIM120C";
		count = 2;
		descriptionShort = "AIM-120C AMRAAM";
		displayName = "AIM-120C AMRAAM x2";
		displayNameShort = "AIM-120C";
		hardpoints[] = {"JAS_INDEP_AAM"};
		mass = 304;
		pylonWeapon = "JAS_FIR_AIM120C_Pylon";
		weight = 304;
	};
	class JAS_FIR_Meteor_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Meteor";
		displayNameShort = "Mid-Range";
		count = 1;
		nameSound = "missiles";
		ammo = "JAS_FIR_Meteor";
		initSpeed = 0;
		maxLeadSpeed = 300;
	};
	class JAS_FIR_AIM132_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "AIM-132 ASRAAM";
		displayNameShort = "Short-Range";
		ammo = "JAS_FIR_AIM132";
		initSpeed = 0;
		nameSound = "missiles";
		count = 1;
		maxLeadSpeed = 300;
	};
	class JAS_FIR_PavewayIV_1rnd_M : VehicleMagazine
	{
		scope = 2;
		displayName = "Paveway IV";
		displayNameShort = "Laser Guided";
		count = 1;
		ammo = "JAS_FIR_PAVEWAY_IV";
		initSpeed = 0;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class MissileLauncher;
	class RocketPods;
	class MGun;
	class CMFlareLauncher;
	class SmokeLauncher;
	class gatling_20mm;
	class Laserdesignator_mounted;
	class Mk82BombLauncher;
	class Missile_AA_03_Plane_CAS_02_F;
	class CannonCore;
	class FIR_AIM120;
	class rockets_Skyfire;
	class JAS_Master_Arm : RocketPods
	{
		CanLock = 0;
        displayName = "MASTER ARM SAFE";
        displayNameMagazine = "SAFE";
        shortNameMagazine = "SAFE";
        nameSound = "cannon";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";
        magazines[] = {"FakeMagazine"};
        burst = 0;
        reloadTime = 0.01;
        magazineReloadTime = 0.1;
	};
	class JAS_rockets_Skyfire_I : rockets_Skyfire
	{
		scope = 2;
		class Burst;
	};
	class Rocket_03_AP_Plane_CAS_02_F;
	class Rocket_03_HE_Plane_CAS_02_F;
	class Bomb_03_Plane_CAS_02_F;
	class missiles_SCALPEL;
	class JAS_missiles_SCALPEL: missiles_SCALPEL
	{
		magazines[] = {"JAS_4Rnd_LG_scalpel"};
	};
	class JAS_1Rnd_Bomb_03_F: Bomb_03_Plane_CAS_02_F
	{
		canLock = 2;
		displayName = "KAB-250";
		magazines[] = {"JAS_1Rnd_Bomb_03_F_PYLON"};
	};
	class JAS_Bomb_03_Plane_CAS_02_F_RBK: Bomb_03_Plane_CAS_02_F
	{
		displayName = "RBK-250";
		magazines[] = {"JAS_1Rnd_Bomb_03_F_RBK"};
	};
	class JAS_Rocket_03_HE_Plane_CAS_02_F: Rocket_03_HE_Plane_CAS_02_F
	{
		magazines[] = {"JAS_20Rnd_Rocket_03_HE_F"};
	};
	class JAS_Rocket_03_AP_Plane_CAS_02_F: Rocket_03_AP_Plane_CAS_02_F
	{
		magazines[] = {"JAS_20Rnd_Rocket_03_AP_F"};
	};
	class JAS_rockets_Skyfire: JAS_rockets_Skyfire_I
	{
		ballisticsComputer = 8;
		canLock = 2;
		displayName = "S-8KOR 80mm";
		cmImmunity = 0.75;
		lockAcquire = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,4};
		weaponLockDelay = 1;
		weaponLockSystem = 4;
		magazines[] = {"JAS_19Rnd_Rocket_Skyfire"};
	};
	class JAS_FIR_AIM120 : FIR_AIM120
	{
		magazines[] = {"JAS_FIR_AIM120B_1rnd_M"};
	};
	class JAS_FIR_AIM132_int : MissileLauncher
	{
		scope = 2;
		weaponLockDelay = 2.0;
		weaponLockSystem = 2;
		cmImmunity = 0.98;
		holdsterAnimValue = 1;
		missileLockCone = 360;
		lockSeekRadius = 1200;
		lockingTargetSound[] = {"\FIR_AirWeaponSystem_US\sound\Sidewinder_growling.wss",4,1};
		lockedTargetSound[] = {"\FIR_AirWeaponSystem_US\sound\Sidewinder_growling.wss",4.5,1.1};
		/*0.316228*/
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "AIM-132 Internal Bay";
		displayNameMagazine = "AIM132";
		shortNameMagazine = "AIM132";
		magazineReloadTime=0.5;
		initspeed = 30;
		reloadTime = 0.5;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 800;
		minRange = 100;
		minRangeProbab = 0.75;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		magazines[] = {"JAS_FIR_AIM132_1rnd_M_int"};
	};
	class JAS_FIR_AIM120_int : MissileLauncher
	{
		scope = 2;
		weaponLockDelay = 0.5;
		weaponLockSystem = 8;
		cmImmunity = 0.98;
		holdsterAnimValue = 1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "AIM-120C Internal Bay";
		displayNameMagazine = "AIM120C";
		shortNameMagazine = "AIM120";
		magazineReloadTime=0.5;
		initspeed = 30;
		reloadTime = 0.3;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 4000;
		minRange = 1000;
		minRangeProbab = 0.04;
		midRange = 2000;
		midRangeProbab = 0.80;
		maxRange = 4000;
		maxRangeProbab = 0.65;
		magazines[] = {"JAS_FIR_AIM120_1rnd_M_int"};
	};
	class JAS_FIR_PAVEWAY_IV_int: Mk82BombLauncher
	{
		autofire=0;
		ballisticsComputer=8;
		scope=2;
		holdsterAnimValue=1;
		displayName="Paveway IV Internal Bay";
		displayNameMagazine="PavewayIV";
		shortNameMagazine="PavewayIV";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_PavewayIV_1rnd_M_int"
		};
	};
	class JAS_FIR_EGBU12_int: Mk82BombLauncher
	{
		autofire=0;
		ballisticsComputer=8;
		scope=2;
		holdsterAnimValue=1;
		displayName="EGBU-12 Enhanced PaveWay II";
		displayNameMagazine="EGBU";
		shortNameMagazine="EGBU";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_EGBU12_1rnd_M_int"
		};
	};
	class JAS_FIR_CBU105_int: Mk82BombLauncher
	{
		autofire=0;
		canlock=0;
		ballisticsComputer=8;
		scope=2;
		holdsterAnimValue=1;
		displayName="CBU-105 Internal Bay";
		displayNameMagazine="WCMD SFW";
		shortNameMagazine="SFW";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_CBU105_1rnd_M_int"
		};
	};
	class JAS_FIR_GBU54_int: Mk82BombLauncher
	{
		autofire=0;
		ballisticsComputer=8;
		scope=2;
		holdsterAnimValue=1;
		displayName="GBU-54 Internal Bay";
		displayNameMagazine="GBU54";
		shortNameMagazine="GBU54 LJDAM";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		canLock=2;
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_gbu54_1rnd_M_int"
		};
	};
	class JAS_R77_LAU : MissileLauncher
	{
		scope = 2;
		weaponLockDelay = 0.5;
		weaponLockSystem = 8;
		cmImmunity = 0.98;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "Vympel R-77";
		displayNameMagazine = "R-77";
		shortNameMagazine = "R-77";
		magazineReloadTime=0.5;
		initspeed = 30;
		reloadTime = 0.3;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 4000;
		minRange = 1000;
		minRangeProbab = 0.04;
		midRange = 2000;
		midRangeProbab = 0.80;
		maxRange = 4000;
		maxRangeProbab = 0.65;
		magazines[] = {"JAS_R77_1rnd_M"};
	};
	class JAS_Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		scope=1;
		displayName="3mm Gatling Cannon";
		magazines[]=
		{
			"JAS_1000Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		holdsterAnimValue=1;
		ballisticsComputer="4 + 8";
		canLock=2;
		cursor="EmptyCursor";
		cursorAim="mg";
		modes[]=
		{
			"LowROF",
			"close",
			"near",
			"short",
			"medium",
			"far"
		};
		nameSound="cannon";
		shotFromTurret=0;
		muzzlePos="Gatling_muzzleflash";
		muzzleEnd="Gatling_barrels_end";
		selectionFireAnim="Gatling_muzzleflash";
		autoFire=0;
		burst=20;
		reloadTime=0.029999999;
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun3";
				positionName="Gatling_barrels_end";
				directionName="Gatling_barrels_start";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_Gatling_30mm_Plane_CAS_01_F0";
			reloadTime=0.029999999;
			aiRateOfFire=0.25;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",
					5.6234136,
					1,
					1500,
					{25704,32159}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=1;
			autoFire=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=10;
			aiDispersionCoefY=10;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			minRange=1;
			minRangeProbab=0.059999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			dispersion=0.0049999999;
			burst=20;
			showToPlayer=1;
		};
		class close: LowROF
		{
			showToPlayer=0;
			burst=25;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=200;
			midRangeProbab=0.88;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class near: close
		{
			showToPlayer=0;
			burst=20;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=150;
			midRangeProbab=0.88;
			maxRange=300;
			maxRangeProbab=0.30000001;
		};
		class short: close
		{
			burst=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.88;
			maxRange=600;
			maxRangeProbab=0.30000001;
		};
		class medium: close
		{
			burst=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.30000001;
			midRange=700;
			midRangeProbab=0.77999997;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=5;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.60000002;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
	};
	class JAS_gatling_20mm: CannonCore
	{
		scope=1;
		displayName="$STR_A3_GATLING_20MM0";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"JAS_300Rnd_20mm_shells"
		};
		canLock=2;
		ballisticsComputer="4 + 8";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun1";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class manual: CannonCore
		{
			displayName="$STR_A3_twin_cannon_20mm";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst",
					3.9810717,
					1,
					1300,
					{2,35740}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.039999999;
			dispersion=0.0022;
			soundContinuous=1;
			soundBurst=0;
			showToPlayer=1;
			burst=5;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=15;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class JAS_Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		scope=1;
		displayName="$STR_A3_CFGWEAPONS_CANNON_30MM";
		magazines[]=
		{
			"JAS_500Rnd_Gatling_30mm_Plane_CAS_02_F"
		};
		holdsterAnimValue=1;
		ballisticsComputer="4 + 8";
		canLock=2;
		cursor="EmptyCursor";
		cursorAim="mg";
		modes[]=
		{
			"LowROF",
			"close",
			"near",
			"short",
			"medium",
			"far"
		};
		nameSound="cannon";
		shotFromTurret=0;
		muzzlePos="Cannon_muzzleflash";
		muzzleEnd="Cannon_barrel_end";
		selectionFireAnim="Cannon_muzzleflash";
		autoFire=1;
		burst=10;
		reloadTime=0.039999999;
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun2";
				positionName="Cannon_barrel_start";
				directionName="Cannon_barrel_end";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_CFGWEAPONS_CANNON_30MM";
			reloadTime=0.039999999;
			aiRateOfFire=0.25;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F_epc\weapons\cas_02_cannon",
					1.7782794,
					1,
					3800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=8;
			aiDispersionCoefY=8;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			minRange=1;
			minRangeProbab=0.059999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			dispersion=0.0060000001;
			burst=10;
			showToPlayer=1;
		};
		class close: LowROF
		{
			showToPlayer=0;
			burst=15;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=150;
			midRangeProbab=0.88;
			maxRange=300;
			maxRangeProbab=0.30000001;
		};
		class near: close
		{
			showToPlayer=0;
			burst=13;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=250;
			midRangeProbab=0.88;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.88;
			maxRange=600;
			maxRangeProbab=0.30000001;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.30000001;
			midRange=700;
			midRangeProbab=0.77999997;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=5;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.60000002;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
	};
	class JAS_FIR_GBU24_118 : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "GBU-24 PaveWay III";
		displayNameMagazine = "Thermobaric GBU";
		shortNameMagazine = "Thermobaric GBU";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_GBU24A_BLU118_1rnd_M"};
	};
	class JAS_FIR_GBU24B : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "GBU-24B PaveWay III";
		displayNameMagazine = "Penetrator GBU";
		shortNameMagazine = "Penetrator GBU";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_GBU24B_1rnd_M"};
	};
	class JAS_FIR_GBU24A : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "GBU-24A PaveWay III";
		displayNameMagazine = "GPGBU";
		shortNameMagazine = "GPGBU";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_GBU24A_1rnd_M"};
	};
	class JAS_FIR_mk84 : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "Mk84";
		displayNameMagazine = "mk84";
		shortNameMagazine = "mk84";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		canLock = 0;
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.01;
		reloadTime = 0.01;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_mk84_gp_1rnd_M"};
	};
	class JAS_CUP_Vacannon_2A42_veh: CannonCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		displayName="$STR_CUP_DN_2A42";
		nameSound="cannon";
		burst=5;
		reloadTime=0.02;
		autoFire=1;
		magazineReloadTime=2;
		magazines[]=
		{
			"CUP_150Rnd_TE1_White_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_Red_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_White_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Red_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M",
			"CUP_250Rnd_TE1_White_Tracer_30mmAP_2A42_M",
			"CUP_250Rnd_TE1_Red_Tracer_30mmAP_2A42_M",
			"CUP_250Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_250Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_White_Tracer_30mmHE_2A42_M",
			"CUP_150Rnd_TE1_Red_Tracer_30mmHE_2A42_M",
			"CUP_150Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"CUP_150Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_White_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_Red_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_White_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_Red_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M"
		};
		modes[]=
		{
			"LowROF",
			"HighROF",
			"close",
			"short",
			"medium",
			"far"
		};
		shotFromTurret=1;
		canLock=2;
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		cursorSize=1;
		ballisticsComputer="4+8";
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_CUP_DN_2A42_MODE_LOW";
			reloadTime=0.2;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"Autocannon30mmTurret_Shot_SoundSet",
					"Autocannon30mmBody_tail_SoundSet"
				};
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\242_single",
					"db20",
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="burst";
			soundContinuous=0;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			minRange=1;
			minRangeProbab=0.059999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			dispersion=0.00050000002;
		};
		class HighROF: LowROF
		{
			displayName="$STR_CUP_DN_2A42_MODE_HIGH";
			reloadTime=0.1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"Autocannon30mmTurret_Shot_SoundSet",
					"Autocannon30mmBody_tail_SoundSet"
				};
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\242_single",
					"db20",
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fullAuto";
			soundContinuous=0;
			minRange=1;
			minRangeProbab=0.079999998;
			midRange=2;
			midRangeProbab=0.057999998;
			maxRange=3;
			maxRangeProbab=0.0040000002;
		};
		class close: HighROF
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.57999998;
			maxRange=1000;
			maxRangeProbab=0.039999999;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=500;
			minRangeProbab=0.050000001;
			midRange=1000;
			midRangeProbab=0.57999998;
			maxRange=1500;
			maxRangeProbab=0.039999999;
		};
		class medium: LowROF
		{
			showToPlayer=0;
			soundBurst=0;
			burst=7;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			minRange=1000;
			minRangeProbab=0.050000001;
			midRange=1500;
			midRangeProbab=0.57999998;
			maxRange=2000;
			maxRangeProbab=0.039999999;
		};
		class far: medium
		{
			burst=4;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=1500;
			minRangeProbab=0.050000001;
			midRange=2500;
			midRangeProbab=0.40000001;
			maxRange=3000;
			maxRangeProbab=0.0099999998;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="AutoCannonFired";
				positionName="2A42_start";
				directionName="2A42_dir";
			};
			class SecondEffect
			{
				positionName="2A42_eject_pos";
				directionName="2A42_eject_dir";
				effectName="HeavyGunCartridge1";
			};
		};
	};
	class JAS_CUP_Vacannon_GSh23L_in_veh: CannonCore
	{
		scope=1;
		displayName="$STR_CUP_DN_GSH23";
		soundContinuous=0;
		aiDispersionCoefY=21;
		aiDispersionCoefX=21;
		ballisticsComputer=8;
		magazines[]=
		{
			"CUP_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M",
			"CUP_250Rnd_TE2_Yellow_Tracer_GSh23_23mm_APHE_M",
			"CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M",
			"CUP_150Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M"
		};
		magazineReloadTime=5;
		canLock=0;
		cursor="EmptyCursor";
		cursorAim="mg";
		cursorSize=1;
		initSpeed=820;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="machinegun1";
				positionName="muzzle03";
				directionName="chamber03";
			};
			class SecondEffect
			{
				effectName="machinegun1";
				positionName="muzzle04";
				directionName="chamber04";
			};
			class ThirdEffect
			{
				effectName="machinegun1";
				positionName="muzzle05";
				directionName="chamber05";
			};
			class FourthEffect
			{
				effectName="machinegun1";
				positionName="muzzle06";
				directionName="chamber06";
			};
		};
		muzzlePos[]=
		{
			"chamber03",
			"chamber04",
			"chamber05",
			"chamber06"
		};
		muzzleEnd[]=
		{
			"muzzle03",
			"muzzle04",
			"muzzle05",
			"muzzle06"
		};
		selectionFireAnim="zasleh";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: CannonCore
		{
			displayName="$STR_CUP_DN_GSH23";
			autoFire=1;
			class StandardSound
			{
				soundsetshot[]=
				{
					"HMG050_Shot_SoundSet",
					"HMG050_Tail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_01",
					1.5848932,
					1,
					2100
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_02",
					1.5848932,
					1,
					2100
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_03",
					1.5848932,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				closure1[]=
				{
					"A3\Sounds_F\weapons\Closure\sfx10",
					0.63095737,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx11",
					0.63095737,
					1.2,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.02;
			dispersion=0.012;
			initspeed=715;
			multiplier=5;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
		};
		class Close: manual
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.57999998;
			maxRange=500;
			maxRangeProbab=0.039999999;
		};
		class Short: Close
		{
			burst=10;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.57999998;
			maxRange=800;
			maxRangeProbab=0.039999999;
		};
		class Medium: Close
		{
			burst=7;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.050000001;
			midRange=800;
			midRangeProbab=0.57999998;
			maxRange=1000;
			maxRangeProbab=0.039999999;
		};
		class Far: Close
		{
			burst=4;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=850;
			minRangeProbab=0.050000001;
			midRange=1050;
			midRangeProbab=0.40000001;
			maxRange=1250;
			maxRangeProbab=0.0099999998;
		};
	};
	class JAS_CUP_Vacannon_GSh23L_onboard: JAS_CUP_Vacannon_GSh23L_in_veh
	{
		displayName="GSh-23L Internal Cannon";
		ballisticsComputer="4+8";
		magazines[]=
		{
			"JAS_CUP_150Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M"
		};
		canLock=2;
	};
	class JAS_CUP_Vacannon_GSh302K_veh: CannonCore
	{
		scope=1;
		displayName="GSh-30-2K 30mm Cannon";
		magazines[]=
		{
			"JAS_CUP_750Rnd_TE1_30mm_GSh302K_HE_M"
		};
		holdsterAnimValue=1;
		ballisticsComputer="4+8";
		canLock=2;
		cursor="EmptyCursor";
		cursorAim="mg";
		modes[]=
		{
			"LowROF",
			"close",
			"near",
			"short",
			"medium",
			"far"
		};
		nameSound="cannon";
		shotFromTurret=0;
		muzzlePos="chamber_1";
		muzzleEnd="muzzle_1";
		selectionFireAnim="zasleh";
		autoFire=1;
		burst=5;
		reloadTime=0.039999999;
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun2";
				positionName="Cannon_barrel_start";
				directionName="Cannon_barrel_end";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="GSh-30-2K 30mm Cannon";
			reloadTime=0.039999999;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"A3\Sounds_F_epc\weapons\cas_02_cannon",
					2,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			weaponSoundEffect="DefaultRifle";
			soundContinuous=0;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=8;
			aiDispersionCoefY=8;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			minRange=1;
			minRangeProbab=0.059999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			dispersion=0.0060000001;
			showToPlayer=1;
		};
		class close: LowROF
		{
			showToPlayer=0;
			burst=15;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=150;
			midRangeProbab=0.88;
			maxRange=300;
			maxRangeProbab=0.30000001;
		};
		class near: close
		{
			showToPlayer=0;
			burst=13;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=250;
			midRangeProbab=0.88;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.88;
			maxRange=600;
			maxRangeProbab=0.30000001;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.30000001;
			midRange=700;
			midRangeProbab=0.77999997;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=5;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.60000002;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
	};
	class JAS_CUP_Vacannon_GSh301_veh: JAS_CUP_Vacannon_GSh302K_veh
	{
		displayName="Gsh-301 30mm Cannon";
		magazines[]=
		{
			"JAS_CUP_180Rnd_TE1_30mm_GSh302K_HE_M"
		};
		class LowROF: LowROF
		{
			displayName="GSh-301 30mm Cannon";
		};
	};
	class JAS_EAWS_Brimstone_Int : MissileLauncher
	{
		scope = 1;
		magazines[] =
		{
			"JAS_EAWS_Brimstone_M_int"
		};
		displayName = "BRIMSTONE-AGM Internal Bay";
		minRange = 100;
		minRangeProbab = 0.60000002;
		midRange = 6000;
		midRangeProbab = 0.98000002;
		maxRange = 1000;
		maxRangeProbab = 0.25;
		sounds[] =
		{
			"StandardSound"
		};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] =
			{
				"ARMA3_CUP_Enhancement_Weapons\wep\data\sound\rocket_fly1",
				100,
				1,
				500
			};
			soundBegin[] =
			{
				"begin1",
				0.25
			};
		};
		soundFly[] =
		{
			"ARMA3_CUP_Enhancement_Weapons\wep\data\sound\rocket_fly1",
			100,
			1,
			500
		};
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		reloadTime = 1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 5000;
		weaponLockDelay = 2;
		nameSound = "MissileLauncher";
		cursorAim = "EmptyCursor";
		textureType = "semi";
		cursor = "EmptyCursor";
		cursorSize = 1;
		WeaponLockSystem = "4 + 8";
		cmImmunity = 0.80000001;
		canLock = 2;
		ballisticsComputer = 1;
	};
	class JAS_FIR_GAU12 : CannonCore
	{
		scope = 1;
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursoraim = "mg";
		cursorSize = 1;
		canLock = 2;
		ballisticsComputer = "4 + 8";
		displayName = "GAU-12 Equalizer";
		displayNameMagazine = "GAU-12";
		shortNameMagazine = "GAU12";
		soundContinuous = 0;
		reloadTime = 0.00010000;
		burst = 6;
		multiplier = 1;
		autofire = 1;
		flash = "gunfire";
		flashSize = 0.100000;
		recoil = "Empty";
		aiRateOfFire=5.0;
		aiRateOfFireDistance=100;
		sounds[] = {"StandardSound"};
		class StandardSound
			{
				begin1[] = {"FIR_AirWeaponSystem_US\Sound\M61_Vulcan.wss",2.5118864,1,4500,{ 25704,32159 }};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		dispersion = 0.006000;
		magazines[] = {"JAS_FIR_GAU12_300rnd_M"};
		class GunParticles 
		{
			class Effect 
			{
				effectName = "MachineGun1";
				positionName = "kulomet";
				directionName = "kulomet";
			};
		};
	};
	class JAS_CUP_Vacannon_GAU12_veh: CannonCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		displayName="$STR_CUP_DN_GAU12";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		cursorSize=1;
		magazines[]=
		{
			"CUP_300Rnd_TE1_White_Tracer_25mm_GAU12_M",
			"CUP_300Rnd_TE1_Red_Tracer_25mm_GAU12_M",
			"CUP_300Rnd_TE1_Green_Tracer_25mm_GAU12_M",
			"CUP_300Rnd_TE1_Yellow_Tracer_25mm_GAU12_M"
		};
		canLock=2;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: CannonCore
		{
			displayName="$STR_CUP_DN_GAU12";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\a10vulcanVII",
					7,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.02;
			dispersion=0.0024999999;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.57999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.57999998;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=2;
			aiRateOfFireDistance=9000;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.57999998;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=3;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="AutoCannonFired";
				positionName="GAU12_start";
				directionName="GAU12_dir";
			};
		};
	};
	class JAS_CUP_Vacannon_GAU22_veh: JAS_CUP_Vacannon_GAU12_veh
	{
		author="CUP/-{GOL}-Jason";
		ballisticsComputer = "4+8";
		displayName="$STR_CUP_DN_GAU22";
		magazines[]=
		{
			"JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M"
		};
		class manual: manual
		{
			displayName="$STR_CUP_DN_GAU22";
			dispersion=0.0015;
		};
		class close: close
		{
			minRange=0;
			minRangeProbab=0.40000001;
			midRange=200;
			midRangeProbab=0.47999999;
		};
		class short: short
		{
			minRange=300;
			minRangeProbab=0.15000001;
			midRange=400;
			midRangeProbab=0.47999999;
		};
		class medium: medium
		{
			minRange=400;
			minRangeProbab=0.15000001;
			midRange=700;
			midRangeProbab=0.47999999;
		};
		class far: far
		{
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="AutoCannonFired";
				positionName="GAU22_start";
				directionName="GAU22_dir";
			};
		};
	};
	class JAS_CUP_Vacannon_GAU22_veh_AA: JAS_CUP_Vacannon_GAU22_veh
	{
		author="-{GOL}-Jason";
		canLock = 2;
		ballisticsComputer = 4;
		displayName="GAU-22 Air To Air Mode";
		cursor="EmptyCursor";
		cursorAim="mg";
	};
	class JAS_CUP_Vacannon_GAU8_veh: CannonCore
	{
		author="CUP/-{GOL}-Jason";
		ballisticsComputer = "4+8";
		scope=1;
		displayName="GAU-8/A Avenger";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		cursorSize=1;
		magazines[]=
		{
			"JAS_CUP_1350Rnd_TE1_Red_Tracer_30mm_GAU8_M"
		};
		canLock=2;
		modes[]=
		{
			"halfsec",
			"1sec",
			"2sec",
			"close",
			"short",
			"medium",
			"far"
		};
		class halfsec: CannonCore
		{
			displayName="0.5sec Burst";
			autoFire=0;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\GAU8_05sec_burst",
					7,
					1,
					2500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.02;
			dispersion=0.0049999999;
			soundContinuous=0;
			showToPlayer=1;
			burst=20;
			textureType="semi";
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
		};
		class 1sec: halfsec
		{
			displayName="1sec Burst";
			burst=35;
			textureType="burst";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\GAU8_1sec_burst",
					7,
					1,
					2500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class 2sec: halfsec
		{
			displayName="2sec Burst";
			burst=65;
			textureType="fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\GAU8_2sec_burst",
					7,
					1,
					2500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: halfsec
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.57999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.57999998;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=2;
			aiRateOfFireDistance=9000;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.57999998;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=3;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="AutoCannonFired";
				positionName="Gatling_barrels_end";
				directionName="GAU8_dir";
			};
		};
	};
	class JAS_FIR_AGM154C_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "AGM-154C Internal Bay";
		displayNameMagazine = "JSOW GPB";
		shortNameMagazine = "AGM154C JSOW";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_AGM154C_1rnd_M_int"}; // A variant is CBU - C variant is penetration bomb - wiki
	};
	class JAS_FIR_AGM154A_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "AGM-154A Internal Bay";
		displayNameMagazine = "JSOW CEM";
		shortNameMagazine = "AGM154A JSOW";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_AGM154A_1rnd_M_int"}; // A variant is CBU - C variant is penetration bomb - wiki
	};
	class JAS_FIR_GBU53_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "GBU-53 Internal Bay";
		displayNameMagazine = "GBU53";
		shortNameMagazine = "GBU53 SDB II";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_gbu53_1rnd_M_int"};
	};
	class JAS_FIR_GBU39_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "GBU-39 Internal Bay";
		displayNameMagazine = "GBU39";
		shortNameMagazine = "GBU39 SDB";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_gbu39_1rnd_M_int"};
	};
	class JAS_FIR_CBU103_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "CBU-103 Internal Bay";
		displayNameMagazine = "WCMD";
		shortNameMagazine = "WCMD";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_CBU103_1rnd_M_int"};
	};
	class JAS_FIR_CBU97_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "CBU-97 Internal Bay";
		displayNameMagazine = "SFW";
		shortNameMagazine = "SFW";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_CBU97_1rnd_M_int"};
	};
	class JAS_FIR_CBU89_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "CBU-89 Internal Bay";
		displayNameMagazine = "Gator";
		shortNameMagazine = "Gator";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_CBU89_1rnd_M_int"};
	};
	class JAS_FIR_CBU87_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "CBU-87 Internal Bay";
		displayNameMagazine = "Cluster";
		shortNameMagazine = "Cluster";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_CBU87_1rnd_M_int"};
	};
	class JAS_FIR_mk82_Launcher_int: MissileLauncher
	{
		ballisticsComputer=8;
		scope=2;
		displayName="Mk82 GPB Internal Bay";
		displayNameMagazine="mk82 GPB";
		shortNameMagazine="mk82";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		canLock=0;
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.0099999998;
		reloadTime=0.0099999998;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_mk82_gp_1rnd_M_int"
		};
	};
	class JAS_FIR_mk82_Snakeye_Launcher_int: MissileLauncher
	{
		ballisticsComputer=8;
		scope=2;
		displayName="Mk82 Snakeye Internal Bay";
		displayNameMagazine="mk82 AIR";
		shortNameMagazine="mk82";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		canLock=0;
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.0099999998;
		reloadTime=0.0099999998;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_mk82_snakeye_1rnd_M_int"
		};
	};
	class JAS_FIR_GBU38_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "GBU-38 Internal Bay";
		displayNameMagazine = "GBU38";
		shortNameMagazine = "GBU38 JDAM";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_gbu38_1rnd_M_int"};
	};
	class JAS_FIR_GBU12_int : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "GBU-12 Internal Bay";
		displayNameMagazine = "GBU";
		shortNameMagazine = "GBU";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_GBU12_1rnd_M_int"};
	};
	class JAS_FIR_AGM154C : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "AGM-154C JSOW";
		displayNameMagazine = "JSOW GPB";
		shortNameMagazine = "AGM154C JSOW";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"FIR_AGM154C_1rnd_M"}; // A variant is CBU - C variant is penetration bomb - wiki
	};
	class JAS_FIR_AGM154A : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "AGM-154A JSOW";
		displayNameMagazine = "JSOW CEM";
		shortNameMagazine = "AGM154A JSOW";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"FIR_AGM154A_1rnd_M"}; // A variant is CBU - C variant is penetration bomb - wiki
	};
	class JAS_FIR_AGM65L : MissileLauncher
	{
		scope = 2;
		displayName = "AGM-65L Maverick";
		displayNameMagazine = "AGM65L";
		shortNameMagazine = "AGM65L";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.1;
		reloadTime = 0.500000;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 500;
		minRange = 100;
		minRangeProbab = 0.04;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 4000;
		maxRangeProbab = 0.55;
		maxLeadSpeed = 2500;
		magazines[] = {"JAS_FIR_AGM65L_1rnd_M","JAS_FIR_AGM65L_3rnd_M"};
	};
	class JAS_FIR_AGM65G : MissileLauncher
	{
		scope = 2;
		displayName = "AGM-65G Maverick";
		displayNameMagazine = "AGM65G";
		shortNameMagazine = "AGM65G";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.1;
		reloadTime = 0.500000;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 500;
		minRange = 100;
		minRangeProbab = 0.04;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 4000;
		maxRangeProbab = 0.55;
		maxLeadSpeed = 2500;
		magazines[] = {"JAS_FIR_AGM65G_1rnd_M","JAS_FIR_AGM65G_3rnd_M"};
	};
	class JAS_FIR_AGM65D : MissileLauncher
	{
		scope = 2;
		displayName = "AGM-65D Maverick";
		displayNameMagazine = "AGM65D";
		shortNameMagazine = "AGM65D";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.1;
		reloadTime = 0.500000;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 500;
		minRange = 100;
		minRangeProbab = 0.04;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 4000;
		maxRangeProbab = 0.55;
		maxLeadSpeed = 2500;
		magazines[] = {"JAS_FIR_AGM65D_1rnd_M","JAS_FIR_AGM65D_3rnd_M"};
	};
	class JAS_FIR_AGM65H : MissileLauncher
	{
		scope = 2;
		displayName = "AGM-65H Maverick";
		displayNameMagazine = "AGM65H";
		shortNameMagazine = "AGM65H";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.1;
		reloadTime = 0.500000;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 500;
		minRange = 100;
		minRangeProbab = 0.04;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 4000;
		maxRangeProbab = 0.55;
		maxLeadSpeed = 2500;
		magazines[] = {"JAS_FIR_AGM65H_1rnd_M","JAS_FIR_AGM65H_3rnd_M"};
	};
	class JAS_FIR_CBU103 : MissileLauncher
	{
		ballisticsComputer = 8;
		scope = 2;
		displayName = "CBU-103 WCMD";
		displayNameMagazine = "WCMD";
		shortNameMagazine = "WCMD";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"JAS_FIR_CBU103_1rnd_M"};
	};
	class JAS_HellfireLauncher_base: MissileLauncher
	{
		scope=1;
		author="-{GOL}-Jason";
		cursorAim="EmptyCursor";
		reloadTime=1;
		autoReload=0;
		canLock = 2;
		reloadMagazineSound[]=
		{
			"",
			1,
			1
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"a3\sounds_f\weapons\rockets\missile_2",
				5,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"a3\sounds_f\weapons\rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\a3\sounds_f\weapons\rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"\a3\sounds_f\weapons\rockets\locked_3",
			0.31622776,
			2.5
		};
		aiRateOfFire=5;
		aiRateOfFireDistance=4000;
		weaponLockDelay=0.5;
		textureType="semi";
	};
	class JAS_HellfireLauncher_K: JAS_HellfireLauncher_base
	{
		displayName="AGM-114K Hellfire II";
		magazines[]=
		{
			"JAS_AGM114K_1rnd_M"
		};
		canLock=2;
	};
	class JAS_HellfireLauncher_L: JAS_HellfireLauncher_base
	{
		displayName="AGM-114L Longbow Hellfire";
		magazines[]=
		{
			"JAS_AGM114L_1rnd_M"
		};
		canLock=2;
	};
	class JAS_HellfireLauncher_N: JAS_HellfireLauncher_base
	{
		displayName="AGM-114N Hellfire II";
		magazines[]=
		{
			"JAS_AGM114N_1rnd_M"
		};
		canLock=2;
	};
	class JAS_ZUNI_Launcher: RocketPods
	{
		ballisticsComputer=8;
		magazines[]=
		{
			"FIR_Zuni_4rnd_M"
		};
		displayName="Rocket Launcher";
		modes[]=
		{
			"Far_AI",
			"Burst"
		};
		cursor="EmptyCursor";
		cursorAim="rocket";
		class Far_AI: RocketPods
		{
			minRange=50;
			minRangeProbab=0.041000001;
			midRange=600;
			midRangeProbab=0.20999999;
			maxRange=2500;
			maxRangeProbab=0.11;
			displayName="ZUNI-SINGLE";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_7",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1,
				1.2,
				700
			};
			weaponSoundEffect="DefaultRifle";
			burst=1;
			reloadTime=0.079999998;
			autoFire=0;
			showToPlayer=0;
		};
		class Burst: RocketPods
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.001;
			displayName="RKT";
			burst=1;
			reloadTime=0.079999998;
			soundContinuous=0;
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_7",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1,
				1.2,
				700
			};
			weaponSoundEffect="DefaultRifle";
		};
	};
	class JAS_HYDRA_Launcher: RocketPods
	{
		ballisticsComputer=8;
		magazines[]=
		{
			"FIR_Hydra_7rnd_M",
			"FIR_JLAU_3_19rnd_M"
		};
		displayName="Rocket Launcher";
		modes[]=
		{
			"Far_AI",
			"Burst"
		};
		cursor="EmptyCursor";
		cursorAim="rocket";
		class Far_AI: RocketPods
		{
			minRange=50;
			minRangeProbab=0.041000001;
			midRange=600;
			midRangeProbab=0.20999999;
			maxRange=2500;
			maxRangeProbab=0.11;
			displayName="HYDRA-SINGLE";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_7",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1,
				1.2,
				700
			};
			weaponSoundEffect="DefaultRifle";
			burst=1;
			reloadTime=0.079999998;
			autoFire=0;
			showToPlayer=0;
		};
		class Burst: RocketPods
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.001;
			displayName="RKT";
			burst=1;
			reloadTime=0.079999998;
			soundContinuous=0;
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_7",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1,
				1.2,
				700
			};
			weaponSoundEffect="DefaultRifle";
		};
	};
	class JAS_CUP_57mmLauncher: JAS_HYDRA_Launcher
	{
		magazines[]=
		{
			"JAS_CUP_16Rnd_57mm"
		};
		displayname="57mm Rockets";
	};
	class JAS_HYDRA_SMKW_Launcher: JAS_HYDRA_Launcher
	{
		displayName="Smoke Launcher (White)";
		magazines[]=
		{
			"JAS_FIR_Hydra_Smoke_7rnd_M"
		};
	};
	class JAS_HYDRA_SMKR_Launcher: JAS_HYDRA_Launcher
	{
		displayName="Smoke Launcher (Red)";
		magazines[]=
		{
			"JAS_FIR_Hydra_Smoke_Red_7rnd_M"
		};
	};
	class JAS_HYDRA_SMKO_Launcher: JAS_HYDRA_Launcher
	{
		displayName="Smoke Launcher (Orange)";
		magazines[]=
		{
			"JAS_FIR_Hydra_Smoke_Orange_7rnd_M"
		};
	};
	class JAS_HYDRA_SMKP_Launcher: JAS_HYDRA_Launcher
	{
		displayName="Smoke Launcher (Purple)";
		magazines[]=
		{
			"JAS_FIR_Hydra_Smoke_Purple_7rnd_M"
		};
	};
	class JAS_AGM122: MissileLauncher
	{
		scope=2;
		canLock = 2;
		displayName="AGM-122 SIDEARM";
		displayNameMagazine="ARM";
		shortNameMagazine="ARM";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\titan_1",
				2.5118864,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		weaponLockSystem = 4;
		initspeed=10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		aiRateOfFire=4;
		aiRateOfFireDistance=500;
		minRange=100;
		minRangeProbab=0.039999999;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=4000;
		maxRangeProbab=0.55000001;
		maxLeadSpeed=2500;
		magazines[]=
		{
			"JAS_AGM122_1rnd_M"
		};
	};
	class JAS_CUP_Vmlauncher_FFAR_veh: RocketPods
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		displayName="HYDRA";
		magazines[]=
		{
			"CUP_7Rnd_FFAR_M",
			"CUP_14Rnd_FFAR_M",
			"CUP_19Rnd_FFAR_M",
			"CUP_28Rnd_FFAR_M",
			"CUP_38Rnd_FFAR_M",
			"CUP_38Rnd_FFAR_Mid_M",
			"CUP_38Rnd_FFAR_In_M",
			"CUP_14Rnd_FFAR_Out_M",
			"CUP_14Rnd_FFAR_Mid_M",
			"CUP_14Rnd_FFAR_In_M"
		};
		modes[]=
		{
			"Far_AI",
			"Burst"
		};
		cursor="EmptyCursor";
		cursorAim="rocket";
		class Far_AI: RocketPods
		{
			minRange=50;
			minRangeProbab=0.041000001;
			midRange=600;
			midRangeProbab=0.20999999;
			maxRange=2500;
			maxRangeProbab=0.11;
			displayName="$STR_CUP_DN_70MM_HYDRA_FFAR_HE_SINGLE";
			burst=1;
			reloadTime=0.079999998;
			autoFire=0;
			showToPlayer=0;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s1",
					3.1622777,
					1,
					1100
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s2",
					3.1622777,
					1,
					1100
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s3",
					3.1622777,
					1,
					1100
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s4",
					3.1622777,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			soundFly[]=
			{
				"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\Fly",
				100,
				0.80000001,
				800
			};
		};
		class Burst: RocketPods
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.001;
			displayName="$STR_CUP_DN_70MM_HYDRA_FFAR_HE_SINGLE";
			burst=1;
			reloadTime=0.079999998;
			soundContinuous=0;
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s1",
					3.1622777,
					1,
					1100
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s2",
					3.1622777,
					1,
					1100
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s3",
					3.1622777,
					1,
					1100
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s4",
					3.1622777,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			soundFly[]=
			{
				"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\Fly",
				100,
				0.80000001,
				800
			};
			textureType="fullAuto";
		};
	};
	class JAS_CUP_Vmlauncher_CRV7_FAT_veh: JAS_CUP_Vmlauncher_FFAR_veh
	{
		cursor="EmptyCursor";
		cursorAim="rocket";
		CanLock=2;
		weaponLockSystem = "2+4";
		ballisticsComputer = 8;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,4};
		lockAcquire = 0;
		displayName="CRV7 70mm FFAR";
		magazines[]=
		{
			"JAS_CUP_19Rnd_CRV7_FAT_M",
			"JAS_CUP_12Rnd_CRV7_FAT_M"
		};
		modes[]=
		{
			"Far_AI",
			"Single",
			"Double",
			"Quadruple"
		};
		class Far_AI: RocketPods
		{
			minRange=50;
			minRangeProbab=0.041000001;
			midRange=600;
			midRangeProbab=0.20999999;
			maxRange=2500;
			maxRangeProbab=0.11;
			displayName="$STR_CUP_DN_70MM_HYDRA_FFAR_HE_SINGLE";
			burst=1;
			reloadTime=0.079999998;
			autoFire=0;
			showToPlayer=0;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s1",
					3.1622777,
					1,
					1100
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s2",
					3.1622777,
					1,
					1100
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s3",
					3.1622777,
					1,
					1100
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s4",
					3.1622777,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			soundFly[]=
			{
				"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\Fly",
				100,
				0.80000001,
				800
			};
		};
		class Single: Mode_SemiAuto
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.001;
			displayName="Single";
			burst=1;
			reloadTime=0.079999998;
			soundContinuous=0;
			autoFire=0;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s1",
					3.1622777,
					1,
					1100
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s2",
					3.1622777,
					1,
					1100
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s3",
					3.1622777,
					1,
					1100
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\data\sound\FFAR_s4",
					3.1622777,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			soundFly[]=
			{
				"CUP\Weapons\CUP_Weapons_Ammunition\data\sound\Fly",
				100,
				0.80000001,
				800
			};
			textureType="semi";
		};
		class Double: Single
		{
			displayname="Double";
			burst=2;
			textureType="burst";
		};
		class Quadruple: Single
		{
			displayname="Quadruple";
			burst=4;
			textureType="fullAuto";
		};
	};
	class JAS_FIR_mk82_Snakeye_Launcher: MissileLauncher
	{
		ballisticsComputer=8;
		scope=2;
		displayName="Mk82 Snakeye";
		displayNameMagazine="mk82 AIR";
		shortNameMagazine="mk82";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		canLock=0;
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.0099999998;
		reloadTime=0.0099999998;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_mk82_snakeye_1rnd_M"
		};
	};
	class JAS_CUP_Vmlauncher_AT6_veh: Missiles_Scalpel
	{
		canlock=0;
		magazines[]=
		{
			"JAS_CUP_1Rnd_AT6_M"
		};
		displayname="9K114 Shturm";
	};
	class JAS_CUP_Vmlauncher_AT2_veh: Missiles_Scalpel
	{
		canlock=0;
		magazines[]=
		{
			"JAS_CUP_1Rnd_AT2_M"
		};
		displayname="9M17P Falanga-PV";
	};
	class JAS_R73_Launcher: Missile_AA_03_Plane_CAS_02_F
	{
		displayname="R-73 Vympel Missile";
		magazines[] =
		{
			"1Rnd_Missile_AA_03_F"
		};
	};
	class JAS_FIR_CBU250: MissileLauncher
	{
		ballisticsComputer=8;
		scope=2;
		displayName="RBK-250";
		displayNameMagazine="Cluster";
		shortNameMagazine="Cluster";
		cursoraim="bomb";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"\FIR_AirWeaponSystem_US\sound\Release_Bomb",
				1.5848932,
				1.1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		initspeed=10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		aiRateOfFire=4;
		aiRateOfFireDistance=300;
		minRange=100;
		minRangeProbab=0.55000001;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.2;
		maxLeadSpeed=0;
		magazines[]=
		{
			"JAS_FIR_CBU250_1rnd_M"
		};
	};
	class JAS_KH25_LAU : Missiles_Scalpel
	{
		displayname = "Kh-25 Missiles";
		magazines[] =
		{
			"JAS_KH25_1rnd_M"
		};
	};
	class JAS_CUP_Vmlauncher_Kh29L_veh : Missiles_Scalpel
	{
		displayname = "Kh-29L Missiles";
		magazines[] =
		{
			"JAS_CUP_1Rnd_Kh29L_M"
		};
	};
	class JAS_CUP_Vmlauncher_AT16_veh : Missiles_Scalpel
	{
		canlock = 2;
		magazines[] =
		{
			"JAS_CUP_6Rnd_AT16_M"
		};
		displayname = "9K121 Vikhr";
	};
	class JAS_CUP_Vblauncher_KAB250_veh : RocketPods
	{
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "KAB-250L LGB";
		ballisticsComputer=8;
		magazines[] =
		{
			"JAS_CUP_1Rnd_KAB250_M"
		};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		namesound = "";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
	};
	class JAS_CUP_Vblauncher_Fab250_veh : Mk82BombLauncher
	{
		author = "$STR_CUP_AUTHOR_STRING";
		canlock = 0;
		displayname = "FAB-250";
		ballisticsComputer=8;
		magazines[] =
		{
			"JAS_CUP_1Rnd_FAB250_M"
		};
	};
	class JAS_CUP_Vmlauncher_S13_veh : JAS_rockets_Skyfire_I
	{
		scope = 2;
		author = "-{GOL}-Jason";
		displayname = "S-13 Rockets";
		magazines[] =
		{
			"JAS_S13_5rnd_M"
		};
		class Burst : Burst
		{
			displayname = "S-13 Rockets";
		};
	};
	class JAS_CUP_Vmlauncher_S8_veh : JAS_rockets_Skyfire_I
	{
		scope = 2;
		author = "$STR_CUP_AUTHOR_STRING";
		displayname = "S-8 Rockets";
		magazines[] =
		{
			"JAS_CUP_40Rnd_S8_M"
		};
		class Burst : Burst
		{
			displayname = "S-8 Rockets";
		};
	};
	class Master_Arm_Safe_US_Helos_Kimi : RocketPods
	{
		CanLock = 0;
		displayName = "SAFE";
		displayNameMagazine = "SAFE";
		shortNameMagazine = "SAFE";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] =
		{
			"FakeMagazine"
		};
		burst = 0;
		reloadTime = 0.0099999998;
		magazineReloadTime = 0.1;
	};
	class M621 : gatling_20mm
	{
		scope = 1;
		displayName = "M621";
		soundContinuous = 0;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		magazines[] =
		{
			"1200Rnd_20mm_M621"
		};
		magazineReloadTime = 5;
		canLock = 0;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		cursorSize = 1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "machinegun1";
				positionName = "muzzle_1";
				directionName = "chamber_1";
			};
			class effect1
			{
				positionName = "eject_1";
				directionName = "eject_1_dir";
				effectName = "MachineGunCartridge";
			};
		};
		muzzlePos = "chamber_1";
		muzzleEnd = "muzzle_1";
		cartridgePos = "eject_1";
		cartridgeVel = "eject_1_dir";
		selectionFireAnim = "zasleh";
		modes[] =
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual : MGun
		{
			displayName = "M621";
			autoFire = 1;
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\gatling\gatling4",
					1.1220185,
					1,
					1100
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			sounds[] =
			{
				"StandardSound"
			};
			reloadTime = 0.075000003;
			dispersion = 0.0012000001;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
		};
		class close : manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 100;
			midRangeProbab = 0.57999998;
			maxRange = 200;
			maxRangeProbab = 0.039999999;
		};
		class short : close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 200;
			midRangeProbab = 0.57999998;
			maxRange = 400;
			maxRangeProbab = 0.039999999;
		};
		class medium : close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 400;
			midRangeProbab = 0.57999998;
			maxRange = 600;
			maxRangeProbab = 0.039999999;
		};
		class far : close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.050000001;
			midRange = 600;
			midRangeProbab = 0.40000001;
			maxRange = 800;
			maxRangeProbab = 0.0099999998;
		};
	};
	class CRV7_PG_12rnd : RocketPods
	{
		magazines[] =
		{
			"12Rnd_CRV7"
		};
		displayName = "CRV7 (HEISAP)";
		modes[] =
		{
			"Far_AI",
			"Burst1",
			"Burst2",
			"Burst4"
		};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		canLock = 2;
		weaponLockDelay = 0.1;
		weaponLockSystem = 2;
		class Far_AI : RocketPods
		{
			canLock = 1;
			minRange = 50;
			minRangeProbab = 0.041000001;
			midRange = 600;
			midRangeProbab = 0.20999999;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					4,
					1.2,
					1600
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] =
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
			soundContinuous = 0;
			soundBurst = 0;
			burst = 1;
			reloadTime = 0.079999998;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst1 : Mode_SemiAuto
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			displayName = "M151 HEPD/Single";
			burst = 1;
			canLock = 1;
			reloadTime = 0.15000001;
			autoFire = 0;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					4,
					1.2,
					1600
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] =
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				2.5,
				1.2,
				700
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst2 : Mode_Burst
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			canLock = 1;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "M151 HEPD/Ripple 2";
			reloadTime = 0.25;
			autoFire = 0;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					4,
					1.2,
					1600
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] =
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
			burst = 2;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst4 : Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			canLock = 1;
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			reloadTime = 0.25;
			autoFire = 0;
			displayName = "M151 HEPD/Ripple 4";
			burst = 4;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					4,
					1.2,
					1600
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] =
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class Laserdesignator_mounted_Kimi_US : Laserdesignator_mounted
	{
		displayName = "Laser Designator";
		shotFromTurret = 1;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		nameSound = "laserdesignator";
	};
	class HellfireLauncherN : MissileLauncher
	{
		displayName = "AGM-114N (SAL2)";
		magazines[] =
		{
			"4Rnd_Hellfire_N"
		};
		weaponLockDelay = 0.5;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
		reloadTime = 1;
		autoReload = 0;
		backgroundReload = 0;
		nameSound = "MissileLauncher";
		sounds[] =
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[] =
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				5,
				1.3,
				1000
			};
			soundBegin[] =
			{
				"begin1",
				1
			};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] =
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
	};
	class HellfireLauncherL : MissileLauncher
	{
		displayName = "AGM-114L (RF)";
		magazines[] =
		{
			"4Rnd_Hellfire_L"
		};
		weaponLockDelay = 0.5;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		canLock = 2;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
		reloadTime = 1;
		autoReload = 0;
		backgroundReload = 0;
		nameSound = "MissileLauncher";
		sounds[] =
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[] =
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				5,
				1.3,
				1000
			};
			soundBegin[] =
			{
				"begin1",
				1
			};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] =
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
	};
	class KIMI_US_HELO_CMFlareLauncher : CMFlareLauncher
	{
		displayName = "Countermeasures";
		modes[] =
		{
			"Single",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5",
			"Burst6",
			"Burst7",
			"Burst8",
			"AIBurst"
		};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		class Single : Mode_SemiAuto
		{
			reloadTime = 0.25;
			autoFire = 0;
			displayName = "A- 2F/-";
			burst = 1;
			multiplier = 2;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\HMG\HMG_grenade",
					1,
					1,
					300
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst1 : Mode_Burst
		{
			reloadTime = 0.125;
			autoFire = 1;
			displayName = "B - 8F/0.5S";
			burst = 4;
			multiplier = 2;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\weapons\HMG\HMG_grenade",
					1,
					1,
					300
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst2 : Burst1
		{
			reloadTime = 0.25;
			autoFire = 1;
			displayName = "C - 8F/1S";
			burst = 4;
			multiplier = 2;
		};
		class Burst3 : Burst1
		{
			reloadTime = 0.5;
			autoFire = 1;
			displayName = "D - 8F/2S";
			burst = 4;
			multiplier = 2;
		};
		class Burst4 : Burst1
		{
			reloadTime = 1;
			autoFire = 1;
			displayName = "E - 8F/4S";
			burst = 4;
			multiplier = 2;
		};
		class Burst5 : Burst1
		{
			reloadTime = 0.125;
			autoFire = 1;
			displayName = "F - 16F/1S";
			burst = 8;
			multiplier = 2;
		};
		class Burst6 : Burst1
		{
			reloadTime = 0.25;
			autoFire = 1;
			displayName = "G - 16F/2S";
			burst = 8;
			multiplier = 2;
		};
		class Burst7 : Burst1
		{
			reloadTime = 0.5;
			autoFire = 1;
			displayName = "H - 16F/4S";
			burst = 8;
			multiplier = 2;
		};
		class Burst8 : Burst1
		{
			reloadTime = 1;
			autoFire = 1;
			displayName = "I - 16F/8S";
			burst = 8;
			multiplier = 2;
		};
	};
	class US_Jammer_Kimi : SmokeLauncher
	{
		scope = 2;
		displayName = "IR Jammer";
		magazines[] =
		{
			"US_Jammer_Magazine_Kimi"
		};
		magazineReloadTime = 60;
		simulation = "cmlauncher";
		modes[] =
		{
			"Burst1"
		};
		class Burst1 : Mode_Burst
		{
			displayName = "IR Jammer";
			reloadTime = 0.25;
			burst = 120;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"",
					1,
					1,
					300
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				weaponSoundEffect = "";
			};
			showToPlayer = 1;
			multiplier = 1;
			minRange = 0;
			maxRange = 200;
			soundBurst = 0;
		};
	};
	class EAWS_BrimstoneLauncher : MissileLauncher
	{
		scope = 1;
		magazines[] =
		{
			"EAWS_Brimstone_mag18x",
			"EAWS_Brimstone_mag12x",
			"EAWS_Brimstone_mag6x",
			"EAWS_Brimstone_mag4x",
			"EAWS_Brimstone_mag2x",
			"EAWS_Brimstone_mag1x"
		};
		displayName = "BRIMSTONE-AGM";
		minRange = 100;
		minRangeProbab = 0.60000002;
		midRange = 6000;
		midRangeProbab = 0.98000002;
		maxRange = 1000;
		maxRangeProbab = 0.25;
		sounds[] =
		{
			"StandardSound"
		};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] =
			{
				"ARMA3_CUP_Enhancement_Weapons\wep\data\sound\rocket_fly1",
				100,
				1,
				500
			};
			soundBegin[] =
			{
				"begin1",
				0.25
			};
		};
		soundFly[] =
		{
			"ARMA3_CUP_Enhancement_Weapons\wep\data\sound\rocket_fly1",
			100,
			1,
			500
		};
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		reloadTime = 1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 5000;
		weaponLockDelay = 2;
		nameSound = "MissileLauncher";
		cursorAim = "EmptyCursor";
		textureType = "semi";
		cursor = "EmptyCursor";
		cursorSize = 1;
		WeaponLockSystem = "4 + 8";
		cmImmunity = 0.80000001;
		canLock = 2;
		ballisticsComputer = 1;
	};
	class EAWS_SCALPLauncher : EAWS_BrimstoneLauncher
	{
		magazines[] =
		{
			"EAWS_SCALP_mag2x",
			"EAWS_SCALP_mag1x",
			"EAWS_SCALP_mag4x"
		};
		displayName = "STORM SHADOW AGM";
		minRange = 250;
		minRangeProbab = 0.60000002;
		midRange = 6000;
		midRangeProbab = 0.98000002;
		maxRange = 20000;
		maxRangeProbab = 0.89999998;
		reloadTime = 4;
		weaponLockSystem = "2 + 4 + 8";
		cmImmunity = 0.89999998;
	};
	class JAS_FIR_AGM65 : MissileLauncher
	{
		scope = 2;
		displayName = "AGM-65 Maverick";
		displayNameMagazine = "AGM65";
		shortNameMagazine = "AGM65";
		sounds[] =
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[] =
			{
				"A3\Sounds_F\weapons\Rockets\titan_1",
				2.5118864,
				1,
				1100
			};
			soundBegin[] =
			{
				"begin1",
				1
			};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime = 0.1;
		reloadTime = 0.5;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 500;
		minRange = 100;
		minRangeProbab = 0.039999999;
		midRange = 1000;
		midRangeProbab = 0.85000002;
		maxRange = 4000;
		maxRangeProbab = 0.55000001;
		maxLeadSpeed = 2500;
		magazines[] =
		{
			"JAS_FIR_AGM65D_1rnd_M",
			"JAS_FIR_AGM65D_3rnd_M",
			"JAS_FIR_AGM65G_1rnd_M",
			"JAS_FIR_AGM65G_2rnd_M",
			"JAS_FIR_AGM65L_1rnd_M",
			"JAS_FIR_AGM65L_2rnd_M"
		};
	};
	class JAS_FIR_AIM9L : MissileLauncher
	{
		scope = 2;
		weaponLockDelay = 2.0;
		weaponLockSystem = 8;
		cmImmunity = 0.8;
		holdsterAnimValue = 1;
		lockingTargetSound[] = {"\FIR_AirWeaponSystem_US\sound\Sidewinder_growling.wss",4,1};
		lockedTargetSound[] = {"\FIR_AirWeaponSystem_US\sound\Sidewinder_growling.wss",4.5,1.1};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "AIM-9M Sidewinder";
		displayNameMagazine = "AIM9M";
		shortNameMagazine = "AIM9";
		magazineReloadTime=0.5;
		initspeed = 30;
		reloadTime = 0.5;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 800;
		minRange = 100;
		minRangeProbab = 0.75;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		magazines[] = {"FIR_AIM9L_1rnd_M","FIR_AIM9L_TWAS_1rnd_M","FIR_AIM9L_TWAS_Red_1rnd_M","JAS_FIR_AIM9L_1rnd_M"};
	};
	class JAS_FIR_GBU10 : Mk82BombLauncher
	{
		autofire = 0;
		ballisticsComputer = 8;
		scope = 2;
		holdsterAnimValue = 1;
		displayName = "GBU-10 PaveWay II";
		displayNameMagazine = "GBU";
		shortNameMagazine = "GBU";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"FIR_GBU10_1rnd_M","JAS_FIR_GBU10_1rnd_M"};
	};
	class JAS_FIR_GBU12 : Mk82BombLauncher
	{
		autofire = 0;
		ballisticsComputer = 8;
		scope = 2;
		holdsterAnimValue = 1;
		displayName = "GBU-12 PaveWay II";
		displayNameMagazine = "GBU";
		shortNameMagazine = "GBU";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"FIR_GBU12_1rnd_M","JAS_FIR_GBU12_1rnd_M"};
	};
	class JAS_FIR_EGBU12 : Mk82BombLauncher
	{
		autofire = 0;
		ballisticsComputer = 8;
		scope = 2;
		holdsterAnimValue = 1;
		displayName = "EGBU-12 Enhanced PaveWay II";
		displayNameMagazine = "EGBU";
		shortNameMagazine = "EGBU";
		cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"FIR_EGBU12_1rnd_M","JAS_FIR_EGBU12_1rnd_M"};
	};
	class JAS_FIR_GBU54 : Mk82BombLauncher
	{
		autofire = 0;
		ballisticsComputer = 8;
		scope = 2;
		holdsterAnimValue = 1;
		displayName = "GBU-54 LJDAM 500lb";
		displayNameMagazine = "GBU54";
		shortNameMagazine = "GBU54 LJDAM";
			cursoraim = "bomb";
		sounds[] = {"StandardSound"};
		canLock = 2;
		class StandardSound
		{
			begin1[] = {"\FIR_AirWeaponSystem_US\sound\Release_Bomb",1.5848932,1.1,2100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		initspeed = 10;
		magazineReloadTime=0.5;
		reloadTime = 0.500000;
		aiDispersionCoefX=1.0; 
		aiDispersionCoefY=1.0;
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 300;
		minRange = 100;
		minRangeProbab = 0.55;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.20;
		maxLeadSpeed = 0;
		magazines[] = {"FIR_GBU54_1rnd_M","JAS_FIR_gbu54_1rnd_M"};
	};
	////////////////////////////////////////////////////////////////////////////////////////////////
	// Jets Content
	////////////////////////////////////////////////////////////////////////////////////////////////
	class FIR_AIM132;
	class FIR_GBU12;
	class FIR_GBU10;
	class FIR_GBU24;
	class FIR_AGM65;
	class FIR_CBU87;
	class FIR_CBU89;
	class FIR_CBU97;
	class FIR_mk82_Snakeye_Launcher;
	class FIR_GBU31;
	class FIR_GBU38;
	class FIR_EGBU12;
	class FIR_GBU54;
	class FIR_CBU103;
	class FIR_CBU105;
	class FIR_AIM9L;
	class FIR_AIM7;
	class FIR_AGM84H;
	class FIR_AGM88;
	class FIR_GBU32;
	class weapon_AGM_65Launcher;
	class FIR_APKWS_Launcher;
	class weapon_R77Launcher;
	class weapon_R73Launcher;
	class weapon_AGM_KH25Launcher;
	class FIR_KAB500KR;
	class FIR_KAB500L;
	class FIR_KAB500SE;
	class FIR_IRIS_T;
	class FIR_Meteor;
	class FIR_PAVEWAY_IV;
	class Twin_Cannon_20mm;
	class JAS_Twin_Cannon_20mm : Twin_Cannon_20mm
	{
		ballisticsComputer = 8;
		magazines[] = {"JAS_PylonWeapon_300Rnd_20mm_shells"};
	};
	class JAS_FIR_PAVEWAY_IV : FIR_PAVEWAY_IV
	{
		magazines[] = {"JAS_FIR_PavewayIV_1rnd_M"};
	};
	class JAS_CUP_Vacannon_GSh23L_PYLON: JAS_CUP_Vacannon_GSh23L_in_veh
	{
		displayName = "GSh-23 Gun Pod";
		magazines[]=
		{
			"JAS_CUP_1Rnd_GSh23_PylonPod_M"
		};
	};
	class JAS_FIR_Meteor_Launcher : FIR_Meteor
	{
		magazines[] = {"JAS_FIR_Meteor_PYLON_M","JAS_FIR_Meteor_1rnd_M"};
	};
	class JAS_FIR_IRIS_T_Launcher : FIR_IRIS_T
	{
		magazines[] = {"JAS_FIR_IRIS_T_PYLON_M"};
	};
	class JAS_FIR_APKWS_Launcher: FIR_APKWS_Launcher
	{
		magazines[] = {"JAS_FIR_Hydra_APKWS_7rnd_M"};
	};
	class JAS_AGM122_Pylon: MissileLauncher
	{
		canLock = 2;
		displayName="AGM-122 SIDEARM";
		weaponLockSystem = 4;
		initspeed=10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		aiRateOfFire=4;
		aiRateOfFireDistance=500;
		minRange=100;
		minRangeProbab=0.039999999;
		midRange=1000;
		midRangeProbab=0.85000002;
		maxRange=4000;
		maxRangeProbab=0.55000001;
		maxLeadSpeed=2500;
		magazines[]=
		{
			"JAS_AGM122_1rnd_M",
			"JAS_AGM122_1rnd_PYLON_M"
		};
	};
	class JAS_FIR_APKWS_Pylon_Launcher: RocketPods
	{
		canlock = 2;
		ballisticsComputer = 8;
		holdsterAnimValue = 1;
		magazines[] = {"FIR_Hydra_APKWS_7rnd_M","JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M"};
		displayName = "70mm APKWS";
		modes[] = {"Far_AI","Burst"};
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			
			sounds[] = {"StandardSound"};

			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.0,1.2,700};
			weaponSoundEffect = "DefaultRifle";

			burst = 1;
			reloadTime = 0.08;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst: RocketPods
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "RKT";
			burst = 1;
			reloadTime = 0.08;
			soundContinuous = 0;
			autoFire = 1;
			
			sounds[] = {"StandardSound"};

			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.0,1.2,700};
			weaponSoundEffect = "DefaultRifle";
		};
	};
	class JAS_HellfireLauncher_L_Pylon: JAS_HellfireLauncher_L
	{
		magazines[]=
		{
			"JAS_AGM114L_1rnd_M","JAS_FIR_Hellfire_L_1rnd_PYLON_M"
		};
	};
	class JAS_HellfireLauncher_N_Pylon: JAS_HellfireLauncher_N
	{
		magazines[]=
		{
			"JAS_AGM114N_1rnd_M","JAS_FIR_Hellfire_N_1rnd_PYLON_M"
		};
	};
	class JAS_FIR_AIM132_Pylon : FIR_AIM132
	{
		magazines[] = {"JAS_FIR_AIM132_1rnd_M","JAS_FIR_AIM132_1rnd_PYLON_M"};
	};
	class JAS_FIR_SUU25_pylon: RocketPods
	{
		ballisticsComputer = 8;
		holdsterAnimValue = 1;
		magazines[] = {"FIR_SUU25_8rnd_M","JAS_FIR_SUU25_PYLON_M"};
		displayName = "SUU-25 Flare Dispenser";
		modes[] = {"Far_AI","Burst"};
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			
			sounds[] = {"StandardSound"};

			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.0,1.2,700};
			weaponSoundEffect = "DefaultRifle";

			burst = 1;
			reloadTime = 1;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst: RocketPods
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "FLR DPS";
			burst = 1;
			reloadTime = 1;
			soundContinuous = 0;
			autoFire = 1;
			
			sounds[] = {"StandardSound"};

			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.0,1.2,700};
			weaponSoundEffect = "DefaultRifle";
		};
	};
	class JAS_FIR_GBU12_Pylon : FIR_GBU12
	{
		magazines[]=
		{
			"FIR_GBU12_1rnd_M",
			"JAS_FIR_GBU12_PYLON_M",
			"JAS_FIR_GBU12_P_3rnd_M",
			"JAS_FIR_GBU12_P_2rnd_M"
		};
	};
	class JAS_FIR_GBU10_Pylon : FIR_GBU10
	{
		magazines[]=
		{
			"FIR_GBU10_1rnd_M",
			"JAS_FIR_GBU10_PYLON_M"
		};
	};
	class JAS_FIR_GBU24A_Pylon : FIR_GBU24
	{
		magazines[]=
		{
			"FIR_GBU24A_1rnd_M",
			"JAS_FIR_GBU24A_PYLON_M"
		};
	};
	class JAS_FIR_GBU24B_Pylon : FIR_GBU24
	{
		magazines[]=
		{
			"FIR_GBU24B_1rnd_M",
			"JAS_FIR_GBU24B_PYLON_M"
		};
	};
	class JAS_FIR_GBU24118_Pylon : FIR_GBU24
	{
		magazines[]=
		{
			"FIR_GBU24A_BLU118_1rnd_M",
			"JAS_FIR_GBU24A_BLU118_PYLON_M"
		};
	};
	class JAS_BIS_weapon_AGM_65Launcher : weapon_AGM_65Launcher
	{
		displayName = "Maverick D";
		magazines[] = {"JAS_PylonRack_MAV_D_x1","JAS_PylonRack_3Rnd_MAV_D","JAS_PylonRack_MAV_D_x2"};
	};
	class JAS_BIS_weapon_AGM_65HLauncher : weapon_AGM_65Launcher
	{
		displayName = "Maverick H";
		magazines[] = {"JAS_PylonRack_MAV_H_x1","JAS_PylonRack_3Rnd_MAV_H","JAS_PylonRack_MAV_H_x2"};
	};
	class JAS_BIS_weapon_AGM_65LLauncher : weapon_AGM_65Launcher
	{
		displayName = "Maverick L";
		magazines[] = {"JAS_PylonRack_MAV_L_x1","JAS_PylonRack_3Rnd_MAV_L","JAS_PylonRack_MAV_L_x2"};
	};
	class JAS_FIR_CBU87_Pylon : FIR_CBU87
	{
		magazines[] = {"FIR_CBU87_1rnd_M","JAS_FIR_CBU87_PYLON_M"};
	};
	class JAS_FIR_CBU89_Pylon : FIR_CBU89
	{
		magazines[] = {"FIR_CBU89_1rnd_M","JAS_FIR_CBU89_PYLON_M"};
	};
	class JAS_FIR_CBU97_Pylon : FIR_CBU97
	{
		magazines[] = {"FIR_CBU97_1rnd_M","JAS_FIR_CBU97_PYLON_M"};
	};
	class JAS_FIR_MK82_Pylon : FIR_mk82_Snakeye_Launcher
	{
		displayName = "Mk82";
		displayNameMagazine = "Mk82";
		shortNameMagazine = "Mk82";
		magazines[] = {"JAS_FIR_MK82_GP_PYLON_M","FIR_mk82_gp_1rnd_M","JAS_FIR_Mk82_GP_P_3rnd_M"};
	};
	class JAS_FIR_MK82AIR_Pylon : FIR_mk82_Snakeye_Launcher
	{
		displayName = "Mk82 AIR";
		displayNameMagazine = "Mk82 AIR";
		shortNameMagazine = "Mk82 AIR";
		magazines[] = {"JAS_FIR_mk82_snakeye_PYLON_M","FIR_mk82_snakeye_1rnd_M","JAS_FIR_Mk82_snakeye_P_3rnd_M"};
	};
	class JAS_FIR_MK84_Pylon : FIR_mk82_Snakeye_Launcher
	{
		displayName = "Mk84 GPB";
		displayNameMagazine = "Mk84 GPB";
		shortNameMagazine = "Mk84 GPB";
		magazines[] = {"JAS_FIR_MK84_GP_PYLON_M","FIR_mk84_gp_1rnd_M"};
	};
	class JAS_FIR_GBU31_Pylon : FIR_GBU31
	{
		magazines[] = {"FIR_GBU31_1rnd_M","JAS_FIR_GBU31_PYLON_M"};
	};
	class JAS_FIR_GBU38_Pylon : FIR_GBU38
	{
		magazines[]=
		{
			"FIR_GBU38_1rnd_M","JAS_FIR_GBU38_PYLON_M"
		};
	};
	class JAS_FIR_EGBU12_Pylon : FIR_EGBU12
	{
		magazines[] = {"FIR_EGBU12_1rnd_M","JAS_FIR_EGBU12_PYLON_M","JAS_FIR_EGBU12_P_2rnd_M","JAS_FIR_EGBU12_P_3rnd_M"};
	};
	class JAS_FIR_GBU54_Pylon : FIR_GBU54
	{
		magazines[] = {"FIR_GBU54_1rnd_M","JAS_FIR_gbu54_PYLON_M"};
	};
	class JAS_FIR_CBU103_Pylon : FIR_CBU103
	{
		magazines[] = {"FIR_CBU103_1rnd_M","JAS_FIR_CBU103_PYLON_M"};
	};
	class JAS_FIR_CBU105_Pylon : FIR_CBU105
	{
		magazines[] = {"FIR_CBU105_1rnd_M","JAS_FIR_CBU105_PYLON_M"};
	};
	class JAS_FIR_KAB500KR_Launcher : FIR_KAB500KR
	{
		magazines[] = {"JAS_FIR_KAB500KR_x1"};
	};
	class JAS_FIR_KAB500L_Launcher : FIR_KAB500L
	{
		magazines[] = {"JAS_FIR_KAB500L_x1"};
	};
	class JAS_FIR_KAB500SE_Launcher : FIR_KAB500SE
	{
		magazines[] = {"JAS_FIR_KAB500SE_x1"};
	};
	class JAS_BIS_weapon_AGM_KH25MPU : weapon_AGM_KH25Launcher
	{
		displayName = "Kh-25MPU";
		magazines[] = {"JAS_KH25MPU_x1"};
	};
	class JAS_BIS_weapon_AGM_KH25R : weapon_AGM_KH25Launcher
	{
		displayName = "Kh-25R";
		magazines[] = {"JAS_KH25R_x1"};
	};
	class JAS_BIS_weapon_AGM_KH25MTP : weapon_AGM_KH25Launcher
	{
		displayName = "Kh-25MTP";
		magazines[] = {"JAS_KH25MTP_x1"};
	};
	class JAS_BIS_weapon_AGM_KH25MT : weapon_AGM_KH25Launcher
	{
		displayName = "Kh-25MT";
		magazines[] = {"JAS_KH25MT_x1"};
	};
	class JAS_BIS_weapon_AGM_KH25MS : weapon_AGM_KH25Launcher
	{
		displayName = "Kh-25MS";
		magazines[] = {"JAS_KH25MS_x1"};
	};
	class JAS_BIS_weapon_AGM_KH25MA : weapon_AGM_KH25Launcher
	{
		displayName = "Kh-25MA";
		magazines[] = {"JAS_KH25MA_x1"};
	};
	class JAS_BIS_weapon_AGM_KH25ML : weapon_AGM_KH25Launcher
	{
		displayName = "Kh-25ML";
		magazines[] = {"JAS_KH25ML_x1"};
	};
	class JAS_BIS_weapon_R73Launcher : weapon_R73Launcher
	{
		displayName = "R-73";
		magazines[] = {"JAS_R73_PYLON_M"};
	};
	class JAS_BIS_weapon_R77Launcher : weapon_R77Launcher
	{
		displayName = "R-77";
		magazines[] = {"JAS_R77_PYLON_M"};
	};
	class JAS_FIR_AIM9L_Pylon : FIR_AIM9L
	{
		displayName = "AIM-9X";
		displayNameMagazine = "AIM-9X";
		shortNameMagazine = "AIM-9X";
		magazines[] = {"FIR_AIM9L_1rnd_M","FIR_AIM9L_TWAS_1rnd_M","FIR_AIM9L_TWAS_Red_1rnd_M","JAS_FIR_AIM9L_PYLON_M","JAS_FIR_AIM9L_PYLON_Mx2"};
	};
	class JAS_FIR_AIM120_Pylon : FIR_AIM120
	{
		displayName = "AIM-120D";
		displayNameMagazine = "AIM-120D";
		shortNameMagazine = "AIM-120D";
		magazines[] = {"FIR_AIM9L_1rnd_M","FIR_AIM9L_TWAS_1rnd_M","FIR_AIM9L_TWAS_Red_1rnd_M","JAS_FIR_AIM120_PYLON_M","JAS_FIR_AIM120_PYLON_Mx2","JAS_FIR_AIM120_PYLON_M_int"};
	};
	class JAS_FIR_AIM120C_Pylon : FIR_AIM120
	{
		displayName = "AIM-120C";
		displayNameMagazine = "AIM-120C";
		shortNameMagazine = "AIM-120C";
		magazines[] = {"JAS_FIR_AIM120C_PYLON_M","JAS_FIR_AIM120C_PYLON_Mx2"};
	};
	class JAS_FIR_AIM7_Pylon : FIR_AIM7
	{
		magazines[] = {"FIR_AIM7_1rnd_M","FIR_AIM7_2_1rnd_M","FIR_AIM7_TWAS_1rnd_M","FIR_AIM7_TWAS_Red_1rnd_M","FIR_AIM7_TWAS_2_1rnd_M","FIR_AIM7_TWAS_2_Red_1rnd_M","JAS_FIR_AIM7_PYLON_M"};
	};
	class JAS_FIR_AGM84H_Pylon : FIR_AGM84H
	{
		canLock = 2;
		displayName = "AGM-84 ASM";
		displayNameMagazine = "AGM-84";
		shortNameMagazine = "AGM84";
		magazines[] = {"FIR_AGM84H_1rnd_M","JAS_FIR_AGM84H_PYLON_M"};
	};
	class JAS_FIR_AGM84SLAM_Pylon : JAS_FIR_AGM84H_Pylon
	{
		canLock = 0;
		displayName = "AGM-84 SLAM";
		displayNameMagazine = "AGM-84 SLAM";
		shortNameMagazine = "AGM84 SLAM";
		magazines[] = {"FIR_AGM84H_1rnd_M","JAS_FIR_AGM84SLAM_PYLON_M"};
	};
	class JAS_FIR_AGM88_Pylon : FIR_AGM88
	{
		magazines[] = {"FIR_AGM88_1rnd_M","JAS_FIR_AGM88_PYLON_M"};
	};
	class JAS_FIR_AGM154C_Pylon : JAS_FIR_AGM154C
	{
		magazines[] = {"FIR_AGM154C_1rnd_M","JAS_FIR_AGM154C_PYLON_M"}; // A variant is CBU - C variant is penetration bomb - wiki
	};
	class JAS_FIR_AGM154A_Pylon : JAS_FIR_AGM154A
	{
		magazines[] = {"FIR_AGM154A_1rnd_M","JAS_FIR_AGM154A_PYLON_M"}; // A variant is CBU - C variant is penetration bomb - wiki
	};
	class JAS_FIR_GBU32_Pylon : FIR_GBU32
	{
		magazines[] = {"FIR_GBU32_1rnd_M","JAS_FIR_GBU32_PYLON_M"};
	};
};
