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
_plane removeweapon "missiles_DAR";
_plane removeweapon "missiles_DAGR";
_plane removeweapon "JAS_HellfireLauncher_L_Pylon";
_plane removeweapon "JAS_HellfireLauncher_N_Pylon";
_plane removeweapon "JAS_FIR_AIM132_Pylon";

_plane removeweaponturret ["missiles_DAR",[-1]];
_plane removeweaponturret ["missiles_DAGR",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_L_Pylon",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[-1]];
_plane removeweaponturret ["JAS_FIR_AIM132_Pylon",[-1]];

_plane removeMagazinesturret ["1000Rnd_20mm_shells",[0]];
_plane removeweaponturret ["gatling_20mm",[0]];
_plane removeMagazinesturret ["Laserbatteries",[0]];
_plane removeweaponturret ["Laserdesignator_mounted",[0]];
_plane removeweaponturret ["missiles_DAR",[0]];
_plane removeweaponturret ["missiles_DAGR",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_L_Pylon",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[0]];
_plane removeweaponturret ["JAS_FIR_AIM132_Pylon",[0]];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";

_plane addmagazineturret ["1000Rnd_20mm_shells",[0]];
_plane addweaponturret ["gatling_20mm",[0]];
_plane addmagazineturret ["Laserbatteries",[0]];
_plane addweaponturret ["Laserdesignator_mounted",[0]];

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
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [-1]];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_L_1rnd_PYLON_M", true, [0]];
		};		
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
	};

sleep 0.3;

	_plane setPylonLoadOut ["pylonLeft3", "", true, []];
	
sleep 0.3;

	_plane setPylonLoadOut ["pylonLeft3", "PylonRack_12Rnd_missiles", true, []];
	
sleep 0.3;

	_plane setPylonLoadOut ["pylonRight3", "", true, []];
	
sleep 0.3;

	_plane setPylonLoadOut ["pylonRight3", "PylonRack_12Rnd_missiles", true, []];

}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "RAH66_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\RAH66_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "RAH66_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\RAH66_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "RAH66_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\RAH66_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 10;

titleText ["Loading Complete", "PLAIN DOWN",0.5];