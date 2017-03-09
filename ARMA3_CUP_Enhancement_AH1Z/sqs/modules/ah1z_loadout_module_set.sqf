/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;
_skin = _this select 7;

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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM122_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM122_1rnd_M";
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
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

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_windercount = {_x == "FIR_AIM9L_1rnd_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_hellfireKcount = {_x == "JAS_AGM114K_1rnd_M"} count magazines _plane;
_hellfireNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;
_sidearmcount = {_x == "JAS_AGM122_1rnd_M"} count magazines _plane;

if (_windercount >= 1) then
{
	_plane addweaponturret ["FIR_AIM9L",[0]];
	/* _counter9m = 1;

	while {_counter9m < _windercount} do
	{
		_counter9m = _counter9m + 1;
		_plane addmagazineturret ["FIR_AIM9L_1rnd_M",[0]];
	}; */
	
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
	_plane addweaponturret ["FIR_APKWS_Launcher",[-1]];
	_counter7 = 0;

	while {_counter7 < _APKWS7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazineturret ["FIR_Hydra_APKWS_7rnd_M",[-1]];
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
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["JAS_AGM114K_1rnd_M",[0]];
	}; */
};
if (_hellfireNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["JAS_AGM114K_1rnd_M",[0]];
	}; */
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
	}; */
};

Switch (_skin) Do
{
	case 0: // USMC
	{
		_plane setobjecttextureglobal[0, "CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_body_co.paa"]; 
		_plane setobjecttextureglobal[1, "CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\ah1z_engines_co.paa"];			
	};
	case 1: // AAF
	{
		_plane setobjecttextureglobal[0, "CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\aaf_ah1z_body_co.paa"]; 
		_plane setobjecttextureglobal[1, "CUP\AirVehicles\CUP_AirVehicles_AH1Z\data\aaf_ah1z_engines_co.paa"];
	};
};
