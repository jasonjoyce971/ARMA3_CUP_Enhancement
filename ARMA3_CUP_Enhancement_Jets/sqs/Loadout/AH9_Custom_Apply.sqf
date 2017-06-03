/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "AH9_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "AH9_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "AH9_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;

sleep 0.01;

	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["PylonRight1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["PylonRight1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["PylonRight1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_7Rnd_Rocket_04_HE_F", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_7Rnd_Rocket_04_AP_F", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_12Rnd_missiles", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["PylonLeft1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["PylonLeft1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["PylonLeft1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_7Rnd_Rocket_04_HE_F", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_7Rnd_Rocket_04_AP_F", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_12Rnd_missiles", true, [0]];
		};
	};
	
sleep 0.01;