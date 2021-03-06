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
_hardpoint11 = lbCurSel 2117;
_hardpoint12 = lbCurSel 2118;

_plane setVariable ["TGT_POD","no",true];

/* Delete Weapon and Ammo Before */
//pods
_plane removeMagazines "JAS_CUP_1Rnd_S8_Pod_Air_M";
_plane removeMagazines "JAS_CUP_S13_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_Vikhr_Rack_6Rnd_M";

//mags
_plane removeMagazinesTurret ["JAS_CUP_40Rnd_S8_M",[-1]];
_plane removeMagazinesTurret ["JAS_S13_5rnd_M",[-1]];
_plane removeMagazinesTurret ["1Rnd_Missile_AA_03_F",[0]];
_plane removeMagazinesTurret ["JAS_KH25MPU_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_KH25R_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_KH25MS_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_KH25MA_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_KH25ML_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_KH25MT_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_KH25MTP_1rnd_M",[0]];
_plane removeMagazinesTurret ["FIR_Kh29_1rnd_M",[0]];
_plane removeMagazinesTurret ["FIR_Kh29T_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_1Rnd_FAB250_M",[0]];
_plane removeMagazinesTurret ["FIR_KAB500KR_1rnd_M",[0]];
_plane removeMagazinesTurret ["FIR_KAB500SE_1rnd_M",[0]];
_plane removeMagazinesTurret ["FIR_KAB500L_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_FIR_CBU250_1rnd_M",[0]];
_plane removeMagazinesTurret ["JAS_CUP_180Rnd_TE1_30mm_GSh302K_HE_M",[-1]];
_plane removeMagazinesTurret ["JAS_CUP_6Rnd_AT16_M",[0]];
_plane removeMagazinesTurret ["CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M",[-1]];
_plane removeMagazines "FIR_F15E_Fueltank_1rnd_M";
_plane removeMagazinesTurret ["JAS_R77_1rnd_M",[0]];

//weapons
_plane removeweaponTurret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
_plane removeweaponTurret ["JAS_CUP_Vmlauncher_S13_veh",[-1]];
_plane removeweaponTurret ["JAS_R73_Launcher",[0]];
_plane removeweaponTurret ["JAS_KH25_LAU",[0]];
_plane removeweaponTurret ["FIR_Kh29L",[0]];
_plane removeweaponTurret ["FIR_Kh29T",[0]];
_plane removeweaponTurret ["JAS_CUP_Vblauncher_Fab250_veh",[0]];
_plane removeweaponTurret ["FIR_KAB500KR",[0]];
_plane removeweaponTurret ["FIR_KAB500SE",[0]];
_plane removeweaponTurret ["FIR_KAB500L",[0]];
_plane removeweaponTurret ["JAS_FIR_CBU250",[0]];
_plane removeweaponTurret ["JAS_CUP_Vacannon_GSh301_veh",[-1]];
_plane removeweaponTurret ["JAS_CUP_Vmlauncher_AT16_veh",[0]];
_plane removeweaponTurret ["JAS_CUP_Vacannon_GSh23L_in_veh",[-1]];
_plane removeweaponTurret ["JAS_R77_LAU",[0]];

//AWS
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeweapon "FIR_CMLauncher";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading Guns and Texture", "PLAIN DOWN",0.5];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addmagazineturret ["JAS_CUP_180Rnd_TE1_30mm_GSh302K_HE_M",[-1]];
_plane addweapon "FIR_CMLauncher";
_plane addweaponturret ["JAS_CUP_Vacannon_GSh301_veh",[-1]];

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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
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
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
	};
	
sleep 0.3;

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
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint12) Do
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
			_plane addmagazine "JAS_R77_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25MA_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_KAB500SE_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
	};
	
	//proxies - fill empty then replace individually
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "SU34_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_SU34\sqs\Loadout\SU34_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "SU34_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_SU34\sqs\Loadout\SU34_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "SU34_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_SU34\sqs\Loadout\SU34_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_S8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Air_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;
_R73count = {_x == "1Rnd_Missile_AA_03_F"} count magazines _plane;
_KH25MPUcount = {_x == "JAS_KH25MPU_1rnd_M"} count magazines _plane;
_KH25Rcount = {_x == "JAS_KH25R_1rnd_M"} count magazines _plane;
_KH25MScount = {_x == "JAS_KH25MS_1rnd_M"} count magazines _plane;
_KH25MAcount = {_x == "JAS_KH25MA_1rnd_M"} count magazines _plane;
_KH25MLcount = {_x == "JAS_KH25ML_1rnd_M"} count magazines _plane;
_KH25MTcount = {_x == "JAS_KH25MT_1rnd_M"} count magazines _plane;
_KH25MTPcount = {_x == "JAS_KH25MTP_1rnd_M"} count magazines _plane;
_KH29Lcount = {_x == "FIR_Kh29_1rnd_M"} count magazines _plane;
_KH29Tcount = {_x == "FIR_Kh29T_1rnd_M"} count magazines _plane;
_FABcount = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_KABKRcount = {_x == "FIR_KAB500KR_1rnd_M"} count magazines _plane;
_KABSEcount = {_x == "FIR_KAB500SE_1rnd_M"} count magazines _plane;
_KABLcount = {_x == "FIR_KAB500L_1rnd_M"} count magazines _plane;
_RBKcount = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;
_vikcount = {_x == "JAS_CUP_Vikhr_Rack_6Rnd_M"} count magazines _plane;
_R77count = {_x == "JAS_R77_1rnd_M"} count magazines _plane;

if (_R73count >= 1) then {_plane addweaponturret ["JAS_R73_Launcher",[0]];};
if (_R77count >= 1) then {_plane addweaponturret ["JAS_R77_LAU",[0]];};
if (_KH25MPUcount >= 1 || 
	_KH25Rcount >= 1 ||
	_KH25MScount >= 1 ||
	_KH25MAcount >= 1 ||
	_KH25MLcount >= 1 ||
	_KH25MTcount >= 1 ||
	_KH25MTPcount >= 1) then {_plane addweaponturret ["JAS_KH25_LAU",[0]];};
if (_KH29Lcount >= 1) then {_plane addweaponturret ["FIR_Kh29L",[0]];};
if (_KH29Tcount >= 1) then {_plane addweaponturret ["FIR_Kh29T",[0]];};
if (_FABcount >= 1) then {_plane addweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[0]];};
if (_KABKRcount >= 1) then {_plane addweaponturret ["FIR_KAB500KR",[0]];};
if (_KABSEcount >= 1) then {_plane addweaponturret ["FIR_KAB500SE",[0]];};
if (_KABLcount >= 1) then {_plane addweaponturret ["FIR_KAB500L",[0]];};
if (_RBKcount >= 1) then {_plane addweaponturret ["JAS_FIR_CBU250",[0]];};

if (_S8count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
	_counter = 0;

	while {_counter < _S8count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_40Rnd_S8_M",[-1]];
	};
};
if (_s13count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_S13_veh",[-1]];
	_counter = 0;

	while {_counter < _s13count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_S13_5rnd_M",[-1]];
	};
};
if (_gpodcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vacannon_GSh23L_in_veh",[-1]];
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M",[-1]];
	};
};
if (_vikcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_AT16_veh",[0]];
	_counter = 0;

	while {_counter < _vikcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_6Rnd_AT16_M",[0]];
	};
};

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

titleText ["Loading Complete", "PLAIN DOWN",0.5];