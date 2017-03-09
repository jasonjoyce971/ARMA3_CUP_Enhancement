/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
_hardpoint4 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint1 = lbCurSel 2102;

_plane setVariable ["TGT_POD","no",true];

/* Delete Weapon and Ammo Before */
//pods
_plane removeMagazines "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_1Rnd_S5_Pod_Small_M";
_plane removeMagazines "JAS_CUP_1Rnd_S8_Pod_Air_M";

//pilot mags
_plane removeMagazinesTurret ["CUP_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M",[-1]]; // POD MAG
_plane removeMagazinesTurret ["JAS_CUP_16Rnd_57mm",[-1]];
_plane removeMagazinesTurret ["JAS_CUP_40Rnd_S8_M",[-1]];
_plane removeMagazinesTurret ["JAS_CUP_1Rnd_FAB250_M",[-1]];
_plane removeMagazinesTurret ["JAS_FIR_CBU250_1rnd_M",[-1]];
_plane removeMagazinesTurret ["JAS_CUP_150Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M",[-1]]; // ONBOARD MAG

//gunner mags
_plane removeMagazinesTurret ["1Rnd_Missile_AA_03_F",[0]];
_plane removeMagazinesTurret ["JAS_CUP_1Rnd_KAB250_M",[0]];
_plane removeMagazinesTurret ["JAS_KH25_1rnd_M",[0]];

//aircraft mags (safety net)
_plane removeMagazines "1Rnd_Missile_AA_03_F";
_plane removeMagazines "CUP_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M"; // POD MAG
_plane removeMagazines "JAS_CUP_16Rnd_57mm";
_plane removeMagazines "JAS_CUP_40Rnd_S8_M";
_plane removeMagazines "JAS_CUP_1Rnd_FAB250_M";
_plane removeMagazines "JAS_CUP_1Rnd_KAB250_M";
_plane removeMagazines "JAS_FIR_CBU250_1rnd_M";
_plane removeMagazines "JAS_CUP_150Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M"; // ONBOARD MAG
_plane removeMagazines "JAS_KH25_1rnd_M";

//pilot weapons
_plane removeweaponTurret ["JAS_CUP_Vacannon_GSh23L_in_veh",[-1]];
_plane removeweaponTurret ["JAS_CUP_57mmLauncher",[-1]];
_plane removeweaponTurret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
_plane removeweaponTurret ["JAS_CUP_Vblauncher_Fab250_veh",[-1]];
_plane removeweaponTurret ["JAS_FIR_CBU250",[-1]];
_plane removeweaponTurret ["JAS_CUP_Vacannon_GSh23L_onboard",[-1]];

//gunner weapons
_plane removeweaponTurret ["JAS_R73_Launcher",[0]];
_plane removeweaponTurret ["JAS_CUP_Vblauncher_KAB250_veh",[0]];
_plane removeweaponTurret ["JAS_KH25_LAU",[0]];

//aircraft weapons (safety net)
_plane removeweapon "JAS_R73_Launcher";
_plane removeweapon "JAS_CUP_Vacannon_GSh23L_in_veh";
_plane removeweapon "JAS_CUP_57mmLauncher";
_plane removeweapon "JAS_CUP_Vmlauncher_S8_veh";
_plane removeweapon "JAS_CUP_Vblauncher_Fab250_veh";
_plane removeweapon "JAS_CUP_Vblauncher_KAB250_veh";
_plane removeweapon "JAS_FIR_CBU250";
_plane removeweapon "JAS_CUP_Vacannon_GSh23L_onboard";
_plane removeweapon "JAS_KH25_LAU";

//AWS
_plane removeMagazines "FIR_Empty_1rnd_M";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading Guns and Texture", "PLAIN DOWN",0.5];

// add onboard cannon
_plane addmagazineturret ["JAS_CUP_150Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M",[-1]];
_plane addweaponturret ["JAS_CUP_Vacannon_GSh23L_onboard",[-1]];

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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
		case 1: // R73
		{
			_plane addmagazine "1Rnd_Missile_AA_03_F";
		};
		case 2: // GSh-23
		{
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 3: // S-5
		{
			_plane addmagazine "JAS_CUP_1Rnd_S5_Pod_Small_M";
		};
		case 4: // S-8
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Air_M";
		};
		case 5: // FAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 6: // KAB
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 7: // RBK
		{
			_plane addmagazine "JAS_FIR_CBU250_1rnd_M";
		};
		case 8: // ARM
		{
			_plane addmagazine "JAS_KH25_1rnd_M";
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
			if (isNil {profileNamespace getVariable "L39_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_L39\sqs\Loadout\L39_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "L39_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_L39\sqs\Loadout\L39_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "L39_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_L39\sqs\Loadout\L39_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_R73count = {_x == "1Rnd_Missile_AA_03_F"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;
_s5count = {_x == "JAS_CUP_1Rnd_S5_Pod_Small_M"} count magazines _plane;
_S8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Air_M"} count magazines _plane;
_FABcount = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_KABcount = {_x == "JAS_CUP_1Rnd_KAB250_M"} count magazines _plane;
_RBKcount = {_x == "JAS_FIR_CBU250_1rnd_M"} count magazines _plane;
_ARMcount = {_x == "JAS_KH25_1rnd_M"} count magazines _plane;

if (_R73count >= 1) then {_plane addweaponturret ["JAS_R73_Launcher",[0]];};
if (_KABcount >= 1) then {_plane addweaponturret ["JAS_CUP_Vblauncher_KAB250_veh",[0]];};
if (_ARMcount >= 1) then {_plane addweaponturret ["JAS_KH25_LAU",[0]];}; 

if (_RBKcount >= 1) then 
{
	_plane addweaponturret ["JAS_FIR_CBU250",[-1]];
	_counter = 0;

	while {_counter < _RBKcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_FIR_CBU250_1rnd_M",[-1]];
	};
};
if (_FABcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[-1]];
	_counter = 0;

	while {_counter < _FABcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_1Rnd_FAB250_M",[-1]];
	};
};
if (_S8count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
	_counter = 0;

	while {_counter < _S8count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_40Rnd_S8_M",[-1]];
	};
};
if (_s5count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_57mmLauncher",[-1]];
	_counter = 0;

	while {_counter < _s5count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_16Rnd_57mm",[-1]];
	};
};
if (_gpodcount >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vacannon_GSh23L_in_veh",[-1]];
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M",[-1]];
	};
};

titleText ["Loading Complete", "PLAIN DOWN",0.5];