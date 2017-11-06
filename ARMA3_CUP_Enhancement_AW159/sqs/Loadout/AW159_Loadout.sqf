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

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane setPylonLoadOut ["pylons1", "", true, []];
_plane setPylonLoadOut ["pylons2", "", true, []];

_plane setPylonLoadOut ["pylons1", "", true, [0]];
_plane setPylonLoadOut ["pylons2", "", true, [0]];

_plane setPylonLoadOut ["pylons1", "", true, [-1]];
_plane setPylonLoadOut ["pylons2", "", true, [-1]];

_plane removeweapon "JAS_CUP_Vacannon_M621_AW159_veh";
_plane removeweapon "JAS_CUP_Vmlauncher_CRV7_FAT_Pylon";
_plane removeweapon "JAS_HellfireLauncher_K_Pylon";
_plane removeweapon "JAS_HellfireLauncher_N_Pylon";

_plane removeweaponturret ["JAS_CUP_Vacannon_M621_AW159_veh",[0]];
_plane removeweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_Pylon",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_K_Pylon",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[0]];

_plane removeweaponturret ["JAS_CUP_Vacannon_M621_AW159_veh",[-1]];
_plane removeweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_Pylon",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_K_Pylon",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[-1]];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";

if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do //Right Pylon
	{
		case -1:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};
		case 0:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};		
		case 1: // Gun Pod
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M", true, []];
		};
		case 2: // CRV-7 FAT
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, [0]];
		};
		case 3: // CRV-7 HE
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, [0]];
		};
		case 4: // CRV-7 KEP
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, [0]];
		};
		case 5: // Hellfire K
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
		};
		case 6: // Hellfire N
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};
		case 0:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};		
		case 1: // Gun Pod
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M", true, []];
		};
		case 2: // CRV-7 FAT
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, [0]];
		};
		case 3: // CRV-7 HE
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, [0]];
		};
		case 4: // CRV-7 KEP
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, [0]];
		};
		case 5: // Hellfire K
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
		};
		case 6: // Hellfire N
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "AW159_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_AW159\sqs\Loadout\AW159_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "AW159_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_AW159\sqs\Loadout\AW159_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "AW159_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_AW159\sqs\Loadout\AW159_Custom_Apply.sqf";
			};	
		};
	};
};

/*
// Magazines
_plane removeMagazines "JAS_CUP_12Rnd_CRV7_FAT_M";
_plane removeMagazines "CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M";
_plane removeMagazines "JAS_AGM114K_1rnd_M";
_plane removeMagazines "JAS_AGM114N_1rnd_M";
_plane removeMagazinesturret ["CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M",[-1]];
_plane removeMagazinesturret ["JAS_AGM114K_1rnd_M",[-1]];
_plane removeMagazinesturret ["JAS_AGM114N_1rnd_M",[-1]];
_plane removeMagazinesturret ["JAS_CUP_12Rnd_CRV7_FAT_M",[0]];
_plane removeMagazinesturret ["CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M",[0]];
_plane removeMagazinesturret ["JAS_AGM114K_1rnd_M",[0]];
_plane removeMagazinesturret ["JAS_AGM114N_1rnd_M",[0]];

// Pods and Racks
_plane removeMagazines "CUP_1Rnd_CRV7_Pod_12_M";
_plane removeMagazines "CUP_1Rnd_M621_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_1Rnd_AGM_Rack_M";

// Proxies
// _plane removeMagazines "ProxyCUP_3M11_Falanga_AT2_proxy";

// AWS
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "FIR_Empty_1rnd_M";

// Weapons
_plane removeWeapon "FIR_CMLauncher";
_plane removeWeapon "CUP_Vacannon_M621_AW159_veh";
_plane removeWeapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
_plane removeWeapon "JAS_HellfireLauncher_K";
_plane removeWeapon "JAS_HellfireLauncher_N";
_plane removeWeapon "FIR_MasterArm";
_plane removeweaponturret ["CUP_Vacannon_M621_AW159_veh",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_K",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_N",[-1]];
_plane removeweaponturret ["FIR_MasterArm",[-1]];
_plane removeweaponturret ["CUP_Vacannon_M621_AW159_veh",[0]];
_plane removeweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_K",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N",[0]];
_plane removeweaponturret ["FIR_MasterArm",[0]];

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading Guns and Texture", "PLAIN DOWN",0.5];

_plane addweapon "FIR_CMLauncher";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";

/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. 

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. 
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1: // Gun Pod
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[-1]];
			_plane addmagazine "CUP_1Rnd_M621_Pod_Heli_M";
		};
		case 2: // CRV-7
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[-1]];
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_12_M";
		};
		case 3: // Hellfire K
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[0]];
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 4: // Hellfire N
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[0]];
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5: // Hellfire Combi
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[0]];
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1: // Gun Pod
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[-1]];
			_plane addmagazine "CUP_1Rnd_M621_Pod_Heli_M";
		};
		case 2: // CRV-7
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[-1]];
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_12_M";
		};
		case 3: // Hellfire K
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[0]];
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 4: // Hellfire N
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[0]];
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5: // Hellfire Combi
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane addweaponturret ["FIR_MasterArm",[0]];
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
	};
	
sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
	};
	
sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
	};

	sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
	};
	
	sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
	};
	
	sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};
	
	sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};
	
	sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};
	
	sleep 0.3;

	// Proxies
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
		case 1: // Gun Pod
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2: // CRV-7
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3: // Hellfire K
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4: // Hellfire N
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5: // Hellfire Combi
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "AW159_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_AW159\sqs\Loadout\AW159_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "AW159_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_AW159\sqs\Loadout\AW159_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "AW159_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_AW159\sqs\Loadout\AW159_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_gpodcount = {_x == "CUP_1Rnd_M621_Pod_Heli_M"} count magazines _plane;
_CRV7count = {_x == "CUP_1Rnd_CRV7_Pod_12_M"} count magazines _plane;
_HellKcount = {_x == "JAS_AGM114K_1rnd_M"} count magazines _plane;
_HellNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;

if (_gpodcount >= 1) then 
{
	_plane addweaponturret ["CUP_Vacannon_M621_AW159_veh",[-1]];
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M",[-1]];
	};
};

if (_CRV7count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
	_counter = 0;

	while {_counter < _CRV7count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_12Rnd_CRV7_FAT_M",[0]];
	};
};

if (_HellKcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_K",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["JAS_AGM114K_1rnd_M",[0]];
	}; 
};
if (_HellNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["JAS_AGM114K_1rnd_M",[0]];
	}; 
};
*/
titleText ["Loading Complete", "PLAIN DOWN",0.5];