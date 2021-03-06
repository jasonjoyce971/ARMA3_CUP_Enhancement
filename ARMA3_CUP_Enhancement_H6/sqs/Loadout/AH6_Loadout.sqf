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

_plane setVariable ["TGT_POD","no",true];

// Delete Weapon and Ammo Before
_plane removeMagazines "JAS_AGM114K_1rnd_M";
_plane removeMagazines "JAS_AGM114N_1rnd_M";
_plane removeMagazines "CUP_1Rnd_AGM_2Rack_M";
_plane removeMagazines "FIR_JLAU_3_Pod_1rnd_M";
_plane removeMagazines "FIR_Hydra_7_Pod_1rnd_M";
_plane removemagazines "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
_plane removeMagazinesturret ["FIR_JLAU_3_19rnd_M",[-1]];
_plane removeMagazinesturret ["FIR_Hydra_7rnd_M",[-1]];
_plane removeMagazinesturret ["FIR_Hydra_APKWS_7rnd_M",[0]];
_plane removeMagazinesturret ["CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M",[-1]];
_plane removeMagazinesturret ["CUP_1200Rnd_TE1_Red_Tracer_GAU19_M",[-1]];

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M";

_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "FIR_SniperXRPod_2_1rnd_M";
_plane removeMagazines "FIR_ECMPod_1rnd_M";

_plane removeweaponturret ["FIR_RKT_Launcher",[-1]];
_plane removeweaponturret ["CUP_Vlmg_TwinM134_veh",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_K",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N",[0]];
_plane removeweaponturret ["FIR_APKWS_Launcher",[0]];
_plane removeweaponturret ["CUP_Vhmg_GAU19_veh",[-1]];
_plane removeweaponturret ["CUP_Vhmg_TwinGAU19_veh",[-1]];

_plane removeweaponturret ["JAS_CUP_Vhmg_GAU10_L_veh",[0]];
_plane removeweaponturret ["JAS_CUP_Vhmg_GAU10_R_veh",[0]];
_plane removeweaponturret ["JAS_HYDRA_Launcher",[0]];
_plane removeweaponturret ["JAS_FIR_APKWS_Pylon_Launcher",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_K_Pylon",[0]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[0]];

_plane removeweaponturret ["JAS_CUP_Vhmg_GAU10_L_veh",[-1]];
_plane removeweaponturret ["JAS_CUP_Vhmg_GAU10_R_veh",[-1]];
_plane removeweaponturret ["JAS_HYDRA_Launcher",[-1]];
_plane removeweaponturret ["JAS_FIR_APKWS_Pylon_Launcher",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_K_Pylon",[-1]];
_plane removeweaponturret ["JAS_HellfireLauncher_N_Pylon",[-1]];

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane setPylonLoadOut ["pylonLeft1", "", true, []];
_plane setPylonLoadOut ["pylonRight1", "", true, []];

//remove CUP ammo and weapons
_plane animate ["hideGauL", 1];
_plane animate ["hideGauR", 1];

// GAU tracker
_GAUcount = 0;

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addmagazine "CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M";
_plane addweapon "FIR_CMLauncher";
_plane addweapon "CUP_Vlmg_TwinM134_veh";

_plane addMagazineturret ["FIR_240rnd_CMFlare_Chaff_Magazine",[-1]];
_plane addweaponturret ["FIR_CMLauncher",[-1]];
_plane addMagazineturret ["CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M",[-1]];
_plane addweaponturret ["CUP_Vlmg_TwinM134_veh",[-1]];

/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;
/* if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. */
if (_preset == -1 or _preset == 0) then
{
	Switch (_hardpoint1) Do // Right
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonRight1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19R_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonRight1", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do // Left
	{
		case -1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
		};
		case 0:
		{
			_plane setPylonLoadOut ["pylonLeft1", "", true, []];
		};
		case 1:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19L_M", true, []];
		};
		case 2:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_P_7rnd_M", true, []];
		};
		case 3:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_19Rnd_Rocket_FFAR_M", true, []];
		};
		case 4:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_FIR_Hydra_APKWS_Pod_1rnd_PYLON_M", true, [0]];
		};
		case 5:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M", true, [0]];
		};
		case 6:
		{
			_plane setPylonLoadOut ["pylonLeft1", "JAS_CUP_PylonPod_2Rnd_AGM114N_Hellfire_II_M", true, [0]];
		};
	};

	/*
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
			_plane animate ["hideGauR", 0];
			_plane addmagazineturret ["CUP_1200Rnd_TE1_Red_Tracer_GAU19_M",[-1]];
			_GAUcount = _GAUcount + 1;
			
			lbSetCurSel [2201, 1];
		};
		case 2:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
		};
		case 6:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
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
			_plane animate ["hideGauL", 0];
			_plane addmagazineturret ["CUP_1200Rnd_TE1_Red_Tracer_GAU19_M",[-1]];
			_GAUcount = _GAUcount + 1;
			
			lbSetCurSel [2100, 1];
		};
		case 2:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
		};
		case 6:
		{
			_plane addmagazine "CUP_1Rnd_AGM_2Rack_M";
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
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
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "JAS_AGM114K_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "JAS_AGM114N_1rnd_M";
		};
	};
	*/
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "AH6_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_CUP_Enhancement_H6\sqs\Loadout\AH6_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "AH6_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_CUP_Enhancement_H6\sqs\Loadout\AH6_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "AH6_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_CUP_Enhancement_H6\sqs\Loadout\AH6_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 5;

/*
titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

//_GAUcount = {_x == "CUP_1200Rnd_TE1_Red_Tracer_GAU19_M"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_hellfireKcount = {_x == "JAS_AGM114K_1rnd_M"} count magazines _plane;
_hellfireNcount = {_x == "JAS_AGM114N_1rnd_M"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;

if (_GAUcount == 1) then {_plane addweaponturret ["CUP_Vhmg_GAU19_veh",[-1]];};
if (_GAUcount == 2) then {_plane addweaponturret ["CUP_Vhmg_TwinGAU19_veh",[-1]];};

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
if (_APKWS7count >= 1) then 
{
	_plane addweaponturret ["FIR_APKWS_Launcher",[0]];
	_counter7 = 0;

	while {_counter7 < _APKWS7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazineturret ["FIR_Hydra_APKWS_7rnd_M",[0]];
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
*/
titleText ["Loading Complete", "PLAIN DOWN",0.5];