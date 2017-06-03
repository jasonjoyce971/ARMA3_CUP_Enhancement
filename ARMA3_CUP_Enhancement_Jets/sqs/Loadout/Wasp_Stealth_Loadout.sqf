/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9","_hardpoint10","_hardpoint11","_hardpoint12"];
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

_plane removeMagazines "magazine_Fighter01_Gun20mm_AA_x450";
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "Laserbatteries";
_plane removeweapon "weapon_Fighter_Gun20mm_AA";
_plane removeweapon "FIR_CMLauncher";
_plane removeweapon "Laserdesignator_pilotCamera";

_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter2", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter3", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter4", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter5", "", true, []];
_plane setPylonLoadOut ["pylonBayCenter6", "", true, []];
_plane setPylonLoadOut ["pylonBayRight1", "", true, []];
_plane setPylonLoadOut ["pylonBayLeft1", "", true, []];

_plane removeweapon "JAS_FIR_GBU12_Pylon";
_plane removeweapon "JAS_FIR_MK82_Pylon";
_plane removeweapon "JAS_FIR_MK82AIR_Pylon";
_plane removeweapon "JAS_FIR_GBU38_Pylon";
_plane removeweapon "JAS_FIR_AIM9L_Pylon";
_plane removeweapon "JAS_FIR_AIM120_Pylon";
_plane removeweapon "JAS_FIR_AIM7_Pylon";
_plane removeweapon "JAS_BIS_weapon_AGM_65Launcher";
_plane removeweapon "JAS_BIS_weapon_AGM_65HLauncher";
_plane removeweapon "JAS_BIS_weapon_AGM_65LLauncher";
_plane removeweapon "JAS_FIR_CBU87_Pylon";
_plane removeweapon "JAS_FIR_CBU89_Pylon";
_plane removeweapon "JAS_FIR_CBU97_Pylon";
_plane removeweapon "JAS_FIR_AGM84SLAM_Pylon";
_plane removeweapon "JAS_FIR_AGM88_Pylon";
_plane removeweapon "JAS_FIR_AGM154A_Pylon";
_plane removeweapon "JAS_FIR_AGM154C_Pylon";
_plane removeweapon "JAS_FIR_GBU32_Pylon";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

_plane addweapon "weapon_Fighter_Gun20mm_AA";
_plane addweapon "FIR_CMLauncher";
_plane addweapon "Laserdesignator_pilotCamera";
_plane addmagazine "Laserbatteries";
_plane addmagazine "magazine_Fighter01_Gun20mm_AA_x450";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";

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
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter1", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
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
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter2", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
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
			_plane setPylonLoadOut ["pylonBayCenter3", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter4", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter5", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_GBU12_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_CBU87_PYLON_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_CBU97_PYLON_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_MK82_GP_PYLON_M", true, []];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_mk82_snakeye_PYLON_M", true, []];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_AGM154A_PYLON_M", true, []];
		};
		case 7:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_AGM154C_PYLON_M", true, []];
		};
		case 8:
		{
			_plane setPylonLoadOut ["pylonBayCenter6", "JAS_FIR_AIM120_PYLON_M_int", true, []];
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
			_plane setPylonLoadOut ["pylonBayRight1", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayRight1", "JAS_FIR_AIM120_PYLON_M_int", true, []];
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
			_plane setPylonLoadOut ["pylonBayLeft1", "JAS_FIR_AIM9L_PYLON_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonBayLeft1", "JAS_FIR_AIM120_PYLON_M_int", true, []];
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "Wasp_Stealth_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Wasp_Stealth_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "Wasp_Stealth_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Wasp_Stealth_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "Wasp_Stealth_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Jets\sqs\Loadout\Wasp_Stealth_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Complete", "PLAIN DOWN",0.5];
