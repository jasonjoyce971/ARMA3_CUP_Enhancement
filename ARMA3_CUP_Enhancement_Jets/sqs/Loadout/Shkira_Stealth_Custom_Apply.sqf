/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "Shkira_Stealth_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "Shkira_Stealth_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "Shkira_Stealth_Custom_slot3";
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
_hardpoint13 = _array select 12;

sleep 0.01;


	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons1", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons1", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons2", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons2", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_R77_PYLON_M", true, [-1]];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons3", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons3", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_KAB500KR_x1", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_KAB500SE_x1", true, [-1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_KAB500L_x1", true, [-1]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MPU_x1", true, [-1]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25R_x1", true, [-1]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MTP_x1", true, [-1]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MT_x1", true, [-1]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MS_x1", true, [-1]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25ML_x1", true, [-1]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons4", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons4", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_KAB500KR_x1", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_KAB500SE_x1", true, [-1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_KAB500L_x1", true, [-1]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MPU_x1", true, [-1]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25R_x1", true, [-1]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MTP_x1", true, [-1]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MT_x1", true, [-1]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MS_x1", true, [-1]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25ML_x1", true, [-1]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_R77_PYLON_M", true, [-1]];
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons5", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons5", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_KAB500KR_x1", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_KAB500SE_x1", true, [-1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_KAB500L_x1", true, [-1]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MPU_x1", true, [-1]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25R_x1", true, [-1]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MTP_x1", true, [-1]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MT_x1", true, [-1]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MS_x1", true, [-1]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25ML_x1", true, [-1]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons6", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons6", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_KAB500KR_x1", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_KAB500SE_x1", true, [-1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_KAB500L_x1", true, [-1]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MPU_x1", true, [-1]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25R_x1", true, [-1]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MTP_x1", true, [-1]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MT_x1", true, [-1]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MS_x1", true, [-1]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25ML_x1", true, [-1]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint11) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint12) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_R77_PYLON_M", true, [-1]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint13) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "", true, [-1]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "", true, [-1]];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_KAB500KR_x1", true, [-1]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_KAB500SE_x1", true, [-1]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_KAB500L_x1", true, [-1]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MPU_x1", true, [-1]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25R_x1", true, [-1]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MTP_x1", true, [-1]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MT_x1", true, [-1]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MS_x1", true, [-1]];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25ML_x1", true, [-1]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_R73_PYLON_M", true, [-1]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_R77_PYLON_M", true, [-1]];
		};
	};