/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8","_hp9","_hp10","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;
_hardpoint7 = _this select 7;
_hardpoint8 = _this select 8;
_hardpoint9 = _this select 9;
_hardpoint10 = _this select 10;
_skin = _this select 11;

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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
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
			_plane addmagazine "1Rnd_Missile_AA_03_F";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
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
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 16:
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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
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
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 11:
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
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint10) Do
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
	//proxies - fill empty then replace individually
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	
//_plane addmagazine "CUP_12Rnd_pylonblank_M"; // old belly bomb slots - disregard

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_S5count = {_x == "JAS_CUP_1Rnd_S5_Pod_Small_M"} count magazines _plane;
_S8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Air_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;
_R73count = {_x == "1Rnd_Missile_AA_03_F"} count magazines _plane;
_KH25MPUcount = {_x == "JAS_KH25MPU_1rnd_M"} count magazines _plane;
_KH25Rcount = {_x == "JAS_KH25R_1rnd_M"} count magazines _plane;
_KH25MScount = {_x == "JAS_KH25MS_1rnd_M"} count magazines _plane;
_KH25MAcount = {_x == "JAS_KH25MA_1rnd_M"} count magazines _plane;
_KH25MLcount = {_x == "JAS_KH25ML_1rnd_M"} count magazines _plane;
_KH25MTcount = {_x == "JAS_KH25MT_1rnd_M"} count magazines _plane;
_KH25MTPcount = {_x == "JAS_KH25MTP_1rnd_M"} count magazines _plane;
_KH29Tcount = {_x == "FIR_Kh29T_1rnd_M"} count magazines _plane;
_FABcount = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_KABcount = {_x == "FIR_KAB500L_1rnd_M"} count magazines _plane;
_KABKRcount = {_x == "FIR_KAB500KR_1rnd_M"} count magazines _plane;
_RBKcount = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;
_vikcount = {_x == "JAS_CUP_Vikhr_Rack_6Rnd_M"} count magazines _plane;
_KH29Lcount = {_x == "FIR_Kh29_1rnd_M"} count magazines _plane;

if (_KH25MPUcount >= 1 || 
	_KH25Rcount >= 1 ||
	_KH25MScount >= 1 ||
	_KH25MAcount >= 1 ||
	_KH25MLcount >= 1 ||
	_KH25MTcount >= 1 ||
	_KH25MTPcount >= 1) then {_plane addweapon "JAS_KH25_LAU";};

if (_R73count >= 1) then {_plane addweapon "JAS_R73_Launcher";};
if (_KH29Tcount >= 1) then {_plane addweapon "FIR_Kh29T";};
if (_FABcount >= 1) then {_plane addweapon "JAS_CUP_Vblauncher_Fab250_veh";};
if (_KABcount >= 1) then {_plane addweapon "FIR_KAB500L";};
if (_KABKRcount >= 1) then {_plane addweapon "FIR_KAB500KR";};
if (_RBKcount >= 1) then {_plane addweapon "JAS_FIR_CBU250";};
if (_KH29Lcount >= 1) then {_plane addweapon "FIR_Kh29L";};

if (_S5count >= 1) then 
{
	_plane addweapon "JAS_CUP_57mmLauncher";
	_counter = 0;

	while {_counter < _S8count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_16Rnd_57mm";
	};
};
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

Switch (_skin) Do
{
	case 0: // CDF
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_cdf_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_cdf_co.paa"];			
	};
	case 1: // Takistani Army
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_ind_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_ind_co.paa"];
	};
	case 2: // SLA
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body1_sla1_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body2_sla1_co.paa"];
	};
	case 3: // Russia Tigers
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body1_rusn2_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body2_rusn2_co.paa"];
	};
	case 4: // Russia Green Plain
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_rus_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_rus_co.paa"];
	};
	case 5: // Russia Blue
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body1_rusn1_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body2_rusn1_co.paa"];
	};
};
