/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "AH64_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "AH64_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "AH64_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
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



sleep 0.01;


	// right wingtip
	/* Switch (_hardpoint1) Do
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
			_plane addmagazine "JAS_AGM122_1rnd_M";
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
		case 2:
		{
			_plane addmagazine "JAS_AGM122_1rnd_M";
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
	};
	
	sleep 0.3;
	
	// Hellfire proxies
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // Hydra 7
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Hydra 19
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
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS
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
	}; */
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonWingR", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonWingR", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonWingR", "JAS_FIR_AIM9L_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonWingR", "JAS_AGM122_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_AGM122_1rnd_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonWingL", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonWingL", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonWingL", "JAS_FIR_AIM9L_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonWingL", "JAS_AGM122_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_AGM122_1rnd_M";
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;