/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "ALCA_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "ALCA_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "ALCA_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;
_hardpoint5 = _array select 4;
_hardpoint6 = _array select 5;
_hardpoint9 = _array select 6;



sleep 0.01;


	Switch (_hardpoint5) Do // Pylons3
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons3", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons3", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons3", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonWeapon_300Rnd_20mm_shells", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU12_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_MK82_GP_PYLON_M", true, [0]];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint3) Do // Pylons2
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons2", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_GBU12_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_MK82_GP_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint6) Do // Pylons5
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons5", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons5", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons5", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonWeapon_300Rnd_20mm_shells", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_FIR_GBU12_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_FIR_MK82_GP_PYLON_M", true, [0]];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint2) Do // Pylons7
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons7", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons7", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
	};	
	
sleep 0.3;
	
	Switch (_hardpoint4) Do // Pylons6
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons6", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons6", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons6", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_GBU12_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_MK82_GP_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
	};

	Switch (_hardpoint1) Do // Pylons1
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do // Pylons4
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons4", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons4", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonWeapon_300Rnd_20mm_shells", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_GBU12_PYLON_M", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_CBU87_PYLON_M", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_MK82_GP_PYLON_M", true, [0]];
		};
	};
	
	sleep 0.3;