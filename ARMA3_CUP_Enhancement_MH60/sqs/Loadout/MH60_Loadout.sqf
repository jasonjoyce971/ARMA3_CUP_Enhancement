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
// Mags
_plane removeMagazinesturret ["FIR_Hydra_7rnd_M",[-1]];
_plane removeMagazinesturret ["FIR_JLAU_3_19rnd_M",[-1]];
_plane removeMagazines "JAS_AGM114K_1rnd_M";
_plane removeMagazines "JAS_AGM114N_1rnd_M";

// Pods
_plane removeMagazines "FIR_Hydra_7_Pod_1rnd_M";
_plane removeMagazines "FIR_JLAU_3_Pod_1rnd_M";
_plane removeMagazines "JAS_CUP_1Rnd_AGM_Rack_M";

// CM Systems
_plane removeweapon "FIR_CMLauncher";
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "FIR_Empty_1rnd_M";

// Weapons
_plane removeweaponturret ["FIR_RKT_Launcher",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_K",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N",[0]];

// Anims + CUP shit
_plane removeMagazines "CUP_2Rnd_pylonblank_M";
_plane animate ["Hide_ESSS2x", 1];
_plane animate ["Hide_ESSS4x", 1];
_plane setVariable ["ESSS","0",true];

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading Guns and Texture", "PLAIN DOWN",0.5];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";

/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

// CUP LOADING DATA
//"CUP_2Rnd_pylonblank_M", -> possible issue
//"CUP_2Rnd_AGM_Rack_M",
//"CUP_2Rnd_AGM_Rack_M",
//"CUP_8Rnd_AGM114K_Hellfire_II_M",
//"CUP_8Rnd_AGM114K_Hellfire_II_M"

_plane addMagazine "CUP_2Rnd_pylonblank_M";

sleep 0.3;
// if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part.
if (_preset == -1 or _preset == 0) then
{
// ANIM DETECTION
Switch (_hardpoint3) Do
	{
		case 1:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 4:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 5:
		{
			_plane setVariable ["ESSS","4",true];
		};
	};
	
sleep 0.3;

	Switch (_hardpoint4) Do
	{	
		case 1:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 4:
		{
			_plane setVariable ["ESSS","4",true];
		};
		case 5:
		{
			_plane setVariable ["ESSS","4",true];
		};
	};
	
	sleep 0.3;

Switch (_hardpoint1) Do
	{
		case 1:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 4:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 5:
		{
			_plane setVariable ["ESSS","2",true];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case 1:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 2:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 3:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 4:
		{
			_plane setVariable ["ESSS","2",true];
		};
		case 5:
		{
			_plane setVariable ["ESSS","2",true];
		};
	};

sleep 0.3;
	
	/*
	_ESSSState = _plane getVariable "ESSS";
	if (_ESSSState == "4") then
	{
		_plane animate ["Hide_ESSS4x", 0];
	};
	if (_ESSSState == "2") then
	{
		_plane animate ["Hide_ESSS2x", 0];
	};
	*/
	
	_ESSSState = _plane getVariable "ESSS";
	if (_ESSSState == "2") then
	{
		_plane animate ["Hide_ESSS4x", 0];
	};
	if (_ESSSState == "4") then
	{
		_plane animate ["Hide_ESSS2x", 0];
	};
	
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_CUP_1Rnd_AGM_Rack_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
	};
	
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "MH60_Custom_slot1"}) then
			{
				titleText ["You don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_MH60\sqs\Loadout\MH60_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "MH60_Custom_slot2"}) then
			{
				titleText ["You don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_MH60\sqs\Loadout\MH60_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "MH60_Custom_slot3"}) then
			{
				titleText ["You don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["Found custom loadout data. Loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_MH60\sqs\Loadout\MH60_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_hellfireKcount = {_x == "JAS_AGM114K_1rnd_M"} count magazines _plane;
_hellfireNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;

if (_hydra7count >= 1) then 
{
	_plane addweaponturret ["FIR_RKT_Launcher",[-1]];
	_counter7 = 0;

	while {_counter7 < _hydra7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazineturret ["FIR_Hydra_7rnd_M",[-1]];
	};
};
if (_hydra19count >= 1) then
{
	_plane addweaponturret ["FIR_RKT_Launcher",[-1]];
	_counter19 = 0;

	while {_counter19 < _hydra19count} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazineturret ["FIR_JLAU_3_19rnd_M",[-1]];
	};
};
if (_hellfireKcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_K",[0]];
};
if (_hellfireNcount >= 1) then
{
	_plane addweaponturret ["JAS_HellfireLauncher_N",[0]];
};

titleText ["Loading Complete", "PLAIN DOWN",0.5];
