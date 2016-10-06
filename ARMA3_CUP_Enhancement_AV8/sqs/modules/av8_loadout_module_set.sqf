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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 27:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 27:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 22:
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 22:
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};

sleep 5;

_plane vehiclechat "Loading Weapon";

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "FIR_AIM9L_1rnd_M"} count magazines _plane;
_aim120count = {_x == "FIR_AIM120_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu32count = {_x == "FIR_GBU32_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_gbu39count = {_x == "FIR_gbu39_1rnd_M"} count magazines _plane;
_gbu53count = {_x == "FIR_gbu53_1rnd_M"} count magazines _plane;
_84count = {_x == "FIR_mk84_gp_1rnd_M"} count magazines _plane;

if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
if (_aim120count >= 1) then {_plane addweapon "FIR_AIM120";};
if (_aim9xcount >= 1) then {_plane addweapon "FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
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
if ((_agm65dcount >= 1) or (_agm65gcount >= 1)or (_agm65lcount >= 1)) then {_plane addweapon "FIR_AGM65";};
if (_gbu39count >= 1) then {_plane addweapon "FIR_gbu39";};
if (_gbu53count >= 1) then {_plane addweapon "FIR_gbu53";};
if (_84count >= 1) then {_plane addweapon "FIR_mk84";};

_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;

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
