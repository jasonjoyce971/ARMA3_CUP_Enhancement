/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8","_hp9","_hp10","_hp11","_skin"];

_hardpoint1 = _this select 1;
_hardpoint3 = _this select 2;
_hardpoint4 = _this select 3;
_hardpoint5 = _this select 4;
_hardpoint6 = _this select 5;
_hardpoint7 = _this select 6;
_hardpoint8 = _this select 7;
_hardpoint10 = _this select 8;

//right outboard - 1
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
		};
		case 5:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_BLU107_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_BLU107_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_BLU107_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_BLU107_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_BLU107_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_BLU107_1rnd_M";
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
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU32_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
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
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU32_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
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
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU32_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
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
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU32_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_aim9count = {_x == "FIR_AIM9L_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "FIR_AIM9X_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu32count = {_x == "FIR_GBU32_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_blu107count = {_x == "FIR_BLU107_1rnd_M"} count magazines _plane;
_suucount = {_x == "FIR_SUU25_Pod_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_laseCount = {_x == "FIR_SniperXRPod_2_1rnd_M"} count magazines _plane;
_cbu105count = {_x == "FIR_CBU105_1rnd_M"} count magazines _plane;

if (_aim9count >= 1) then {_plane addweapon "FIR_AIM9L";};
if (_aim9xcount >= 1) then {_plane addweapon "FIR_AIM9X";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu32count >= 1) then {_plane addweapon "FIR_GBU32";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "JAS_FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D";};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G";};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_blu107count >= 1) then {_plane addweapon "FIR_BLU107";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_cbu105count >= 1) then {_plane addweapon "FIR_CBU105";};
if (_laseCount >= 1) then 
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};
if (_suucount >= 1) then
{
	_plane addweapon "FIR_SUU25";
	_counter5 = 0;

	while {_counter5 <= _suucount} do
	{
		_counter5 = _counter5 + 1;
		_plane addmagazine "FIR_SUU25_8rnd_M";
	};
};

_plane AddMagazine "7Rnd_Rocket_04_HE_F";
_plane AddMagazine "7Rnd_Rocket_04_AP_F";

_plane AddWeapon "Rocket_04_HE_Plane_CAS_01_F";
_plane AddWeapon "Rocket_04_AP_Plane_CAS_01_F";
