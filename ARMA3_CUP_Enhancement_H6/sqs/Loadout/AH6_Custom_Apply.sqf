/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "AH6_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "AH6_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "AH6_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;

sleep 0.01;

	Switch (_hardpoint1) Do // Right
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19R_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19L_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [0]];
		};
	};
/*
sleep 0.3;

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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};

sleep 0.3;

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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};
	*/
sleep 0.01;