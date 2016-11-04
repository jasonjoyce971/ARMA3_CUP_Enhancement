/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;
_hardpoint7 = _this select 7;
_hardpoint8 = _this select 8;

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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 10:
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 10:
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 8:
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint7) Do
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint8) Do
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_S8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Air_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;
_R73count = {_x == "1Rnd_Missile_AA_03_F"} count magazines _plane;
_KH25count = {_x == "JAS_KH25_1rnd_M"} count magazines _plane;
_KH29count = {_x == "JAS_CUP_1Rnd_Kh29L_M"} count magazines _plane;
_FABcount = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_KABcount = {_x == "JAS_CUP_1Rnd_KAB250_M"} count magazines _plane;
_RBKcount = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;
_vikcount = {_x == "JAS_CUP_Vikhr_Rack_6Rnd_M"} count magazines _plane;

if (_R73count >= 1) then {_plane addweapon "JAS_R73_Launcher";};
if (_KH25count >= 1) then {_plane addweapon "JAS_KH25_LAU";};
if (_KH29count >= 1) then {_plane addweapon "JAS_CUP_Vmlauncher_Kh29L_veh";};
if (_FABcount >= 1) then {_plane addweapon "JAS_CUP_Vblauncher_Fab250_veh";};
if (_KABcount >= 1) then {_plane addweapon "JAS_CUP_Vblauncher_KAB250_veh";};
if (_RBKcount >= 1) then {_plane addweapon "JAS_FIR_CBU250";};

if (_S8count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_S8_veh";
	_counter = 0;

	while {_counter < _S8count} do
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

_plane addmagazine "20Rnd_Rocket_03_HE_F";
_plane addmagazine "20Rnd_Rocket_03_AP_F";
_plane addweapon "Rocket_03_HE_Plane_CAS_02_F";
_plane addweapon "Rocket_03_AP_Plane_CAS_02_F";
