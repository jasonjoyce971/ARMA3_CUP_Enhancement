/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

_twascount = 0;
_twasredcount = 0;

Private ["_texture","_preset","_hardpoint1","_hardpoint2","_hardpoint3","_hardpoint4","_hardpoint5","_hardpoint5A","_hardpoint6","_hardpoint7","_hardpoint8","_hardpoint9"];
/* Pick up the number from Combo box */
_preset = lbCurSel 2108;
//_hardpoint1 = lbCurSel 2100;
//_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;
_hardpoint5 = lbCurSel 2103;
_hardpoint6 = lbCurSel 2104;
_hardpoint7 = lbCurSel 2105;
_hardpoint8 = lbCurSel 2106;
_hardpoint9 = lbCurSel 2202;
_hardpoint10 = lbCurSel 2107;
_hardpoint11 = lbCurSel 21008;

_plane setVariable ["TGT_POD","no",true];
_plane setVariable ["ECMJAMMER","yes",true];

/* Delete Weapon and Ammo Before */
// mags
_plane removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane removeMagazines "Laserbatteries";
_plane removeMagazines "JAS_rhs_mag_agm65D";
_plane removeMagazines "JAS_rhs_mag_agm65D_x3";
_plane removeMagazines "JAS_rhs_mag_agm65L";
_plane removeMagazines "JAS_rhs_mag_agm65L_x3";
_plane removeMagazines "JAS_rhs_mag_agm65G";
_plane removeMagazines "JAS_FIR_mk82_snakeye_1rnd_M";
_plane removeMagazines "FIR_mk82_gp_1rnd_M";
_plane removeMagazines "FIR_CBU87_1rnd_M";
_plane removeMagazines "FIR_CBU89_1rnd_M";
_plane removeMagazines "FIR_CBU97_1rnd_M";
_plane removeMagazines "FIR_GBU10_1rnd_M";
_plane removeMagazines "FIR_GBU12_1rnd_M";
_plane removeMagazines "FIR_Zuni_4rnd_M";
_plane removeMagazines "FIR_JLAU_3_19rnd_M";
_plane removeMagazines "FIR_Hydra_7rnd_M";
_plane removeMagazines "JAS_FIR_mk84_gp_1rnd_M";
_plane removeMagazines "FIR_SUU25_8rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_7rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_Red_7rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_Orange_7rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_Smoke_Purple_7rnd_M";
_plane removeMagazines "FIR_Hydra_APKWS_7rnd_M";
_plane removeMagazines "JAS_rhs_mag_GAU8";

// pods
_plane removeMagazines "FIR_Empty_1rnd_M";
_plane removeMagazines "rhs_pod_AGM65";
_plane removeMagazines "rhs_pod_agm65x3_rack";
_plane removeMagazines "rhs_pod_empty_agm65";
_plane removeMagazines "FIR_Hydra_7_Pod_1rnd_M";
_plane removeMagazines "FIR_JLAU_3_Pod_1rnd_M";
_plane removeMagazines "FIR_Zuni_5_Pod_1rnd_M";
_plane removeMagazines "FIR_LAU88_1rnd_M";
_plane removeMagazines "FIR_SUU25_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKW_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKR_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKO_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_SMKP_Pod_1rnd_M";
_plane removeMagazines "JAS_FIR_Hydra_APKWS_Pod_1rnd_M";

// weapons
_plane removeWeapon "FIR_CMLauncher";
_plane removeWeapon "Laserdesignator_mounted";
_plane removeWeapon "rhs_weap_SidewinderLauncher";
_plane removeWeapon "JAS_rhs_weap_agm65D";
_plane removeWeapon "JAS_rhs_weap_agm65L";
_plane removeWeapon "JAS_rhs_weap_agm65G";
_plane removeWeapon "JAS_HYDRA_Launcher";
_plane removeWeapon "JAS_ZUNI_Launcher";
_plane removeWeapon "FIR_GBU10";
_plane removeWeapon "FIR_GBU12";
_plane removeWeapon "FIR_mk82_Snakeye_Launcher";
_plane removeWeapon "FIR_CBU87";
_plane removeWeapon "FIR_CBU89";
_plane removeWeapon "FIR_CBU97";
_plane removeWeapon "JAS_FIR_mk82_Snakeye_Launcher";
_plane removeWeapon "JAS_FIR_mk84";
_plane removeWeapon "FIR_SUU25";
_plane removeWeapon "JAS_HYDRA_SMKW_Launcher";
_plane removeWeapon "JAS_HYDRA_SMKR_Launcher";
_plane removeWeapon "JAS_HYDRA_SMKO_Launcher";
_plane removeWeapon "JAS_HYDRA_SMKP_Launcher";
_plane removeWeapon "FIR_APKWS_Launcher";

_plane removeMPEventHandler ["MPHit", 0]; 

sleep 0.3;

titleText ["Loading guns and Texture", "PLAIN DOWN",0.5];

// Load default equipment
_plane addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";
_plane addweapon "FIR_CMLauncher";

if (isClass(configFile >> "CfgPatches" >> "AlZab_mighty_gau8_avenger")) then 
{
	_plane addmagazine "1174Rnd_GAU8_30mm_Plane_CAS_01_F";
}
else
{
	_plane addmagazine "JAS_rhs_mag_GAU8";
};

// -1 is Default Texture. -1 is not choose, mean blank in the combo box.

sleep 0.3;

titleText ["Loading Ammo", "PLAIN DOWN",0.5];

sleep 0.3;

// if preset is not choosed or no preset, pick up the hardpoint number and rearm. but choose the Preset, Proceed the else part.
if (_preset == -1 or _preset == 0) then
{
	// Right Outboard defaults to AIM-9L so load empty
	_plane addMagazine "rhs_pod_empty";
	
	// Right Midline - Station 2/10 configuration
	Switch (_hardpoint3) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		/*case 9:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};*/
		case 9:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 10:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Right Inboard defaults to Maverick - selection may be possible using inherited RHS class. Single and TER both available
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-L
		};
	};
	
	// Right Belly Outer - Station 4/8 configuration
	Switch (_hardpoint7) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Left Belly Outer - Station 4/8 configuration
	Switch (_hardpoint8) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M"; // 84
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M"; // 10
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Belly Centre - Test for proxy if fail -> default empty
	_plane addmagazine "FIR_Empty_1rnd_M";
	/*Switch (_hardpoint11) Do
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
	};*/
	
	// Right Belly Inner - Station 5/7 configuration
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
	};
	
	// Left Belly Inner - Station 5/7 configuration
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
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M";
		};
		case 2:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M";
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_mk84_gp_1rnd_M";
		};
		case 4:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M";
		};
		case 5:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M";
		};
		case 6:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M";
		};
		case 7:
		{
			_plane addmagazine "FIR_GBU10_1rnd_M";
		};
		case 8:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M";
		};
	};
	
	// Left Inboard defaults to Maverick - selection may be possible using inherited RHS class. Single and TER both available
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "rhs_pod_AGM65"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_agm65x3_rack"; // TER Rack for MAV-L
		};
	};
	
	// Left Midline - Station 2/10 configuration
	Switch (_hardpoint4) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Hydra_7_Pod_1rnd_M"; // HYDRA 7
		};
		case 2:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"; // HYDRA 7 SMKW
		};
		case 3:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"; // HYDRA 7 SMKR
		};
		case 4:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"; // HYDRA 7 SMKO
		};
		case 5:
		{
			_plane addmagazine "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"; // HYDRA 7 SMKP
		};
		case 6:
		{
			_plane addmagazine "FIR_JLAU_3_Pod_1rnd_M"; // HYDRA 19
		};
		case 7:
		{
			_plane addmagazine "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"; // APKWS 7
		};
		case 8:
		{
			_plane addmagazine "FIR_Zuni_5_Pod_1rnd_M"; // ZUNI
		};
		/*case 9:
		{
			_plane addmagazine "CUP_1Rnd_CRV7_Pod_19_M"; // CRV7
		};*/
		case 9:
		{
			_plane addmagazine "JAS_FIR_mk82_snakeye_1rnd_M"; // 82 SNAKE
		};
		case 10:
		{
			_plane addmagazine "FIR_mk82_gp_1rnd_M"; // 82
		};
		case 11:
		{
			_plane addmagazine "FIR_CBU87_1rnd_M"; // CEM
		};
		case 12:
		{
			_plane addmagazine "FIR_CBU89_1rnd_M"; // GATOR
		};
		case 13:
		{
			_plane addmagazine "FIR_CBU97_1rnd_M"; // SFW
		};
		case 14:
		{
			_plane addmagazine "FIR_GBU12_1rnd_M"; // 12
		};
	};
	
	// Left Outboard defaults to ECM pod and loads it now
	_plane addMagazine "rhs_mag_ANALQ131";
	
	// Winder Proxy - must load WINDERS
	_plane addmagazine "rhs_mag_Sidewinder_a10_2";
	
	// Right Midline Magazine? - Skip - mags added later anyway
	_plane addmagazine "FIR_Empty_1rnd_M";
	
	// Maverick Rack 1 - Choose between single and TER as dictates pod to load - single = load missile TER = load rack
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "JAS_rhs_mag_agm65G"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-L
		};
	};
	// Maverick Rack 2 - Choose between single and TER as dictates pod to load - single = load missile TER = load rack
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "JAS_rhs_mag_agm65G"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "rhs_pod_empty_agm65"; // TER Rack for MAV-L
		};
	};
	// Maverick Missile Proxy 1 - Only applies to TER - Load empty for singles
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 2 - Only applies to TER - Load empty for singles
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 3 - Only applies to TER - Load empty for singles
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 4 - Only applies to TER - Load empty for singles
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 5 - Only applies to TER - Load empty for singles
	Switch (_hardpoint5) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
	
	// Maverick Missile Proxy 6 - Only applies to TER - Load empty for singles
	Switch (_hardpoint6) Do
	{
		case -1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // NO SELECTION
		};
		case 0:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // EMPTY
		};
		case 1:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-D
		};
		case 2:
		{
			_plane addmagazine "JAS_rhs_mag_agm65D_x3"; // TER Rack for MAV-D
		};
		case 3:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-G
		};
		case 4:
		{
			_plane addmagazine "FIR_Empty_1rnd_M"; // Single Pod for MAV-L
		};
		case 5:
		{
			_plane addmagazine "JAS_rhs_mag_agm65L_x3"; // TER Rack for MAV-L
		};
	};
}
else 
{
	Switch (_preset) do
	{

		case 1:
		{
			if (isNil {profileNamespace getVariable "RHSA10J_Custom_slot1"}) then
			{
				titleText ["you don't have custom loadout data in slot 1", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom1"]execVM "ARMA3_RHS_Enhancement_A10\sqs\Loadout\A10J_Custom_Apply.sqf";
			};		
		};

		case 2:
		{
			if (isNil {profileNamespace getVariable "RHSA10J_Custom_slot2"}) then
			{
				titleText ["you don't have custom loadout data in slot 2!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom2"]execVM "ARMA3_RHS_Enhancement_A10\sqs\Loadout\A10J_Custom_Apply.sqf";
			};			
		};

		case 3:
		{
			if (isNil {profileNamespace getVariable "RHSA10J_Custom_slot3"}) then
			{
				titleText ["you don't have custom loadout data in slot 3!", "PLAIN DOWN",0.5];
			}
			else
			{
				titleText ["found custom loadout data. loading..", "PLAIN DOWN",0.5];
				_loadcustom1 = ["custom3"]execVM "ARMA3_RHS_Enhancement_A10\sqs\Loadout\A10J_Custom_Apply.sqf";
			};	
		};
	};
};
sleep 0.3;

titleText ["Loading Weapon", "PLAIN DOWN",0.5];

sleep 1;

_plane_magazine = magazines _plane;

sleep 0.3;

_plane addWeapon "rhs_weap_SidewinderLauncher";

_MAVDCount = {_x == "JAS_rhs_mag_agm65D"} count magazines _plane;
_MAVDTERCount = {_x == "JAS_rhs_mag_agm65D_x3"} count magazines _plane;
_MAVDTotalCount = _MAVDCount + _MAVDTERCount;
_MAVLCount = {_x == "JAS_rhs_mag_agm65L"} count magazines _plane;
_MAVLTERCount = {_x == "JAS_rhs_mag_agm65L_x3"} count magazines _plane;
_MAVLTotalCount = _MAVLCount + _MAVLTERCount;
_MAVGCount = {_x == "JAS_rhs_mag_agm65G"} count magazines _plane;
_hydra7count = {_x == "FIR_Hydra_7_Pod_1rnd_M"} count magazines _plane;
_gbu10count = {_x == "FIR_GBU10_1rnd_M"} count magazines _plane;
_gbu12count = {_x == "FIR_GBU12_1rnd_M"} count magazines _plane;
_mk82secount = {_x == "JAS_FIR_mk82_snakeye_1rnd_M"} count magazines _plane;
_mk82gpcount = {_x == "FIR_mk82_gp_1rnd_M"} count magazines _plane;
_mk84gpcount = {_x == "JAS_FIR_mk84_gp_1rnd_M"} count magazines _plane;
_CBU87count = {_x == "FIR_CBU87_1rnd_M"} count magazines _plane;
_cbu89count = {_x == "FIR_CBU89_1rnd_M"} count magazines _plane;
_cbu97count = {_x == "FIR_CBU97_1rnd_M"} count magazines _plane;
_hydra19count = {_x == "FIR_JLAU_3_Pod_1rnd_M"} count magazines _plane;
_zunicount = {_x == "FIR_Zuni_5_Pod_1rnd_M"} count magazines _plane;
_SUUcount = {_x == "FIR_SUU25_Pod_1rnd_M"} count magazines _plane;
_hydraSMKWcount = {_x == "JAS_FIR_Hydra_SMKW_Pod_1rnd_M"} count magazines _plane;
_hydraSMKRcount = {_x == "JAS_FIR_Hydra_SMKR_Pod_1rnd_M"} count magazines _plane;
_hydraSMKOcount = {_x == "JAS_FIR_Hydra_SMKO_Pod_1rnd_M"} count magazines _plane;
_hydraSMKPcount = {_x == "JAS_FIR_Hydra_SMKP_Pod_1rnd_M"} count magazines _plane;
_APKWS7count = {_x == "JAS_FIR_Hydra_APKWS_Pod_1rnd_M"} count magazines _plane;

if (_MAVDTotalCount >= 1) then {_plane addweapon "JAS_rhs_weap_agm65D";};
if (_MAVLTotalCount >= 1) then {_plane addweapon "JAS_rhs_weap_agm65L";};
if (_MAVGCount >= 1) then {_plane addweapon "JAS_rhs_weap_agm65G";};
if (_gbu10count >= 1) then {_plane addweapon "FIR_GBU10";};
if (_gbu12count >= 1) then {_plane addweapon "FIR_GBU12";};
if (_mk82gpcount >= 1) then {_plane addweapon "FIR_mk82_Snakeye_Launcher";};
if (_CBU87count >= 1) then {_plane addweapon "FIR_CBU87";};
if (_cbu89count >= 1) then {_plane addweapon "FIR_CBU89";};
if (_cbu97count >= 1) then {_plane addweapon "FIR_CBU97";};
if (_mk82secount >= 1) then {_plane addweapon "JAS_FIR_mk82_Snakeye_Launcher";};
if (_mk84gpcount >= 1) then {_plane addweapon "JAS_FIR_mk84";};

if (_hydraSMKWcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKW_Launcher";
	_counter = 1;

	while {_counter <= _hydraSMKWcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_7rnd_M";
	};
};
if (_hydraSMKRcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKR_Launcher";
	_counter = 1;

	while {_counter <= _hydraSMKRcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Red_7rnd_M";
	};
};
if (_hydraSMKOcount >= 1) then 
{
	_plane addweapon "JAS_HYDRA_SMKO_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydraSMKOcount} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Orange_7rnd_M";
	};
};
if (_hydraSMKPcount >= 1) then
{
	_plane addweapon "JAS_HYDRA_SMKP_Launcher";
	_counter19 = 1;
	
	while {_counter19 <= _hydraSMKPcount} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazine "JAS_FIR_Hydra_Smoke_Purple_7rnd_M";
	};
};
if (_SUUcount >= 1) then 
{
	_plane addweapon "FIR_SUU25";
	_counter = 1;

	while {_counter <= _SUUcount} do
	{
		_counter = _counter + 1;
		_plane addmagazine "FIR_SUU25_8rnd_M";
	};
};
if (_hydra7count >= 1) then 
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter7 = 1;

	while {_counter7 <= _hydra7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "FIR_Hydra_7rnd_M";
	};
};
if (_APKWS7count >= 1) then
{
	_plane addweapon "FIR_APKWS_Launcher";
	_counter7 = 1;

	while {_counter7 <= _APKWS7count} do
	{
		_counter7 = _counter7 + 1;
		_plane addmagazine "FIR_Hydra_APKWS_7rnd_M";
	};
};
if (_hydra19count >= 1) then
{
	_plane addweapon "JAS_HYDRA_Launcher";
	_counter19 = 1;
	
	while {_counter19 <= _hydra19count} do
	{
		_counter19 = _counter19 + 1;
		_plane addmagazine "FIR_JLAU_3_19rnd_M";
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

/* TGP Code - A-10A was never fitted with TGP
_TGP = _plane getVariable "TGT_POD";
if (_TGP == "yes") then
{
	_plane addmagazine "Laserbatteries";
	_plane addweapon "Laserdesignator_mounted";
};
*/
titleText ["Loading Complete", "PLAIN DOWN",0.5];