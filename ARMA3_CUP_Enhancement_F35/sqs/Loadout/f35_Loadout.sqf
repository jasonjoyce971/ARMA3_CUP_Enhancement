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

// Internal Bay System Variables
_plane setVariable ["InternalGBU12","no",true];
_plane setVariable ["InternalGBU38","no",true];
_plane setVariable ["InternalSnake","no",true];
_plane setVariable ["Internal82","no",true];
_plane setVariable ["InternalCBU87","no",true];
_plane setVariable ["InternalCBU89","no",true];
_plane setVariable ["InternalCBU97","no",true];
_plane setVariable ["InternalCBU103","no",true];
_plane setVariable ["InternalGBU39","no",true];
_plane setVariable ["InternalGBU53","no",true];
_plane setVariable ["InternalJSOWA","no",true];
_plane setVariable ["InternalJSOWC","no",true];
_plane setVariable ["InternalBrimstone","no",true];
_plane setVariable ["InternalGBU54","no",true];
_plane setVariable ["InternalEGBU12","no",true];
_plane setVariable ["InternalPAVE4","no",true];
_plane setVariable ["InternalCBU105","no",true];
_plane setVariable ["InternalAIM120","no",true];
_plane setVariable ["InternalASRAAM","no",true];

/* Delete Weapon and Ammo Before */
_plane removeMagazines "JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M";
_plane removeMagazines "FIR_AIM120_1rnd_M";
_plane removeMagazines "FIR_AIM9X_1rnd_M";
_plane removeMagazines "FIR_GBU31_1rnd_M";
_plane removeMagazines "FIR_GBU32_1rnd_M";
_plane removeMagazines "FIR_GBU38_1rnd_M";
_plane removeMagazines "FIR_GBU10_1rnd_M";
_plane removeMagazines "FIR_GBU12_1rnd_M";
_plane removeMagazines "FIR_GBU24A_1rnd_M";
_plane removeMagazines "FIR_GBU24B_1rnd_M";
_plane removeMagazines "FIR_GBU24A_BLU118_1rnd_M";
_plane removeMagazines "FIR_mk82_Snakeye_1rnd_M";
_plane removeMagazines "FIR_mk82_gp_1rnd_M";
_plane removeMagazines "FIR_CBU87_1rnd_M";
_plane removeMagazines "FIR_CBU89_1rnd_M";
_plane removeMagazines "FIR_CBU97_1rnd_M";
_plane removeMagazines "JAS_FIR_CBU103_1rnd_M";
_plane removeMagazines "FIR_AGM65D_1rnd_M";
_plane removeMagazines "FIR_AGM65G_1rnd_M";
_plane removeMagazines "FIR_AGM65L_1rnd_M";
_plane removeMagazines "FIR_BLU107_1rnd_M";
_plane removeMagazines "FIR_gbu39_1rnd_M";
_plane removeMagazines "FIR_gbu53_1rnd_M";
_plane removeMagazines "FIR_AGM88_1rnd_M";
_plane removeMagazines "FIR_AGM154A_1rnd_M";
_plane removeMagazines "FIR_AGM154C_1rnd_M";
_plane removeMagazines "Laserbatteries";
_plane removeMagazines "FIR_GBU54_1rnd_M";
_plane removeMagazines "FIR_CBU105_1rnd_M";
_plane removeMagazines "FIR_EGBU12_1rnd_M";

// Internal Mags
_plane removeMagazines "JAS_FIR_GBU12_1rnd_M_int";
_plane removeMagazines "JAS_FIR_gbu38_1rnd_M_int";
_plane removeMagazines "JAS_FIR_mk82_snakeye_1rnd_M_int";
_plane removeMagazines "JAS_FIR_mk82_gp_1rnd_M_int";
_plane removeMagazines "JAS_FIR_CBU87_1rnd_M_int";
_plane removeMagazines "JAS_FIR_CBU89_1rnd_M_int";
_plane removeMagazines "JAS_FIR_CBU97_1rnd_M_int";
_plane removeMagazines "JAS_FIR_CBU103_1rnd_M_int";
_plane removeMagazines "JAS_FIR_gbu39_1rnd_M_int";
_plane removeMagazines "JAS_FIR_gbu53_1rnd_M_int";
_plane removeMagazines "JAS_FIR_AGM154A_1rnd_M_int";
_plane removeMagazines "JAS_FIR_AGM154C_1rnd_M_int";
_plane removeMagazines "JAS_FIR_gbu54_1rnd_M_int";
_plane removeMagazines "JAS_FIR_CBU105_1rnd_M_int";
_plane removeMagazines "JAS_FIR_EGBU12_1rnd_M_int";
_plane removeMagazines "JAS_FIR_AIM120_1rnd_M_int";

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "FIR_SniperXRPod_2_1rnd_M";
_plane removeMagazines "FIR_ECMPod_1rnd_M";

_plane removeweapon "JAS_CUP_Vacannon_GAU22_veh";
_plane removeweapon "FIR_CMLauncher";
_plane removeweapon "FIR_AIM120";
_plane removeweapon "FIR_AIM9X";
_plane removeweapon "FIR_GBU10";
_plane removeweapon "FIR_GBU12";
_plane removeweapon "JAS_FIR_GBU24A";
_plane removeweapon "JAS_FIR_GBU24B";
_plane removeweapon "JAS_FIR_GBU24_118";
_plane removeweapon "FIR_GBU31";
_plane removeweapon "FIR_GBU32";
_plane removeweapon "FIR_GBU38";
_plane removeweapon "FIR_mk82_Snakeye_Launcher";
_plane removeweapon "JAS_FIR_mk82_Snakeye_Launcher";
_plane removeweapon "FIR_CBU87";
_plane removeweapon "FIR_CBU89";
_plane removeweapon "FIR_CBU97";
_plane removeweapon "JAS_FIR_CBU103";
_plane removeweapon "JAS_FIR_AGM65L";
_plane removeweapon "JAS_FIR_AGM65G";
_plane removeweapon "JAS_FIR_AGM65D";
_plane removeweapon "FIR_AGM88";
_plane removeweapon "FIR_GBU39";
_plane removeweapon "FIR_GBU53";
_plane removeweapon "Rocket_04_HE_Plane_CAS_01_F";
_plane removeweapon "Rocket_04_AP_Plane_CAS_01_F";
_plane removeweapon "FIR_BLU107";
_plane removeweapon "JAS_FIR_AGM154A";
_plane removeweapon "JAS_FIR_AGM154C";
_plane removeweapon "Laserdesignator_mounted";
_plane removeweapon "FIR_GBU54";
_plane removeweapon "FIR_CBU105";
_plane removeweapon "FIR_EGBU12";

// Internal Weapons
_plane removeweapon "JAS_FIR_GBU12_int";
_plane removeweapon "JAS_FIR_GBU38_int";
_plane removeweapon "JAS_FIR_mk82_Snakeye_Launcher_int";
_plane removeweapon "JAS_FIR_mk82_Launcher_int";
_plane removeweapon "JAS_FIR_CBU87_int";
_plane removeweapon "JAS_FIR_CBU89_int";
_plane removeweapon "JAS_FIR_CBU97_int";
_plane removeweapon "JAS_FIR_CBU103_int";
_plane removeweapon "JAS_FIR_GBU39_int";
_plane removeweapon "JAS_FIR_GBU53_int";
_plane removeweapon "JAS_FIR_AGM154A_int";
_plane removeweapon "JAS_FIR_AGM154C_int";
_plane removeweapon "JAS_FIR_GBU54_int";
_plane removeweapon "JAS_FIR_CBU105_int";
_plane removeweapon "JAS_FIR_EGBU12_int";
_plane removeweapon "JAS_FIR_AIM120_int";

_plane removeMagazines "FIR_F15E_Fueltank_1rnd_M";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

_plane addweapon "JAS_CUP_Vacannon_GAU22_veh";
_plane addweapon "FIR_CMLauncher";

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addmagazine "JAS_CUP_220Rnd_TE1_White_Tracer_25mm_GAU22_M";


/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_EGBU12_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU54_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_AGM154A_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_AGM154C_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_EGBU12_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU54_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_AGM154A_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_AGM154C_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_EGBU12_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU54_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_AGM154A_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_AGM154C_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_EGBU12_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU54_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_AGM154A_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_AGM154C_1rnd_M";
		};
	};
	
	Switch (_hardpoint7) Do
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
			_plane addmagazine "JAS_FIR_AIM120_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU87_1rnd_M_int";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU89_1rnd_M_int";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_CBU97_1rnd_M_int";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M_int";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_CBU105_1rnd_M_int";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_AGM154A_1rnd_M_int";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_AGM154C_1rnd_M_int";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint8) Do
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
			_plane addmagazine "JAS_FIR_AIM120_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU87_1rnd_M_int";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU89_1rnd_M_int";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_CBU97_1rnd_M_int";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M_int";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_CBU105_1rnd_M_int";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_AGM154A_1rnd_M_int";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_AGM154C_1rnd_M_int";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do
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
			_plane addmagazine "JAS_FIR_AIM120_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU87_1rnd_M_int";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU89_1rnd_M_int";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_CBU97_1rnd_M_int";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M_int";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_CBU105_1rnd_M_int";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_AGM154A_1rnd_M_int";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_AGM154C_1rnd_M_int";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint10) Do
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
			_plane addmagazine "JAS_FIR_AIM120_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU87_1rnd_M_int";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU89_1rnd_M_int";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_CBU97_1rnd_M_int";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M_int";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_CBU105_1rnd_M_int";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_AGM154A_1rnd_M_int";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_AGM154C_1rnd_M_int";
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "f35_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_F35\sqs\Loadout\f35_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "f35_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_F35\sqs\Loadout\f35_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "f35_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_F35\sqs\Loadout\f35_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapon", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "FIR_AIM9X_1rnd_M"} count magazines _plane;
_aim120count = {_x == "FIR_AIM120_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu32count = {_x == "FIR_GBU32_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "FIR_mk82_Snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_gbu39count = {_x == "FIR_gbu39_1rnd_M"} count magazines _plane;
_gbu53count = {_x == "FIR_gbu53_1rnd_M"} count magazines _plane;
_agm154Acount = {_x == "FIR_AGM154A_1rnd_M"} count magazines _plane;
_agm154Ccount = {_x == "FIR_AGM154C_1rnd_M"} count magazines _plane;
_gbu54count = {_x == "FIR_GBU54_1rnd_M"} count magazines _plane;
_cbu105count = {_x == "FIR_CBU105_1rnd_M"} count magazines _plane;
_egbu12count = {_x == "FIR_EGBU12_1rnd_M"} count magazines _plane;

_gbu12INTcount = {_x == "JAS_FIR_GBU12_1rnd_M_int"} count magazines _plane;
_gbu38INTcount = {_x == "JAS_FIR_gbu38_1rnd_M_int"} count magazines _plane;
_SnakeINTcount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M_int"} count magazines _plane;
_82INTcount = {_x == "JAS_FIR_mk82_gp_1rnd_M_int"} count magazines _plane;
_CBU87INTcount = {_x == "JAS_FIR_CBU87_1rnd_M_int"} count magazines _plane;
_CBU89INTcount = {_x == "JAS_FIR_CBU89_1rnd_M_int"} count magazines _plane;
_CBU97INTcount = {_x == "JAS_FIR_CBU97_1rnd_M_int"} count magazines _plane;
_CBU103INTcount = {_x == "JAS_FIR_CBU103_1rnd_M_int"} count magazines _plane;
_GBU39INTcount = {_x == "JAS_FIR_gbu39_1rnd_M_int"} count magazines _plane;
_GBU53INTcount = {_x == "JAS_FIR_gbu53_1rnd_M_int"} count magazines _plane;
_JSOWAINTcount = {_x == "JAS_FIR_AGM154A_1rnd_M_int"} count magazines _plane;
_JSOWCINTcount = {_x == "JAS_FIR_AGM154C_1rnd_M_int"} count magazines _plane;
_gbu54INTcount = {_x == "JAS_FIR_gbu54_1rnd_M_int"} count magazines _plane;
_CBU105INTcount = {_x == "JAS_FIR_CBU105_1rnd_M_int"} count magazines _plane;
_egbu12INTcount = {_x == "JAS_FIR_EGBU12_1rnd_M_int"} count magazines _plane;
_aim120INTcount = {_x == "JAS_FIR_AIM120_1rnd_M_int"} count magazines _plane;

if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
if (_aim120count >= 1) then {_plane addweapon "FIR_AIM120";};
if (_aim9xcount >= 1) then {_plane addweapon "FIR_AIM9X";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu32count >= 1) then {_plane addweapon "FIR_GBU32";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "JAS_FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D";};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G";};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_gbu39count >= 1) then {_plane addweapon "FIR_gbu39";};
if (_gbu53count >= 1) then {_plane addweapon "FIR_gbu53";};
if (_agm154Acount >= 1) then {_plane addweapon "JAS_FIR_AGM154A";};
if (_agm154Ccount >= 1) then {_plane addweapon "JAS_FIR_AGM154C";};
if (_gbu54count >= 1) then {_plane addweapon "FIR_GBU54";};
if (_cbu105count >= 1) then {_plane addweapon "FIR_CBU105";};
if (_egbu12count >= 1) then {_plane addweapon "FIR_EGBU12";};

if (_gbu12INTcount >= 1) then {_plane setVariable ["InternalGBU12","yes",true];};
if (_gbu38INTcount >= 1) then {_plane setVariable ["InternalGBU38","yes",true];};
if (_SnakeINTcount >= 1) then {_plane setVariable ["InternalSnake","yes",true];};
if (_82INTcount >= 1) then {_plane setVariable ["Internal82","yes",true];};
if (_CBU87INTcount >= 1) then {_plane setVariable ["InternalCBU87","yes",true];};
if (_CBU89INTcount >= 1) then {_plane setVariable ["InternalCBU89","yes",true];};
if (_CBU97INTcount >= 1) then {_plane setVariable ["InternalCBU97","yes",true];};
if (_CBU103INTcount >= 1) then {_plane setVariable ["InternalCBU103","yes",true];};
if (_GBU39INTcount >= 1) then {_plane setVariable ["InternalGBU39","yes",true];};
if (_GBU53INTcount >= 1) then {_plane setVariable ["InternalGBU53","yes",true];};
if (_JSOWAINTcount >= 1) then {_plane setVariable ["InternalJSOWA","yes",true];};
if (_JSOWCINTcount >= 1) then {_plane setVariable ["InternalJSOWC","yes",true];};
if (_gbu54INTcount >= 1) then {_plane setVariable ["InternalGBU54","yes",true];};
if (_CBU105INTcount >= 1) then {_plane setVariable ["InternalCBU105","yes",true];};
if (_egbu12INTcount >= 1) then {_plane setVariable ["InternalEGBU12","yes",true];};
if (_aim120INTcount >= 1) then {_plane setVariable ["InternalAIM120","yes",true];};

_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;

Switch (_fuelcount) Do
{
	case 0:
	{
		_plane setfuel 0.5;
	};
	case 1:
	{
		_plane setfuel 0.75;
	};
	case 2:
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

titleText ["Loading is Completed!", "PLAIN DOWN",0.5];