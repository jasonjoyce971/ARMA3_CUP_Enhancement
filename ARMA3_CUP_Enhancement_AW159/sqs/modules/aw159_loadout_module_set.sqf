/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_skin = _this select 3;

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
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[-1]];
	_counter = 0;

	while {_counter < _CRV7count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_12Rnd_CRV7_FAT_M",[-1]];
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
	}; */
};
if (_HellNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["JAS_AGM114K_1rnd_M",[0]];
	}; */
};

Switch (_skin) Do
{
	case 0: // UK AAC
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"];			
	};
	case 1: // UK RN Grey
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_grey_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"];			
	};
	case 2: // UK RN Blackcats
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_blackcats_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"];			
	};
	case 3: // AAF Digi
	{
		_plane setobjecttextureglobal[0, "\a3\air_f_epb\Heli_Light_03\data\heli_light_03_base_indp_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"];			
	};
	case 4: // AAF Green
	{
		_plane setobjecttextureglobal[0, "\a3\air_f_epb\Heli_Light_03\data\heli_light_03_base_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"];			
	};
	case 5: // RDAF
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rdaf_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"];			
	};
};
