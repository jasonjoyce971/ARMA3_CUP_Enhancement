/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "AV8_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "AV8_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "AV8_Custom_slot3";
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


	Switch (_hardpoint5) Do // Right Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingIn", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingIn", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 29:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 30:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 31:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 32:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 33:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 34:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 35:
		{
			_plane setPylonLoadOut ["RightWingIn", "JAS_FIR_AV8B_Fueltank_R_P_1rnd_M", true, []];
		};
		/*
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER EGBU
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // LJDAM
		};
		case 26:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 29:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 30:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 32:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 33:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 34:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 35:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 36:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		*/
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do // Left Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingIn", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingIn", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 29:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 30:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 31:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 32:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 33:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 34:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 35:
		{
			_plane setPylonLoadOut ["LeftWingIn", "JAS_FIR_AV8B_Fueltank_L_P_1rnd_M", true, []];
		};
	/*
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 17:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 18:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER EGBU
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // LJDAM
		};
		case 26:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 29:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 30:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 31:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 32:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 33:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 34:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 35:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 36:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		*/
	};

	sleep 0.3;
	
	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingMid", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingMid", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 29:
		{
			_plane setPylonLoadOut ["RightWingMid", "JAS_FIR_AV8B_Fueltank_R_P_1rnd_M", true, []];
		};
	/*
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
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_AIM120B_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_GBU24A_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_GBU24B_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_GBU24A_BLU118_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 25:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 27:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 28:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 29:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
		*/
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingMid", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingMid", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AGM88_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU32_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 27:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 28:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_MK84_GP_PYLON_M", true, []]; 
		};
		case 29:
		{
			_plane setPylonLoadOut ["LeftWingMid", "JAS_FIR_AV8B_Fueltank_L_P_1rnd_M", true, []];
		};
	};
	
	Switch (_hardpoint1) Do // Right Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["RightWingOut", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane setPylonLoadOut ["RightWingOut", "JAS_FIR_Litening_std_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["LeftWingOut", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["LeftWingOut", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 4:
		{
			_plane setPylonLoadOut ["LeftWingOut", "JAS_FIR_Litening_std_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	sleep 1;
	