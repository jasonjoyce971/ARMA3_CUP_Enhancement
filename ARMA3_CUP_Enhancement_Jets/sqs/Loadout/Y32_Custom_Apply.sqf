/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "Y32_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "Y32_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "Y32_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;

sleep 0.01;


	Switch (_hardpoint1) Do // Right Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MPU_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25R_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MTP_x1", true, [0]];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MT_x1", true, [0]];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MS_x1", true, [0]];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25ML_x1", true, [0]];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MPU_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25R_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MTP_x1", true, [0]];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MT_x1", true, [0]];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MS_x1", true, [0]];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25ML_x1", true, [0]];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, [0]];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MPU_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25R_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MTP_x1", true, [0]];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MT_x1", true, [0]];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MS_x1", true, [0]];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25ML_x1", true, [0]];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MPU_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25R_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MTP_x1", true, [0]];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MT_x1", true, [0]];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MS_x1", true, [0]];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25ML_x1", true, [0]];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, [0]];
		};
	};