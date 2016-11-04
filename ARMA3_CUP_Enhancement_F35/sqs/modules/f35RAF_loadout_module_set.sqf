/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8","_hp9","_hp10"];

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

// Internal Bay System Variables
_plane setVariable ["InternalGBU12","no",true];
_plane setVariable ["InternalGBU38","no",true];
_plane setVariable ["InternalSnake","no",true];
_plane setVariable ["Internal82","no",true];
_plane setVariable ["InternalCBU87","no",true];
_plane setVariable ["InternalCBU89","no",true];
_plane setVariable ["InternalCBU97","no",true];
_plane setVariable ["InternalCBU103","no",true];
_plane setVariable ["InternalGBU39","no",true];
_plane setVariable ["InternalGBU53","no",true];
_plane setVariable ["InternalJSOWA","no",true];
_plane setVariable ["InternalJSOWC","no",true];
_plane setVariable ["InternalBrimstone","no",true];

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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x";
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x";
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "EAWS_SCALP_mag1x";
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
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "EAWS_SCALP_mag1x";
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
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_EAWS_Brimstone_M_int";
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
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_EAWS_Brimstone_M_int";
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
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_EAWS_Brimstone_M_int";
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
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M_int";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_gbu38_1rnd_M_int";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M_int";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk82_gp_1rnd_M_int";
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_gbu39_1rnd_M_int";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_gbu53_1rnd_M_int";
		};
		case 7:
		{
			_plane addmagazine "JAS_EAWS_Brimstone_M_int";
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "FIR_AIM9X_1rnd_M"} count magazines _plane;
_aim120count = {_x == "FIR_AIM120_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu32count = {_x == "FIR_GBU32_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "FIR_mk82_Snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_gbu39count = {_x == "FIR_gbu39_1rnd_M"} count magazines _plane;
_gbu53count = {_x == "FIR_gbu53_1rnd_M"} count magazines _plane;
_brimstonecount = {_x == "EAWS_Brimstone_mag1x"} count magazines _plane;
_scalpcount = {_x == "EAWS_SCALP_mag1x"} count magazines _plane;

_gbu12INTcount = {_x == "JAS_FIR_GBU12_1rnd_M_int"} count magazines _plane;
_gbu38INTcount = {_x == "JAS_FIR_gbu38_1rnd_M_int"} count magazines _plane;
_SnakeINTcount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M_int"} count magazines _plane;
_82INTcount = {_x == "JAS_FIR_mk82_gp_1rnd_M_int"} count magazines _plane;
_CBU87INTcount = {_x == "JAS_FIR_CBU87_1rnd_M_int"} count magazines _plane;
_CBU89INTcount = {_x == "JAS_FIR_CBU89_1rnd_M_int"} count magazines _plane;
_CBU97INTcount = {_x == "JAS_FIR_CBU97_1rnd_M_int"} count magazines _plane;
_CBU103INTcount = {_x == "JAS_FIR_CBU103_1rnd_M_int"} count magazines _plane;
_GBU39INTcount = {_x == "JAS_FIR_gbu39_1rnd_M_int"} count magazines _plane;
_GBU53INTcount = {_x == "JAS_FIR_gbu53_1rnd_M_int"} count magazines _plane;
_JSOWAINTcount = {_x == "JAS_FIR_AGM154A_1rnd_M_int"} count magazines _plane;
_JSOWCINTcount = {_x == "JAS_FIR_AGM154C_1rnd_M_int"} count magazines _plane;
_BRIMINTcount = {_x == "JAS_EAWS_Brimstone_M_int"} count magazines _plane;

if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
if (_aim9xcount >= 1) then {_plane addweapon "FIR_AIM9X";};
if (_aim120count >= 1) then {_plane addweapon "FIR_AIM120";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu32count >= 1) then {_plane addweapon "FIR_GBU32";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if ((_mk82secount >= 1) or (_mk82gpcount >= 1)) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D";};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G";};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_gbu39count >= 1) then {_plane addweapon "FIR_gbu39";};
if (_gbu53count >= 1) then {_plane addweapon "FIR_gbu53";};
if (_brimstonecount >= 1) then {_plane addweapon "EAWS_BrimstoneLauncher";};
if (_scalpcount >= 1) then {_plane addweapon "EAWS_SCALPLauncher";};

if (_gbu12INTcount >= 1) then {_plane setVariable ["InternalGBU12","yes",true];};
if (_gbu38INTcount >= 1) then {_plane setVariable ["InternalGBU38","yes",true];};
if (_SnakeINTcount >= 1) then {_plane setVariable ["InternalSnake","yes",true];};
if (_82INTcount >= 1) then {_plane setVariable ["Internal82","yes",true];};
if (_CBU87INTcount >= 1) then {_plane setVariable ["InternalCBU87","yes",true];};
if (_CBU89INTcount >= 1) then {_plane setVariable ["InternalCBU89","yes",true];};
if (_CBU97INTcount >= 1) then {_plane setVariable ["InternalCBU97","yes",true];};
if (_CBU103INTcount >= 1) then {_plane setVariable ["InternalCBU103","yes",true];};
if (_GBU39INTcount >= 1) then {_plane setVariable ["InternalGBU39","yes",true];};
if (_GBU53INTcount >= 1) then {_plane setVariable ["InternalGBU53","yes",true];};
if (_JSOWAINTcount >= 1) then {_plane setVariable ["InternalJSOWA","yes",true];};
if (_JSOWCINTcount >= 1) then {_plane setVariable ["InternalJSOWC","yes",true];};
if (_BRIMINTcount >= 1) then {_plane setVariable ["InternalBrimstone","yes",true];};

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

_TGP = _plane getVariable "TGT_POD";
if (_TGP == "yes") then
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};