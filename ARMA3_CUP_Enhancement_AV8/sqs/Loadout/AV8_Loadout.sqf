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
_plane removeMagazines "1000Rnd_Gatling_30mm_Plane_CAS_01_F";
_plane removeMagazines "FIR_GAU12_300rnd_M";
_plane removeMagazines "FIR_AIM120_1rnd_M";
_plane removeMagazines "FIR_AIM9L_1rnd_M";
_plane removeMagazines "FIR_GBU31_1rnd_M";
_plane removeMagazines "FIR_GBU32_1rnd_M";
_plane removeMagazines "FIR_GBU38_1rnd_M";
_plane removeMagazines "FIR_GBU10_1rnd_M";
_plane removeMagazines "FIR_GBU12_1rnd_M";
_plane removeMagazines "FIR_GBU24A_1rnd_M";
_plane removeMagazines "FIR_GBU24B_1rnd_M";
_plane removeMagazines "FIR_GBU24A_BLU118_1rnd_M";
_plane removeMagazines "JAS_FIR_mk82_snakeye_1rnd_M";
_plane removeMagazines "FIR_mk82_gp_1rnd_M";
_plane removeMagazines "FIR_CBU87_1rnd_M";
_plane removeMagazines "FIR_CBU89_1rnd_M";
_plane removeMagazines "FIR_CBU97_1rnd_M";
_plane removeMagazines "JAS_JAS_FIR_CBU103_1rnd_M";
_plane removeMagazines "FIR_AGM65D_1rnd_M";
_plane removeMagazines "FIR_AGM65G_1rnd_M";
_plane removeMagazines "FIR_AGM65L_1rnd_M";
_plane removeMagazines "FIR_BLU107_1rnd_M";
_plane removeMagazines "FIR_gbu39_1rnd_M";
_plane removeMagazines "FIR_gbu53_1rnd_M";
_plane removeMagazines "FIR_AGM88_1rnd_M";
_plane removeMagazines "FIR_mk84_gp_1rnd_M";
_plane removeMagazines "FIR_Triplepylon_1rnd_M";
_plane removeMagazines "FIR_LAU88_1rnd_M";

_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";

_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "FIR_SniperXRPod_2_1rnd_M";
_plane removeMagazines "FIR_ECMPod_1rnd_M";

_plane removeweapon "Gatling_30mm_Plane_CAS_01_F";
_plane removeweapon "FIR_GAU12";
_plane removeweapon "FIR_CMLauncher";
_plane removeweapon "FIR_AIM120";
_plane removeweapon "FIR_AIM9L";
_plane removeweapon "FIR_GBU10";
_plane removeweapon "FIR_GBU12";
_plane removeweapon "JAS_FIR_GBU24A";
_plane removeweapon "JAS_FIR_GBU24B";
_plane removeweapon "JAS_FIR_GBU24_118";
_plane removeweapon "FIR_GBU31";
_plane removeweapon "FIR_GBU32";
_plane removeweapon "FIR_GBU38";
_plane removeweapon "JAS_FIR_mk82_Snakeye_Launcher";
_plane removeWeapon "FIR_mk82_Snakeye_Launcher";
_plane removeweapon "FIR_CBU87";
_plane removeweapon "FIR_CBU89";
_plane removeweapon "FIR_CBU97";
_plane removeweapon "JAS_FIR_CBU103";
_plane removeweapon "FIR_AGM65";
_plane removeweapon "FIR_AGM88";
_plane removeweapon "FIR_GBU39";
_plane removeweapon "FIR_GBU53";
_plane removeweapon "Rocket_04_HE_Plane_CAS_01_F";
_plane removeweapon "Rocket_04_AP_Plane_CAS_01_F";
_plane removeweapon "FIR_BLU107";
_plane removeweapon "FIR_mk84";

_plane removeMagazines "FIR_F15E_Fueltank_1rnd_M";

_plane removeMagazines "Laserbatteries";
_plane removeWeapon "Laserdesignator_mounted";

//remove CUP ammo and weapons

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

_plane addmagazine "FIR_GAU12_300rnd_M";
_plane addweapon "FIR_GAU12";

_plane addweapon "FIR_CMLauncher";
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";


/* -1 is Default Texture. -1 is not choose, mean blank in the combo box. */

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];
/*
_plane addmagazine "FIR_Empty_1rnd_M"; //right inboard - TER available - 5
_plane addmagazine "FIR_Empty_1rnd_M"; //left inboard - TER available - 6
_plane addmagazine "FIR_Empty_1rnd_M";//right midline - 3
_plane addmagazine "FIR_Empty_1rnd_M";	//left midline - 4
_plane addmagazine "FIR_Empty_1rnd_M"; //right outboard - 1
_plane addmagazine "FIR_Empty_1rnd_M"; //left outboard - 2

// TER proxies - conditional -  if hp5 switch case = TER then load - if hp6 switch case = TER then load
_plane addmagazine "FIR_Empty_1rnd_M"; //right inboard inner
_plane addmagazine "FIR_Empty_1rnd_M";//left inboard inner
_plane addmagazine "FIR_Empty_1rnd_M";//right inboard outer
_plane addmagazine "FIR_Empty_1rnd_M";//left inboard outer
_plane addmagazine "FIR_Empty_1rnd_M";//right bottom
_plane addmagazine "FIR_Empty_1rnd_M";//left bottom

_plane addweapon "CUP_Vmlauncher_AIM120_veh";
_plane addweapon "CUP_Vmlauncher_AIM9L_veh";
*/
sleep 0.3;
// if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part. 
if (_preset == -1 or _preset == 0) then
{
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
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 27:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
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
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_LAU88_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_Triplepylon_1rnd_M"; //TER 
		};
		case 27:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
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
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 22:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_AGM65D_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM88_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
		case 9:
		{
			_plane addmagazine "FIR_GBU24A_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_GBU24B_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_GBU24A_BLU118_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU31_1rnd_M";
		};
		case 13:
		{
			_plane addmagazine "FIR_gbu32_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_gbu38_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "JAS_FIR_CBU103_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_mk84_gp_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 22:
		{
			_plane addmagazine "FIR_F15E_Fueltank_1rnd_M";
		};
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
			_plane addmagazine "FIR_AIM9L_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
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
			_plane addmagazine "FIR_AIM120_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "FIR_ECMPod_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_SniperXRPod_2_1rnd_M";
			_plane setVariable ["TGT_POD","yes",true];
		};
	};
	
	sleep 0.3;
	
	//TER proxies by hardpoint
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
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
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
			_plane addmagazine "FIR_AGM65D_1rnd_M"; //TER
		};
		case 5:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_AGM65G_1rnd_M"; //TER
		};
		case 7:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_AGM65L_1rnd_M"; //TER
		};
		case 9:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 10:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 11:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 12:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; //TER
		};
		case 13:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 14:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 15:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 16:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 17:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 18:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 19:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 20:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 21:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 22:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 23:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 24:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; //TER
		};
		case 25:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
		case 26:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; //TER
		};
		case 27:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // FIR_mk84_gp_1rnd_M
		};
		case 28:
		{
			_plane addmagazine "FIR_Empty_1rnd_M";
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "AV8_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "jason_aircraft\sqs\Loadout\AV8_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "AV8_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "jason_aircraft\sqs\Loadout\AV8_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "AV8_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "jason_aircraft\sqs\Loadout\AV8_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 5;

titleText ["Loading Weapons", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_agm88count = {_x == "FIR_AGM88_1rnd_M"} count magazines _plane;
_aim9xcount = {_x == "FIR_AIM9L_1rnd_M"} count magazines _plane;
_aim120count = {_x == "FIR_AIM120_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_gbu24Acount = {_x == "FIR_GBU24A_1rnd_M"} count magazines _plane;
_gbu24Bcount = {_x == "FIR_GBU24B_1rnd_M"} count magazines _plane;
_gbu24118count = {_x == "FIR_GBU24A_BLU118_1rnd_M"} count magazines _plane;
_gbu31count = {_x == "FIR_GBU31_1rnd_M"} count magazines _plane;
_gbu32count = {_x == "FIR_GBU32_1rnd_M"} count magazines _plane;
_gbu38count = {_x == "FIR_GBU38_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_cbu103count = {_x == "JAS_FIR_CBU103_1rnd_M"} count magazines _plane;
_agm65dcount = {_x == "FIR_AGM65D_1rnd_M"} count magazines _plane;
_agm65gcount = {_x == "FIR_AGM65G_1rnd_M"} count magazines _plane;
_agm65lcount = {_x == "FIR_AGM65L_1rnd_M"} count magazines _plane;
_gbu39count = {_x == "FIR_gbu39_1rnd_M"} count magazines _plane;
_gbu53count = {_x == "FIR_gbu53_1rnd_M"} count magazines _plane;
_84count = {_x == "FIR_mk84_gp_1rnd_M"} count magazines _plane;

if (_agm88count >= 1) then {_plane addweapon "FIR_AGM88";};
if (_aim120count >= 1) then {_plane addweapon "FIR_AIM120";};
if (_aim9xcount >= 1) then {_plane addweapon "FIR_AIM9L";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_gbu24Acount >= 1) then {_plane addweapon "JAS_FIR_GBU24A";};
if (_gbu24Bcount >= 1) then {_plane addweapon "JAS_FIR_GBU24B";};
if (_gbu24118count >= 1) then {_plane addweapon "JAS_FIR_GBU24_118";};
if (_gbu31count >= 1) then {_plane addweapon "FIR_GBU31";};
if (_gbu32count >= 1) then {_plane addweapon "FIR_GBU32";};
if (_gbu38count >= 1) then {_plane addweapon "FIR_GBU38";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_cbu103count >= 1) then {_plane addweapon "JAS_FIR_CBU103";};
if ((_agm65dcount >= 1) or (_agm65gcount >= 1)or (_agm65lcount >= 1)) then {_plane addweapon "FIR_AGM65";};
if (_gbu39count >= 1) then {_plane addweapon "FIR_gbu39";};
if (_gbu53count >= 1) then {_plane addweapon "FIR_gbu53";};
if (_84count >= 1) then {_plane addweapon "FIR_mk84";};

_fuelcount = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _plane;

Switch (_fuelcount) Do
{
	case 0:
	{
		_plane setfuel 0.5;
	};
	case 1:
	{
		_plane setfuel 0.75;
	};
	case 2:
	{
		_plane setfuel 1;
	};
};

_TGP = _plane getVariable "TGT_POD";
if (_TGP == "yes") then
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};
	
titleText ["Loading Complete", "PLAIN DOWN",0.5];