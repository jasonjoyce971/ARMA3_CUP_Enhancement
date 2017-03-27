// Script to detect applicable weapons and assign them to the aircraft as the bay doors open

_plane = vehicle Player;

// Animate Doors
_plane animate ['Hatch_Weaponbay_1_1',1];
_plane animate ['Hatch_Weaponbay_1_2',1];
_plane animate ['Hatch_Weaponbay_1_3',1];
_plane animate ['Hatch_Weaponbay_1_4',1];

// Detect Variables
_GBU12 = _plane getVariable "InternalGBU12";
_GBU38 = _plane getVariable "InternalGBU38";
_Snake = _plane getVariable "InternalSnake";
_82 = _plane getVariable "Internal82";
_CBU87 = _plane getVariable "InternalCBU87";
_CBU89 = _plane getVariable "InternalCBU89";
_CBU97 = _plane getVariable "InternalCBU97";
_CBU103 = _plane getVariable "InternalCBU103";
_GBU39 = _plane getVariable "InternalGBU39";
_GBU53 = _plane getVariable "InternalGBU53";
_JSOWA = _plane getVariable "InternalJSOWA";
_JSOWC = _plane getVariable "InternalJSOWC";
_BRIMSTONE = _plane getVariable "InternalBrimstone";
_GBU54 = _plane getVariable "InternalGBU54";
_CBU105 = _plane getVariable "InternalCBU105";
_EGBU12 = _plane getVariable "InternalEGBU12";
_PAVE4 = _plane getVariable "InternalPAVE4";
_AIM120 = _plane getVariable "InternalAIM120";
_ASRAAM = _plane getVariable "InternalASRAAM";

//Assign Weapons
if(_GBU12 == "yes") then {_plane addweapon "JAS_FIR_GBU12_int";};
if(_GBU38 == "yes") then {_plane addweapon "JAS_FIR_GBU38_int"};
if(_Snake == "yes") then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher_int"};
if(_82 == "yes") then {_plane addweapon "JAS_FIR_mk82_Launcher_int"};
if(_CBU87 == "yes") then {_plane addweapon "JAS_FIR_CBU87_int"};
if(_CBU89 == "yes") then {_plane addweapon "JAS_FIR_CBU89_int"};
if(_CBU97 == "yes") then {_plane addweapon "JAS_FIR_CBU97_int"};
if(_CBU103 == "yes") then {_plane addweapon "JAS_FIR_CBU103_int"};
if(_GBU39 == "yes") then {_plane addweapon "JAS_FIR_GBU39_int"};
if(_GBU53 == "yes") then {_plane addweapon "JAS_FIR_GBU53_int"};
if(_JSOWA == "yes") then {_plane addweapon "JAS_FIR_AGM154A_int"};
if(_JSOWC == "yes") then {_plane addweapon "JAS_FIR_AGM154C_int"};
if(_BRIMSTONE == "yes") then {_plane addweapon "JAS_EAWS_Brimstone_Int"};
if(_GBU54 == "yes") then {_plane addweapon "JAS_FIR_GBU54_int"};
if(_CBU105 == "yes") then {_plane addweapon "JAS_FIR_CBU105_int"};
if(_EGBU12 == "yes") then {_plane addweapon "JAS_FIR_EGBU12_int";};
if(_PAVE4 == "yes") then {_plane addweapon "JAS_FIR_PAVEWAY_IV_int";};
if(_AIM120 == "yes") then {_plane addweapon "JAS_FIR_AIM120_int";};
if(_ASRAAM == "yes") then {_plane addweapon "JAS_FIR_AIM132_int";};
