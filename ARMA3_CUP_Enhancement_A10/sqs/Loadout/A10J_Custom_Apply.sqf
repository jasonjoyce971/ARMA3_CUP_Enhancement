/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "A10J_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "A10J_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "A10J_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint3 = _array select 1;
_hardpoint4 = _array select 2;
_hardpoint5 = _array select 3;
_hardpoint6 = _array select 4;
_hardpoint7 = _array select 5;
_hardpoint8 = _array select 6;
_hardpoint10 = _array select 7;

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
			_plane setPylonLoadOut ["pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
	};
	
	//left outboard - 2
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons11", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons11", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons11", "JAS_FIR_ECMPod_P_1rnd_M", true, []];
			_plane setVariable ["ECMJAMMER","yes",true];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
	};
	
	//right wing midline/rocket slot - 3
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_7rnd_M_White", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_7rnd_M_Red", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_7rnd_M_Orange", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_7rnd_MPurple", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Zuni_P_4rnd_M", true, []];
			//_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Litening_std_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_SUU25_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
	};
	
	//left wing midline/rocket slot - 4
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons10", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons10", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Hydra_P_7rnd_M_White", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Hydra_P_7rnd_M_Red", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Hydra_P_7rnd_M_Orange", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Hydra_P_7rnd_MPurple", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Hydra_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Zuni_P_4rnd_M", true, []];
			//_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_Litening_std_P_1rnd_M", true, []];
			_plane setVariable ["TGT_POD","yes",true];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_SUU25_PYLON_M", true, []];
		};
	};
	
	//right inboard slot - 5
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_MK84_GP_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU103_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU105_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU105_1rnd_M"; // CEM WCMD
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU10_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_7rnd_M_White", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_7rnd_M_Red", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_7rnd_M_Orange", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_7rnd_MPurple", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_APKWS_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_Zuni_P_4rnd_M", true, []];
			//_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 29:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 30:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 31:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_D_x1", true, []];
			//_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 32:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_D", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 33:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_H_x1", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_H", true, []];
			//_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_L_x1", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_L", true, []];
			//_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_AGM65K_P_1rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; // MAV H
		};
	};
	
	//left inboard slot - 6
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons9", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons9", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_MK84_GP_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU103_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU105_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU105_1rnd_M"; // CEM WCMD
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_GBU10_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_GBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Hydra_P_7rnd_M_White", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Hydra_P_7rnd_M_Red", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Hydra_P_7rnd_M_Orange", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Hydra_P_7rnd_MPurple", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Hydra_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_APKWS_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 27:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Zuni_P_4rnd_M", true, []];
			//_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 28:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 29:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 30:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 31:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_D_x1", true, []];
			//_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 32:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_3Rnd_MAV_D", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 33:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_H_x1", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_3Rnd_MAV_H", true, []];
			//_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_L_x1", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_3Rnd_MAV_L", true, []];
			//_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_AGM65G_P_1rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_AGM65K_P_1rnd_M", true, []];
			//_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; // MAV H
		};
	};
	
	//right outer belly - 7
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_MK84_GP_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU103_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU105_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU10_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hydra_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_APKWS_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Zuni_P_4rnd_M", true, []];
			//_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
	};
	
	//left outer belly - 8
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons8", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons8", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_MK84_GP_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU103_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU105_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU10_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_Hydra_P_7rnd_M", true, []];
			//_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_Hydra_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_APKWS_P_21rnd_M", true, []];
			//_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_Zuni_P_4rnd_M", true, []];
			//_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, []];
			//_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
	};
	
	//right inner belly - 9
	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_MK84_GP_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU103_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU105_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU10_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
	};
	
	//left inner belly - 10
	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons7", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons7", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_MK84_GP_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU103_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU105_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU10_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU31_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU38_PYLON_M", true, []];
			//_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_gbu54_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
	};
	
	//centre belly - 11
	Switch (_hardpoint11) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
			//_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
			//_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_MK82_GP_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_MK84_GP_PYLON_M", true, []];
			//_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU87_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU89_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU97_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU10_PYLON_M", true, []];
			//_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_EGBU12_PYLON_M", true, []];
			//_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
	};
	
	/*

	//right outboard - 1
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 10:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 11:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M"; // SUU
		};
	};
	
	//left outboard - 2
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "CUP_1Rnd_Sidewinder_A10_Pod_M"; // WINDERS
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 10:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M"; // ECM
			_plane setVariable ["ECMJAMMER","yes",true];
		};
		case 11:
		{
			_plane addmagazine "FIR_SUU25_Pod_1rnd_M"; // SUU
		};
	};
	
	//right wing midline/rocket slot - 3
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 11:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 13:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 16:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 20:
		{
			_plane addmagazine "CUP_1Rnd_Litening_M"; // TGP
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	//left wing midline/rocket slot - 4
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 9:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 10:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 11:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 13:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 16:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 20:
		{
			_plane addmagazine "CUP_1Rnd_Litening_M"; // TGP
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	//right inboard slot - 5
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // CEM WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 29:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; // MAV H
		};
		case 39:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//left inboard slot - 6
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // CEM WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 29:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; // MAV H
		};
		case 39:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for Mav Ls
		};
	};
	
	//right outer belly - 7
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 25:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
	};
	
	//left outer belly - 8
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 4:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		case 25:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add1"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "JAS_CUP_1Rnd_CRV7_Pod_19_M_add2"; // CRV7 KEP
		};
	};
	
	//right inner belly - 9
	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // CEM WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
	};
	
	//left inner belly - 10
	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M"; // WCMD
		};
		case 8:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M"; // SFW WCMD
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M"; // 10
		};
		case 10:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; // 12
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; // EGBU
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M"; // 31
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M"; // 38
		};
		case 14:
		{
			_plane addmagazine "JAS_FIR_gbu54_1rnd_M"; // 54
		};
	};
	
	//centre belly - 11
	Switch (_hardpoint11) Do
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M";
		};
	};
	
	//conditionals - reference AV8 TER loading
	//right wing winder proxies
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};
	
	//left wing winder proxies
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
			_plane addmagazine "JAS_FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};

	//right wing TER outboard upper
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 39:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
		};
	};
	
	//left TER outboard upper
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 39:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
		};
	};
	
	//right TER inboard upper
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 39:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
		};
	};
	
	//left TER inboard upper
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 39:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
		};
	};
	
	//right TER bottom
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 39:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
		};
	};
	
	//left TER bottom
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // no entry
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // empty
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single snake
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // single GPB
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKW
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKR
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKO
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7 SMKP
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 25:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 27:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 29:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 30:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 31:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
		case 32:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV D SINGLE
		};
		case 33:
		{
			_plane addmagazine "JAS_FIR_AGM65D_1rnd_M"; //TER fit for Mav Ds
		};
		case 34:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV G
		};
		case 35:
		{
			_plane addmagazine "JAS_FIR_AGM65G_1rnd_M"; //TER fit for Mav Gs
		};
		case 36:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 37:
		{
			_plane addmagazine "JAS_FIR_AGM65L_1rnd_M"; //TER fit for Mav Ls
		};
		case 38:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // MAV L
		};
		case 39:
		{
			_plane addmagazine "JAS_FIR_AGM65H_1rnd_M"; //TER fit for Mav Hs
		};
	};
	
	//right belly TER outboard upper
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
	};
	
	//left belly TER outboard upper
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
	};
	
	//right belly TER inboard upper
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
	};
	
	//left belly TER inboard upper
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
	};
	
	//right belly TER bottom
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
	};
	
	//left belly TER bottom
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SNAKE SINGLE
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER fit for snakes
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 82 SINGLE
		};
		case 4:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER fit for GPBs
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 84
		};
		case 6:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CEM
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // GATOR
		};
		case 8:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // SFW
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // WCMD
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 10
		};
		case 12:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 12
		};
		case 13:
		{
			_plane addmagazine "JAS_FIR_GBU12_1rnd_M"; //TER fit for LGBs
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EGBU
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_EGBU12_1rnd_M"; //TER fit for EGBU
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 31
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 38
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // 54
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 7
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // HYDRA 19
		};
		case 21:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; //TER fit for HYDRA 7s
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // APKWS 7
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // TER fit for APKWS 7
		};
		case 24:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // ZUNI 4
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 FAT
		};
		case 26:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 HE
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // CRV7 KEP
		};
	};
	
	_plane addmagazine "CUP_12Rnd_pylonblank_M"; // old belly bomb slots - disregard
	
sleep 0.01;
*/