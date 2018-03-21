/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "f35RAF_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "f35RAF_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "f35RAF_Custom_slot3";
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


sleep 0.01;


	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_BRIMSTONE_JET_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
	};
	
	//left outboard - 2
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons11", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons11", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons11", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons11", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons11", "JAS_FIR_BRIMSTONE_JET_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
	};
	
	//right wing midline/rocket slot - 3
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_BRIMSTONE_JET2_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AGM88_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//left wing midline/rocket slot - 4
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons10", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons10", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_BRIMSTONE_JET2_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_AGM88_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons10", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//right inboard slot - 5
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_BRIMSTONE_JET2_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_AGM88_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU24A_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU24B_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 11:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU32_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 12:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 13:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU39_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 14:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU53_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 15:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 16:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_STORMSHADOW_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//left inboard slot - 6
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons9", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons9", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_BRIMSTONE_JET2_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_AGM88_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU24A_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU24B_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 11:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU32_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 12:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 13:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU39_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 14:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_GBU53_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 15:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 16:
		{
			_plane setPylonLoadOut ["Pylons9", "JAS_STORMSHADOW_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//right outer belly - 7
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_GBU39_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_GBU53_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_BRIMSTONE_JET2_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//left outer belly - 8
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons8", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons8", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_GBU39_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_GBU53_P_4rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons8", "JAS_FIR_BRIMSTONE_JET2_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//right inner belly - 9
	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//left inner belly - 10
	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons7", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons7", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_Meteor_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
	};
	
	//centre belly - 11
	Switch (_hardpoint11) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["Pylons6", "CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
	};