/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_skin = _this select 5;

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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

//need variable track to determine vik or khedge
_s5count = {_x == "JAS_CUP_1Rnd_S5_Pod_Small_M"} count magazines _plane;
_s8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Heli_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;

if (_s5count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_57mmLauncher",[-1]];
	_counter = 0;

	while {_counter < _s5count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_16Rnd_57mm",[-1]];
	};
};
if (_s8count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
	_counter = 0;

	while {_counter < _s8count} do
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

Switch (_skin) Do
{
	case 0: // CHDKZ
	{
		_plane setobjecttextureglobal[0,"CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_body_g_CHDKZ_CO.paa"];
		_plane setobjecttextureglobal[1,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa"];
		_plane setobjecttextureglobal[2,"a3\data_f\clear_empty.paa"];
		_plane setobjecttextureglobal[3,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"];
	};
	case 1: // SLA
	{
		_plane setobjecttextureglobal[0,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla2_1_co.paa"];
		_plane setobjecttextureglobal[1,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa"];
		_plane setobjecttextureglobal[2,"a3\data_f\clear_empty.paa"];
		_plane setobjecttextureglobal[3,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"];
	};
	case 2: // RUS
	{
		_plane setobjecttextureglobal[0,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_vsr_co.paa"];
		_plane setobjecttextureglobal[1,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa"];
		_plane setobjecttextureglobal[2,"a3\data_f\clear_empty.paa"];
		_plane setobjecttextureglobal[3,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"];
	};
};
