/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

//If (not Local _plane) ExitWith {};
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

_handle= CreateDialog "AAC_Texture_GUI";
disableSerialization;
_mydisplay = findDisplay 9914;
_myctrl = _mydisplay displayCtrl 2160;

if (_plane iskindof "JAS_CUP_B_A10_USA") then
{
	{
		_num = getnumber (_x >> "fir_a10US_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_a10US_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_a10US_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};

_myctrl lbSetCurSel 0;	