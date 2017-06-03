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

_plane removeweaponturret ["rockets_Skyfire",[-1]];
_plane removeweaponturret ["rockets_Skyfire",[0]];

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeweapon "FIR_CMLauncher";
_plane removeMagazinesturret ["250Rnd_30mm_HE_shells_Tracer_Green",[0]];
_plane removeMagazinesturret ["250Rnd_30mm_APDS_shells_Tracer_Green",[0]];
_plane removeMagazinesturret ["Laserbatteries",[0]];
_plane removeweaponturret ["Laserdesignator_mounted",[0]];

_plane removeweaponturret ["missiles_SCALPEL",[0]];
_plane removeweaponturret ["Rocket_03_HE_Plane_CAS_02_F",[-1]];
_plane removeweaponturret ["Rocket_03_AP_Plane_CAS_02_F",[-1]];
_plane removeweaponturret ["JAS_rockets_Skyfire",[0]];
_plane removeweaponturret ["JAS_BIS_weapon_R73Launcher",[0]];
_plane removeweaponturret ["JAS_Twin_Cannon_20mm",[-1]];
_plane removeweaponturret ["JAS_1Rnd_Bomb_03_F",[0]];
_plane removeweaponturret ["JAS_FIR_KAB500KR_Launcher",[0]];
_plane removeweaponturret ["JAS_FIR_KAB500SE_Launcher",[0]];
_plane removeweaponturret ["JAS_FIR_KAB500L_Launcher",[0]];
//_plane removeweapon "JAS_BIS_weapon_AGM_KH25MPU";
_plane removeweaponturret ["JAS_BIS_weapon_AGM_KH25R",[0]];
_plane removeweaponturret ["JAS_BIS_weapon_AGM_KH25MTP",[0]];
_plane removeweaponturret ["JAS_BIS_weapon_AGM_KH25MT",[0]];
_plane removeweaponturret ["JAS_BIS_weapon_AGM_KH25MS",[0]];
_plane removeweaponturret ["JAS_BIS_weapon_AGM_KH25ML",[0]];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";
_plane addmagazineturret ["250Rnd_30mm_HE_shells_Tracer_Green",[0]];
_plane addmagazineturret ["250Rnd_30mm_APDS_shells_Tracer_Green",[0]];
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
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
			_plane setPylonLoadOut ["pylonLeft1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		/*case 13:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MPU_x1", true, [0]];
		};*/
		case 13:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25R_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MTP_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MT_x1", true, [0]];
		};
		/*case 16:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MS_x1", true, [0]];
		};*/
		case 16:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25ML_x1", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left Outboard
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
			_plane setPylonLoadOut ["pylonRight1", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		/*case 13:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_KH25MPU_x1", true, [0]];
		};*/
		case 13:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25R_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MTP_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MT_x1", true, [0]];
		};
		/*case 16:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25MS_x1", true, [0]];
		};*/
		case 16:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_KH25ML_x1", true, [0]];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do // Right Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft2", "", true, []];
			_plane setPylonLoadOut ["pylonLeft2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft2", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		/*case 13:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MPU_x1", true, [0]];
		};*/
		case 13:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25R_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MTP_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MT_x1", true, [0]];
		};
		/*case 16:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MS_x1", true, [0]];
		};*/
		case 16:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25ML_x1", true, [0]];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // Left Midline
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight2", "", true, []];
			_plane setPylonLoadOut ["pylonRight2", "", true, [0]];
		};		
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_1Rnd_LG_scalpel", true, [0]];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_3Rnd_LG_scalpel", true, [0]];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_4Rnd_LG_scalpel", true, [0]];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight2", "PylonRack_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_19Rnd_Rocket_Skyfire", true, [0]];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_R73_PYLON_M", true, [0]];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_PylonWeapon_300Rnd_20mm_shells", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_1Rnd_Bomb_03_F_PYLON", true, [0]];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_KAB500KR_x1", true, [0]];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_KAB500SE_x1", true, [0]];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_FIR_KAB500L_x1", true, [0]];
		};
		/*case 13:
		{
			_plane setPylonLoadOut ["pylonLeft2", "JAS_KH25MPU_x1", true, [0]];
		};*/
		case 13:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25R_x1", true, [0]];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MTP_x1", true, [0]];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MT_x1", true, [0]];
		};
		/*case 16:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25MS_x1", true, [0]];
		};*/
		case 16:
		{
			_plane setPylonLoadOut ["pylonRight2", "JAS_KH25ML_x1", true, [0]];
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "MI48_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\MI48_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "MI48_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\MI48_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "MI48_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\MI48_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 10;

titleText ["Loading Complete", "PLAIN DOWN",0.5];