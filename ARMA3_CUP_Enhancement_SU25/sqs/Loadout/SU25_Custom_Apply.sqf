/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "SU25_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "SU25_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "SU25_Custom_slot3";
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
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
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
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
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
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
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
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
	//proxies - fill empty then replace individually
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	
sleep 0.01;