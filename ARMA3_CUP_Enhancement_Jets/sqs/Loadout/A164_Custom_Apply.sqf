/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "A164J_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "A164J_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "A164J_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint3 = _array select 1;
_hardpoint4 = _array select 2;
_hardpoint5 = _array select 3;
_hardpoint6 = _array select 4;
_hardpoint7 = _array select 5;
_hardpoint8 = _array select 6;
_hardpoint10 = _array select 7;

_rocket1 = _array select 8;
_rocket2 = _array select 9;

sleep 0.01;


	Switch (_hardpoint1) Do
	{
	
		case -1:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons1", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_SUU25_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons10", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons10", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons10", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons10", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_SUU25_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
	
		case -1:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons3", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_H", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons8", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons8", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons8", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons8", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_3Rnd_MAV_H", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons6", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylons5", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons7", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons7", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons7", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons7", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons4", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_rocket1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons2", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_rocket2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons9", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons9", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons9", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons9", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
	};