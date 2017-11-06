_plane = _this select 0;

if (typeOf _plane == "JAS_CUP_B_Wildcat_Unarmed_RN_Grey") then 
{
	_pylon1 = _plane ammoOnPylon "pylons1";
	_pylon2 = _plane ammoOnPylon "pylons2";

	if(_pylon1 != -1 || _pylon2 != -1) then // If a pylon is loaded
	{
		// Show Winglets
		//_plane animateSource ["hide_radar", 1, true];
		_plane animateSource ["hide_struts", 1, true];
	}
	else // Neither pylon is loaded
	{
		// Hide Winglets
		//_plane animateSource ["hide_radar", 0, true];
		_plane animateSource ["hide_struts", 0, true];
	};
};

if (typeOf _plane == "JAS_CUP_B_AW159_Unarmed_GB") then 
{
	_pylon1 = _plane ammoOnPylon "pylons1";
	_pylon2 = _plane ammoOnPylon "pylons2";

	if(_pylon1 != -1 || _pylon2 != -1) then // If a pylon is loaded
	{
		// Show Winglets
		//_plane animateSource ["hide_radar", 1, true];
		_plane animateSource ["hide_struts", 1, true];
		//_plane animateSource ["hide_struts", 0, true];
	}
	else // Neither pylon is loaded
	{
		// Hide Winglets
		//_plane animateSource ["hide_radar", 0, true];
		_plane animateSource ["hide_struts", 0, true];
		//_plane animateSource ["hide_struts", 1, true];
	};
};

if (typeOf _plane == "JAS_CUP_B_Wildcat_Unarmed_Digital_AAF") then 
{
	_pylon1 = _plane ammoOnPylon "pylons1";
	_pylon2 = _plane ammoOnPylon "pylons2";

	if(_pylon1 != -1 || _pylon2 != -1) then // If a pylon is loaded
	{
		// Show Winglets
		//_plane animateSource ["hide_radar", 1, true];
		_plane animateSource ["hide_struts", 1, true];
	}
	else // Neither pylon is loaded
	{
		// Hide Winglets
		//_plane animateSource ["hide_radar", 0, true];
		_plane animateSource ["hide_struts", 0, true];
	};
};

if (typeOf _plane == "JAS_CUP_B_AW159_Unarmed_AAC") then 
{
	_pylon1 = _plane ammoOnPylon "pylons1";
	_pylon2 = _plane ammoOnPylon "pylons2";

	if(_pylon1 != -1 || _pylon2 != -1) then // If a pylon is loaded
	{
		// Show Winglets
		//_plane animateSource ["hide_radar", 1, true];
		_plane animateSource ["hide_struts", 1, true];
	}
	else // Neither pylon is loaded
	{
		// Hide Winglets
		//_plane animateSource ["hide_radar", 0, true];
		_plane animateSource ["hide_struts", 0, true];
	};
};

if (typeOf _plane == "JAS_CUP_B_Wildcat_Unarmed_RN_Grey_AAC") then 
{
	_pylon1 = _plane ammoOnPylon "pylons1";
	_pylon2 = _plane ammoOnPylon "pylons2";

	if(_pylon1 != -1 || _pylon2 != -1) then // If a pylon is loaded
	{
		// Show Winglets
		//_plane animateSource ["hide_radar", 1, true];
		_plane animateSource ["hide_struts", 1, true];
	}
	else // Neither pylon is loaded
	{
		// Hide Winglets
		//_plane animateSource ["hide_radar", 0, true];
		_plane animateSource ["hide_struts", 0, true];
	};
};

if (typeOf _plane == "JAS_CUP_I_AW159_Unarmed_AAC") then 
{
	_pylon1 = _plane ammoOnPylon "pylons1";
	_pylon2 = _plane ammoOnPylon "pylons2";

	if(_pylon1 != -1 || _pylon2 != -1) then // If a pylon is loaded
	{
		// Show Winglets
		//_plane animateSource ["hide_radar", 1, true];
		_plane animateSource ["hide_struts", 1, true];
	}
	else // Neither pylon is loaded
	{
		// Hide Winglets
		//_plane animateSource ["hide_radar", 0, true];
		_plane animateSource ["hide_struts", 0, true];
	};
};