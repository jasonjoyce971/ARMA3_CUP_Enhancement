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
_plane removeMagazines "CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M";
_plane removeMagazines "FIR_Hydra_7_Pod_1rnd_M";
_plane removeMagazines "FIR_JLAU_3_Pod_1rnd_M";
_plane removeMagazines "JAS_CUP_1Rnd_AGM_Rack_M";
_plane removeMagazines "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";

_plane removeMagazines "JAS_AGM114K_1rnd_M";
_plane removeMagazines "JAS_AGM114N_1rnd_M";
//_plane removeMagazinesTurret ["ProxyAGM114Hellfire",[0]];

_plane removeMagazines "JAS_AGM122_1rnd_M";
_plane removeMagazinesturret ["ProxyAGM122",[0]];

_plane removeMagazines "JAS_FIR_AIM9L_1rnd_M";
_plane removeMagazinesturret ["JAS_FIR_AIM9L_1rnd_M",[0]];
_plane removeMagazinesturret ["FIR_JLAU_3_19rnd_M",[-1]];
_plane removeMagazinesturret ["FIR_Hydra_7rnd_M",[-1]];
_plane removeMagazinesTurret ["JAS_FIR_Hydra_APKWS_7rnd_M",[0]];

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane removeMagazines "FIR_Empty_1rnd_M";

_plane removeweapon "FIR_CMLauncher";
_plane removeweaponturret ["JAS_FIR_AIM9L",[0]];
_plane removeweaponturret ["FIR_RKT_Launcher",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_K",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N",[0]];
_plane removeweaponturret ["JAS_AGM122",[0]];
_plane removeweaponturret ["JAS_FIR_APKWS_Launcher",[0]];

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];
*/

removeAllWeapons _plane;

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M";

_plane setPylonLoadOut ["pylons1", "", true, []];
_plane setPylonLoadOut ["pylons2", "", true, []];
_plane setPylonLoadOut ["pylons3", "", true, []];
_plane setPylonLoadOut ["pylons4", "", true, []];
_plane setPylonLoadOut ["pylons5", "", true, []];
_plane setPylonLoadOut ["pylons6", "", true, []];

_plane setPylonLoadOut ["pylons1", "", true, [0]];
_plane setPylonLoadOut ["pylons2", "", true, [0]];
_plane setPylonLoadOut ["pylons3", "", true, [0]];
_plane setPylonLoadOut ["pylons4", "", true, [0]];
_plane setPylonLoadOut ["pylons5", "", true, [0]];
_plane setPylonLoadOut ["pylons6", "", true, [0]];

_plane setPylonLoadOut ["pylons1", "", true, [-1]];
_plane setPylonLoadOut ["pylons2", "", true, [-1]];
_plane setPylonLoadOut ["pylons3", "", true, [-1]];
_plane setPylonLoadOut ["pylons4", "", true, [-1]];
_plane setPylonLoadOut ["pylons5", "", true, [-1]];
_plane setPylonLoadOut ["pylons6", "", true, [-1]];

_plane removeweapon "JAS_FIR_AIM9L_Pylon";
_plane removeweapon "JAS_AGM122_Pylon";
_plane removeweapon "JAS_HYDRA_Launcher";
_plane removeweapon "JAS_FIR_APKWS_Pylon_Launcher";
_plane removeweapon "JAS_HellfireLauncher_K_Pylon";
_plane removeweapon "JAS_HellfireLauncher_N_Pylon";

_plane removeweaponturret ["JAS_FIR_AIM9L_Pylon",[-1]];
_plane removeweaponturret ["JAS_AGM122_Pylon",[-1]];
_plane removeweaponturret ["JAS_HYDRA_Launcher",[-1]];
_plane removeweaponturret ["JAS_FIR_APKWS_Pylon_Launcher",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_K_Pylon",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[-1]];

_plane removeweaponturret ["JAS_FIR_AIM9L_Pylon",[0]];
_plane removeweaponturret ["JAS_AGM122_Pylon",[0]];
_plane removeweaponturret ["JAS_HYDRA_Launcher",[0]];
_plane removeweaponturret ["JAS_FIR_APKWS_Pylon_Launcher",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_K_Pylon",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[0]];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addmagazine "CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M";


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
			_plane setPylonLoadOut ["pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_AGM122_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_AGM122_1rnd_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_AGM122_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_AGM122_1rnd_M";
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
	sleep 0.3;
	/*
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
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
			if (isNil {profileNamespace getVariable "AH1_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_AH1Z\sqs\Loadout\AH1_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "AH1_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_AH1Z\sqs\Loadout\AH1_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "AH1_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_AH1Z\sqs\Loadout\AH1_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 10;
/*
titleText ["Loading Weapon", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_windercount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_hellfireKcount = {_x == "JAS_AGM114K_1rnd_M"} count magazines _plane;
_hellfireNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;
_sidearmcount = {_x == "JAS_AGM122_1rnd_M"} count magazines _plane;

if (_windercount >= 1) then
{
	_plane addweaponturret ["JAS_FIR_AIM9L",[0]];
	_counter9m = 1;

	while {_counter9m < _windercount} do
	{
		_counter9m = _counter9m + 1;
		_plane addmagazineturret ["JAS_FIR_AIM9L_1rnd_M",[0]];
	};
	
};

if (_hydra7count >= 1) then 
{
	_plane addweaponturret ["FIR_RKT_Launcher",[-1]];
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
	_plane addweaponturret ["FIR_RKT_Launcher",[-1]];
	_counter19 = 0;

	while {_counter19 < _hydra19count} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazineturret ["FIR_JLAU_3_19rnd_M",[-1]];
	};
};
if (_hellfireKcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_K",[0]];
	_counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["JAS_AGM114K_1rnd_M",[0]];
	}; 
};
if (_hellfireNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
	 _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["JAS_AGM114K_1rnd_M",[0]];
	}; 
};
if (_sidearmcount >= 1) then
{
	_plane addweaponturret ["JAS_AGM122",[0]];
	 _plane addweapon "JAS_AGM122";
	_counter122 = 0;

	while {_counter122 < _sidearmcount} do
	{
		_counter122 = _counter122 + 1;
		_plane addmagazine "JAS_AGM122_1rnd_M";
		_plane addmagazineturret ["JAS_AGM122_1rnd_M",[0]];
	}; 
};
*/
titleText ["Loading Complete", "PLAIN DOWN",0.5];