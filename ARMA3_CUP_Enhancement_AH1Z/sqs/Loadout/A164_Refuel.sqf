/*Loadout Refuel by Firewill*/
if (not Local player) Exitwith {};
_plane = vehicle Player;

_class = typeOf _plane;

titleText ["Refuelling...", "PLAIN DOWN",0.5];

sleep 5;

Switch (_class) Do
{
	case "JAS_CUP_B_SU34_CDF":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_I_SU34_AAF":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_O_SU34_SLA":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_O_SU34_AAC":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_O_SU34_RU":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_AV8B_AAC":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_I_AV8B_AAF":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_B_AV8B_USMC":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_B_F35B_USMC":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_B_F35B_RAF_AAC":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_B_F35B_USMC_AAC":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	case "JAS_CUP_B_F35B_RAF":
	{
		_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;
			
		Switch (_fuelcount) Do
		{
			case 0:
			{
				_plane setfuel 0.5;
			};
			case 1:
			{
				_plane setfuel 0.75;
			};
			case 2:
			{
				_plane setfuel 1;
			};
		};
	};
	default
	{
		_plane setfuel 1;
	};
};

titleText ["Refuelling Complete", "PLAIN DOWN",0.1];