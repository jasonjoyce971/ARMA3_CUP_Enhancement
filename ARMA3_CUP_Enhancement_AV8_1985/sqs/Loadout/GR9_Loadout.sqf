/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
_hardpoint1 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;
_hardpoint5 = lbCurSel 2103;
_hardpoint6 = lbCurSel 2104;
_hardpoint7 = lbCurSel 2105;
_hardpoint8 = lbCurSel 2106;
_hardpoint9 = lbCurSel 2202;
_hardpoint10 = lbCurSel 2107;

_plane setVariable ["TGT_POD","no",true];
_plane setVariable ["ECMJAMMER","no",true];

//////////////////////////////////////////////////////////////////////////////////////////////////

_plane setPylonLoadOut ["RightWingOut", "", true, []];
_plane setPylonLoadOut ["RightWingMid", "", true, []];
_plane setPylonLoadOut ["RightWingGear", "", true, []];
_plane setPylonLoadOut ["RightWingIn", "", true, []];
_plane setPylonLoadOut ["Center", "", true, []];
_plane setPylonLoadOut ["LeftWingIn", "", true, []];
_plane setPylonLoadOut ["LeftWingGear", "", true, []];
_plane setPylonLoadOut ["LeftWingMid", "", true, []];
_plane setPylonLoadOut ["LeftWingOut", "", true, []];

_plane removeMagazines "JAS_FIR_AIM9L_PYLON_M";
_plane removeMagazines "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M";
_plane removeMagazines "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M";
_plane removeMagazines "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M";
_plane removeMagazines "JAS_PylonRack_MAV_D_x1";
_plane removeMagazines "JAS_PylonRack_3Rnd_MAV_D";
_plane removeMagazines "JAS_FIR_AGM65G_P_1rnd_M";
_plane removeMagazines "JAS_PylonRack_MAV_L_x1";
_plane removeMagazines "JAS_PylonRack_3Rnd_MAV_L";
_plane removeMagazines "JAS_FIR_GBU10_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU12_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU12_P_3rnd_M";
_plane removeMagazines "JAS_FIR_GBU24A_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU24B_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU24A_BLU118_PYLON_M";
_plane removeMagazines "JAS_FIR_mk82_snakeye_PYLON_M";
_plane removeMagazines "JAS_FIR_Mk82_snakeye_P_3rnd_M";
_plane removeMagazines "JAS_FIR_MK82_GP_PYLON_M";
_plane removeMagazines "JAS_FIR_Mk82_GP_P_3rnd_M";
_plane removeMagazines "JAS_FIR_MK84_GP_PYLON_M";
_plane removeMagazines "JAS_FIR_SniperXR_2_P_1rnd_M";
_plane removeMagazines "JAS_PylonWeapon_300Rnd_20mm_shells";
_plane removeMagazines "JAS_FIR_ECMPod_P_1rnd_M";

_plane removeMagazinesTurret ["JAS_FIR_AV8B_Fueltank_R_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AV8B_Fueltank_L_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_SniperXR_2_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_ECMPod_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_F15E_Fueltank_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_MK84_GP_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_Mk82_GP_P_3rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_MK82_GP_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_Mk82_snakeye_P_3rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_mk82_snakeye_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AIM9L_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_MAV_D_x1",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_3Rnd_MAV_D",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AGM65G_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_MAV_L_x1",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_3Rnd_MAV_L",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU10_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU12_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU12_P_3rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU24A_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU24B_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU24A_BLU118_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_PylonWeapon_300Rnd_20mm_shells",[0]];

_plane removeWeapon "JAS_FIR_AIM9L_Pylon";
_plane removeWeapon "JAS_CUP_Vmlauncher_CRV7_FAT_Pylon";
_plane removeWeapon "JAS_BIS_weapon_AGM_65Launcher";
_plane removeWeapon "JAS_BIS_weapon_AGM_65GLauncher";
_plane removeWeapon "JAS_BIS_weapon_AGM_65LLauncher";
_plane removeWeapon "JAS_FIR_GBU10_Pylon";
_plane removeWeapon "JAS_FIR_GBU12_Pylon";
_plane removeWeapon "JAS_FIR_GBU24A_Pylon";
_plane removeWeapon "JAS_FIR_GBU24B_Pylon";
_plane removeWeapon "JAS_FIR_GBU24118_Pylon";
_plane removeWeapon "JAS_FIR_MK82AIR_Pylon";
_plane removeWeapon "JAS_FIR_MK82_Pylon";
_plane removeWeapon "JAS_FIR_MK84_Pylon";
_plane removeWeapon "JAS_Twin_Cannon_20mm";

_plane removeWeaponTurret ["JAS_FIR_MK84_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_MK82_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_MK82AIR_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_AIM9L_Pylon",[0]];
_plane removeWeaponTurret ["JAS_CUP_Vmlauncher_CRV7_FAT_Pylon",[0]];
_plane removeWeaponTurret ["JAS_BIS_weapon_AGM_65Launcher",[0]];
_plane removeWeaponTurret ["JAS_BIS_weapon_AGM_65GLauncher",[0]];
_plane removeWeaponTurret ["JAS_BIS_weapon_AGM_65LLauncher",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU10_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU12_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24A_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24B_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24118_Pylon",[0]];
_plane removeWeaponTurret ["JAS_Twin_Cannon_20mm",[0]];

//////////////////////////////////////////////////////////////////////////////////////////////////

/* Delete Weapon and Ammo Before */
/*_plane removeMagazines "1000Rnd_Gatling_30mm_Plane_CAS_01_F";
_plane removeMagazines "1174Rnd_GAU8_30mm_Plane_CAS_01_F";
_plane removeMagazines "FIR_AIM120_1rnd_M";
_plane removeMagazines "JAS_FIR_AIM9L_1rnd_M";
_plane removeMagazines "FIR_GBU31_1rnd_M";
_plane removeMagazines "FIR_GBU32_1rnd_M";
_plane removeMagazines "FIR_GBU38_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU10_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU12_1rnd_M";
_plane removeMagazines "FIR_GBU12_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU24A_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU24B_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU24A_BLU118_1rnd_M";
_plane removeMagazines "JAS_FIR_mk82_snakeye_1rnd_M";
_plane removeMagazines "FIR_mk82_gp_1rnd_M";
_plane removeMagazines "FIR_CBU87_1rnd_M";
_plane removeMagazines "FIR_CBU89_1rnd_M";
_plane removeMagazines "FIR_CBU97_1rnd_M";
_plane removeMagazines "FIR_CBU103_1rnd_M";
_plane removeMagazines "JAS_FIR_AGM65D_1rnd_M";
_plane removeMagazines "JAS_FIR_AGM65G_1rnd_M";
_plane removeMagazines "JAS_FIR_AGM65L_1rnd_M";
_plane removeMagazines "FIR_BLU107_1rnd_M";
_plane removeMagazines "FIR_gbu39_1rnd_M";
_plane removeMagazines "FIR_gbu53_1rnd_M";
_plane removeMagazines "FIR_AGM88_1rnd_M";
_plane removeMagazines "FIR_mk84_gp_1rnd_M";

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "FIR_SniperXRPod_2_1rnd_M";
_plane removeMagazines "FIR_ECMPod_1rnd_M";

_plane removeMagazines "FIR_LAU88_1rnd_M";

_plane removeweapon "Gatling_30mm_Plane_CAS_01_F";
_plane removeweapon "FIR_GAU12";
_plane removeweapon "FIR_CMLauncher";
_plane removeweapon "FIR_AIM120";
_plane removeweapon "JAS_FIR_AIM9L";
_plane removeweapon "JAS_FIR_GBU10";
_plane removeweapon "JAS_FIR_GBU12";
_plane removeweapon "FIR_GBU12";
_plane removeweapon "JAS_FIR_GBU24A";
_plane removeweapon "JAS_FIR_GBU24B";
_plane removeweapon "JAS_FIR_GBU24_118";
_plane removeweapon "FIR_GBU31";
_plane removeweapon "FIR_GBU32";
_plane removeweapon "FIR_GBU38";
_plane removeweapon "JAS_FIR_mk82_Snakeye_Launcher";
_plane removeWeapon "FIR_mk82_Snakeye_Launcher";
_plane removeweapon "FIR_CBU87";
_plane removeweapon "FIR_CBU89";
_plane removeweapon "FIR_CBU97";
_plane removeweapon "FIR_CBU103";
_plane removeweapon "JAS_FIR_AGM65D";
_plane removeweapon "JAS_FIR_AGM65G";
_plane removeweapon "JAS_FIR_AGM65L";
_plane removeweapon "FIR_AGM88";
_plane removeweapon "FIR_GBU39";
_plane removeweapon "FIR_GBU53";
_plane removeweapon "Rocket_04_HE_Plane_CAS_01_F";
_plane removeweapon "Rocket_04_AP_Plane_CAS_01_F";
_plane removeweapon "FIR_BLU107";
_plane removeweapon "FIR_mk84";

_plane removeMagazines "FIR_F15E_Fueltank_1rnd_M";

_plane removeMagazines "JAS_CUP_19Rnd_CRV7_FAT_M";
_plane removeMagazines "JAS_CUP_19Rnd_CRV7_HE_M";
_plane removeMagazines "JAS_CUP_19Rnd_CRV7_KEP_M";

_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M";
_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";

_plane removeweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";*/

_plane removeMagazines "Laserbatteries";
_plane removeWeapon "Laserdesignator_mounted";

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading Guns and Texture", "PLAIN DOWN",0.5];

_plane addweapon "FIR_CMLauncher";

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";


/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
//if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. 
if (_preset == -1 or _preset == 0) then
{

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingGear", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingGear", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingGear", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingGear", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingGear", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingGear", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingIn", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingIn", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};
	
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingIn", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingIn", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingMid", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingMid", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingMid", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingMid", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};

	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_SniperXR_2_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingOut", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingOut", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_SniperXR_2_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};	
	
sleep 0.3;

	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Center", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Center", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Center", "JAS_FIR_SniperXR_2_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Center", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
	};
	
	sleep 0.3;

}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "GR9_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_AV8\sqs\Loadout\GR9_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "GR9_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_AV8\sqs\Loadout\GR9_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "GR9_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_AV8\sqs\Loadout\GR9_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;
/*
_aim9xcount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "JAS_FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "JAS_FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "JAS_FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "JAS_FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "JAS_FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "JAS_FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "JAS_FIR_AGM65L_1rnd_M"} count magazines _plane;
_84count = {_x == "FIR_mk84_gp_1rnd_M"} count magazines _plane;

_CRV7FATcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_CRV7HEcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"} count magazines _plane;
_CRV7KEPcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"} count magazines _plane;

if (_aim9xcount >= 1) then {_plane addweapon "JAS_FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_84count >= 1) then {_plane addweapon "FIR_mk84";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D";};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G";};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};

if (_CRV7FATcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter = 0;

	while {_counter <= _CRV7FATcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_FAT_M";
	};
};

if (_CRV7HEcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter = 0;

	while {_counter <= _CRV7HEcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_HE_M";
	};
};

if (_CRV7KEPcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter = 0;

	while {_counter <= _CRV7KEPcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_KEP_M";
	};
};
*/
_TGP = _plane getVariable "TGT_POD";
if (_TGP == "yes") then
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};

titleText ["Loading Complete", "PLAIN DOWN",0.5];