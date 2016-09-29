/*Loadout Dialog By Firewill*/

private ["_plane","_get_code","_codename","_texture_data","_texture_name"];

_plane = vehicle player;

//If (not Local _plane) ExitWith {};
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

_get_code = lbCurSel 2160;
_codename = lbText [2160, _get_code];

if (_plane iskindof "JAS_CUP_B_A10_USA") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_a10US_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_a10US_custom_name");
};

if (_texture_data == "") then
{
	_texture_data = "\FIR_AirWeaponSystem_US\ui\pic_no_preview.paa";
};
ctrlSetText [1980, _texture_data];//for Dialogs
ctrlSetText [1001, _texture_name];