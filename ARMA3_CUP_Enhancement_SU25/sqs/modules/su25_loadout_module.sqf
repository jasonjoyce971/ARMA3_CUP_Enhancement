private ["_logic","_units","_activated","_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8","_hp9","_hp10","_hp11","_skin"];

// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
		
		_hp1 = _logic getVariable "HP1";
		_hp2 = _logic getVariable "HP2";
		_hp3 = _logic getVariable "HP3";
		_hp4 = _logic getVariable "HP4";
		_hp5 = _logic getVariable "HP5";
		_hp6 = _logic getVariable "HP6";
		_hp7 = _logic getVariable "HP7";
		_hp8 = _logic getVariable "HP8";
		_hp9 = _logic getVariable "HP9";
		_hp10 = _logic getVariable "HP10";
		_skin = _logic getVariable "skin";
		
		{
			_plane = vehicle _x;
			if (_plane iskindof "JAS_CUP_Su25_base") then
			{
				[_plane,_hp1,_hp2,_hp3,_hp4,_hp5,_hp6,_hp7,_hp8,_hp9,_hp10,_skin] spawn JAS_fnc_su25_loadout_set;
			}
			else 
			{
				hint "module is must sync with Su-25!";
			};
		} foreach _units;
	/*	hint format ["%1 %2 %3 %4 %5 %6 %7 %8 %9 %10",_units,_hp1a,_hp1b,_hp3,_hp4,_hp5,_hp6,_hp8a,_hp8b,_fueltank];*/
};

// Module function is executed by spawn command, so returned value is not necessary.
// However, it's a good practice to include one.
true
