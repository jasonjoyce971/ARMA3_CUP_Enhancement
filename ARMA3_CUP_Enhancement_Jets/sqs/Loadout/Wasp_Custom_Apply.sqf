/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "Wasp_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "Wasp_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "Wasp_Custom_slot3";
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
_hardpoint11 = _array select 10;
_hardpoint12 = _array select 11;

sleep 0.01;


	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM120_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM7_PYLON_M", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon2", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM120_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM7_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon3", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon3", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_GBU12_P_2rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_D_x2", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_H_x2", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_L_x2", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM120_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM120_PYLON_Mx2", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM7_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AGM84SLAM_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_2Rnd_BombCluster_01_F", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_2Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon4", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon4", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_GBU12_P_2rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_MAV_D_x2", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_MAV_H_x2", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_MAV_L_x2", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AIM120_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AIM120_PYLON_Mx2", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AIM7_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AGM84SLAM_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_2Rnd_BombCluster_01_F", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylon4", "JAS_PylonRack_2Rnd_BombCluster_03_F", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
	};
	
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint11) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint12) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_PylonMissile_1Rnd_BombCluster_01_F", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_PylonMissile_1Rnd_BombCluster_03_F", true, []];
		};
	};