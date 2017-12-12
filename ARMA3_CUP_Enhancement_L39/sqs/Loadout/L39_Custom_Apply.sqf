/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "L39_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "L39_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "L39_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;


sleep 0.01;


	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 9: // ARM
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 10: // ARM
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 11: // ARM
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 12: // ARM
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 9: // ARM
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 10: // ARM
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 11: // ARM
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 12: // ARM
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 9: // ARM
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 10: // ARM
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 11: // ARM
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 12: // ARM
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 9: // ARM
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 10: // ARM
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 11: // ARM
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 12: // ARM
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
	};
	
sleep 0.01;