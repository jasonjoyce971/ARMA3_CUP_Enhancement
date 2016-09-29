/*Loadout Dialog By Firewill*/

private ["_plane","_planetype","_get_code","_codename","_texture_array","_tex1","_tex2","_tex3","_tex4","_tex5","_tex6","_texture_name"];

_plane = vehicle player;
_planetype = typeof _plane;

//If (not Local _plane) ExitWith {};
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

_get_code = lbCurSel 2160;
_codename = lbText [2160, _get_code];
_texture_array = getArray (configFile >> "CfgVehicles" >> _codename >> "hiddenSelectionsTextures");

if (_plane iskindof "JAS_CUP_B_A10_USA") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_a10US_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2];  
};
