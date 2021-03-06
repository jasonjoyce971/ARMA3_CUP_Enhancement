/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6","_skin"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;
_skin = _this select 7;

Switch (_hardpoint5) Do
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER EGBU
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // LJDAM
		};
		case 26:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 29:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 30:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 32:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 33:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 34:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 35:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 36:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER EGBU
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // LJDAM
		};
		case 26:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 29:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 30:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 32:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 33:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 34:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 35:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 36:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
	};

	sleep 0.3;
	
	Switch (_hardpoint3) Do
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 29:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 29:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
	};
	
	Switch (_hardpoint1) Do
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	sleep 0.3;
	
	//TER proxies by hardpoint
	Switch (_hardpoint5) Do 
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-9
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AIM-120
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65D x1
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // AGM-65 x3
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65G x1
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // AGM-65G x3
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-65L x1
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // AGM-65L x3
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // AGM-88
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-10
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-12 x1
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // GBU-12 x3
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU-12 x1
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU-12 x3
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24A
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24B
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-24/118
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-31
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-32
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-38
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GBU-54
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-87
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-89
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-97
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-103
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CBU-105
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 AIR x1
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 AIR x3
		};
		case 33:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 GPB x1
		};
		case 34:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82 GPB x3
		};
		case 35:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Drop Tank
		};
	};

sleep 5;

_plane vehiclechat "Loading Weapon";

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_aim120count = {_x == "JAS_FIR_AIM120B_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "JAS_FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "JAS_FIR_GBU12_1rnd_M"} count magazines _plane;
_egbu12count = {_x == "JAS_FIR_EGBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "JAS_FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "JAS_FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "JAS_FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu32count = {_x == "FIR_GBU32_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "JAS_FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "JAS_FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "JAS_FIR_AGM65L_1rnd_M"} count magazines _plane;
_gbu39count = {_x == "FIR_gbu39_1rnd_M"} count magazines _plane;
_gbu53count = {_x == "FIR_gbu53_1rnd_M"} count magazines _plane;
_84count = {_x == "FIR_mk84_gp_1rnd_M"} count magazines _plane;
_gbu54count = {_x == "JAS_FIR_gbu54_1rnd_M"} count magazines _plane;
_cbu105count = {_x == "FIR_CBU105_1rnd_M"} count magazines _plane;
_APKWScount = {_x == "CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;

_CRV7FATcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_CRV7HEcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"} count magazines _plane;
_CRV7KEPcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"} count magazines _plane;

if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
if (_aim120count >= 1) then {_plane addweapon "JAS_FIR_AIM120";};
if (_aim9xcount >= 1) then {_plane addweapon "JAS_FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "JAS_FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "JAS_FIR_GBU12";};
if (_egbu12count >= 1) then {_plane addweapon "JAS_FIR_EGBU12";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu32count >= 1) then {_plane addweapon "FIR_GBU32";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "JAS_FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D";};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G";};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_gbu39count >= 1) then {_plane addweapon "FIR_gbu39";};
if (_gbu53count >= 1) then {_plane addweapon "FIR_gbu53";};
if (_84count >= 1) then {_plane addweapon "FIR_mk84";};
if (_gbu54count >= 1) then {_plane addweapon "JAS_FIR_GBU54";};
if (_cbu105count >= 1) then {_plane addweapon "FIR_CBU105";};

_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;

if (_APKWScount >= 1) then 
{
	_plane addweapon "JAS_FIR_APKWS_Launcher";
	_counter7 = 1;

	while {_counter7 <= _APKWScount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_FIR_Hydra_APKWS_19rnd_M";
	};
};
if (_CRV7FATcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter7 = 1;

	while {_counter7 <= _CRV7FATcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_FAT_M";
	};
};
if (_CRV7HEcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter7 = 1;

	while {_counter7 <= _CRV7HEcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_HE_M";
	};
};
if (_CRV7KEPcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_CRV7_FAT_veh";
	_counter7 = 1;

	while {_counter7 <= _CRV7KEPcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_CUP_19Rnd_CRV7_KEP_M";
	};
};
Switch (_fuelcount) Do
{
	case 0:
	{
		_plane setfuel 0.5;
	};
	case 1:
	{
		_plane setfuel 0.75;
	};
	case 2:
	{
		_plane setfuel 1;
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
	case 0: // grey
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_co.paa"];			
	};
	case 1: // dark grey
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_dark_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_av8b\data\av8b_ext_dark_co.paa"];
	};
	case 2: // aces
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_1_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_1_co.paa"];
	};
	case 3: // sheep
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_2_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_usmc_2_co.paa"];
	};
	case 4: // aaf
	{
		_plane setobjecttextureglobal[0, "cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa"]; 
		_plane setobjecttextureglobal[1, "cup\airvehicles\cup_airvehicles_av8b\data\texture\CUP_av8b_aaf_1_co.paa"];
	};
};
