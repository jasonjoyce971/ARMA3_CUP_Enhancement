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

_plane setVariable ["TGT_POD","no",true];

/* Delete Weapon and Ammo Before */
_plane removeMagazinesturret ["JAS_CUP_40Rnd_S8_M",[-1]];
_plane removeMagazinesturret ["JAS_S13_5rnd_M",[-1]];
_plane removeMagazinesturret ["JAS_CUP_1Rnd_FAB250_M",[0]];
_plane removeMagazinesturret ["JAS_CUP_1Rnd_KAB250_M",[0]];
_plane removeMagazinesturret ["CUP_2Rnd_Igla_M",[0]];
_plane removeMagazinesturret ["CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M",[-1]];
_plane removeMagazinesturret ["JAS_CUP_1Rnd_AT2_M",[0]];
_plane removeMagazinesturret ["JAS_CUP_1Rnd_AT6_M",[0]];
_plane removeMagazinesturret ["CUP_1470Rnd_TE1_127x108_YakB_AP_M",[0]];

_plane removeMagazines "JAS_CUP_1Rnd_S8_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_S13_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_2Rnd_Igla_Rack_M";
_plane removeMagazines "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
_plane removeMagazines "JAS_CUP_1Rnd_AT2_DummyRack_M";
_plane removeMagazines "JAS_CUP_2Rnd_AT6_Rack_M";

_plane removeMagazines "ProxyCUP_3M11_Falanga_AT2_proxy";
_plane removeMagazines "ProxyCUP_FAB250";
_plane removeMagazines "JAS_prox_KAB250";

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "FIR_Empty_1rnd_M";

_plane removeweaponturret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
_plane removeweaponturret ["JAS_CUP_Vmlauncher_S13_veh",[-1]];
_plane removeweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[0]];
_plane removeweaponturret ["JAS_CUP_Vblauncher_KAB250_veh",[0]];
_plane removeweaponturret ["CUP_Vmlauncher_Igla_twice_veh",[0]];
_plane removeweaponturret ["CUP_Vacannon_GSh23L_in_veh",[-1]];
_plane removeweaponturret ["JAS_CUP_Vmlauncher_AT2_veh",[0]];
_plane removeweaponturret ["CUP_Vacannon_Yakb_veh",[0]];

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading Guns and Texture", "PLAIN DOWN",0.5];

_plane addweapon "FIR_CMLauncher";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane addweaponturret ["CUP_Vacannon_Yakb_veh",[0]];
_plane addmagazineturret ["CUP_1470Rnd_TE1_127x108_YakB_AP_M",[0]];

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
			_plane addmagazine "JAS_CUP_2Rnd_AT6_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_AT6_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_CUP_2Rnd_Igla_Rack_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
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
			_plane addmagazine "JAS_CUP_2Rnd_GSh23_Pod_Heli_M";
		};
		case 2:
		{
			_plane addmagazine "JAS_CUP_1Rnd_S8_Pod_Heli_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_S13_Pod_Heli_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_FAB250_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_KAB250_M";
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
	};
	
	// fill out empty proxies with empties
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
			if (isNil {profileNamespace getVariable "MI35_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_MI24\sqs\Loadout\MI35_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "MI35_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_MI24\sqs\Loadout\MI35_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "MI35_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_MI24\sqs\Loadout\MI35_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_s8count = {_x == "JAS_CUP_1Rnd_S8_Pod_Heli_M"} count magazines _plane;
_s13count = {_x == "JAS_CUP_S13_Pod_Heli_M"} count magazines _plane;
_fab250count = {_x == "JAS_CUP_1Rnd_FAB250_M"} count magazines _plane;
_kab250count = {_x == "JAS_CUP_1Rnd_KAB250_M"} count magazines _plane;
_iglacount = {_x == "JAS_CUP_2Rnd_Igla_Rack_M"} count magazines _plane;
_AT6count = {_x == "JAS_CUP_2Rnd_AT6_Rack_M"} count magazines _plane;
_gpodcount = {_x == "JAS_CUP_2Rnd_GSh23_Pod_Heli_M"} count magazines _plane;

if (_s8count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_S8_veh",[-1]];
	_counter = 0;

	while {_counter < _s8count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_40Rnd_S8_M",[-1]];
	};
};
if (_s13count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_S13_veh",[-1]];
	_counter = 0;

	while {_counter < _s13count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_S13_5rnd_M",[-1]];
	};
};
if (_fab250count >= 1) then
{
	_plane addweaponturret ["JAS_CUP_Vblauncher_Fab250_veh",[0]];
	_counter = 0;

	while {_counter < _fab250count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["ProxyCUP_FAB250",[0]];
	};
};
if (_kab250count >= 1) then
{
	_plane addweaponturret ["JAS_CUP_Vblauncher_KAB250_veh",[0]];
	_counter = 0;

	while {_counter < _kab250count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_prox_KAB250",[0]];
	};
};
if (_iglacount >= 1) then 
{
	_plane addweaponturret ["CUP_Vmlauncher_Igla_twice_veh",[0]];
	_counter = 0;

	while {_counter < _iglacount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_2Rnd_Igla_M",[0]];
	};
};
if (_AT6count >= 1) then 
{
	_plane addweaponturret ["JAS_CUP_Vmlauncher_AT6_veh",[0]];
	_counter = 0;

	while {_counter < _AT6count} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["JAS_CUP_1Rnd_AT6_M",[0]];
		_plane addmagazineturret ["JAS_CUP_1Rnd_AT6_M",[0]];
	};
};
if (_gpodcount >= 1) then 
{
	_plane addweaponturret ["CUP_Vacannon_GSh23L_in_veh",[-1]];
	_counter = 0;

	while {_counter < _gpodcount} do
	{
		_counter = _counter + 1;
		_plane addmagazineturret ["CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M",[-1]];
	};
};

titleText ["Loading Complete", "PLAIN DOWN",0.5];