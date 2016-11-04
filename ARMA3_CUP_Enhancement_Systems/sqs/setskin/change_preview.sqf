/*Loadout Dialog By Firewill*/

private ["_plane","_get_code","_codename","_texture_data","_texture_name"];

_plane = vehicle player;

//If (not Local _plane) ExitWith {};
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

_get_code = lbCurSel 2160;
_codename = lbText [2160, _get_code];

if (_plane iskindof "JAS_CUP_Mi35_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI35_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI35_custom_name");
};
if (_plane iskindof "JAS_CUP_Mi24_V_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24V_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24V_custom_name");
};
if (_plane iskindof "JAS_CUP_Mi24_P_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24P_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24P_custom_name");
};
if (_plane iskindof "JAS_CUP_Mi24_D_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24D_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24D_custom_name");
};
if (_plane iskindof "JAS_CUP_Mi171Sh_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI17_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI17_custom_name");
};
if (_plane iskindof "JAS_CUP_Mi8_MTV3_base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI8_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI8_custom_name");
};
if (_plane iskindof "JAS_CUP_L39_base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_L39_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_L39_custom_name");
};
if (_plane iskindof "JAS_CUP_KA50_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ka50_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ka50_custom_name");
};
if (_plane iskindof "JAS_CUP_SU34_BASE") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_su34_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_su34_custom_name");
};
if (_plane iskindof "JAS_CUP_Su25_base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_su25_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_su25_custom_name");
};
if (_plane iskindof "JAS_CUP_AW159_Unarmed_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_lynxAAC_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_lynxAAC_custom_name");
};
if (_plane iskindof "JAS_CUP_B_GR9_GB") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_gr9_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_gr9_custom_name");
};
if (_plane iskindof "JAS_CUP_B_AV8B_USMC") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_av8_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_av8_custom_name");
};
if (_plane iskindof "JAS_CUP_AH6_BASE") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ah6US_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ah6US_custom_name");
};
if (_plane iskindof "JAS_CUP_B_AH1Z_BASE") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ah1zUS_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ah1zUS_custom_name");
};
if (_plane iskindof "JAS_CUP_B_A10_USA") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_a10US_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_a10US_custom_name");
};

// ORIGINAL FIR CODE/////////////////////////////////////////////////////////////////////////////////
/* if (_plane iskindof "FIR_F16C") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f16_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f16_custom_name");
};
if (_plane iskindof "FIR_F15_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15c_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15c_custom_name");
};
if (_plane iskindof "FIR_F15D_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15d_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15d_custom_name");
};
if (_plane iskindof "FIR_F15E_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15e_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15e_custom_name");
};
if (_plane iskindof "FIR_F14D_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f14d_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f14d_custom_name");
};
if (_plane iskindof "FIR_F2A_Base") then
{
	_texture_data = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f2a_custom_preview_pic");
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f2a_custom_name");
}; */

if (_texture_data == "") then
{
	_texture_data = "\FIR_AirWeaponSystem_US\ui\pic_no_preview.paa";
};
ctrlSetText [1980, _texture_data];//for Dialogs
ctrlSetText [1001, _texture_name];