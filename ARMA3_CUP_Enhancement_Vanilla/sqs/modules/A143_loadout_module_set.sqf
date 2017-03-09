/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;

//right outboard - 1
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_LITENING_1_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
			//_plane addmagazine "Laserbatteries";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_aim9count = {_x == "FIR_AIM9L_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "FIR_AIM9X_1rnd_M"} count magazines _plane;
_aim120count = {_x == "FIR_AIM120_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_hydracount = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_zunicount = {_x == "FIR_Zuni_5_Pod_1rnd_M"} count magazines _plane;
_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
//_TGPCount =  {_x == "Laserbatteries"} count magazines _plane;
_cbu105count = {_x == "FIR_CBU105_1rnd_M"} count magazines _plane;

if (_aim9count >= 1) then {_plane addweapon "FIR_AIM9L";};
if (_aim9xcount >= 1) then {_plane addweapon "FIR_AIM9X";};
if (_aim120count >= 1) then {_plane addweapon "FIR_AIM120";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D"};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G"};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
//if (_TGPCount >= 1) then {_plane addweapon "Laserdesignator_mounted";};
if (_cbu105count >= 1) then {_plane addweapon "FIR_CBU105";};

if (_hydracount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydracount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "FIR_Hydra_7rnd_M";
	};
};
if (_zunicount >= 1) then
{
	_plane addweapon "JAS_ZUNI_Launcher";
	_counter5 = 1;

	while {_counter5 <= _zunicount} do
	{
		_counter5 = _counter5 + 1;
		_plane addmagazine "FIR_Zuni_4rnd_M";
	};
};

_tgt_1 = {_x == "FIR_LITENING_1_1rnd_M"} count magazines _plane;

if (_tgt_1 >= 1) then
{
_plane addweapon "Laserdesignator_mounted";

_plane addmagazine "Laserbatteries";
};
