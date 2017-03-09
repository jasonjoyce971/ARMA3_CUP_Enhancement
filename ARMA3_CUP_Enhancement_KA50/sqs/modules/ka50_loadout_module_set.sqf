/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_skin = _this select 5;

//right outboard - 1
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 9:
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
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 9:
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
_fab250count = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_kab250count = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;
_iglacount = {_x == "JAS_CUP_2Rnd_Igla_Rack_M"} count magazines _plane;
_vikcount = {_x == "JAS_CUP_Vikhr_Rack_6Rnd_M"} count magazines _plane;
_KH25count = {_x == "JAS_KH25_1rnd_M"} count magazines _plane;
_khedgeTcount = {_x == "FIR_Kh29T_1rnd_M"} count magazines _plane;
_khedgeLcount = {_x == "FIR_Kh29_1rnd_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;

if (_s8count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_S8_veh";
	_counter = 0;

	while {_counter < _s8count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_40Rnd_S8_M";
	};
};
if (_s13count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_S13_veh";
	_counter = 0;

	while {_counter < _s13count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_S13_5rnd_M";
	};
};
if (_fab250count >= 1) then {_plane addweapon "JAS_CUP_Vblauncher_Fab250_veh";};
if (_kab250count >= 1) then {_plane addweapon "JAS_FIR_CBU250";};
if (_iglacount >= 1) then 
{
	_plane addweapon "CUP_Vmlauncher_Igla_twice_veh";
	_counter = 0;

	while {_counter < _iglacount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "CUP_2Rnd_Igla_M";
	};
};
if (_vikcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_AT16_veh";
	_counter = 0;

	while {_counter < _vikcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_6Rnd_AT16_M";
	};
};
if (_KH25count >= 1) then {_plane addweapon "JAS_KH25_LAU";};
if (_khedgeTcount >= 1) then {_plane addweapon "FIR_Kh29T";};
if (_khedgeLcount >= 1) then {_plane addweapon "FIR_Kh29L";};
/*if (_khedgecount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_Kh29L_veh";
	_counter = 0;

	while {_counter < _khedgecount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
	};
};*/
if (_gpodcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vacannon_GSh23L_in_veh";
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M";
	};
};

Switch (_skin) Do
{
	case 0: // SLA
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_ka50\data\ka50_01_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_ka50\data\ka50_02_co.paa"];
		_plane setobjecttextureglobal[2, "cup\airvehicles\cup_airvehicles_ka50\data\ka50_03_co.paa"];			
	};
	case 1: // RUS
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_01_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_02_co.paa"];
		_plane setobjecttextureglobal[2, "cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_03_co.paa"];
	};
};
