/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8","_hp9","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;
_hardpoint7 = _this select 7;
_hardpoint8 = _this select 8;
_hardpoint9 = _this select 9;
_skin = _this select 10;

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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M";
		};
	};
	
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M";
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M";
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M";
		};
	};

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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
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
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	sleep 0.3;

_plane vehiclechat "Loading Weapon";

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_aim9xcount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "JAS_FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "JAS_FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "JAS_FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "JAS_FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "JAS_FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "JAS_FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "JAS_FIR_AGM65L_1rnd_M"} count magazines _plane;
_CRV7count = {_x == "CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_84count = {_x == "FIR_mk84_gp_1rnd_M"} count magazines _plane;

if (_aim9xcount >= 1) then {_plane addweapon "JAS_FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_84count >= 1) then {_plane addweapon "FIR_mk84";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D";};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G";};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_CRV7count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter = 1;

	while {_counter <= _CRV7count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_FAT_M";
	};
};

_TGP = _plane getVariable "TGT_POD";
if (_TGP == "yes") then
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};

Switch (_skin) Do
{
	case 0: // grey
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa"];			
	};
	case 1: // green
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa"];
	};
};
