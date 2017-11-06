/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "24V_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "24V_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "24V_Custom_slot3";
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
			_plane addmagazine "JAS_CUP_2Rnd_AT6_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_AT6_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
	};
	
	sleep 0.3;
	
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
	};
	
	sleep 0.3;
	
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
	};
	
	// fill out empty proxies with empties
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