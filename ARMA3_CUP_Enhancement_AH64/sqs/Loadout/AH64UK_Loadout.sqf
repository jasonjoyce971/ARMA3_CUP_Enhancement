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

/* Delete Weapon and Ammo Before 

// Mags
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M";
_plane removeMagazines "JAS_AGM122_1rnd_M";
_plane removeMagazinesturret ["FIR_JLAU_3_19rnd_M",[-1]];
_plane removeMagazinesturret ["FIR_Hydra_7rnd_M",[-1]];
_plane removeMagazines "JAS_AGM114N_1rnd_M";

_plane removeMagazines "JAS_CUP_19Rnd_CRV7_FAT_M";
_plane removeMagazinesturret ["JAS_CUP_19Rnd_CRV7_FAT_M",[0]];
_plane removeMagazines "JAS_CUP_19Rnd_CRV7_HE_M";
_plane removeMagazinesturret ["JAS_CUP_19Rnd_CRV7_HE_M",[0]];
_plane removeMagazines "JAS_CUP_19Rnd_CRV7_KEP_M";
_plane removeMagazinesturret ["JAS_CUP_19Rnd_CRV7_KEP_M",[0]];

_plane removeMagazines "JAS_FIR_AIM9L_1rnd_M";
_plane removeMagazinesturret ["JAS_FIR_AIM9L_1rnd_M",[0]];
_plane removeMagazinesturret ["JAS_FIR_Hydra_APKWS_7rnd_M",[0]];
_plane removeMagazines "JAS_AGM114L_1rnd_M";
_plane removeMagazines "EAWS_Brimstone_mag1x";

// Pods
_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "FIR_Hydra_7_Pod_1rnd_M";
_plane removeMagazines "FIR_JLAU_3_Pod_1rnd_M";
_plane removeMagazines "JAS_CUP_1Rnd_AGM_Rack_M";
_plane removeMagazines "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";

_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M";
_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
_plane removeMagazines "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";

// Weapons
_plane removeweapon "FIR_CMLauncher";
_plane removeweaponturret ["JAS_AGM122",[0]];
_plane removeweaponturret ["JAS_HYDRA_Launcher",[-1]];
_plane removeWeaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N",[0]];

_plane removeweaponturret ["JAS_FIR_AIM9L",[0]];
_plane removeweaponturret ["JAS_FIR_APKWS_Launcher",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_L",[0]];
_plane removeWeaponturret ["EAWS_BrimstoneLauncher",[0]];

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

*/

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M";

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

// Load default equipment - cannon ammo and CM
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addmagazine "CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M";
// Load CM weapon
//_plane addweapon "FIR_CMLauncher";

/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{	
/*
	// right wingtip
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
	};
	
	sleep 0.3;
	
	// left wingtip
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
	};
	
	sleep 0.3;
	
	// right outboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// Missile proxies
	// right outboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right outboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right outboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right outboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};*/
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonWingR", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonWingR", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonWingR", "JAS_FIR_AIM9L_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonWingL", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonWingL", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonWingL", "JAS_FIR_AIM9L_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_BRIMSTONE_CHOPPER_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "AH64UK_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_AH64\sqs\Loadout\AH64UK_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "AH64UK_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_AH64\sqs\Loadout\AH64UK_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "AH64UK_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_AH64\sqs\Loadout\AH64UK_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 10;
/*
titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_windercount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_hellfireLcount = {_x == "JAS_AGM114L_1rnd_M"} count magazines _plane;
_hellfireNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;
_sidearmcount = {_x == "JAS_AGM122_1rnd_M"} count magazines _plane;
_brimstonecount = {_x == "EAWS_Brimstone_mag1x"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;
_CRV7FATcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_CRV7HEcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"} count magazines _plane;
_CRV7KEPcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"} count magazines _plane;

if (_CRV7KEPcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
	_counter = 0;

	while {_counter <= _CRV7KEPcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_19Rnd_CRV7_KEP_M",[0]];
	};
};
if (_CRV7HEcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
	_counter = 0;

	while {_counter <= _CRV7HEcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_19Rnd_CRV7_HE_M",[0]];
	};
};
if (_CRV7FATcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
	_counter = 0;

	while {_counter <= _CRV7FATcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_19Rnd_CRV7_FAT_M",[0]];
	};
};

if (_windercount >= 1) then
{
	_plane addweaponturret ["JAS_FIR_AIM9L",[0]];
	/* _counter9m = 0;

	while {_counter9m < _windercount} do
	{
		_counter9m = _counter9m + 1;
		_plane addmagazineturret ["JAS_FIR_AIM9L_1rnd_M",[0]];
	}; 
	
};
if (_hydra7count >= 1) then 
{
	_plane addweaponturret ["JAS_HYDRA_Launcher",[-1]];
	_counter7 = 0;

	while {_counter7 < _hydra7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazineturret ["FIR_Hydra_7rnd_M",[-1]];
	};
};

if (_APKWS7count >= 1) then 
{
	_plane addweaponturret ["JAS_FIR_APKWS_Launcher",[0]];
	_counter7 = 0;

	while {_counter7 < _APKWS7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazineturret ["JAS_FIR_Hydra_APKWS_7rnd_M",[0]];
	};
};
if (_hydra19count >= 1) then
{
	_plane addweaponturret ["JAS_HYDRA_Launcher",[-1]];
	_counter19 = 0;

	while {_counter19 < _hydra19count} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazineturret ["FIR_JLAU_3_19rnd_M",[-1]];
	};
};
if (_hellfireLcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_L",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["CUP_1Rnd_AGM114K_Hellfire_II_M",[0]];
	}; 
};
if (_hellfireNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["CUP_1Rnd_AGM114K_Hellfire_II_M",[0]];
	}; 
};
if (_sidearmcount >= 1) then
{
	_plane addweaponturret ["JAS_AGM122",[0]];
	/* _plane addweapon "JAS_AGM122";
	_counter122 = 0;

	while {_counter122 < _sidearmcount} do
	{
		_counter122 = _counter122 + 1;
		_plane addmagazine "JAS_AGM122_1rnd_M";
		_plane addmagazineturret ["JAS_AGM122_1rnd_M",[0]];
	}; 
};
if (_brimstonecount >= 1) then
{
	_plane addweaponturret ["EAWS_BrimstoneLauncher",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["CUP_1Rnd_AGM114K_Hellfire_II_M",[0]];
	}; 
};
*/
titleText ["Loading Complete", "PLAIN DOWN",0.5];