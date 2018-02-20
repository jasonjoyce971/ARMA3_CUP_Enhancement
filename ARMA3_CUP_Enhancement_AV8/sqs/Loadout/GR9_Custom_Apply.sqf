/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "GR9_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "GR9_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "GR9_Custom_slot3";
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


	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingGear", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingGear", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingGear", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingGear", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingGear", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingGear", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingIn", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingIn", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};
	
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingIn", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingIn", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingMid", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingMid", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingMid", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingMid", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
	};

	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_SniperXR_2_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_SniperXR_2_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};	
	
sleep 0.3;

	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Center", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Center", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Center", "JAS_FIR_SniperXR_2_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Center", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
	};
	
	sleep 0.3;