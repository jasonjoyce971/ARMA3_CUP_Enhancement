/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
_hardpoint1 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;
_hardpoint5 = lbCurSel 2103;
_hardpoint6 = lbCurSel 2104;
_hardpoint7 = lbCurSel 2105;
_hardpoint8 = lbCurSel 2106;
_hardpoint9 = lbCurSel 2202;
_hardpoint10 = lbCurSel 2107;
_hardpoint11 = lbCurSel 21008;

_plane setVariable ["TGT_POD","no",true];
_plane setVariable ["ECMJAMMER","yes",true];

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane setPylonLoadOut ["Pylons1", "", true, []];
_plane setPylonLoadOut ["Pylons2", "", true, []];
_plane setPylonLoadOut ["Pylons3", "", true, []];
_plane setPylonLoadOut ["Pylons4", "", true, []];
_plane setPylonLoadOut ["Pylons5", "", true, []];
_plane setPylonLoadOut ["Pylons6", "", true, []];
_plane setPylonLoadOut ["Pylons7", "", true, []];
_plane setPylonLoadOut ["Pylons8", "", true, []];
_plane setPylonLoadOut ["Pylons9", "", true, []];
_plane setPylonLoadOut ["Pylons10", "", true, []];
_plane setPylonLoadOut ["Pylons11", "", true, []];

// weapons
_plane removeWeapon "FIR_CMLauncher";
_plane removeWeapon "JAS_FIR_AIM132_Pylon";
_plane removeWeapon "JAS_FIR_Meteor_Launcher";
_plane removeWeapon "JAS_BRIMSTONE_L_Pylon";
_plane removeWeapon "JAS_FIR_AGM88_Pylon";
_plane removeWeapon "JAS_FIR_GBU12_Pylon";
_plane removeWeapon "JAS_FIR_EGBU12_Pylon";
_plane removeWeapon "JAS_FIR_GBU38_Pylon";
_plane removeWeapon "JAS_FIR_GBU54_Pylon";
_plane removeWeapon "JAS_FIR_GBU24A_Pylon";
_plane removeWeapon "JAS_FIR_GBU24B_Pylon";
_plane removeWeapon "JAS_FIR_GBU24118_Pylon";
_plane removeWeapon "JAS_FIR_GBU31_Pylon";
_plane removeWeapon "JAS_FIR_GBU32_Pylon";
_plane removeWeapon "JAS_STORMSHADOW_PYLON";
_plane removeWeapon "JAS_FIR_GBU39";
_plane removeWeapon "JAS_FIR_GBU53";
_plane removeWeapon "CUP_Vacannon_GAU22_veh";

_plane removeWeaponTurret ["CUP_Vacannon_GAU22_veh",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU53",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU39",[0]];
_plane removeWeaponTurret ["JAS_STORMSHADOW_PYLON",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU32_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU31_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24118_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24B_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU24A_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU54_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU38_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_EGBU12_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_GBU12_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_AGM88_Pylon",[0]];
_plane removeWeaponTurret ["JAS_BRIMSTONE_L_Pylon",[0]];
_plane removeWeaponTurret ["JAS_FIR_Meteor_Launcher",[0]];
_plane removeWeaponTurret ["JAS_FIR_AIM132_Pylon",[0]];
_plane removeWeaponTurret ["FIR_CMLauncher",[0]];

removeAllWeapons _plane;

// TGP Stuff
_plane removeMagazines "Laserbatteries";
_plane removeWeapon "Laserdesignator_mounted";

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

_plane addweapon "FIR_CMLauncher";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";


/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	//right outboard - 1
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
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "f35RAF_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_F35\sqs\Loadout\f35RAF_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "f35RAF_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_F35\sqs\Loadout\f35RAF_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "f35RAF_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_F35\sqs\Loadout\f35RAF_Custom_Apply.sqf";
			};	
		};
	};
};

sleep 0.3;

_plane addmagazine "Laserbatteries";
_plane addweapon "Laserdesignator_mounted";

titleText ["Loading Complete", "PLAIN DOWN",0.5];
