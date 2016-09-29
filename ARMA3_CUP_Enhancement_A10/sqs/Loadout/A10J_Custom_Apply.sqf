/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "A10J_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "A10J_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "A10J_Custom_slot3";
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


	Switch (_hardpoint1) Do
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
			_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
		};
		case 10:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M"; // SUU
		};
	};
	
	//left outboard - 2
	Switch (_hardpoint2) Do
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
			_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
		};
		case 10:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M"; // SUU
		};
	};
	
	//right wing midline/rocket slot - 3
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
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 8:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};
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
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 16:
		{
			_plane addmagazine "CUP_1Rnd_Litening_M"; // TGP
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	//left wing midline/rocket slot - 4
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
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 8:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};
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
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 16:
		{
			_plane addmagazine "CUP_1Rnd_Litening_M"; // TGP
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	//right inboard slot - 5
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 23:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; // MAV L
		};
	};
	
	//left inboard slot - 6
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 23:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; // MAV L
		};
	};
	
	//right outer belly - 7
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 19:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
	};
	
	//left outer belly - 8
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "CUP_1Rnd_MK82_Rack_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 19:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
	};
	
	//right inner belly - 9
	Switch (_hardpoint9) Do
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
	};
	
	//left inner belly - 10
	Switch (_hardpoint10) Do
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
	};
	
	//centre belly - 11
	Switch (_hardpoint11) Do
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
			_plane addmagazine "FIR_mk84_gp_1rnd_M";
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
	
	//conditionals - reference AV8 TER loading
	//right wing winder proxies
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_AIM9L_1rnd_M";
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};
	
	//left wing winder proxies
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_AIM9L_1rnd_M";
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};

	//right wing TER outboard upper
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
	};
	
	//left TER outboard upper
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
	};
	
	//right TER inboard upper
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
	};
	
	//left TER inboard upper
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
	};
	
	//right TER bottom
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
	};
	
	//left TER bottom
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 25:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
	};
	
	//right belly TER outboard upper
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//left belly TER outboard upper
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//right belly TER inboard upper
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//left belly TER inboard upper
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//right belly TER bottom
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	//left belly TER bottom
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	_plane addmagazine "CUP_12Rnd_pylonblank_M"; // old belly bomb slots - disregard
	
sleep 0.01;