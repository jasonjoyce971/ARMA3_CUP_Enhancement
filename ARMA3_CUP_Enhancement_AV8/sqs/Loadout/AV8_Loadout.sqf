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

/* Delete Weapon and Ammo Before */

_plane setPylonLoadOut ["RightWingOut", "", true, []];
_plane setPylonLoadOut ["RightWingMid", "", true, []];
_plane setPylonLoadOut ["RightWingIn", "", true, []];
_plane setPylonLoadOut ["LeftWingIn", "", true, []];
_plane setPylonLoadOut ["LeftWingMid", "", true, []];
_plane setPylonLoadOut ["LeftWingOut", "", true, []];

_plane removeMagazines "JAS_FIR_AIM9L_PYLON_M";
_plane removeMagazines "JAS_FIR_AIM120C_PYLON_M";
_plane removeMagazines "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M";
_plane removeMagazines "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M";
_plane removeMagazines "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M";
_plane removeMagazines "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M";
_plane removeMagazines "JAS_PylonRack_MAV_D_x1";
_plane removeMagazines "JAS_PylonRack_3Rnd_MAV_D";
_plane removeMagazines "JAS_FIR_AGM65G_P_1rnd_M";
_plane removeMagazines "JAS_PylonRack_MAV_L_x1";
_plane removeMagazines "JAS_PylonRack_3Rnd_MAV_L";
_plane removeMagazines "JAS_FIR_AGM88_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU10_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU12_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU12_P_3rnd_M";
_plane removeMagazines "JAS_FIR_EGBU12_PYLON_M";
_plane removeMagazines "JAS_FIR_EGBU12_P_3rnd_M";
_plane removeMagazines "JAS_FIR_GBU24A_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU24B_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU24A_BLU118_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU31_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU32_PYLON_M";
_plane removeMagazines "JAS_FIR_GBU38_PYLON_M";
_plane removeMagazines "JAS_FIR_gbu54_PYLON_M";
_plane removeMagazines "JAS_FIR_CBU87_PYLON_M";
_plane removeMagazines "JAS_FIR_CBU89_PYLON_M";
_plane removeMagazines "JAS_FIR_CBU97_PYLON_M";
_plane removeMagazines "JAS_FIR_CBU103_PYLON_M";
_plane removeMagazines "JAS_FIR_CBU105_PYLON_M";
_plane removeMagazines "JAS_FIR_mk82_snakeye_PYLON_M";
_plane removeMagazines "JAS_FIR_Mk82_snakeye_P_3rnd_M";
_plane removeMagazines "JAS_FIR_MK82_GP_PYLON_M";
_plane removeMagazines "JAS_FIR_Mk82_GP_P_3rnd_M";
_plane removeMagazines "JAS_FIR_MK84_GP_PYLON_M";
_plane removeMagazines "JAS_FIR_F15E_Fueltank_P_1rnd_M";
_plane removeMagazines "JAS_FIR_ECMPod_P_1rnd_M";
_plane removeMagazines "JAS_FIR_Litening_std_P_1rnd_M";
_plane removeMagazines "JAS_FIR_AV8B_Fueltank_L_P_1rnd_M";
_plane removeMagazines "JAS_FIR_AV8B_Fueltank_R_P_1rnd_M";

_plane removeMagazinesTurret ["JAS_FIR_AV8B_Fueltank_R_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AV8B_Fueltank_L_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_Litening_std_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_ECMPod_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_F15E_Fueltank_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_MK84_GP_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_Mk82_GP_P_3rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_MK82_GP_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_Mk82_snakeye_P_3rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_mk82_snakeye_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_CBU105_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AIM9L_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AIM120C_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_PylonPod_19Rnd_CRV7_HE_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_MAV_D_x1",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_3Rnd_MAV_D",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AGM65G_P_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_MAV_L_x1",[0]];
_plane removeMagazinesTurret ["JAS_PylonRack_3Rnd_MAV_L",[0]];
_plane removeMagazinesTurret ["JAS_FIR_AGM88_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU10_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU12_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU12_P_3rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_EGBU12_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_EGBU12_P_3rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU24A_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU24B_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU24A_BLU118_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU31_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU32_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_GBU38_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_gbu54_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_CBU87_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_CBU89_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_CBU97_PYLON_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_CBU103_PYLON_M",[0]];

_plane removeWeapon "JAS_FIR_AIM9L_Pylon";
_plane removeWeapon "JAS_FIR_AIM120C_Pylon";
_plane removeWeapon "JAS_FIR_APKWS_Pylon_Launcher";
_plane removeWeapon "JAS_CUP_Vmlauncher_CRV7_FAT_Pylon";
_plane removeWeapon "JAS_BIS_weapon_AGM_65Launcher";
_plane removeWeapon "JAS_BIS_weapon_AGM_65GLauncher";
_plane removeWeapon "JAS_BIS_weapon_AGM_65LLauncher";
_plane removeWeapon "JAS_FIR_AGM88_Pylon";
_plane removeWeapon "JAS_FIR_GBU10_Pylon";
_plane removeWeapon "JAS_FIR_GBU12_Pylon";
_plane removeWeapon "JAS_FIR_EGBU12_Pylon";
_plane removeWeapon "JAS_FIR_GBU24A_Pylon";
_plane removeWeapon "JAS_FIR_GBU24B_Pylon";
_plane removeWeapon "JAS_FIR_GBU24118_Pylon";
_plane removeWeapon "JAS_FIR_GBU31_Pylon";
_plane removeWeapon "JAS_FIR_GBU32_Pylon";
_plane removeWeapon "JAS_FIR_GBU38_Pylon";
_plane removeWeapon "JAS_FIR_GBU54_Pylon";
_plane removeWeapon "JAS_FIR_CBU87_Pylon";
_plane removeWeapon "JAS_FIR_CBU89_Pylon";
_plane removeWeapon "JAS_FIR_CBU97_Pylon";
_plane removeWeapon "JAS_FIR_CBU103_Pylon";
_plane removeWeapon "JAS_FIR_CBU105_Pylon";
_plane removeWeapon "JAS_FIR_MK82AIR_Pylon";
_plane removeWeapon "JAS_FIR_MK82_Pylon";
_plane removeWeapon "JAS_FIR_MK84_Pylon";

_plane removeWeaponTurret ["JAS_FIR_MK84_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_MK82_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_MK82AIR_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_CBU105_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_CBU103_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_AIM9L_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_AIM120C_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_APKWS_Pylon_Launcher",[0]];
_plane removeWeaponTurret ["JAS_CUP_Vmlauncher_CRV7_FAT_Pylon",[0]];
_plane removeWeaponTurret ["JAS_BIS_weapon_AGM_65Launcher",[0]];
_plane removeWeaponTurret ["JAS_BIS_weapon_AGM_65GLauncher",[0]];
_plane removeWeaponTurret ["JAS_BIS_weapon_AGM_65LLauncher",[0]];
_plane removeWeaponTurret ["JAS_FIR_AGM88_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU10_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU12_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_EGBU12_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24A_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24B_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24118_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU31_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU32_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU38_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU54_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_CBU87_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_CBU89_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_CBU97_Pylon",[0]];

// ORIGINAL CODE //////////////////////////////////////////////////////////

_plane removeMagazines "1000Rnd_Gatling_30mm_Plane_CAS_01_F";
_plane removeMagazines "JAS_FIR_GAU12_300rnd_M";
_plane removeMagazines "FIR_GBU31_1rnd_M";
_plane removeMagazines "FIR_GBU32_1rnd_M";
_plane removeMagazines "FIR_GBU38_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU24A_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU24B_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU24A_BLU118_1rnd_M";
_plane removeMagazines "JAS_FIR_mk82_snakeye_1rnd_M";
_plane removeMagazines "FIR_mk82_gp_1rnd_M";
_plane removeMagazines "FIR_CBU87_1rnd_M";
_plane removeMagazines "FIR_CBU89_1rnd_M";
_plane removeMagazines "FIR_CBU97_1rnd_M";
_plane removeMagazines "JAS_FIR_CBU103_1rnd_M";
_plane removeMagazines "FIR_BLU107_1rnd_M";
_plane removeMagazines "FIR_gbu39_1rnd_M";
_plane removeMagazines "FIR_gbu53_1rnd_M";
_plane removeMagazines "FIR_AGM88_1rnd_M";
_plane removeMagazines "FIR_mk84_gp_1rnd_M";
_plane removeMagazines "FIR_Triplepylon_1rnd_M";
_plane removeMagazines "FIR_LAU88_1rnd_M";
_plane removeMagazines "JAS_FIR_gbu54_1rnd_M";
_plane removeMagazines "FIR_CBU105_1rnd_M";
_plane removeMagazines "JAS_FIR_EGBU12_1rnd_M";
_plane removeMagazines "JAS_FIR_AIM9L_1rnd_M";
_plane removeMagazines "JAS_FIR_AIM120B_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_APKWS_19rnd_M";
_plane removeMagazines "JAS_FIR_AGM65D_1rnd_M";
_plane removeMagazines "JAS_FIR_AGM65G_1rnd_M";
_plane removeMagazines "JAS_FIR_AGM65L_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU10_1rnd_M";
_plane removeMagazines "JAS_FIR_GBU12_1rnd_M";

_plane removeMagazines "JAS_CUP_19Rnd_CRV7_FAT_M";
_plane removeMagazines "JAS_CUP_19Rnd_CRV7_HE_M";
_plane removeMagazines "JAS_CUP_19Rnd_CRV7_KEP_M";
_plane removeMagazines "CUP_1Rnd_CRV7_Pod_19_M";

_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "FIR_SniperXRPod_2_1rnd_M";
_plane removeMagazines "FIR_ECMPod_1rnd_M";

_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M";
_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";

_plane removeweapon "Gatling_30mm_Plane_CAS_01_F";
_plane removeweapon "JAS_FIR_GAU12";
_plane removeweapon "FIR_CMLauncher";
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
_plane removeweapon "JAS_FIR_CBU103";
_plane removeweapon "FIR_AGM88";
_plane removeweapon "FIR_GBU39";
_plane removeweapon "FIR_GBU53";
_plane removeweapon "Rocket_04_HE_Plane_CAS_01_F";
_plane removeweapon "Rocket_04_AP_Plane_CAS_01_F";
_plane removeweapon "FIR_BLU107";
_plane removeweapon "FIR_mk84";
_plane removeweapon "JAS_FIR_GBU54";
_plane removeweapon "FIR_CBU105";
_plane removeWeapon "JAS_FIR_EGBU12";
_plane removeweapon "JAS_FIR_AIM9L";
_plane removeweapon "JAS_FIR_AIM120";
_plane removeWeapon "JAS_FIR_APKWS_Launcher";
_plane removeWeapon "JAS_FIR_AGM65L";
_plane removeWeapon "JAS_FIR_AGM65G";
_plane removeWeapon "JAS_FIR_AGM65D";
_plane removeweapon "JAS_FIR_GBU10";
_plane removeweapon "JAS_FIR_GBU12";

_plane removeweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";

_plane removeMagazines "FIR_F15E_Fueltank_1rnd_M";
_plane removeMagazines "JAS_FIR_AV8B_Fueltank_L_P_1rnd_M";
_plane removeMagazines "JAS_FIR_AV8B_Fueltank_R_P_1rnd_M";

_plane removeMagazines "Laserbatteries";
_plane removeWeapon "Laserdesignator_mounted";

// JETS CODE
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

_plane addmagazine "JAS_FIR_GAU12_300rnd_M";
_plane addweapon "JAS_FIR_GAU12";

_plane addweapon "FIR_CMLauncher";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";


/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
// if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. 
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint5) Do // Right Inboard
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
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 29:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 30:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 31:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 32:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 33:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 34:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 35:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AV8B_Fueltank_R_P_1rnd_M", true, []];
		};
		/*
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER EGBU
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // LJDAM
		};
		case 26:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 29:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 30:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 32:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 33:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 34:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 35:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 36:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		*/
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do // Left Inboard
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
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 29:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 30:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 31:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 32:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 33:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 34:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 35:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AV8B_Fueltank_L_P_1rnd_M", true, []];
		};
	/*
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER EGBU
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // LJDAM
		};
		case 26:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 29:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 30:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 32:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 33:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 34:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 35:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 36:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		*/
	};

	sleep 0.3;
	
	Switch (_hardpoint3) Do // Right Midline
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
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 29:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AV8B_Fueltank_R_P_1rnd_M", true, []];
		};
	/*
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 29:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		*/
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
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
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 29:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AV8B_Fueltank_L_P_1rnd_M", true, []];
		};
	};
	
	Switch (_hardpoint1) Do // Right Outboard
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
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_Litening_std_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
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
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_Litening_std_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	sleep 0.3;
	/*
	//TER proxies by hardpoint
	Switch (_hardpoint5) Do 
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	*/
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "AV8_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_AV8\sqs\Loadout\AV8_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "AV8_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_AV8\sqs\Loadout\AV8_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "AV8_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_AV8\sqs\Loadout\AV8_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 5;

/*
titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_aim120count = {_x == "JAS_FIR_AIM120B_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "JAS_FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "JAS_FIR_GBU12_1rnd_M"} count magazines _plane;
_egbu12count = {_x == "JAS_FIR_EGBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "JAS_FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "JAS_FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "JAS_FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu32count = {_x == "FIR_GBU32_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "JAS_FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "JAS_FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "JAS_FIR_AGM65L_1rnd_M"} count magazines _plane;
_gbu39count = {_x == "FIR_gbu39_1rnd_M"} count magazines _plane;
_gbu53count = {_x == "FIR_gbu53_1rnd_M"} count magazines _plane;
_84count = {_x == "FIR_mk84_gp_1rnd_M"} count magazines _plane;
_gbu54count = {_x == "JAS_FIR_gbu54_1rnd_M"} count magazines _plane;
_cbu105count = {_x == "FIR_CBU105_1rnd_M"} count magazines _plane;
_APKWScount = {_x == "CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;

_CRV7FATcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_CRV7HEcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"} count magazines _plane;
_CRV7KEPcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"} count magazines _plane;

if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
if (_aim120count >= 1) then {_plane addweapon "JAS_FIR_AIM120";};
if (_aim9xcount >= 1) then {_plane addweapon "JAS_FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "JAS_FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "JAS_FIR_GBU12";};
if (_egbu12count >= 1) then {_plane addweapon "JAS_FIR_EGBU12";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu32count >= 1) then {_plane addweapon "FIR_GBU32";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "JAS_FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D";};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G";};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_gbu39count >= 1) then {_plane addweapon "FIR_gbu39";};
if (_gbu53count >= 1) then {_plane addweapon "FIR_gbu53";};
if (_84count >= 1) then {_plane addweapon "FIR_mk84";};
if (_gbu54count >= 1) then {_plane addweapon "JAS_FIR_GBU54";};
if (_cbu105count >= 1) then {_plane addweapon "FIR_CBU105";};
*/
_fuelcountL = {_x == "JAS_FIR_AV8B_Fueltank_L_P_1rnd_M"} count magazines _plane;
_fuelcountR = {_x == "JAS_FIR_AV8B_Fueltank_R_P_1rnd_M"} count magazines _plane;
_fuelcount = _fuelcountL + _fuelcountR;
/*
if (_APKWScount >= 1) then 
{
	_plane addweapon "JAS_FIR_APKWS_Launcher";
	_counter7 = 1;

	while {_counter7 <= _APKWScount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_FIR_Hydra_APKWS_19rnd_M";
	};
};
if (_CRV7FATcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter7 = 1;

	while {_counter7 <= _CRV7FATcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_FAT_M";
	};
};
if (_CRV7HEcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter7 = 1;

	while {_counter7 <= _CRV7HEcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_HE_M";
	};
};
if (_CRV7KEPcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter7 = 1;

	while {_counter7 <= _CRV7KEPcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_KEP_M";
	};
};
*/
Switch (_fuelcount) Do
{
	case 0:
	{
		_plane setfuel 0.6;
	};
	case 1:
	{
		_plane setfuel 0.7;
	};
	case 2:
	{
		_plane setfuel 0.8;
	};
	case 3:
	{
		_plane setfuel 0.9;
	};
	case 4:
	{
		_plane setfuel 1;
	};
};

_TGP = _plane getVariable "TGT_POD";
if (_TGP == "yes") then
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};
	
titleText ["Loading Complete", "PLAIN DOWN",0.5];