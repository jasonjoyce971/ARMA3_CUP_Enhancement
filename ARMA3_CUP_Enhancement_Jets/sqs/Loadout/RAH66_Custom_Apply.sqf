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
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_12Rnd_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft3", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft3", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft3", "PylonRack_12Rnd_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft3", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft3", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft3", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft3", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_12Rnd_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_12Rnd_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do // Right Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight3", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight3", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight3", "PylonRack_12Rnd_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight3", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight3", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight3", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight3", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do // Left Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_12Rnd_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};