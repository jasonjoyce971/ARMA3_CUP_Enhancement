/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "SH60_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "SH60_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "SH60_Custom_slot3";
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
		case 1:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","2",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case 1:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","2",true];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case 1:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","4",true];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{	
		case 1:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","4",true];
		};
	};
	
	sleep 0.3;
	
	/*
	_ESSSState = _plane getVariable "ESSS";
	if (_ESSSState == "4") then
	{
		_plane animate ["Hide_ESSS4x", 0];
	};
	if (_ESSSState == "2") then
	{
		_plane animate ["Hide_ESSS2x", 0];
	};
	*/
	
	_ESSSState = _plane getVariable "ESSS";
	if (_ESSSState == "2") then
	{
		_plane animate ["Hide_ESSS4x", 0];
	};
	if (_ESSSState == "4") then
	{
		_plane animate ["Hide_ESSS2x", 0];
	};
	
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
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
		case 1:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
		case 1:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
		case 1:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
		case 1:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
	};
	
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};