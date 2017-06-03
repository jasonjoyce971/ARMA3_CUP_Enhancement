/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "Gryphon_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "Gryphon_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "Gryphon_Custom_slot3";
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
			_plane setPylonLoadOut ["pylon1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM9L_PYLON_Mx2", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_Meteor_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM9L_PYLON_Mx2", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_Meteor_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon3", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon3", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_D_x2", true, [0]];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_H_x2", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_L_x2", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM9L_PYLON_Mx2", true, [0]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_Meteor_PYLON_M", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM120C_PYLON_Mx2", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylon4", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylon4", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_D_x2", true, [0]];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_H_x2", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_L_x2", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM9L_PYLON_Mx2", true, [0]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_Meteor_PYLON_M", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM120C_PYLON_Mx2", true, [0]];
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do // Right Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon5", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon5", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_GBU12_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_D_x2", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_H_x2", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_L_x2", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_MK82_GP_PYLON_M", true, [0]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM9L_PYLON_Mx2", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_Meteor_PYLON_M", true, [0]];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM120C_PYLON_Mx2", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do // Left Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylon6", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylon6", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_GBU12_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_D_x1", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_D_x2", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_H_x1", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_H_x2", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_L_x1", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_L_x2", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_MK82_GP_PYLON_M", true, [0]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM9L_PYLON_M", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM9L_PYLON_Mx2", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_IRIS_T_PYLON_M", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_Meteor_PYLON_M", true, [0]];
		};
		case 13:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM120C_PYLON_M", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM120C_PYLON_Mx2", true, [0]];
		};
	};