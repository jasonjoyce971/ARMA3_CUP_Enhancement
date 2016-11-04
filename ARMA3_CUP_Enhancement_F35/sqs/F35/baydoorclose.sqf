// Script to detect applicable weapons and remove them from the aircraft as the bay doors close

_plane = vehicle Player;

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

//Remove Weapons
if(_GBU12 == "yes") then {_plane removeweapon "JAS_FIR_GBU12_int";};
if(_GBU38 == "yes") then {_plane removeweapon "JAS_FIR_GBU38_int";};
if(_Snake == "yes") then {_plane removeweapon "JAS_FIR_mk82_Snakeye_Launcher_int"};
if(_82 == "yes") then {_plane removeweapon "JAS_FIR_mk82_Launcher_int"};
if(_CBU87 == "yes") then {_plane removeweapon "JAS_FIR_CBU87_int"};
if(_CBU89 == "yes") then {_plane removeweapon "JAS_FIR_CBU89_int"};
if(_CBU97 == "yes") then {_plane removeweapon "JAS_FIR_CBU97_int"};
if(_CBU103 == "yes") then {_plane removeweapon "JAS_FIR_CBU103_int"};
if(_GBU39 == "yes") then {_plane removeweapon "JAS_FIR_GBU39_int"};
if(_GBU53 == "yes") then {_plane removeweapon "JAS_FIR_GBU53_int"};
if(_JSOWA == "yes") then {_plane removeweapon "JAS_FIR_AGM154A_int"};
if(_JSOWC == "yes") then {_plane removeweapon "JAS_FIR_AGM154C_int"};
if(_BRIMSTONE == "yes") then {_plane removeweapon "JAS_EAWS_Brimstone_Int"};

// Animate Doors
_plane animate ['Hatch_Weaponbay_1_1',0];
_plane animate ['Hatch_Weaponbay_1_2',0];
_plane animate ['Hatch_Weaponbay_1_3',0];
_plane animate ['Hatch_Weaponbay_1_4',0];
