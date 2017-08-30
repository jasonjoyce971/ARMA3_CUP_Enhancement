/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "RHSA10J_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "RHSA10J_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "RHSA10J_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint3 = _array select 1;
_hardpoint4 = _array select 2;
_hardpoint5 = _array select 3;
_hardpoint6 = _array select 4;
_hardpoint7 = _array select 5;
_hardpoint8 = _array select 6;
_hardpoint10 = _array select 7;

_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;
_hardpoint5 = _array select 4;
_hardpoint6 = _array select 5;
_hardpoint7 = _array select 6;
_hardpoint8 = _array select 7;
_hardpoint9 = _array select 8;
_hardpoint10 = _array select 9;
_hardpoint11 = _array select 10;



sleep 0.01;


	// Right Outboard defaults to AIM-9L so load empty
	_plane addMagazine "rhs_pod_empty";
	
	// Right Midline - Station 2/10 configuration
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		/*case 9:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};*/
		case 9:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 10:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Right Inboard defaults to Maverick - selection may be possible using inherited RHS class. Single and TER both available
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-L
		};
	};
	
	// Right Belly Outer - Station 4/8 configuration
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Left Belly Outer - Station 4/8 configuration
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Belly Centre - Test for proxy if fail -> default empty
	_plane addmagazine "FIR_Empty_1rnd_M";
	/*Switch (_hardpoint11) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
	};*/
	
	// Right Belly Inner - Station 5/7 configuration
	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
	};
	
	// Left Belly Inner - Station 5/7 configuration
	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
	};
	
	// Left Inboard defaults to Maverick - selection may be possible using inherited RHS class. Single and TER both available
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-L
		};
	};
	
	// Left Midline - Station 2/10 configuration
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		/*case 9:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};*/
		case 9:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 10:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Left Outboard defaults to ECM pod and loads it now
	_plane addMagazine "rhs_mag_ANALQ131";
	
	// Winder Proxy - must load WINDERS
	_plane addmagazine "rhs_mag_Sidewinder_a10_2";
	
	// Right Midline Magazine? - Skip - mags added later anyway
	_plane addmagazine "FIR_Empty_1rnd_M";
	
	// Maverick Rack 1 - Choose between single and TER as dictates pod to load - single = load missile TER = load rack
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "JAS_rhs_mag_agm65G"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-L
		};
	};
	// Maverick Rack 2 - Choose between single and TER as dictates pod to load - single = load missile TER = load rack
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "JAS_rhs_mag_agm65G"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-L
		};
	};
	// Maverick Missile Proxy 1 - Only applies to TER - Load empty for singles
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 2 - Only applies to TER - Load empty for singles
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 3 - Only applies to TER - Load empty for singles
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 4 - Only applies to TER - Load empty for singles
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 5 - Only applies to TER - Load empty for singles
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 6 - Only applies to TER - Load empty for singles
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};