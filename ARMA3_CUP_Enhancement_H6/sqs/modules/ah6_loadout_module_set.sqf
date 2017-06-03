/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_skin = _this select 3;

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
			_plane animate ["hideGauR", 0];
			_plane addmagazineturret ["CUP_1200Rnd_TE1_Red_Tracer_GAU19_M",[-1]];
		};
		case 2:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
		};
		case 6:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
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
			_plane animate ["hideGauL", 0];
			_plane addmagazineturret ["CUP_1200Rnd_TE1_Red_Tracer_GAU19_M",[-1]];
		};
		case 2:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
		};
		case 6:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
		};
	};

sleep 0.3;

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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};

sleep 0.3;

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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_GAUcount = {_x == "CUP_1200Rnd_TE1_Red_Tracer_GAU19_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_hellfireKcount = {_x == "JAS_AGM114K_1rnd_M"} count magazines _plane;
_hellfireNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;

if (_GAUcount == 1) then {_plane addweapon "CUP_Vhmg_GAU19_veh";};
if (_GAUcount == 2) then {_plane addweapon "CUP_Vhmg_TwinGAU19_veh";};

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
};
if (_hellfireNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
};

/*Switch (_skin) Do
{
	case 0: // US Black
	{
		_plane setobjecttextureglobal[0, "CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_merge1_co.paa"]; 
		_plane setobjecttextureglobal[1, "CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_merge2black_co.paa"];			
	};
	case 1: // US Green
	{
		_plane setobjecttextureglobal[0, "CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_merge1_army_co.paa"]; 
		_plane setobjecttextureglobal[1, "CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_merge2_co.paa"];
	};
	case 2: // RACS
	{
		_plane setobjecttextureglobal[0, "CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_merge1_racs_co.paa"]; 
		_plane setobjecttextureglobal[1, "CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_merge2racs_co.paa"];
	};
};*/
