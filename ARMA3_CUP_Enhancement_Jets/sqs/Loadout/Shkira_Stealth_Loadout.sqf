/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9","_hardpoint10","_hardpoint11","_hardpoint12","_hardpoint13"];
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
_hardpoint11 = lbCurSel 2117;
_hardpoint12 = lbCurSel 2118;
_hardpoint13 = lbCurSel 3202;

_plane removeMagazines "FIR_Empty_1rnd_M";

_plane removeMagazines "magazine_Fighter02_Gun30mm_AA_x180";
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "Laserbatteries";
_plane removeweapon "weapon_Fighter_Gun_30mm";
_plane removeweapon "FIR_CMLauncher";
_plane removeweapon "Laserdesignator_pilotCamera";

_plane setPylonLoadOut ["pylons1", "", true, []];
_plane setPylonLoadOut ["pylons2", "", true, []];
_plane setPylonLoadOut ["pylons3", "", true, []];
_plane setPylonLoadOut ["pylons4", "", true, []];
_plane setPylonLoadOut ["pylons5", "", true, []];
_plane setPylonLoadOut ["pylons6", "", true, []];
_plane setPylonLoadOut ["pylonBayRight1", "", true, []];
_plane setPylonLoadOut ["pylonBayLeft1", "", true, []];
_plane setPylonLoadOut ["pylonBayRight2", "", true, []];
_plane setPylonLoadOut ["pylonBayLeft2", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter2", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter3", "", true, []];

_plane removeweapon "JAS_BIS_weapon_R73Launcher";
_plane removeweapon "JAS_BIS_weapon_R77Launcher";
_plane removeweapon "JAS_FIR_KAB500KR_Launcher";
_plane removeweapon "JAS_FIR_KAB500SE_Launcher";
_plane removeweapon "JAS_FIR_KAB500L_Launcher";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MPU";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25R";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MTP";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MT";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25MS";
_plane removeweapon "JAS_BIS_weapon_AGM_KH25ML";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

_plane addmagazine "magazine_Fighter02_Gun30mm_AA_x180";
_plane addweapon "weapon_Fighter_Gun_30mm";
_plane addmagazine "Laserbatteries";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";
_plane addweapon "Laserdesignator_pilotCamera";

_plane removeMPEventHandler ["MPHit", 0]; 

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
			_plane setPylonLoadOut ["pylons1", "JAS_R73_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons1", "JAS_R77_PYLON_M", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
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
			_plane setPylonLoadOut ["pylons2", "JAS_R73_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons2", "JAS_R77_PYLON_M", true, []];
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
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_KAB500KR_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_KAB500SE_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_FIR_KAB500L_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MPU_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25R_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MTP_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MT_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25MS_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_KH25ML_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_R73_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons3", "JAS_R77_PYLON_M", true, []];
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
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_KAB500KR_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_KAB500SE_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_FIR_KAB500L_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MPU_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25R_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MTP_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MT_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25MS_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_KH25ML_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_R73_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons4", "JAS_R77_PYLON_M", true, []];
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
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_KAB500KR_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_KAB500SE_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_FIR_KAB500L_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MPU_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25R_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MTP_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MT_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25MS_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_KH25ML_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_R73_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons5", "JAS_R77_PYLON_M", true, []];
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
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_KAB500KR_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_KAB500SE_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_FIR_KAB500L_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MPU_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25R_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MTP_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MT_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25MS_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_KH25ML_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_R73_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylons6", "JAS_R77_PYLON_M", true, []];
		};
	};

	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "JAS_R73_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "JAS_R77_PYLON_M", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "JAS_R73_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "JAS_R77_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "JAS_R73_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayRight2", "JAS_R77_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "JAS_R73_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayLeft2", "JAS_R77_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint11) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_KAB500KR_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_KAB500SE_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_KAB500L_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_KH25MPU_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_KH25R_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_KH25MTP_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_KH25MT_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_KH25MS_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_KH25ML_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_R73_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_R77_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint12) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_KAB500KR_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_KAB500SE_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_KAB500L_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_KH25MPU_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_KH25R_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_KH25MTP_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_KH25MT_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_KH25MS_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_KH25ML_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_R73_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_R77_PYLON_M", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint13) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_KAB500KR_x1", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_KAB500SE_x1", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_KAB500L_x1", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MPU_x1", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25R_x1", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MTP_x1", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MT_x1", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25MS_x1", true, []];
		};
		case 9:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_KH25ML_x1", true, []];
		};
		case 10:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_R73_PYLON_M", true, []];
		};
		case 11:
		{
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_R77_PYLON_M", true, []];
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "Shkira_Stealth_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Shkira_Stealth_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "Shkira_Stealth_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Shkira_Stealth_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "Shkira_Stealth_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Shkira_Stealth_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Complete", "PLAIN DOWN",0.5];
