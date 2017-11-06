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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

//need variable track to determine vik or khedge
_s8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Heli_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;
_FABcount = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_RBKcount = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;

if (_FABcount >= 1) then {_plane addweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[-1]];};
if (_RBKcount >= 1) then {_plane addweaponturret ["JAS_FIR_CBU250",[-1]];};

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
if (_gpodcount >= 1) then 
{
	_plane addweaponturret ["CUP_Vacannon_GSh23L_in_veh",[-1]];
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M",[-1]];
	};
};

Switch (_skin) Do
{
	case 0: // CDF
	{
		_plane setobjecttextureglobal[0,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_CDF_CO.paa"];
		_plane setobjecttextureglobal[1,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa"];
		_plane setobjecttextureglobal[2,"a3\data_f\clear_empty.paa"];
		_plane setobjecttextureglobal[3,"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"];	
	};
	case 1: // UN
	{
		_plane setobjecttextureglobal[0,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_UN_CO.paa"];
		_plane setobjecttextureglobal[1,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_UN_CO.paa"];
		_plane setobjecttextureglobal[2,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals2_UN_CA.paa"];
		_plane setobjecttextureglobal[3,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals_UN_CA.paa"];
	};
	case 2: // TKA
	{
		_plane setobjecttextureglobal[0,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_IND_CO.paa"];
		_plane setobjecttextureglobal[1,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa"];
		_plane setobjecttextureglobal[2,"\a3\data_f\clear_empty.paa"];
		_plane setobjecttextureglobal[3,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_decals_CA.paa"];
	};
	case 3: // ACR
	{
		_plane setobjecttextureglobal[0,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_ACR_CO.paa"];
		_plane setobjecttextureglobal[1,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_ACR_CO.paa"];
		_plane setobjecttextureglobal[2,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals2_ACR_CA.paa"];
		_plane setobjecttextureglobal[3,"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"];
	};
};
