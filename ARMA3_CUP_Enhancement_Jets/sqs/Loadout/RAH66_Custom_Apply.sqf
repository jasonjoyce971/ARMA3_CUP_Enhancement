/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "RAH66_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "RAH66_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "RAH66_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;
_hardpoint5 = _array select 4;
_hardpoint6 = _array select 5;

sleep 0.01;


	Switch (_hardpoint1) Do // Right Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [1]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_12Rnd_PG_missiles", true, [1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_M", true, [1]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [1]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [1]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
			_plane setPylonLoadOut ["pylonRight1", "", true, [1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
			_plane setPylonLoadOut ["pylonRight1", "", true, [1]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_12Rnd_PG_missiles", true, [1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_M", true, [1]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [1]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [1]];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [1]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_M", true, [1]];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
			_plane setPylonLoadOut ["pylonRight2", "", true, [1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
			_plane setPylonLoadOut ["pylonRight2", "", true, [1]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_M", true, [1]];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [1]];
		};
	};

sleep 0.3;

	_plane setPylonLoadOut ["pylonLeft3", "", true, []];
	
sleep 0.3;

	_plane setPylonLoadOut ["pylonLeft3", "PylonRack_12Rnd_missiles", true, []];
	
sleep 0.3;

	_plane setPylonLoadOut ["pylonRight3", "", true, []];
	
sleep 0.3;

	_plane setPylonLoadOut ["pylonRight3", "PylonRack_12Rnd_missiles", true, []];
