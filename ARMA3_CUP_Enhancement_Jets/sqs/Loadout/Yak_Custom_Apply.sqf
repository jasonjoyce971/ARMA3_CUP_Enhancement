/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "YAK_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "YAK_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "YAK_Custom_slot3";
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


_rocket1 = _array select 8;
_rocket2 = _array select 9;

sleep 0.01;


	Switch (_hardpoint1) Do // right wingtip
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
			_plane setPylonLoadOut ["pylons1", "JAS_R73_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint2) Do // left wingtip
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
			_plane setPylonLoadOut ["pylons10", "JAS_R73_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint6) Do // left inner mid
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
			_plane setPylonLoadOut ["pylons7", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_R73_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint5) Do // right inner mid
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
			_plane setPylonLoadOut ["pylons4", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_R73_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // left outer mid
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
			_plane setPylonLoadOut ["pylons9", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_R73_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint3) Do // right outer mid
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
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_R73_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint7) Do // right inner
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
			_plane setPylonLoadOut ["pylons5", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_R73_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint8) Do // left inner
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
			_plane setPylonLoadOut ["pylons6", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_R73_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;
	
	Switch (_rocket1) Do // right outer?
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
			_plane setPylonLoadOut ["pylons3", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_R73_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_rocket2) Do // left outer?
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
			_plane setPylonLoadOut ["pylons8", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_R73_PYLON_M", true, []];
		};
	};