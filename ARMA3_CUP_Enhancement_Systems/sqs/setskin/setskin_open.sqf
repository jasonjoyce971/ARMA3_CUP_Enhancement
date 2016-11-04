/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

//If (not Local _plane) ExitWith {};
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

_handle= CreateDialog "AAC_Texture_GUI";
disableSerialization;
_mydisplay = findDisplay 9914;
_myctrl = _mydisplay displayCtrl 2160;

if (_plane iskindof "JAS_CUP_Mi35_Base") then
{
	{
		_num = getnumber (_x >> "fir_MI35_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_MI35_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_MI35_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_Mi24_V_Base") then
{
	{
		_num = getnumber (_x >> "fir_MI24V_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_MI24V_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_MI24V_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_Mi24_P_Base") then
{
	{
		_num = getnumber (_x >> "fir_MI24P_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_MI24P_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_MI24P_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_Mi24_D_Base") then
{
	{
		_num = getnumber (_x >> "fir_MI24D_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_MI24D_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_MI24D_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_Mi171Sh_Base") then
{
	{
		_num = getnumber (_x >> "fir_MI17_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_MI17_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_MI17_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_Mi8_MTV3_base") then
{
	{
		_num = getnumber (_x >> "fir_MI8_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_MI8_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_MI8_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_L39_base") then
{
	{
		_num = getnumber (_x >> "fir_L39_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_L39_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_L39_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_KA50_Base") then
{
	{
		_num = getnumber (_x >> "fir_ka50_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_ka50_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_ka50_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_SU34_BASE") then
{
	{
		_num = getnumber (_x >> "fir_su34_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_su34_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_su34_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_Su25_base") then
{
	{
		_num = getnumber (_x >> "fir_su25_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_su25_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_su25_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_AW159_Unarmed_Base") then
{
	{
		_num = getnumber (_x >> "fir_lynxAAC_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_lynxAAC_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_lynxAAC_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_B_GR9_GB") then
{
	{
		_num = getnumber (_x >> "fir_gr9_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_gr9_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_gr9_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_B_AV8B_USMC") then
{
	{
		_num = getnumber (_x >> "fir_av8_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_av8_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_av8_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_AH6_BASE") then
{
	{
		_num = getnumber (_x >> "fir_ah6US_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_ah6US_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_ah6US_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
if (_plane iskindof "JAS_CUP_B_AH1Z_BASE") then
{
	{
		_num = getnumber (_x >> "fir_ah1zUS_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_ah1zUS_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_ah1zUS_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
};
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

// ORIGINAL FIR CODE////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*F-16C WITHOUT CFT*/
/* if (_plane iskindof "FIR_F16C") then
{
	{
		_num = getnumber (_x >> "fir_f16_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_f16_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_f16_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
}; */
/*F-16C CFT VERSION ONLY*/
/* if (_plane iskindof "FIR_F16C_CFTTEST") then
{
	{
		_num = getnumber (_x >> "fir_f16_cft_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_f16_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_f16_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
}; */
/*F-15C ONLY*/
/* if (_plane iskindof "FIR_F15_Base") then
{
	{
		_num = getnumber (_x >> "fir_f15c_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_f15c_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_f15c_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
}; */
/*F-15D ONLY*/
/* if (_plane iskindof "FIR_F15D_Base") then
{
	{
		_num = getnumber (_x >> "fir_f15d_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_f15d_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_f15d_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
}; */
/*F-15E ONLY*/
/* if (_plane iskindof "FIR_F15E_Base") then
{
	{
		_num = getnumber (_x >> "fir_f15e_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_f15e_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_f15e_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
}; */
/*F-14 ONLY*/
/* if (_plane iskindof "FIR_F14D_Base") then
{
	{
		_num = getnumber (_x >> "fir_f14d_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_f14d_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_f14d_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
}; */
/*F-2A ONLY*/
/* if (_plane iskindof "FIR_F2A_Base") then
{
	{
		_num = getnumber (_x >> "fir_f2a_custom_skin");
		if (_num == 1) then
		{
			_myctrl lbAdd getText (_x >> "fir_f2a_custom_code");
			_myctrl lbSetData [_foreachindex, getText (_x >> "fir_f2a_custom_code")];
		};

	} forEach ("isClass _x" configClasses (configFile >> "CfgVehicles"));
}; */
	_myctrl lbSetCurSel 0;
	