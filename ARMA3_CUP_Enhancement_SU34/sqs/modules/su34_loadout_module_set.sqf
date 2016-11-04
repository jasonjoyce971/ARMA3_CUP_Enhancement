/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8","_hp9","_hp10","_hp11","_hp12","_skin"];

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
_hardpoint11 = _this select 11;
_hardpoint12 = _this select 12;
_skin = _this select 13;

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
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
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
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
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
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
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
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint11) Do
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
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint12) Do
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
			_plane addmagazine "JAS_CUP_1Rnd_Kh29L_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
	};
	
	//proxies - fill empty then replace individually
	/* _plane addmagazine "FIR_Empty_1rnd_M";
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
	_plane addmagazine "FIR_Empty_1rnd_M"; */
	
//_plane addmagazine "CUP_12Rnd_pylonblank_M"; // old belly bomb slots - disregard

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

if (_R73count >= 1) then {_plane addweaponturret ["JAS_R73_Launcher",[0]];};
if (_KH25count >= 1) then {_plane addweaponturret ["JAS_KH25_LAU",[0]];};
if (_KH29count >= 1) then {_plane addweaponturret ["JAS_CUP_Vmlauncher_Kh29L_veh",[0]];};
if (_FABcount >= 1) then {_plane addweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[0]];};
if (_KABcount >= 1) then {_plane addweaponturret ["JAS_CUP_Vblauncher_KAB250_veh",[0]];};
if (_RBKcount >= 1) then {_plane addweaponturret ["JAS_FIR_CBU250",[0]];};

if (_S8count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
	_counter = 0;

	while {_counter < _S8count} do
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
if (_vikcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_AT16_veh",[0]];
	_counter = 0;

	while {_counter < _vikcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_6Rnd_AT16_M",[0]];
	};
};

_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;

Switch (_fuelcount) Do
{
	case 0:
	{
		_plane setfuel 0.5;
	};
	case 1:
	{
		_plane setfuel 0.75;
	};
	case 2:
	{
		_plane setfuel 1;
	};
};

Switch (_skin) Do
{
	case 0: // AAF
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_aaf_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_aaf_2.paa"];			
	};
	case 1: // AF
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_af_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_af_2.paa"];
	};
	case 2: // BLACK
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_black_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_black_2.paa"];
	};
	case 3: // BLUEP
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_blue_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_blue_2.paa"];
	};
	case 4: // CDF
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_cdf_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_cdf_2.paa"];
	};
	case 5: // CSAT
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_csat_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_csat_2.paa"];
	};
	case 6: // BLUE
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_ru_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_ru_2.paa"];
	};
	case 7: // SLA
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_sla_1.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_su34\data\Paintjobs\SU34_sla_2.paa"];
	};
};
