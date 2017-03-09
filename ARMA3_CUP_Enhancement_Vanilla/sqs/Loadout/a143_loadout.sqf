/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2100;
_hardpoint1 = lbCurSel 2101;
_hardpoint2 = lbCurSel 2102;
_hardpoint3 = lbCurSel 2103;
_hardpoint4 = lbCurSel 2104;
_hardpoint5 = lbCurSel 2105;
_hardpoint6 = lbCurSel 2106;


_plane setVariable ["TGT_POD","no",true];

/* Delete Weapon and Ammo Before */
_plane removeMagazines "JAS_300Rnd_20mm_shells";
_plane removeMagazines "FIR_AIM9L_1rnd_M";
_plane removeMagazines "FIR_AIM9X_1rnd_M";
_plane removeMagazines "FIR_AIM120_1rnd_M";
_plane removeMagazines "FIR_GBU38_1rnd_M";
_plane removeMagazines "FIR_GBU12_1rnd_M";
_plane removeMagazines "JAS_FIR_mk82_snakeye_1rnd_M";
_plane removeMagazines "FIR_mk82_gp_1rnd_M";
_plane removeMagazines "FIR_CBU87_1rnd_M";
_plane removeMagazines "FIR_CBU89_1rnd_M";
_plane removeMagazines "FIR_CBU97_1rnd_M";
_plane removeMagazines "FIR_CBU103_1rnd_M";
_plane removeMagazines "FIR_AGM65D_1rnd_M";
_plane removeMagazines "FIR_AGM65G_1rnd_M";
_plane removeMagazines "FIR_AGM65L_1rnd_M";
_plane removeMagazines "FIR_AGM88_1rnd_M";
_plane removeMagazines "FIR_CBU105_1rnd_M";

_plane removeMagazines "FIR_Hydra_7rnd_M";
_plane removeMagazines "FIR_Zuni_4rnd_M";

_plane removeMagazines "FIR_Hydra_7_Pod_1rnd_M";
_plane removeMagazines "FIR_Zuni_5_Pod_1rnd_M";

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "FIR_LITENING_1_1rnd_M";

_plane removeMagazines "Laserbatteries";

_plane removeweapon "JAS_gatling_20mm";
_plane removeweapon "FIR_CMLauncher";
_plane removeweapon "FIR_AIM9L";
_plane removeweapon "FIR_AIM9X";
_plane removeweapon "FIR_AIM120";
_plane removeweapon "FIR_GBU12";
_plane removeweapon "FIR_GBU38";
_plane removeweapon "FIR_mk82_Snakeye_Launcher";
_plane removeWeapon "JAS_FIR_mk82_Snakeye_Launcher";
_plane removeweapon "FIR_CBU87";
_plane removeweapon "FIR_CBU89";
_plane removeweapon "FIR_CBU97";
_plane removeweapon "FIR_CBU103";
_plane removeWeapon "JAS_FIR_AGM65L";
_plane removeWeapon "JAS_FIR_AGM65G";
_plane removeWeapon "JAS_FIR_AGM65D";
_plane removeWeapon "JAS_HYDRA_Launcher";
_plane removeWeapon "JAS_ZUNI_Launcher";
_plane removeweapon "FIR_AGM88";
_plane removeweapon "FIR_CBU105";

_plane removeweapon "Laserdesignator_mounted";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

_plane addweapon "JAS_gatling_20mm";
_plane addweapon "FIR_CMLauncher";

_plane addmagazine "JAS_300Rnd_20mm_shells";

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";


/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

_plane vehiclechat "Loading weapon system - please wait";

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_LITENING_1_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
			//_plane addmagazine "Laserbatteries";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU38_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU103_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_CBU105_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
		};
	};
	
sleep 0.3;

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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM9X_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M";
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
			if (isNil {profileNamespace getVariable "A143_Custom_slot1"}) then
			{
				_plane vehiclechat "you don't have custom loadout data in slot 1!";
			}
			else
			{
				_plane vehiclechat "found custom loadout data. loading..";
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\A143_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "A143_Custom_slot2"}) then
			{
				_plane vehiclechat "you don't have custom loadout data in slot 2!";
			}
			else
			{
				_plane vehiclechat "found custom loadout data. loading..";
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\A143_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "A143_Custom_slot3"}) then
			{
				_plane vehiclechat "you don't have custom loadout data in slot 3!";
			}
			else
			{
				_plane vehiclechat "found custom loadout data. loading..";
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\A143_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

_plane_magazine = magazines _plane;

sleep 0.3;

_aim9count = {_x == "FIR_AIM9L_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "FIR_AIM9X_1rnd_M"} count magazines _plane;
_aim120count = {_x == "FIR_AIM120_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_hydracount = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_zunicount = {_x == "FIR_Zuni_5_Pod_1rnd_M"} count magazines _plane;
_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
//_TGPCount =  {_x == "Laserbatteries"} count magazines _plane;
_cbu105count = {_x == "FIR_CBU105_1rnd_M"} count magazines _plane;

if (_aim9count >= 1) then {_plane addweapon "FIR_AIM9L";};
if (_aim9xcount >= 1) then {_plane addweapon "FIR_AIM9X";};
if (_aim120count >= 1) then {_plane addweapon "FIR_AIM120";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "FIR_CBU103";};
if (_agm65dcount >= 1) then {_plane addweapon "JAS_FIR_AGM65D"};
if (_agm65gcount >= 1) then {_plane addweapon "JAS_FIR_AGM65G"};
if (_agm65lcount >= 1) then {_plane addweapon "JAS_FIR_AGM65L";};
if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
//if (_TGPCount >= 1) then {_plane addweapon "Laserdesignator_mounted";};
if (_cbu105count >= 1) then {_plane addweapon "FIR_CBU105";};

if (_hydracount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydracount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "FIR_Hydra_7rnd_M";
	};
};
if (_zunicount >= 1) then
{
	_plane addweapon "JAS_ZUNI_Launcher";
	_counter5 = 1;

	while {_counter5 <= _zunicount} do
	{
		_counter5 = _counter5 + 1;
		_plane addmagazine "FIR_Zuni_4rnd_M";
	};
};

_tgt_1 = {_x == "FIR_LITENING_1_1rnd_M"} count magazines _plane;

if (_tgt_1 >= 1) then
{
_plane addweapon "Laserdesignator_mounted";

_plane addmagazine "Laserbatteries";
};

_plane setfuel 1;

_plane vehiclechat "Weapon system Loaded";