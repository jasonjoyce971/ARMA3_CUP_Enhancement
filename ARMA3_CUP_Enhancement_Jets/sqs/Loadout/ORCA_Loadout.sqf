/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
_hardpoint1 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeweapon "FIR_CMLauncher";

_plane removeMagazines "Laserbatteries";
_plane removeMagazines "JAS_FIR_AIM132_1rnd_PYLON_M";
_plane removeMagazines "PylonRack_1Rnd_LG_scalpel";
_plane removeMagazines "PylonRack_12Rnd_PG_missiles";
_plane removeMagazines "PylonRack_12Rnd_missiles";
_plane removeMagazines "JAS_PylonWeapon_300Rnd_20mm_shells";
_plane removeMagazines "PylonWeapon_2000Rnd_65x39_belt";
_plane removeMagazines "JAS_19Rnd_Rocket_Skyfire";
_plane removeweapon "Laserdesignator_mounted";
_plane removeweapon "JAS_FIR_AIM132_Pylon";
_plane removeweapon "missiles_SCALPEL";
_plane removeweapon "missiles_DAGR";
_plane removeweapon "missiles_DAR";
_plane removeweapon "JAS_Twin_Cannon_20mm";
_plane removeweapon "LMG_Minigun_heli";
_plane removeweapon "JAS_rockets_Skyfire";

_plane removeMagazinesturret ["Laserbatteries",[0]];
_plane removeMagazinesturret ["JAS_FIR_AIM132_1rnd_PYLON_M",[0]];
_plane removeMagazinesturret ["PylonRack_1Rnd_LG_scalpel",[0]];
_plane removeMagazinesturret ["PylonRack_12Rnd_PG_missiles",[0]];
_plane removeMagazinesturret ["PylonRack_12Rnd_missiles",[0]];
_plane removeMagazinesturret ["JAS_PylonWeapon_300Rnd_20mm_shells",[0]];
_plane removeMagazinesturret ["PylonWeapon_2000Rnd_65x39_belt",[0]];
_plane removeMagazinesturret ["JAS_19Rnd_Rocket_Skyfire",[0]];
_plane removeweaponturret ["Laserdesignator_mounted",[0]];
_plane removeweaponturret ["JAS_FIR_AIM132_Pylon",[0]];
_plane removeweaponturret ["missiles_SCALPEL",[0]];
_plane removeweaponturret ["missiles_DAGR",[0]];
_plane removeweaponturret ["missiles_DAR",[0]];
_plane removeweaponturret ["JAS_Twin_Cannon_20mm",[0]];
_plane removeweaponturret ["LMG_Minigun_heli",[0]];
_plane removeweaponturret ["JAS_rockets_Skyfire",[0]];

_plane removeMagazinesturret ["Laserbatteries",[-1]];
_plane removeMagazinesturret ["JAS_FIR_AIM132_1rnd_PYLON_M",[-1]];
_plane removeMagazinesturret ["PylonRack_1Rnd_LG_scalpel",[-1]];
_plane removeMagazinesturret ["PylonRack_12Rnd_PG_missiles",[-1]];
_plane removeMagazinesturret ["PylonRack_12Rnd_missiles",[-1]];
_plane removeMagazinesturret ["JAS_PylonWeapon_300Rnd_20mm_shells",[-1]];
_plane removeMagazinesturret ["PylonWeapon_2000Rnd_65x39_belt",[-1]];
_plane removeMagazinesturret ["JAS_19Rnd_Rocket_Skyfire",[-1]];
_plane removeweaponturret ["Laserdesignator_mounted",[-1]];
_plane removeweaponturret ["JAS_FIR_AIM132_Pylon",[-1]];
_plane removeweaponturret ["missiles_SCALPEL",[-1]];
_plane removeweaponturret ["missiles_DAGR",[-1]];
_plane removeweaponturret ["missiles_DAR",[-1]];
_plane removeweaponturret ["JAS_Twin_Cannon_20mm",[-1]];
_plane removeweaponturret ["LMG_Minigun_heli",[-1]];
_plane removeweaponturret ["JAS_rockets_Skyfire",[-1]];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";
_plane addmagazineturret ["Laserbatteries",[0]];
_plane addweaponturret ["Laserdesignator_mounted",[0]];

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading ...", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["PylonLeft1", "", true, []];
			_plane setPylonLoadOut ["PylonLeft1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["PylonLeft1", "", true, []];
			_plane setPylonLoadOut ["PylonLeft1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["PylonLeft1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["PylonLeft1", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		/*case 6:
		{
			_plane setPylonLoadOut ["PylonLeft1", "PylonWeapon_2000Rnd_65x39_belt", true, []];
		};*/
		case 6:
		{
			_plane setPylonLoadOut ["PylonLeft1", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["PylonRight1", "", true, []];
			_plane setPylonLoadOut ["PylonRight1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["PylonRight1", "", true, []];
			_plane setPylonLoadOut ["PylonRight1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["PylonRight1", "JAS_FIR_AIM132_1rnd_PYLON_M", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_12Rnd_PG_missiles", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["PylonRight1", "PylonRack_12Rnd_missiles", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["PylonRight1", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["PylonRight1", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "ORCA_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\ORCA_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "ORCA_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\ORCA_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "ORCA_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\ORCA_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 5;

titleText ["Loading Complete", "PLAIN DOWN",0.5];
