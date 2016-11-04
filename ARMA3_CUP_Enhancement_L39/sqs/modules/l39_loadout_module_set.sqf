/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_skin"];

_hardpoint4 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint1 = _this select 4;
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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_R73count = {_x == "1Rnd_Missile_AA_03_F"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;
_s5count = {_x == "JAS_CUP_1Rnd_S5_Pod_Small_M"} count magazines _plane;
_S8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Air_M"} count magazines _plane;
_FABcount = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_KABcount = {_x == "JAS_CUP_1Rnd_KAB250_M"} count magazines _plane;
_RBKcount = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;
_ARMcount = {_x == "JAS_KH25_1rnd_M"} count magazines _plane;

if (_R73count >= 1) then {_plane addweaponturret ["JAS_R73_Launcher",[0]];};
if (_FABcount >= 1) then {_plane addweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[0]];};
if (_KABcount >= 1) then {_plane addweaponturret ["JAS_CUP_Vblauncher_KAB250_veh",[0]];};
if (_RBKcount >= 1) then {_plane addweaponturret ["JAS_FIR_CBU250",[0]];};
if (_ARMcount >= 1) then {_plane addweaponturret ["JAS_KH25_LAU",[0]];};

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
if (_gpodcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vacannon_GSh23L_in_veh",[-1]];
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M",[-1]];
	};
};

Switch (_skin) Do
{
	case 0: // AAF
	{
		_plane setobjecttextureglobal[0, "a3\air_f_gamma\Plane_Fighter_03\Data\plane_fighter_03_body_1_indp_co.paa"]; 
		_plane setobjecttextureglobal[1, "a3\air_f_gamma\Plane_Fighter_03\Data\plane_fighter_03_body_2_indp_co.paa"];			
	};
	case 1: // TKA
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_l39\data\l-39_body_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_l39\data\l-39_body_1_co.paa"];
	};
	case 2: // ACR
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_acr_green_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_1_acr_green_co.paa"];
	};
	case 2: // ACR Grey
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_acr_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_1_acr_co.paa"];
	};
};
