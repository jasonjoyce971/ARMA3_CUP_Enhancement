//#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class ARMA3_CUP_Enhancement_Systems
	{
		units[]=
		{};
		weapons[]=
		{};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Heli",
			"A3_Weapons_F",
			"A3_CargoPoses_f",
			"FIR_AirWeaponSystem_US",
			"CUP_BaseData",
			"CUP_BaseConfigs",
			"CUP_AirVehicles_Core",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_VehicleWeapons",
			"CUP_Weapons_Pods",
			"CUP_Weapons_WeaponsCore",
			"A3_Modules_F"
		};
		versionDesc = "GOL ARMA 3 CUP Enhancement";
		authors[]={"Jason"};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ARMA3_CUP_Enhancement_Systems
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_Systems"
			};
		};
	};
};
class cfgFactionClasses // Here we define our custom factions
{ 
	class GOL_AAC_BLUFOR // Faction class name
	{ 
		displayName = "AAC BLUFOR Aircraft"; // Faction name as displayed in game
		icon = "ARMA3_CUP_Enhancement_Systems\presentation\flag.paa"; // Path to texture next to the faction name in editor - may be 2D editor only
		priority = 16; // How far down it is on the menu
		side = 1; // Side dictates whether the faction is 1 = BLUFOR, 2 = OPFOR, 3 = INDEP, 4 = CIV
	};
	class GOL_AAC_OPFOR // Faction class name
	{ 
		displayName = "AAC OPFOR Aircraft"; // Faction name as displayed in game
		icon = "ARMA3_CUP_Enhancement_Systems\presentation\flag.paa"; // Path to texture next to the faction name in editor - may be 2D editor only
		priority = 16; // How far down it is on the menu
		side = 0; // Side dictates whether the faction is 1 = BLUFOR, 2 = OPFOR, 3 = INDEP, 4 = CIV
	};
	class GOL_AAC_INDEP // Faction class name
	{ 
		displayName = "AAC INDEP Aircraft"; // Faction name as displayed in game
		icon = "ARMA3_CUP_Enhancement_Systems\presentation\flag.paa"; // Path to texture next to the faction name in editor - may be 2D editor only
		priority = 16; // How far down it is on the menu
		side = 2; // Side dictates whether the faction is 1 = BLUFOR, 2 = OPFOR, 3 = INDEP, 4 = CIV
	};
	/*class GOL_AAC_CIV // Faction class name
	{ 
		displayName = "VC Guerrillas"; // Faction name as displayed in game
		icon = "jason_unsung\presentation\flag.paa"; // Path to texture next to the faction name in editor - may be 2D editor only
		priority = 16; // How far down it is on the menu
		side = 2; // Side dictates whether the faction is 1 = BLUFOR, 2 = OPFOR, 3 = INDEP, 4 = CIV
	}; */
};
class CfgEditorSubcategories
{
	class GOL_AAC_PHANTOM // Category class, you point to it in editorSubcategory property
	{
		displayName = "Phantom"; // Name visible in the list
	};
	class GOL_AAC_ZEUS // Category class, you point to it in editorSubcategory property
	{
		displayName = "Zeus"; // Name visible in the list
	};
	class GOL_AAC_ANGEL // Category class, you point to it in editorSubcategory property
	{
		displayName = "Angel"; // Name visible in the list
	};
	class GOL_AAC_RAVEN // Category class, you point to it in editorSubcategory property
	{
		displayName = "Raven"; // Name visible in the list
	};
	class GOL_AAC_GIANT // Category class, you point to it in editorSubcategory property
	{
		displayName = "Giant"; // Name visible in the list
	};
	class GOL_AAC_BANSHEE // Category class, you point to it in editorSubcategory property
	{
		displayName = "Banshee"; // Name visible in the list
	};
	class GOL_AAC_CONDOR // Category class, you point to it in editorSubcategory property
	{
		displayName = "Condor"; // Name visible in the list
	};
	class GOL_AAC_SPECIAL // Category class, you point to it in editorSubcategory property
	{
		displayName = "Specialist Equipment"; // Name visible in the list
	};
	class MODIFIERS
	{
		displayName = "GOL Loadout Modules";
	};
};

#include "gui.hpp"
