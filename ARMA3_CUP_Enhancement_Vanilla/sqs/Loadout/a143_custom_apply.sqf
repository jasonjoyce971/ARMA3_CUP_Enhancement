/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "A143_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "A143_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "A143_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;
_hardpoint5 = _array select 4;
_hardpoint6 = _array select 5;


sleep 0.01;


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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_LITENING_1_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
			//_plane addmagazine "Laserbatteries";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
		};
	};
sleep 0.01;	