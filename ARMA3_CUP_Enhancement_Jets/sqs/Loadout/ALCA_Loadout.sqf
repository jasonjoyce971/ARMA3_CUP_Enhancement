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

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeweapon "FIR_CMLauncher";
_plane removeMagazine "Laserbatteries";
_plane removeweapon "Laserdesignator_pilotCamera";

_plane setPylonLoadOut ["Pylons1", "", true, []];
_plane setPylonLoadOut ["Pylons2", "", true, []];
_plane setPylonLoadOut ["Pylons3", "", true, []];
_plane setPylonLoadOut ["Pylons4", "", true, []];
_plane setPylonLoadOut ["Pylons5", "", true, []];
_plane setPylonLoadOut ["Pylons6", "", true, []];
_plane setPylonLoadOut ["Pylons7", "", true, []];

_plane removeweapon "missiles_DAGR";
_plane removeweapon "JAS_Twin_Cannon_20mm";
_plane removeweapon "JAS_FIR_GBU12_Pylon";
_plane removeweapon "JAS_BIS_weapon_AGM_65Launcher";
_plane removeweapon "JAS_BIS_weapon_AGM_65HLauncher";
_plane removeweapon "JAS_BIS_weapon_AGM_65LLauncher";
_plane removeweapon "JAS_FIR_MK82_Pylon";
_plane removeweapon "JAS_FIR_AIM132_Pylon";
_plane removeweapon "JAS_FIR_AIM9L_Pylon";
_plane removeweapon "JAS_FIR_IRIS_T_Launcher";
_plane removeweapon "JAS_FIR_AIM120C_Pylon";
_plane removeweapon "JAS_FIR_CBU87_Pylon";

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";
_plane addmagazine "Laserbatteries";
_plane addweapon "Laserdesignator_pilotCamera";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading ...", "PLAIN DOWN",0.5];

sleep 0.3;
//if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. 
if (_preset == -1 or _preset == 0) then
{

	Switch (_hardpoint5) Do // Pylons3
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons3", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons3", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons3", "PylonRack_12Rnd_PG_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons3", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint3) Do // Pylons2
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons2", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons2", "PylonRack_12Rnd_PG_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylons2", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint6) Do // Pylons5
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons5", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons5", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons5", "PylonRack_12Rnd_PG_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons5", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;
	
	Switch (_hardpoint2) Do // Pylons7
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons7", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons7", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons7", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
	};	
	
sleep 0.3;
	
	Switch (_hardpoint4) Do // Pylons6
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons6", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons6", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons6", "PylonRack_12Rnd_PG_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylons6", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
	};

	Switch (_hardpoint1) Do // Pylons1
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons1", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons1", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do // Pylons4
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylons4", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylons4", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylons4", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
	};
	
	sleep 0.3;

}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "ALCA_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\ALCA_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "ALCA_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\ALCA_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "ALCA_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\ALCA_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Complete", "PLAIN DOWN",0.5];
