/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9","_rocket1","_rocket2"];

/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
_hardpoint1 = lbCurSel 2100; // Right Wingtip
_hardpoint2 = lbCurSel 2201; // Left Wingtip
_hardpoint3 = lbCurSel 2101; // Right Outboard
_hardpoint4 = lbCurSel 2102; // Left Outboard
_hardpoint5 = lbCurSel 2103; // Right Inboard
_hardpoint6 = lbCurSel 2104; // Left Inboard
_hardpoint7 = lbCurSel 2105; // Right Wingpit
_hardpoint8 = lbCurSel 2106; // Left Wingpit

_rocket1 = lbCurSel 2117; // Rocket Box 1
_rocket2 = lbCurSel 2118; // Rocket Box 2

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeweapon "FIR_CMLauncher";
_plane removeMagazine "JAS_500Rnd_Gatling_30mm_Plane_CAS_02_F";
_plane removeweapon "JAS_Cannon_30mm_Plane_CAS_02_F";
_plane removeMagazine "Laserbatteries";
_plane removeweapon "Laserdesignator_pilotCamera";

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

_plane removeweapon "JAS_BIS_weapon_R73Launcher";
_plane removeweapon "JAS_CUP_Vacannon_GSh23L_PYLON";
_plane removeweapon "JAS_missiles_SCALPEL";
_plane removeweapon "JAS_Bomb_03_Plane_CAS_02_F_RBK";
_plane removeweapon "JAS_1Rnd_Bomb_03_F";
_plane removeweapon "JAS_Rocket_03_HE_Plane_CAS_02_F";
_plane removeweapon "JAS_Rocket_03_AP_Plane_CAS_02_F";
_plane removeweapon "JAS_rockets_Skyfire";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MPU";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25R";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MTP";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MT";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MS";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25ML";

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";
_plane addmagazine "JAS_500Rnd_Gatling_30mm_Plane_CAS_02_F";
_plane addweapon "JAS_Cannon_30mm_Plane_CAS_02_F";
_plane addmagazine "Laserbatteries";
_plane addweapon "Laserdesignator_pilotCamera";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading ...", "PLAIN DOWN",0.5];

sleep 0.3;

/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do // right wingtip
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
			_plane setPylonLoadOut ["pylons1", "JAS_R73_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint2) Do // left wingtip
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
			_plane setPylonLoadOut ["pylons10", "JAS_R73_PYLON_M", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint6) Do // left inner mid
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
			_plane setPylonLoadOut ["pylons7", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_R73_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint5) Do // right inner mid
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
			_plane setPylonLoadOut ["pylons4", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_R73_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do // left outer mid
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
			_plane setPylonLoadOut ["pylons9", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons9", "JAS_R73_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint3) Do // right outer mid
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
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_R73_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint7) Do // right inner
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
			_plane setPylonLoadOut ["pylons5", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_R73_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint8) Do // left inner
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
			_plane setPylonLoadOut ["pylons6", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_R73_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, []];
		};
	};
	
	sleep 0.3;
	
	Switch (_rocket1) Do // right outer?
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
			_plane setPylonLoadOut ["pylons3", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_R73_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, []];
		};
	};

sleep 0.3;

	Switch (_rocket2) Do // left outer?
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
			_plane setPylonLoadOut ["pylons8", "JAS_CUP_1Rnd_GSh23_PylonPod_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_4Rnd_LG_scalpel", true, []];
		};		
		case 3:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_1Rnd_Bomb_03_F_RBK", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_1Rnd_Bomb_03_F_PYLON", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_20Rnd_Rocket_03_HE_F", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_20Rnd_Rocket_03_AP_F", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_19Rnd_Rocket_Skyfire", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MPU_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25R_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MTP_x1", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MT_x1", true, []];
		};
		case 12:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25MS_x1", true, []];
		};
		case 13:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_KH25ML_x1", true, []];
		};
		case 14:
		{
			_plane setPylonLoadOut ["pylons8", "JAS_R73_PYLON_M", true, []];
		};
		case 15:
		{
			_plane setPylonLoadOut ["pylons7", "JAS_PylonMissile_1Rnd_BombCluster_02_F", true, []];
		};
	};
	
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "YAK_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Loading Payload Selection From Slot 1", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\Yak_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "YAK_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Loading Payload Selection From Slot 2", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\Yak_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "YAK_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Loading Payload Selection From Slot 3", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\Yak_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3; 

titleText ["Loading Complete", "PLAIN DOWN",0.5];
