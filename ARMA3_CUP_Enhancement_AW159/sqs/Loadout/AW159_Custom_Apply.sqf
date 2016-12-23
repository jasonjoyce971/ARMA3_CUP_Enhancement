/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "AW159_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "AW159_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "AW159_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;
_hardpoint5 = _array select 4;
_hardpoint6 = _array select 5;
_hardpoint7 = _array select 6;
_hardpoint8 = _array select 7;
_hardpoint9 = _array select 8;
_hardpoint10 = _array select 9;



sleep 0.01;


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
	
sleep 0.01;