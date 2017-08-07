/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "AH1_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "AH1_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "AH1_Custom_slot3";
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


	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_AIM9L_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_AGM122_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_AGM122_1rnd_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_AIM9L_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_AGM122_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_AGM122_1rnd_M";
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire K
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M"; // Hellfire N
		};
	};
	
sleep 0.3;