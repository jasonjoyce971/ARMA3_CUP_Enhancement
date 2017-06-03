/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9","_rocket1","_rocket2"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
_hardpoint1 = lbCurSel 2100;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;
_hardpoint5 = lbCurSel 2103;
_hardpoint6 = lbCurSel 2104;
_hardpoint7 = lbCurSel 2105;
_hardpoint8 = lbCurSel 2106;
_hardpoint10 = lbCurSel 2107;

_rocket1 = lbCurSel 2113;
_rocket2 = lbCurSel 2114;

//_plane setVariable ["TGT_POD","no",true];

/* Delete Weapon and Ammo Before */
_plane removeMagazines "JAS_1000Rnd_Gatling_30mm_Plane_CAS_01_F";
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "Laserbatteries";
_plane removeweapon "JAS_Gatling_30mm_Plane_CAS_01_F";
_plane removeweapon "FIR_CMLauncher";
_plane removeweapon "Laserdesignator_pilotCamera";

_plane removeMPEventHandler ["MPHit", 0]; 

_plane setPylonLoadOut ["pylons1", "", true, []];
_plane setPylonLoadOut ["pylons2", "", true, []];
_plane setPylonLoadOut ["pylons3", "", true, []];
_plane setPylonLoadOut ["pylons4", "", true, []];
_plane setPylonLoadOut ["pylons5", "", true, []];
_plane setPylonLoadOut ["pylons6", "", true, []];
_plane setPylonLoadOut ["pylons7", "", true, []];
_plane setPylonLoadOut ["pylons8", "", true, []];
_plane setPylonLoadOut ["pylons9", "", true, []];
_plane setPylonLoadOut ["pylons10", "", true, []];

// MODEL BUG FIX
_plane removeweapon "Rocket_04_AP_Plane_CAS_01_F";

_plane removeweapon "JAS_FIR_GBU12_Pylon";
_plane removeweapon "JAS_FIR_MK82_Pylon";
_plane removeweapon "JAS_FIR_MK82AIR_Pylon";
_plane removeweapon "JAS_FIR_GBU38_Pylon";
_plane removeweapon "JAS_FIR_AIM9L_Pylon";
_plane removeweapon "JAS_BIS_weapon_AGM_65Launcher";
_plane removeweapon "JAS_BIS_weapon_AGM_65HLauncher";
_plane removeweapon "JAS_BIS_weapon_AGM_65LLauncher";
_plane removeweapon "JAS_FIR_CBU87_Pylon";
_plane removeweapon "JAS_FIR_CBU89_Pylon";
_plane removeweapon "JAS_FIR_CBU97_Pylon";
_plane removeweapon "missiles_DAR";
_plane removeweapon "missiles_DAGR";
_plane removeweapon "JAS_FIR_AIM132_Pylon";
_plane removeweapon "JAS_FIR_SUU25_pylon";
_plane removeweapon "JAS_FIR_GBU10_Pylon";
_plane removeweapon "JAS_FIR_GBU24A_Pylon";
_plane removeweapon "JAS_FIR_GBU24B_Pylon";
_plane removeweapon "JAS_FIR_GBU24118_Pylon";
_plane removeweapon "JAS_FIR_MK84_Pylon";
_plane removeweapon "JAS_FIR_GBU31_Pylon";
_plane removeweapon "JAS_FIR_EGBU12_Pylon";
_plane removeweapon "JAS_FIR_GBU54_Pylon";
_plane removeweapon "JAS_FIR_CBU103_Pylon";
_plane removeweapon "JAS_FIR_CBU105_Pylon";

sleep 0.3;

_plane addmagazine "Laserbatteries";
_plane addmagazine "JAS_1000Rnd_Gatling_30mm_Plane_CAS_01_F";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "JAS_Gatling_30mm_Plane_CAS_01_F";
_plane addweapon "FIR_CMLauncher";
_plane addweapon "Laserdesignator_pilotCamera";

/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do
	{
	
		case -1:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons1", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_SUU25_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons10", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons10", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons10", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons10", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_SUU25_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons10", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
	
		case -1:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons3", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons3", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_H", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons8", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons8", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons8", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons8", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_3Rnd_MAV_D", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_3Rnd_MAV_H", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_PylonRack_3Rnd_MAV_L", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons6", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons6", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons5", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylons5", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons7", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons7", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons7", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons7", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons4", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons4", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU10_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU24A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU24B_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU24A_BLU118_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 18:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
		case 19:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_MK84_GP_PYLON_M", true, []];
		};
		case 20:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU31_PYLON_M", true, []];
		};
		case 21:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_GBU38_PYLON_M", true, []];
		};
		case 22:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_EGBU12_PYLON_M", true, []];
		};
		case 23:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_EGBU12_P_3rnd_M", true, []];
		};
		case 24:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_gbu54_PYLON_M", true, []];
		};
		case 25:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU103_PYLON_M", true, []];
		};
		case 26:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_CBU105_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_rocket1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons2", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_rocket2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylons9", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylons9", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylons9", "PylonRack_12Rnd_PG_missiles", true, []];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylons9", "PylonRack_12Rnd_missiles", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU89_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_FIR_Mk82_snakeye_P_3rnd_M", true, []];
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "A164_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Loading Payload Selection From Slot 1", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\A164_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "A164_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Loading Payload Selection From Slot 2", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\A164_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "A164_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Loading Payload Selection From Slot 3", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\A164_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Complete", "PLAIN DOWN",0.5];
