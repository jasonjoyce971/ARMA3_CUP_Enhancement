/*Loadout Dialog By Firewill*/

private ["_plane","_planetype","_get_code","_codename","_texture_array","_tex1","_tex2","_tex3","_tex4","_tex5","_tex6","_texture_name"];

_plane = vehicle player;
_planetype = typeof _plane;

//If (not Local _plane) ExitWith {};
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

_get_code = lbCurSel 2160;
_codename = lbText [2160, _get_code];
_texture_array = getArray (configFile >> "CfgVehicles" >> _codename >> "hiddenSelectionsTextures");

if (_plane iskindof "JAS_CUP_Mi35_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI35_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 

};
if (_plane iskindof "JAS_CUP_Mi24_V_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24V_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 

};
if (_plane iskindof "JAS_CUP_Mi24_P_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24P_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 

};
if (_plane iskindof "JAS_CUP_Mi24_D_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI24D_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 

};
if (_plane iskindof "JAS_CUP_Mi171Sh_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI17_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;
	_tex4 = _texture_array select 3;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];   
	_plane setobjecttextureglobal[3, _tex4];
};
if (_plane iskindof "JAS_CUP_Mi8_MTV3_base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_MI8_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;
	_tex4 = _texture_array select 3;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];   
	_plane setobjecttextureglobal[3, _tex4];
};
if (_plane iskindof "JAS_CUP_L39_base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_L39_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 
};
if (_plane iskindof "JAS_CUP_KA50_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ka50_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];
};
if (_plane iskindof "JAS_CUP_SU34_BASE") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_su34_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 
};
if (_plane iskindof "JAS_CUP_Su25_base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_su25_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 
};
if (_plane iskindof "JAS_CUP_AW159_Unarmed_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_lynxAAC_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1];   
	_plane setobjecttextureglobal[1, _tex2]; 
};
if (_plane iskindof "JAS_CUP_B_GR9_GB") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_gr9_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2];  
};
if (_plane iskindof "JAS_CUP_B_AV8B_USMC") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_av8_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2];  
};
if (_plane iskindof "JAS_CUP_AH6_BASE") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ah6US_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2];  
};
if (_plane iskindof "JAS_CUP_B_AH1Z_BASE") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_ah1zUS_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2];  
};
if (_plane iskindof "JAS_CUP_B_A10_USA") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_a10US_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2];  
};

//ORIGINAL FIR CODE///////////////////////////////////////////////////////////////////////////////////
/*F-16C*/
/* if (_plane iskindof "FIR_F16_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f16_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];  
}; */

/*F-15C*/
/* if (_plane iskindof "FIR_F15_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15c_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;
	_tex4 = _texture_array select 3;
	_tex5 = _texture_array select 4;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];  
	_plane setobjecttextureglobal[3, _tex4];  
	_plane setobjecttextureglobal[4, _tex5];  
}; */

/*F-15D*/
/* if (_plane iskindof "FIR_F15D_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15d_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;
	_tex4 = _texture_array select 3;
	_tex5 = _texture_array select 4;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];  
	_plane setobjecttextureglobal[3, _tex4];  
	_plane setobjecttextureglobal[4, _tex5];  
}; */

/*F-15E*/
/* if (_plane iskindof "FIR_F15E_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f15e_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;
	_tex4 = _texture_array select 3;
	_tex5 = _texture_array select 4;
	_tex6 = _texture_array select 5;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];  
	_plane setobjecttextureglobal[3, _tex4];  
	_plane setobjecttextureglobal[4, _tex5];  
	_plane setobjecttextureglobal[5, _tex6];  
}; */

/*F-14D*/
/* if (_plane iskindof "FIR_F14D_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f14d_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;
	_tex4 = _texture_array select 3;
	_tex5 = _texture_array select 4;
	_tex6 = _texture_array select 5;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];  
	_plane setobjecttextureglobal[3, _tex4];  
	_plane setobjecttextureglobal[4, _tex5];  
	_plane setobjecttextureglobal[5, _tex6];  
}; */

/*F-2A*/
/* if (_plane iskindof "FIR_F2A_Base") then
{
	_texture_name = getText (configfile >> "CfgVehicles" >> _codename >> "fir_f2a_custom_name");
	_plane vehiclechat format ["skin name : %1", _texture_name];
	_tex1 = _texture_array select 0;
	_tex2 = _texture_array select 1;
	_tex3 = _texture_array select 2;

	_plane setobjecttextureglobal[0, _tex1]; 
	_plane setobjecttextureglobal[1, _tex2]; 
	_plane setobjecttextureglobal[2, _tex3];  
}; */