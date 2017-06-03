/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_hp7","_hp8","_hp9","_hp10","_hp11","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;
_hardpoint7 = _this select 7;
_hardpoint8 = _this select 8;
_hardpoint9 = _this select 9;
_hardpoint10 = _this select 10;
_hardpoint11 = _this select 11;
_skin = _this select 12;

//right outboard - 1
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
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 10:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 11:
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
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 10:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 11:
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
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 9:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 11:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
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
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 9:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 11:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
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
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // CEM WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 29:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; // MAV H
		};
		case 37:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
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
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // CEM WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 29:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; // MAV H
		};
		case 37:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
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
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 25:
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
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 25:
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
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
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
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
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M";
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
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
		case 11:
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
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
		case 11:
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV 7
		};
	};
	
	_plane addmagazine "CUP_12Rnd_pylonblank_M"; // old belly bomb slots - disregard

sleep 0.3;

titleText ["Loading Weapon", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_CRV7count = {_x == "CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_aim9Lcount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "JAS_FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "JAS_FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_mk84gpcount = {_x == "JAS_FIR_mk84_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "JAS_FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "JAS_FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "JAS_FIR_AGM65L_1rnd_M"} count magazines _plane;
_agm65hcount = {_x == "JAS_FIR_AGM65H_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_zunicount = {_x == "FIR_Zuni_5_Pod_1rnd_M"} count magazines _plane;
_SUUcount = {_x == "FIR_SUU25_Pod_1rnd_M"} count magazines _plane;
_hydraSMKWcount = {_x == "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"} count magazines _plane;
_hydraSMKRcount = {_x == "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"} count magazines _plane;
_hydraSMKOcount = {_x == "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"} count magazines _plane;
_hydraSMKPcount = {_x == "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"} count magazines _plane;
_cbu105count = {_x == "FIR_CBU105_1rnd_M"} count magazines _plane;
_gbu54count = {_x == "JAS_FIR_gbu54_1rnd_M"} count magazines _plane;
_egbu12count = {_x == "JAS_FIR_EGBU12_1rnd_M"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;

_TGPcount = {_x == "CUP_1Rnd_Litening_M"} count magazines _plane;

if (_aim9Lcount >= 1) then {_plane addweapon "JAS_FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "JAS_FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "JAS_FIR_GBU12";};
if (_gbu12count >= 1) then {_plane addweapon "JAS_FIR_GBU12";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "JAS_FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D"};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G"};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_agm65hcount >= 1) then {_plane addweapon "JAS_FIR_AGM65H";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk84gpcount >= 1) then {_plane addweapon "JAS_FIR_mk84";};
if (_cbu105count >= 1) then {_plane addweapon "FIR_CBU105";};
if (_gbu54count >= 1) then {_plane addweapon "JAS_FIR_GBU54";};
if (_egbu12count >= 1) then {_plane addweapon "JAS_FIR_EGBU12";};

if (_hydraSMKWcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKW_Launcher";
	_counter = 1;

	while {_counter <= _hydraSMKWcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_7rnd_M";
	};
};
if (_hydraSMKRcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKR_Launcher";
	_counter = 1;

	while {_counter <= _hydraSMKRcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Red_7rnd_M";
	};
};
if (_hydraSMKOcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKO_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydraSMKOcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Orange_7rnd_M";
	};
};
if (_hydraSMKPcount >= 1) then
{
	_plane addweapon "JAS_HYDRA_SMKP_Launcher";
	_counter19 = 1;
	
	while {_counter19 <= _hydraSMKPcount} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Purple_7rnd_M";
	};
};
if (_SUUcount >= 1) then 
{
	_plane addweapon "FIR_SUU25";
	_counter = 1;

	while {_counter <= _SUUcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "FIR_SUU25_8rnd_M";
	};
};
if (_CRV7count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter = 1;

	while {_counter <= _CRV7count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_FAT_M";
	};
};
if (_hydra7count >= 1) then 
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydra7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "FIR_Hydra_7rnd_M";
	};
};
if (_APKWS7count >= 1) then
{
	_plane addweapon "JAS_FIR_APKWS_Launcher";
	_counter7 = 1;

	while {_counter7 <= _APKWS7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_FIR_Hydra_APKWS_7rnd_M";
	};
};
if (_hydra19count >= 1) then
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter19 = 1;
	
	while {_counter19 <= _hydra19count} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazine "FIR_JLAU_3_19rnd_M";
	};
};
if (_zunicount >= 1) then
{
	_plane addweapon "JAS_ZUNI_Launcher";
	_counter5 = 1;

	while {_counter5 <= _zunicount} do
	{
		_counter5 = _counter5 + 1;
		_plane addmagazine "FIR_Zuni_4rnd_M";
	};
};

_TGP = _plane getVariable "TGT_POD";
if (_TGP == "yes") then
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};

Switch (_skin) Do
{
	case 0: // black
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"];			
	};
	case 1: // black hog
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black_hog.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"];
	};
	case 2: // black panther
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black_panth.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"];
	};
	case 3: // black shark
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_black_shark.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_black.paa"];
	};
	case 4: // desert
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_desert.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_desert.paa"];
	};
	case 5: // green
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"];
	};
	case 6: // green hog
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green_hog.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"];
	};
	case 7: // green shark
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green_shark.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"];
	};
	case 8: // grey
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_01_co.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"];
	};
	case 9: // grey hog
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_hog.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"];
	};
	case 10: // grey panther
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_panth.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"];
	};
	case 11: // grey shark
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_shark.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\a10_02_co.paa"];
	};
	case 12: // winter
	{
		_plane setobjecttextureglobal[0, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_winter.paa"]; 
		_plane setobjecttextureglobal[1, "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_winter.paa"];
	};
};
