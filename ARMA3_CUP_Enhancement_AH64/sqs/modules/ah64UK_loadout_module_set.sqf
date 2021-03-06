/*loadout system by Firewill*/
_plane = _this select 0;

Private ["_hp1","_hp2","_hp3","_hp4","_hp5","_hp6"];

_hardpoint1 = _this select 1;
_hardpoint2 = _this select 2;
_hardpoint3 = _this select 3;
_hardpoint4 = _this select 4;
_hardpoint5 = _this select 5;
_hardpoint6 = _this select 6;

// right wingtip
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
	};
	
	sleep 0.3;
	
	// left wingtip
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
	};
	
	sleep 0.3;
	
	// right outboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// Missile proxies
	// right outboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right outboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right outboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right outboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left outboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon outer top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon inner top slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon outer bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// right inboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};
	
	sleep 0.3;
	
	// left inboard pylon inner bottom slot
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 FAT
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 HE
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV-7 KEP
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_AGM114L_1rnd_M"; // Hellfire L
		};
		case 8:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire N
		};
		case 9:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M"; // Hellfire Combi
		};
		case 10:
		{
			_plane addmagazine "EAWS_Brimstone_mag1x"; // Brimstone
		};
	};

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_windercount = {_x == "JAS_FIR_AIM9L_1rnd_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_hellfireLcount = {_x == "JAS_AGM114L_1rnd_M"} count magazines _plane;
_hellfireNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;
_sidearmcount = {_x == "JAS_AGM122_1rnd_M"} count magazines _plane;
_brimstonecount = {_x == "EAWS_Brimstone_mag1x"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;
_CRV7FATcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M"} count magazines _plane;
_CRV7HEcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"} count magazines _plane;
_CRV7KEPcount = {_x == "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"} count magazines _plane;

if (_CRV7KEPcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
	_counter = 0;

	while {_counter <= _CRV7KEPcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_19Rnd_CRV7_KEP_M",[0]];
	};
};
if (_CRV7HEcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
	_counter = 0;

	while {_counter <= _CRV7HEcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_19Rnd_CRV7_HE_M",[0]];
	};
};
if (_CRV7FATcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_CRV7_FAT_veh",[0]];
	_counter = 0;

	while {_counter <= _CRV7FATcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_19Rnd_CRV7_FAT_M",[0]];
	};
};

if (_windercount >= 1) then
{
	_plane addweaponturret ["JAS_FIR_AIM9L",[0]];
	/* _counter9m = 0;

	while {_counter9m < _windercount} do
	{
		_counter9m = _counter9m + 1;
		_plane addmagazineturret ["JAS_FIR_AIM9L_1rnd_M",[0]];
	}; */
	
};
if (_hydra7count >= 1) then 
{
	_plane addweaponturret ["JAS_HYDRA_Launcher",[-1]];
	_counter7 = 0;

	while {_counter7 < _hydra7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazineturret ["FIR_Hydra_7rnd_M",[-1]];
	};
};

if (_APKWS7count >= 1) then 
{
	_plane addweaponturret ["JAS_FIR_APKWS_Launcher",[0]];
	_counter7 = 0;

	while {_counter7 < _APKWS7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazineturret ["JAS_FIR_Hydra_APKWS_7rnd_M",[0]];
	};
};
if (_hydra19count >= 1) then
{
	_plane addweaponturret ["JAS_HYDRA_Launcher",[-1]];
	_counter19 = 0;

	while {_counter19 < _hydra19count} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazineturret ["FIR_JLAU_3_19rnd_M",[-1]];
	};
};
if (_hellfireLcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_L",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["CUP_1Rnd_AGM114K_Hellfire_II_M",[0]];
	}; */
};
if (_hellfireNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["CUP_1Rnd_AGM114K_Hellfire_II_M",[0]];
	}; */
};
if (_sidearmcount >= 1) then
{
	_plane addweaponturret ["JAS_AGM122",[0]];
	/* _plane addweapon "JAS_AGM122";
	_counter122 = 0;

	while {_counter122 < _sidearmcount} do
	{
		_counter122 = _counter122 + 1;
		_plane addmagazine "JAS_AGM122_1rnd_M";
		_plane addmagazineturret ["JAS_AGM122_1rnd_M",[0]];
	}; */
};
if (_brimstonecount >= 1) then
{
	_plane addweaponturret ["EAWS_BrimstoneLauncher",[0]];
	/* _counterHell = 0;

	while {_counterHell < _hellfirecount} do
	{
		_counterHell = _counterHell + 1;
		_plane addmagazineturret ["CUP_1Rnd_AGM114K_Hellfire_II_M",[0]];
	}; */
};
