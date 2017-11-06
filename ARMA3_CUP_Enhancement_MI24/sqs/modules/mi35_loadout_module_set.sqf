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
			_plane addmagazine "JAS_CUP_2Rnd_AT6_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_AT6_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
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
	};
	
	// fill out empty proxies with empties
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

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_s8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Heli_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;
_fab250count = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_kab250count = {_x == "JAS_CUP_1Rnd_KAB250_M"} count magazines _plane;
_iglacount = {_x == "JAS_CUP_2Rnd_Igla_Rack_M"} count magazines _plane;
_AT6count = {_x == "JAS_CUP_2Rnd_AT6_Rack_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;

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
if (_fab250count >= 1) then
{
	_plane addweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[0]];
	_counter = 0;

	while {_counter < _fab250count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["ProxyCUP_FAB250",[0]];
	};
};
if (_kab250count >= 1) then
{
	_plane addweaponturret ["JAS_CUP_Vblauncher_KAB250_veh",[0]];
	_counter = 0;

	while {_counter < _kab250count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_prox_KAB250",[0]];
	};
};
if (_iglacount >= 1) then 
{
	_plane addweaponturret ["CUP_Vmlauncher_Igla_twice_veh",[0]];
	_counter = 0;

	while {_counter < _iglacount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_2Rnd_Igla_M",[0]];
	};
};
if (_AT6count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_AT6_veh",[0]];
	_counter = 0;

	while {_counter < _AT6count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_1Rnd_AT6_M",[0]];
		_plane addmagazineturret ["JAS_CUP_1Rnd_AT6_M",[0]];
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
	case 0: // ACR
	{
		_plane setobjecttextureglobal[0, "\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_1_co.paa"]; 
		_plane setobjecttextureglobal[1, "\cup\airvehicles\cup_airvehicles_mi24\data\mi35_acr_2_co.paa"];			
	};
	case 1: // DES
	{
		_plane setobjecttextureglobal[0, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_desert_001_co.paa"]; 
		_plane setobjecttextureglobal[1, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_desert_002_co.paa"];			
	};
	case 2: // RAM
	{
		_plane setobjecttextureglobal[0, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_experimantalram_001_co.paa"]; 
		_plane setobjecttextureglobal[1, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_experimantalram_002_co.paa"];			
	};
	case 3: // Tiger
	{
		_plane setobjecttextureglobal[0, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_tiger_001_co.paa"]; 
		_plane setobjecttextureglobal[1, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_tiger_002_co.paa"];			
	};
	case 4: // Dark
	{
		_plane setobjecttextureglobal[0, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_dark_001_co.paa"]; 
		_plane setobjecttextureglobal[1, "\cup\airvehicles\cup_airvehicles_mi24\data\textures\cz_dark_002_co.paa"];			
	};
};
