/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint6"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
_hardpoint1 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;
_hardpoint5 = lbCurSel 2103;
_hardpoint6 = lbCurSel 2104;

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeweapon "FIR_CMLauncher";
_plane removeMagazine "magazine_Fighter04_Gun20mm_AA_x250";
_plane removeweapon "weapon_Fighter_Gun20mm_AA";
_plane removeMagazine "Laserbatteries";
_plane removeweapon "Laserdesignator_pilotCamera";

_plane setPylonLoadOut ["pylon1", "", true, []];
_plane setPylonLoadOut ["pylon2", "", true, []];
_plane setPylonLoadOut ["pylon3", "", true, []];
_plane setPylonLoadOut ["Pylon4", "", true, []];
_plane setPylonLoadOut ["pylon5", "", true, []];
_plane setPylonLoadOut ["Pylon6", "", true, []];

_plane removeweapon "JAS_FIR_AIM9L_Pylon";
_plane removeweapon "JAS_FIR_IRIS_T_Launcher";
_plane removeweapon "JAS_FIR_Meteor_Launcher";
_plane removeweapon "JAS_FIR_AIM120C_Pylon";
_plane removeweapon "JAS_BIS_weapon_AGM_65Launcher";
_plane removeweapon "JAS_BIS_weapon_AGM_65HLauncher";
_plane removeweapon "JAS_BIS_weapon_AGM_65LLauncher";
_plane removeweapon "JAS_FIR_GBU12_Pylon";
_plane removeweapon "JAS_FIR_MK82_Pylon";

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";
_plane addmagazine "magazine_Fighter04_Gun20mm_AA_x250";
_plane addweapon "weapon_Fighter_Gun20mm_AA";
_plane addmagazine "Laserbatteries";
_plane addweapon "Laserdesignator_pilotCamera";

sleep 0.3;

titleText ["Loading ...", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do // Right Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon1", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_Meteor_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon1", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon2", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_Meteor_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon2", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon3", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon3", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_D_x2", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_H_x2", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_PylonRack_MAV_L_x2", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_Meteor_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylon3", "JAS_FIR_AIM120C_PYLON_Mx2", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylon4", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylon4", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_D_x2", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_H_x2", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_PylonRack_MAV_L_x2", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_Meteor_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["Pylon4", "JAS_FIR_AIM120C_PYLON_Mx2", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do // Right Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylon5", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylon5", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_GBU12_P_2rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_D_x2", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_H_x2", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_PylonRack_MAV_L_x2", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_Meteor_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["pylon5", "JAS_FIR_AIM120C_PYLON_Mx2", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do // Left Inboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["Pylon6", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["Pylon6", "", true, []];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_GBU12_P_2rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_GBU12_P_3rnd_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_D_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_D_x2", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_H_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_H_x2", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_L_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_PylonRack_MAV_L_x2", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_Mk82_GP_P_3rnd_M", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM9L_PYLON_Mx2", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_IRIS_T_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_Meteor_PYLON_M", true, []];
		};
		case 16:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM120C_PYLON_M", true, []];
		};
		case 17:
		{
			_plane setPylonLoadOut ["Pylon6", "JAS_FIR_AIM120C_PYLON_Mx2", true, []];
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "Gryphon_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Gryphon_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "Gryphon_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Gryphon_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "Gryphon_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Gryphon_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 10;

titleText ["Loading Complete", "PLAIN DOWN",0.5];