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
_hardpoint11 = lbCurSel 21008;

_plane setVariable ["TGT_POD","no",true];

/* Delete Weapon and Ammo Before */
// mags
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "CUP_1350Rnd_TE1_Red_Tracer_30mm_GAU8_M";
_plane removeMagazines "JAS_FIR_mk82_snakeye_1rnd_M";
_plane removeMagazines "FIR_mk82_gp_1rnd_M";
_plane removeMagazines "FIR_CBU87_1rnd_M";
_plane removeMagazines "FIR_CBU89_1rnd_M";
_plane removeMagazines "FIR_CBU97_1rnd_M";
_plane removeMagazines "JAS_FIR_CBU103_1rnd_M";
_plane removeMagazines "FIR_GBU10_1rnd_M";
_plane removeMagazines "FIR_GBU12_1rnd_M";
_plane removeMagazines "FIR_GBU31_1rnd_M";
_plane removeMagazines "FIR_GBU38_1rnd_M";
_plane removeMagazines "FIR_AGM65D_1rnd_M";
_plane removeMagazines "FIR_AGM65G_1rnd_M";
_plane removeMagazines "FIR_AGM65L_1rnd_M";
_plane removeMagazines "JAS_CUP_19Rnd_CRV7_FAT_M";
_plane removeMagazines "FIR_Zuni_4rnd_M";
_plane removeMagazines "FIR_JLAU_3_19rnd_M";
_plane removeMagazines "FIR_Hydra_7rnd_M";
_plane removeMagazines "FIR_AIM9L_1rnd_M";
_plane removeMagazines "JAS_FIR_mk84_gp_1rnd_M";
_plane removeMagazines "FIR_SUU25_8rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_7rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_Red_7rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_Orange_7rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_Purple_7rnd_M";

// pods
_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "CUP_1Rnd_Sidewinder_A10_Pod_M";
_plane removeMagazines "FIR_ECMPod_1rnd_M";
_plane removeMagazines "CUP_1Rnd_Litening_M";
_plane removeMagazines "CUP_1Rnd_CRV7_Pod_19_M";
_plane removeMagazines "FIR_Hydra_7_Pod_1rnd_M";
_plane removeMagazines "FIR_JLAU_3_Pod_1rnd_M";
_plane removeMagazines "FIR_Zuni_5_Pod_1rnd_M";
_plane removeMagazines "FIR_Triplepylon_1rnd_M";
_plane removeMagazines "FIR_LAU88_1rnd_M";
_plane removeMagazines "CUP_12Rnd_pylonblank_M";
_plane removeMagazines "FIR_SUU25_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKW_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKR_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKO_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKP_Pod_1rnd_M";

// weapons
_plane removeWeapon "FIR_CMLauncher";
_plane removeWeapon "JAS_CUP_Vacannon_GAU8_veh";
_plane removeWeapon "JAS_HYDRA_Launcher";
_plane removeWeapon "JAS_ZUNI_Launcher";
_plane removeWeapon "FIR_AIM9L";
_plane removeWeapon "FIR_GBU10";
_plane removeWeapon "FIR_GBU12";
_plane removeWeapon "FIR_GBU31";
_plane removeWeapon "FIR_GBU38";
_plane removeWeapon "FIR_mk82_Snakeye_Launcher";
_plane removeWeapon "FIR_CBU87";
_plane removeWeapon "FIR_CBU89";
_plane removeWeapon "FIR_CBU97";
_plane removeWeapon "JAS_FIR_CBU103";
_plane removeWeapon "JAS_FIR_AGM65L";
_plane removeWeapon "JAS_FIR_AGM65G";
_plane removeWeapon "JAS_FIR_AGM65D";
_plane removeWeapon "JAS_FIR_mk82_Snakeye_Launcher";
_plane removeWeapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
_plane removeWeapon "JAS_FIR_mk84";
_plane removeWeapon "FIR_SUU25";
_plane removeWeapon "JAS_HYDRA_SMKW_Launcher";
_plane removeWeapon "JAS_HYDRA_SMKR_Launcher";
_plane removeWeapon "JAS_HYDRA_SMKO_Launcher";
_plane removeWeapon "JAS_HYDRA_SMKP_Launcher";

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

_plane addweapon "JAS_CUP_Vacannon_GAU8_veh";
_plane addweapon "FIR_CMLauncher";

if (isClass(configFile >> "CfgPatches" >> "AlZab_mighty_gau8_avenger")) then 
{
	_plane addmagazine "1174Rnd_GAU8_30mm_Plane_CAS_01_F";
}
else
{
	_plane addmagazine "CUP_1350Rnd_TE1_Red_Tracer_30mm_GAU8_M";
};


_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";


/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	//right outboard - 1
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
		};
		case 10:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M"; // SUU
		};
	};
	
	//left outboard - 2
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
		};
		case 10:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M"; // SUU
		};
	};
	
	//right wing midline/rocket slot - 3
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 8:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 10:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 16:
		{
			_plane addmagazine "CUP_1Rnd_Litening_M"; // TGP
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	//left wing midline/rocket slot - 4
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 8:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 10:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 16:
		{
			_plane addmagazine "CUP_1Rnd_Litening_M"; // TGP
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	//right inboard slot - 5
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 23:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//left inboard slot - 6
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 23:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//right outer belly - 7
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 19:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
	};
	
	//left outer belly - 8
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 19:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
	};
	
	//right inner belly - 9
	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
	};
	
	//left inner belly - 10
	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
	};
	
	//centre belly - 11
	Switch (_hardpoint11) Do
	{
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
	};
	
	//conditionals - reference AV8 TER loading
	//right wing winder proxies
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_AIM9L_1rnd_M";
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};
	
	//left wing winder proxies
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_AIM9L_1rnd_M";
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};

	//right wing TER outboard upper
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//left TER outboard upper
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//right TER inboard upper
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//left TER inboard upper
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//right TER bottom
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//left TER bottom
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 29:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//right belly TER outboard upper
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//left belly TER outboard upper
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//right belly TER inboard upper
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//left belly TER inboard upper
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//right belly TER bottom
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//left belly TER bottom
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	_plane addmagazine "CUP_12Rnd_pylonblank_M"; // old belly bomb slots - disregard
	
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "A10J_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "jason_aircraft\sqs\Loadout\A10J_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "A10J_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "jason_aircraft\sqs\Loadout\A10J_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "A10J_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "jason_aircraft\sqs\Loadout\A10J_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapon", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_CRV7count = {_x == "CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_aim9Lcount = {_x == "FIR_AIM9L_1rnd_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_mk84gpcount = {_x == "JAS_FIR_mk84_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_zunicount = {_x == "FIR_Zuni_5_Pod_1rnd_M"} count magazines _plane;
_SUUcount = {_x == "FIR_SUU25_Pod_1rnd_M"} count magazines _plane;
_hydraSMKWcount = {_x == "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"} count magazines _plane;
_hydraSMKRcount = {_x == "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"} count magazines _plane;
_hydraSMKOcount = {_x == "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"} count magazines _plane;
_hydraSMKPcount = {_x == "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"} count magazines _plane;

_TGPcount = {_x == "CUP_1Rnd_Litening_M"} count magazines _plane;

if (_aim9Lcount >= 1) then {_plane addweapon "FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "JAS_FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D"};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G"};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk84gpcount >= 1) then {_plane addweapon "JAS_FIR_mk84";};

if (_hydraSMKWcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKW_Launcher";
	_counter = 1;

	while {_counter <= _hydraSMKWcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_7rnd_M";
	};
};
if (_hydraSMKRcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKR_Launcher";
	_counter = 1;

	while {_counter <= _hydraSMKRcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Red_7rnd_M";
	};
};
if (_hydraSMKOcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKO_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydraSMKOcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Orange_7rnd_M";
	};
};
if (_hydraSMKPcount >= 1) then
{
	_plane addweapon "JAS_HYDRA_SMKP_Launcher";
	_counter19 = 1;
	
	while {_counter19 <= _hydraSMKPcount} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Purple_7rnd_M";
	};
};
if (_SUUcount >= 1) then 
{
	_plane addweapon "FIR_SUU25";
	_counter = 1;

	while {_counter <= _SUUcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "FIR_SUU25_8rnd_M";
	};
};
if (_CRV7count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter = 1;

	while {_counter <= _CRV7count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_FAT_M";
	};
};
if (_hydra7count >= 1) then 
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydra7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "FIR_Hydra_7rnd_M";
	};
};
if (_hydra19count >= 1) then
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter19 = 1;
	
	while {_counter19 <= _hydra19count} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazine "FIR_JLAU_3_19rnd_M";
	};
};
if (_zunicount >= 1) then
{
	_plane addweapon "JAS_ZUNI_Launcher";
	_counter5 = 1;

	while {_counter5 <= _zunicount} do
	{
		_counter5 = _counter5 + 1;
		_plane addmagazine "FIR_Zuni_4rnd_M";
	};
};

titleText ["Loading Complete", "PLAIN DOWN",0.5];