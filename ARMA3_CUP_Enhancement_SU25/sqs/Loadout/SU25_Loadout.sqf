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

_plane setVariable ["TGT_POD","yes",true];

/* Delete Weapon and Ammo Before */
//pods
_plane removeMagazines "JAS_CUP_1Rnd_S8_Pod_Air_M";
_plane removeMagazines "JAS_CUP_S13_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_Vikhr_Rack_6Rnd_M";
_plane removeMagazines "JAS_CUP_1Rnd_S5_Pod_Small_M";

//mags
_plane removeMagazines "JAS_CUP_40Rnd_S8_M";
_plane removeMagazines "JAS_S13_5rnd_M";
_plane removeMagazines "1Rnd_Missile_AA_03_F";
_plane removemagazines "JAS_KH25MPU_1rnd_M";
_plane removemagazines "JAS_KH25R_1rnd_M";
_plane removemagazines "JAS_KH25MS_1rnd_M";
_plane removemagazines "JAS_KH25ML_1rnd_M";
_plane removemagazines "JAS_KH25MT_1rnd_M";
_plane removemagazines "JAS_KH25MTP_1rnd_M";
_plane removeMagazines "FIR_Kh29T_1rnd_M";
_plane removeMagazines "JAS_CUP_1Rnd_FAB250_M";
_plane removeMagazines "FIR_KAB500L_1rnd_M";
_plane removeMagazines "JAS_FIR_CBU250_1rnd_M";
_plane removeMagazines "CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M";
_plane removeMagazines "JAS_CUP_6Rnd_AT16_M";
_plane removeMagazines "JAS_CUP_750Rnd_TE1_30mm_GSh302K_HE_M";
_plane removeMagazines "FIR_Kh29_1rnd_M";
_plane removeMagazines "JAS_CUP_16Rnd_57mm";
_plane removeMagazines "FIR_KAB500KR_1rnd_M";

//weapons
_plane removeweapon "JAS_CUP_Vmlauncher_S8_veh";
_plane removeweapon "JAS_CUP_Vmlauncher_S13_veh";
_plane removeweapon "JAS_R73_Launcher";
_plane removeweapon "JAS_KH25_LAU";
_plane removeweapon "FIR_Kh29T";
_plane removeweapon "JAS_CUP_Vblauncher_Fab250_veh";
_plane removeweapon "FIR_KAB500L";
_plane removeweapon "JAS_FIR_CBU250";
_plane removeweapon "JAS_CUP_Vacannon_GSh23L_in_veh";
_plane removeweapon "JAS_CUP_Vmlauncher_AT16_veh";
_plane removeweapon "JAS_CUP_Vacannon_GSh302K_veh";
_plane removeweapon "FIR_Kh29L";
_plane removeweapon "JAS_CUP_57mmLauncher";
_plane removeweapon "FIR_KAB500KR";

//AWS
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "Laserbatteries";

_plane removeweapon "Laserdesignator_mounted";
_plane removeweapon "FIR_CMLauncher";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";

_plane addmagazine "JAS_CUP_750Rnd_TE1_30mm_GSh302K_HE_M";
_plane addweapon "JAS_CUP_Vacannon_GSh302K_veh";

_plane addmagazine "Laserbatteries";
_plane addweapon "Laserdesignator_mounted";

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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};		
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
	};

sleep 0.3;

	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
	};

sleep 0.3;

	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_KH25MPU_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_KH25R_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_KH25MS_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "JAS_KH25ML_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_KH25MT_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "JAS_KH25MTP_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 11:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_Vikhr_Rack_6Rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Kh29T_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_Kh29_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint9) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
sleep 0.3;

	Switch (_hardpoint10) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 1:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_KAB500L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_KAB500KR_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
	};
	
	//proxies - fill empty then replace individually
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
	_plane addmagazine "FIR_Empty_1rnd_M";
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "SU25_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_SU25\sqs\Loadout\SU25_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "SU25_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_SU25\sqs\Loadout\SU25_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "SU25_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_SU25\sqs\Loadout\SU25_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_S5count = {_x == "JAS_CUP_1Rnd_S5_Pod_Small_M"} count magazines _plane;
_S8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Air_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;
_R73count = {_x == "1Rnd_Missile_AA_03_F"} count magazines _plane;
_KH25MPUcount = {_x == "JAS_KH25MPU_1rnd_M"} count magazines _plane;
_KH25Rcount = {_x == "JAS_KH25R_1rnd_M"} count magazines _plane;
_KH25MScount = {_x == "JAS_KH25MS_1rnd_M"} count magazines _plane;
_KH25MAcount = {_x == "JAS_KH25MA_1rnd_M"} count magazines _plane;
_KH25MLcount = {_x == "JAS_KH25ML_1rnd_M"} count magazines _plane;
_KH25MTcount = {_x == "JAS_KH25MT_1rnd_M"} count magazines _plane;
_KH25MTPcount = {_x == "JAS_KH25MTP_1rnd_M"} count magazines _plane;
_KH29Tcount = {_x == "FIR_Kh29T_1rnd_M"} count magazines _plane;
_FABcount = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_KABcount = {_x == "FIR_KAB500L_1rnd_M"} count magazines _plane;
_KABKRcount = {_x == "FIR_KAB500KR_1rnd_M"} count magazines _plane;
_RBKcount = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;
_vikcount = {_x == "JAS_CUP_Vikhr_Rack_6Rnd_M"} count magazines _plane;
_KH29Lcount = {_x == "FIR_Kh29_1rnd_M"} count magazines _plane;

if (_KH25MPUcount >= 1 || 
	_KH25Rcount >= 1 ||
	_KH25MScount >= 1 ||
	_KH25MAcount >= 1 ||
	_KH25MLcount >= 1 ||
	_KH25MTcount >= 1 ||
	_KH25MTPcount >= 1) then {_plane addweapon "JAS_KH25_LAU";};

if (_R73count >= 1) then {_plane addweapon "JAS_R73_Launcher";};
if (_KH29Tcount >= 1) then {_plane addweapon "FIR_Kh29T";};
if (_FABcount >= 1) then {_plane addweapon "JAS_CUP_Vblauncher_Fab250_veh";};
if (_KABcount >= 1) then {_plane addweapon "FIR_KAB500L";};
if (_KABKRcount >= 1) then {_plane addweapon "FIR_KAB500KR";};
if (_RBKcount >= 1) then {_plane addweapon "JAS_FIR_CBU250";};
if (_KH29Lcount >= 1) then {_plane addweapon "FIR_Kh29L";};

if (_S5count >= 1) then 
{
	_plane addweapon "JAS_CUP_57mmLauncher";
	_counter = 0;

	while {_counter < _S5count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_16Rnd_57mm";
	};
};
if (_S8count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_S8_veh";
	_counter = 0;

	while {_counter < _S8count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_40Rnd_S8_M";
	};
};
if (_s13count >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_S13_veh";
	_counter = 0;

	while {_counter < _s13count} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_S13_5rnd_M";
	};
};
if (_gpodcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vacannon_GSh23L_in_veh";
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M";
	};
};
if (_vikcount >= 1) then 
{
	_plane addweapon "JAS_CUP_Vmlauncher_AT16_veh";
	_counter = 0;

	while {_counter < _vikcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_CUP_6Rnd_AT16_M";
	};
};

titleText ["Loading Complete", "PLAIN DOWN",0.5];