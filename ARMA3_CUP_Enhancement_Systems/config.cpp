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
			"CUP_AirVehicles_F35",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_VehicleWeapons",
			"CUP_Weapons_Pods",
			"CUP_Weapons_WeaponsCore",
			"A3_Modules_F"
		};
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
	class GOL_AAC_SPECIAL // Category class, you point to it in editorSubcategory property
	{
		displayName = "Specialist Equipment"; // Name visible in the list
	};
	class MODIFIERS
	{
		displayName = "GOL Loadout Modules";
	};
};
class CfgHints
{
	class GOLAACKITUPGRADE
	{
		// Topic title (displayed only in topic listbox in Field Manual)
		displayName = "-{GOL}-AAC Equipment Upgrade";
		class Credits
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Patch Credits";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Credits";
			// Structured text, filled by arguments from 'arguments' param
			description = "This pack was designed to upgrade the Community Upgrade Project Aircraft. Most of the models and sounds are from CUP.<br/><br/>Brimstone and Storm Shadow weapon systems are from AWS Eurofighter Typhoon by Pinaz93 and Hcpookie.<br/><br/>AWS systems and weapons by Firewill.<br/><br/>Fast Roping scripts from Advanced Rappelling by Duda123";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
	};
	class GOLAACCALLSIGNGUIDE
	{
		// Topic title (displayed only in topic listbox in Field Manual)
		displayName = "-{GOL}-AAC Callsign Guide";
		class Overview
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Callsign Overview";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "What callsigns represent in the AAC";
			// Structured text, filled by arguments from 'arguments' param
			description = "The AAC in GOL operate a collection of callsigns. Each callsign represents a set of operational orders that the pilot in question will follow. These orders are tailored to specific aircraft types to ensure the aircraft is only ever tasked to do something it is capable of. You would not, for example, deploy a transport helicopter to engage enemy air units.<br/><br/>To ensure the callsign is capable of fulfilling its role, each callsign has a list of applicable aircraft for use.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Raven
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Raven";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "The single most common callsign the AAC deploys";
			// Structured text, filled by arguments from 'arguments' param
			description = "Raven is a light to medium lift transport helicopter. Fast, agile and capable of landing in the field, this is the single most common callsign the AAC currently deploys.<br/><br/>Responsibilities:<br/><br/>%2Medical Treatment including emergency casualty evacuation and reinsertion.<br/>%2Light supply drops.<br/>%2Transportation of up to one whole squad (aircraft depending).<br/>%2Basic recon (aircraft depending).<br/><br/>Aircraft currently operated:<br/><br/>%2AW-159 Wildcat and its variants<br/>%2Ka-60 Kasatka and its variants<br/>%2MH-6 Littlebird and its variants<br/>%2MH-9 Littlebird and its variants<br/>%2SA-330 Puma and its variants<br/>%2UH-1 Iroquois and its variants<br/>%2UH-60 Blackhawk and its variants<br/>%2UH-80 Ghosthawk and its variants";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Giant
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Giant";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "The big one";
			// Structured text, filled by arguments from 'arguments' param
			description = "Giant is a medium to heavy lift transport helicopter used when the AAC need mass transport capability. Big and usually cumbersome, Giant needs protection in its operations but is capable of lifting pretty much anything the platoon needs on the ground.<br/><br/>Responsibilities:<br/><br/>%2Mass platoon transport, can fit at least one squad, up to the entire platoon depending on the aircraft.<br/>%2Heavy supply drops.<br/>%2Ground vehicle delivery.<br/>%2Vehicle casualty recovery.<br/><br/>Aircraft currently operated:<br/><br/>%2AW-101 Merlin and its variants<br/>%2CH-47 Chinook and its variants<br/>%2CH-53 Stallion and its variants<br/>%2Mi-6 Hook and its variants<br/>%2Mi-8 Hip and its variants<br/>%2Mi-17 Hip and its variants<br/>%2Mi-290 Taru and its variants";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Angel
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Angel";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "The scout";
			// Structured text, filled by arguments from 'arguments' param
			description = "Angel is a light recon/CAS platform used as a forward scout. It lacks the stopping power or protection of a dedicated gunship but can usually be flown by a solo pilot rather than requiring a 2 man crew. Angel depends on mobility and speed to defend itself and is hopeless against anti-air positions. Give it soft targets to engage and a hill to hide behind however, and Angel is a capable CAS platform and can provide close target recce.<br/><br/>Responsibilities:<br/><br/>%2ISTAR<br/>%2Light Unguided CAS<br/>%2Area Denial Strikes<br/>%2Light Transport (Aircraft Depending)<br/><br/>Aircraft currently operated:<br/><br/>%2AH-6 and its variants<br/>%2AH-9 and its variants<br/>%2AW-159 armed variants<br/>%2Ka-52 and its variants. While technically a gunship, the Ka-52 is better suited to the Angel role<br/>%2Ka-60 armed variants<br/>%2UH-1 armed variants";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Zeus
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Zeus";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "When everything goes wrong, call the wrath of a god";
			// Structured text, filled by arguments from 'arguments' param
			description = "Zeus is a dedicated gunship capable of massive damage output. All gunships are tank killers but they are also capable of punching out soft targets and infantry. Some even have the capability to drop bombs or self designate missile targets in order to engage fortifications. The package is rounded out by the gunner optics package which allows Zeus to provide recon also.<br/><br/>Responsibilities:<br/><br/>%2Heavy CAS<br/>%2Recon<br/>%2Search and Destroy<br/><br/>Aircraft currently operated:<br/><br/>%2AH-1 and its variants<br/>%2AH-64 and its variants<br/>%2Ka-50 and its variants<br/>%2Mi-24 and its variants<br/>%2Mi-35 and its variants<br/>%2Mi-48 and its variants<br/>%2RAH-66 and its variants";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Condor
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Condor";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Mass platoon airborne ops need a big bird";
			// Structured text, filled by arguments from 'arguments' param
			description = "Condor is a large transport aircraft capable of lifting the entire platoon if needed. Condor is fixed wing meaning this will be the callsign used for airborne operations featuring a parachute insertion. The aircraft is large, slow and cumbersome and will often need an escort to protect it on its route. Smaller aircraft may be able to operate from improvised fields but for the most part, Condor will require a dedicated airport.<br/><br/>Responsibilities:<br/><br/>%2Mass Platoon Insertion<br/><br/>Aircraft currently operated:<br/><br/>%2An-2 and its variants<br/>%2C-17 and its variants<br/>%2C-130 and its variants<br/>%2MV-22 and its variants";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Phantom
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Phantom";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Sky to mud death dealing specialist";
			// Structured text, filled by arguments from 'arguments' param
			description = "Phantom is the primary CAS platform of the AAC. Plain and simple nothing can match the sheer destructive power that Phantom can bring to the AO. That power however comes at a price. Phantom makes use of some of the slowest, most cumbersome small jets in the AAC arsenal.<br/><br/>Responsibilities:<br/><br/>%2Heavy CAS<br/>%2Tank Hunting<br/>%2Convoy Interdiction<br/>%2Area Denial<br/>%2Fortification Strikes<br/><br/>Aircraft currently operated:<br/><br/>%2A-10 and its variants<br/>%2A-164 and its variants<br/>%2AV-8B and its variants<br/>%2GR.9 and its variants<br/>%2Su-25 and its variants<br/>%2Yak-130 and its variants";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Banshee
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "-{GOL}-AAC Banshee";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Protector of all things AAC";
			// Structured text, filled by arguments from 'arguments' param
			description = "Banshee is the Air Superiority fighter of the AAC. It is Banshees job to protect the other callsigns as they work, be it from air defences or enemy aircraft. The aircraft then are fast, nimble and carry a wide selection of weapons to target the various threats that can hurt the AAC. These specialist weapons however often need additional avionics from the aircraft meaning payload is often restricted.<br/><br/>Responsibilities:<br/><br/>%2Suppression of Enemy Air Defences (SEAD)<br/>%2Anti-Air Interception<br/>%2Fighter Escort<br/>%2Combat Air Patrol<br/><br/>Aircraft currently operated:<br/><br/>%2A-143 R variant specifically<br/>%2F-35 and its variants<br/>%2F/A-18 E variant specifically<br/>%2SU-34 and its variants<br/>%2SU-35 and its variants";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
	};
	class GOLAWSWEAPONS
	{
		// Topic title (displayed only in topic listbox in Field Manual)
		displayName = "-{GOL}-AAC Weapons Guide";
		class AWSATGT
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Targeting System";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "FCS Targeting System for Guided Munitions";
			// Structured text, filled by arguments from 'arguments' param
			description = "The AWS FCS Targeting System controls all GPS and Laser Guided munitions available on the aircraft. The system is based on a simple MFD that allows the pilot to enter target information, store the information, select guidance type and finally designate the target before weapons release.<br/><br/>Target Data Input:<br/>Target Data can be locked into the FCS in two ways. First and easiest is by using the mouse input. First select the memory slot from the drop down menu. Next press DGN on the left bank of buttons on the MFD. Next click on the map area where you wish to set the target location.<br/>Target data can also be entered as a grid reference in the bottom left corner of the MFD. As above, you must first select the memory slot, then you simply enter the grid reference. The grid type can be toggled between 8 figure or 10 figure grids by the 8 and 10 buttons on the bottom bank of MFD switches. The grid is entered into the FCS with the ENT button.<br/><br/>Target Selection:<br/>Target selection is carried out by simply selecting the relevant memory slot from the drop down menu.<br/><br/>Munitions Type:<br/>Munitions type is selected by the GPS and LSR buttons on the right bank of MFD buttons. The munition type must be set BEFORE target designation.<br/><br/>Target Designation:<br/>With the target data stored and the munition type selected, the target is now locked into the FCS by pressing the SEL button on the left bank of MFD switches. This sets the given memory slot as the active target, ready for engagement.<br/><br/>Switching targets:<br/>To switch target or munition type the FCS must first be cleared using the CLR button on the left bank of MFD buttons.<br/><br/>Memory Slot Deletion:<br/>Finally you can delete target data by selecting the relevant memory slot and clicking the DEL button on the left bank of MFD buttons. If the target is currently designated, it must be cleared before deleting.<br/><br/>With the target designated, simply fly to the release parameter for GPS bombs or lock the target and fly to release prompt for laser targets.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSSEAD
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS SEAD System";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "SEAD System for Radar Seeking Missiles";
			// Structured text, filled by arguments from 'arguments' param
			description = "The SEAD system from AWS is designed to replicate anti-radar warfare. When engaging OPFOR anti-air assets with Anti-Radiation Missiles (ARMs) you do not in fact lock onto the vehicle, you lock onto the radar signal.<br/><br/>The system works from the scroll menu and you must have a valid ARM selected as your current weapon. When within 6km of the target area, select the action 'Find Radar Target'. This will put a lockable signal on the ground which is visible on your radar. Lock the target with %11 then fire.<br/><br/>Due to the fact you are engaging a missile based anti-air system, it is recommended that you use an ECM pod as part of your loadout to help you avoid incoming.<br/><br/>One major point to note, this system will not detect a unit that does not use radar guidance such as the static ZSU AAA gun.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = { { { "VehLockTargets" } } };
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSGUNS
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Gun Systems";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Forward Firing Gun Systems";
			// Structured text, filled by arguments from 'arguments' param
			description = "%2 M61A2 Vulcan Cannon<br/><br/>The Vulcan is a 6 barreled, 20mm, Gatling style cannon system primarily designed for air to air combat. The smaller ammunition coupled with its rate of fire make it handy in a dog fight but it lacks punch against ground targets.<br/><br/>%2 GAU-12 Equalizer<br/><br/>The GAU-12 is a 5 barreled, 25mm, Gatling style cannon designed to pack more of a punch in strike aircraft. The reduced weight of this gun system makes it the weapon of choice in STOVL aircraft such as the AV-8B. The round is big enough to cause real damage to ground targets, while the rate of fire makes using it in air to air combat a viable option. The size of the ammo however does lead to a limited quantity.<br/><br/>%2 GAU-8 Avenger<br/><br/>The GAU 8 is a 30mm, 7 barreled, Gatling style cannon made famous in modern media by the A-10 Thunderbolt. Designed specifically to kill soviet tanks during the Cold War, the A-10 was actually built around the cannon system. The GAU-8 is easily the best cannon for ground attack duties and will make a mess of most air targets given the chance. It is currently only operated by the A-10.<br/><br/>%2 GAU-22<br/><br/>The GAU-22 is a smaller version of the GAU-12, designed specifically for the F-35. The cannon uses the same ammunition but only has 4 barrels instead of 5. On B and C variant F-35s, the cannon is actually fitted as a pod under the fuselage while the A variant carries the cannon internally.<br/><br/>%2 GSh-23<br/><br/>The GSh-23 is a 23mm auto-cannon system in operation on soviet aircraft. It is deployed as an external pod system that can be used by fixed wing or rotary craft and is also the main internal cannon fitted to the Su-25. The round size makes its performance comparable to the GAU-12 but it is usually restricted in ammo count unless fitted as a pod.<br/><br/>%2 GSh-301<br/><br/>The GSh-301 is a 30mm soviet auto-cannon system currently operated by the Su-34 and Su-35. While the 30mm round offers comparable performance to the GAU-8, the style of cannon coupled with it's installation means that ammo is severely limited.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSROCKETS
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Rocket Systems";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Forward Firing Unguided Rocket Systems";
			// Structured text, filled by arguments from 'arguments' param
			description = "%2 70mm HYDRA Folding Fin Aerial Rocket<br/><br/>The Hydra system has been in use for decades and remains the primary rocket system of NATO forces. The rockets themselves are reasonably accurate out to around 2km and carry a High Explosive Fragmentation warhead. They are capable of taking out infantry and light vehicles.<br/><br/>%2 ZUNI Rocket System<br/><br/>The ZUNI 127mm rocket system originated in Vietnam as a bigger counterpart to the HYDRA system. Due to the size increase, the ZUNI is packed in 4 slot tubes rather than the 7 shot Hydra. ZUNI is currently under modification to become laser guided bringing it into line with the Russian S-25 system.<br/><br/>%2 S-8<br/><br/>The S-8 is an 80mm soviet rocket system comparable to HYDRA. The S-8 has seen use across the world and has been exported to various other countries.<br/><br/>%2 S-13<br/><br/>The S-13, like the ZUNI, is the big brother of a smaller system, the S-8. In this case, the S-13 is 122mm and is comparable to ZUNI although it is widely regarded to be the better of the 2.<br/><br/>All FFAR systems are ara of effect weapons. Pin point strikes are not really an option, nor is engaging moving targets. They are designed for, and should be used for, area bombardment or strafing runs.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSGPBOMBS
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Unguided Bomb Systems";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Unguided General Purpose Bomb Systems";
			// Structured text, filled by arguments from 'arguments' param
			description = "%2 Mk82 General Purpose Bomb<br/><br/>The Mk82 has existed in various forms since World War II. The bomb is a simple iron casing designed to fragment when the 500lb charge detonates. Inaccurate even with a CCIP system, this weapon is designed for area of effect purposes. In the hands of the right pilot however, this can be used to destroy most targets.<br/><br/>%2 Mk82 Snakeye<br/><br/>The Snakeye system is a modification on the Mk82 designed to allow for lower drop altitudes. The system deploys a series of fins from the back of the bomb, increasing drag. This slows the bomb down and allows the aircraft to pass out of the blast radius before impact.<br/><br/>%2 Mk84 GPB<br/><br/>The Mk84 is a simple re-incarnation of the Mk82 but carries a 2000lb main charge.<br/><br/>%2 FAB-250<br/><br/>The FAB-250 is the russian iron bomb of choice. The 250 in the designation signifies the explosive content, in this case 250kg. While there are bigger bombs available, russian strike craft tend to prefer rockets since they have less performance impact on the aircraft. As such russian strike craft do not normally carry heavier bomb systems, prefering to leave heavy bombing to dedicated bombers.<br/><br/>Unguided bombs are exactly that and as a result are much more prone to inaccuracy than other systems. They are however cheap and can be used on older generation aircraft that lack the avionics to carry more complicated systems.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSGBU1
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS GBU 1 Series";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Laser Guided 'Paveway II' Bomb Family";
			// Structured text, filled by arguments from 'arguments' param
			description = "%2 GBU-12<br/><br/>The Paveway series was developed in the wake of Vietnam as a way to improve bomb drop accuracy. The guidance system traces a laser signal and uses built in vanes to 'fly' the bomb to the target. The GBU-12 is the basic model of Paveway. Based on the Mk82 it is simply a 500lb General Purpose Bomb to which the Paveway guidance system is fitted.<br/><br/>%2 GBU-10<br/><br/>This system is exactly the same in it's employment as the GBU-12, the only difference being this system carries a 2000lb charge.<br/><br/>%2 KAB-250<br/><br/>The KAB-250 is the russian equivalent of the Paveway system. Like the Paveway it is based on existing bomb technology, in this case the FAB-250. It is identical in it's operation to the Paveway system although russian systems tend to be less accurate than NATO systems simply due to cost saving measures.<br/><br/>The Laser Guided Bomb system is reliant on a laser signal to track to target. The source of this signal however can be anything. FAC/JTAC, onboard laser guidance through I-TGT and buddy lase from another aircraft are all viable options.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSGBU2
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS GBU 2 Series";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Laser Guided 'Paveway III' Bomb Family";
			// Structured text, filled by arguments from 'arguments' param
			description = "%2 GBU-24<br/><br/>The Paveway series was developed in the wake of Vietnam as a way to improve bomb drop accuracy. The guidance system traces a laser signal and uses built in vanes to 'fly' the bomb to the target. The GBU-24 is an upgrade on the GBU-10. Designed with improved aerodynamics, the GBU-24 is capable of much longer glide ranges than the GBU-10 making it a solid choice for a standoff bomb attack.<br/><br/>The Paveway system is reliant on a laser signal to track to target. The source of this signal however can be anything. FAC/JTAC, onboard laser guidance through I-TGT and buddy lase from another aircraft are all viable options.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSGBU3
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS GBU 3 Series";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "GPS Guided Joint Direct Attack Munition (JDAM) Guided Bomb Family";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Joint Direct Attack Munition Kit is an upgrade for standard iron bombs, much like the Paveway system. Unlike Paveway however, JDAM does not require a laser signal to track. Instead it homes on a specific GPS coordinate, almost like satnav for bombs. This allows the system to operate in any condition rather than being affected by weather, or line of sight, like Paveway. Like Paveway the system does not add propulsion to the bomb, so release speed and altitude will change the range of the weapon. Unlike Paveway the system cannot track moving targets.<br/><br/>%2 GBU-38<br/><br/>The GBU-38 is the most common form of JDAM. It packs a standard 500lb warhead.<br/><br/>%2 GBU-31<br/><br/>The GBU-31 is the big brother of the family and packs a 2000lb warhead.<br/><br/>%2 GBU-32<br/><br/>The GBU-32 is the middle weight of the family coming in at 1000lbs. This system is mostly used by naval aircraft in place of the GBU-31. It allows for a bigger hit while reducing weight for carrier ops.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSGLIDE
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Glide Bombs";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Precision strike glide bombs";
			// Structured text, filled by arguments from 'arguments' param
			description = "Glide bomb programs are developed to increase the standoff distance between delivery aircraft and the target. The bomb is released as normal then deploys winglets to improve its glide range. The Small Diameter Bomb family are designed to provide precision strikes with minimal collateral damage. The Joint Stand Off Weapon is designed to deliver conventional sized munitions from increased range.<br/><br/>%2GBU-39 SDB<br/><br/>The GBU-39 is the standard issue SDB. It uses the same GPS tracking system as the JDAM but has a standoff range in excess of 6km (in game) depending on release altitude.<br/><br/>%2GBU-53 SDB<br/><br/>The GBU-53 is an upgraded version of the GBU-39. It is capable of GPS guidance, but is also capable of self guiding to a thermal contact. This means that the GBU-53 is capable of hitting moving targets.<br/><br/>%2AGM-154A JSOW CEM<br/><br/>The JSOW A is GPS guided and delivers combined effects cluster munitions to the target area.<br/><br/>%2AGM-154C JSOW GPB<br/><br/>The JSOW C is GPS guided and delivers the equivalent of a 500lb GPB to the target area.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSCBU
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Cluster Bomb Units (CBU)";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Sub-Munition Dispensing Air Burst Bombs";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Cluster Bomb originated in WW2 with the first recorded version of the weapon being the German SD2 or Butterfly Bomb. The overall intention hasn't changed since then, to drop a single bomb that is capable of taking out a wide area by dropping a multitude of Sub-Munitions or 'Bomblets'. The use of Cluster Bombs is frowned upon by international law due to sub-munitions failing to detonate and later causing civilian casualties. The Convention on Cluster Munitions, signed in 2008, prohibits their use but there are only 108 states that have agreed to the convention. The most notable states missing from the list are the USA and Russia.<br/><br/>%2 CBU-87 Combined Effects Munitions Dispenser<br/><br/>This cluster bomb is unguided and is dropped like any other iron bomb. The difference is that the outer case will air burst after a timed delay. This spreads 202 BLU-97 sub-munitions over the surrounding area. Each sub-munition contains a shaped charge for anti-vehicle damage, a fragmentation section for anti-personnel damage and finally an incendiary section to further complicate things for the target.<br/><br/>%2 CBU-89 GATOR<br/><br/>This system does not drop bomblets, it is used to rapidly deploy land mines. Each CBU-89 carries 72 anti-tank and 22 anti-personnel GATOR land mines. The GATOR mine system is made with a built in safety feature that sees the mines self-destruct after a preset time.<br/><br/>%2 CBU-97 Sensor Fuzed Weapon<br/><br/>This cluster bomb is designed to kill vehicles. It only carries 10 sub-munitions but these sub-munitions are smart weapons in their own right. They release 4 'skeets' which fall on parachutes, scanning the ground below. If the skeet finds a heat signature big enough to be a vehicle, it fires a kinetic energy penetrator toward the target. The kinetic energy penetrator is more famously used as the Armour Piercing Discarding Sabot (APDS) round, the main tank killing ammunition of Main Battle Tanks.<br/><br/>%2CBU-103 Wind Corrected Munitions Dispenser<br/><br/>The Wind Corrected Munitions Dispenser (WCMD) is the result of fitting a CBU with a GPS guidance system. Much like a JDAM the WCMD kit is an upgrade for an existing weapon. In this case the base weapon is the CBU-87 CEM. Other WCMD CBUs exist in reality but AWS currently only features the 103.<br/><br/>%2 RBK-250<br/><br/>The RBK is the standard issue russian cluster bomb. Based on the FAB-250, the system operates much like the US CBU-87. It is the only cluster bomb in the russian arsenal as soviet aircraft tend to use sub-munition dispenser pods instead. These are not currently available in game.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSAGM
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Air to Ground Missiles (AGM)";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "A variety of self propelled weapons for engaging almost any target";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Air to Ground missile shares the same history as the Folding Fin Aerial Rocket, they originate from the same weapon system. Throughout Korea the specific need for a self guiding, self propelled weapon became apparent and Vietnam saw the first AGMs enter combat. The AGMs charm lies in its versatility, they can be equipped to deal with anything.<br/><br/>%2AGM-65 Maverick<br/><br/>The Maverick has been in service since 1972 and is still in use today, proving the quality of the weapon. It has multiple variants from 'A' through to 'L' all of which serve a specific function. In game we have access to the D, G and L. The D variant is the standard lock on vehicle anti-tank version. The G is the same lock on anti-tank system, but with a warhead more than twice the size of the D. The L variant is laser guided rather than lock on target, meaning it can be used against buildings, emplacements and fortifications.<br/><br/>%2 AGM-84 Harpoon<br/><br/>The Harpoon is carried by the F/A-18 and is specifically designed to target ships. It uses a low level flight profile to slip under missile defences and hit the target vessel on the waterline.<br/><br/>%2 AGM-88 High speed Anti-Radiation Missile (HARM)<br/><br/>The HARM is designed to home on radar signals, specifically those broadcast by the tracking radars of air defences. Used exclusively in the SEAD role, the HARM is capable of punching out radar guided SAM and AAA sites from over 5km range.<br/><br/>%2 Brimstone<br/><br/>Brimstone is a UK only missile designed to reduce the cost of multiple missile systems by combining them into one general purpose system. Brimstone is based on the AGM-114 but has been completely redeveloped for the Royal Air Force. The system can lock itself onto IR signals and self guide or it can lock onto laser signals provided by other units, essentially combining the D and L class of Maverick.<br/><br/>%2 Storm Shadow<br/><br/>Storm Shadow is the British answer to the US SLAM system. It is a small class of GPS guided cruise missile and holds huge destructive power. The missile has a range of over 50km (in game) and a blast radius of over 100m.<br/><br/>%2 AGM-114 Hellfire<br/><br/>The Hellfire was originally designated the HELicopter Launched FIRE and forget missile until the stipped down name (capitalised) was adopted. The system is essentially a smaller, lighter Maverick, specifically designed to kill tanks. It is most commonly used on helicopters, and platforms such as the AH-64 rely on it as their primary AT weapon.<br/><br/>%2 AGM-122 Sidearm<br/><br/>The Sidearm is an anti-radiation missile based on the AIM-9C Sidewinder. The system was originally designed as a cheap alternative to the AGM-88, recycling obsolete Sidewinders in the process, but the 88 remained the staple for fixed wing delivery. Instead the Sidearm became the ARM of the rotary world, being deployed by the USMC on both UH-1s and AH-1s. As time wore on SEAD taskings became the operational remit of fixed wing only, and the Sidearm died off in the 1990s.<br/><br/>%2 Kh-25<br/><br/>The Kh-25, NATO designation Kegler, is the Russian equivalent of the AGM-88. Used primarily by the Su-25 or Su-34, the system uses the same principles to hunt and kill radar signals.<br/><br/>%2 Kh-29<br/><br/>The Kh-29, NATO designation Karen, is the Russian equivalent of the AGM-65. While the Maverick has been modified over the years to suite multiple roles, the Karen is designed specifically to kill tanks with no sub-variants available.<br/><br/>%2 VIKHIR<br/><br/>The Vikhir system is a russian 'laser riding' missile designed to kill tanks or fortifications. The system does not infact trace a laser return, it follows the path of the laser beam itself. The Vikhir can also lock IR signatures if he contrast is high enough.<br/><br/>%2 AT-2<br/><br/>The AT-2 is a russian anti-tank missile system used on the Mi-24D. It does not guide itself to the target, it is steered by the gunner using radio telemetry. While this allows the gunner to adjust the point of aim all the way to impact, the missile is not particularly nimble and care must be taken not to waste a shot trying to steer too far.<br/><br/>%2 AT-6<br/><br/>The AT-6 is the successor to the AT-2 and is fitted to the Mi-24P. Like the AT-2 it is steered to the target by the gunner.<br/><br/>%2 AT-9<br/><br/>The AT-9 is a further upgrade to the original AT-2 system and is fitted to the Mi-24 Super variants. The AT-9 can be steered like its predecessor but can also lock onto IR signatures like a conventional ATGM";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSAAM
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS Air to Air Missiles (AAM)";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "A variety of self propelled weapons for engaging air targets";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Air to Air Missile owes its existance to the Korean War. The high speed jet dogfights over Mig Alley made the major powers panic about aerial fighting and by Vietnam, aircraft like the F-4 Phantom were exclusively equipped with AAMs. Generally speaking AAMs come in 2 flavours, short range infrared guided and longer ranged radar guided.<br/><br/>%2 AIM-9M Sidewinder II<br/><br/>The Sidewinder dates back to Vietnam and the 'M' variant is the most commonly used today. It uses a short range IR seeker and actively scans for targets in a cone in front of the aircraft. The Sidewinder is prefered in close ranged dogfights due to its maneuvrability and the difficulty in breaking short ranged IR lock.<br/><br/>%2 AIM-9X Sidewinder III<br/><br/>The Sidewinder III is the most recent incarnation of the Sidewinder system and is being rolled out on all current and near future aircraft.<br/><br/>%2 AIM-120 Advanced Medium Ranged Air to Air Missile (AMRAAM)<br/><br/>The AMRAAM is designed to engage targets Beyond Visual Range (BVR). It is radar guided and homes on the radar return of the target. This signal can be baffled by ECM and chaff and the longer the range of the AMRAAM flight, the bigger the chance of evasion. Most commonly used on high level interceptors such as the F-15 or the F/A-18, a popular tactic is to use AMRAAM to disrupt enemy formations before closing with Sidewinders for the kill.<br/><br/>%2 R-73<br/><br/>The R-73, NATO designation Archer, is the russian equivalent of the AIM-9.<br/><br/>%2 R-77<br/><br/>The R-77, NATO designation Adder, is the russian equivalent of the AIM-120.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSBLU
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS BLU-107";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "A rocket propelled bomb designed to destroy runways";
			// Structured text, filled by arguments from 'arguments' param
			description = "The BLU-107 is a specialist bomb designed to penetrate the target before detonating below the surface. The bomb is dropped as normal but after a set time delay, a parachute is deployed to suspend the bomb nose down. At this point the rocket motor fires, driving the bomb into the target before the main charge is detonated.<br/><br/>The system is designed to crater runways and make them unusable. In game terms the system is not likely to see much use but it is available on the A-164 if needed.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AWSAFAC
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AWS AFAC Systems";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility systems for AFAC role aircraft";
			// Structured text, filled by arguments from 'arguments' param
			description = "Airborne Forward Air Controller (AFAC) duties require additional tools to mark targets for other aircraft. These tools can have other purposes but are mainly utilities that fill a very specific niche in the AAC arsenal.<br/><br/>%2 Smoke Rockets<br/><br/>These rockets are based on the HYDRA system and are used for simple target marking in the same way that a ground based FAC might use a smoke grenade.<br/><br/>%2 SUU-25 Flare Dispenser<br/><br/>The SUU-25 is based on the ZUNI rocket pod and dispenses illumination flares behind the delivery craft rather than firing them forward. The flares can be used to illuminate a target area for follow up bomb delivery, or can be used to support infantry during night ops.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
	};
	class AWSAIRCRAFT
	{
		// Topic title (displayed only in topic listbox in Field Manual)
		displayName = "-{GOL}-Aircraft Guide";
		class designation
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Designation Practices";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "How do you name a baby bomber?";
			// Structured text, filled by arguments from 'arguments' param
			description = "Each country has its own method of naming or designating their aircraft types simply to tell them apart. Some, such as the UK, use names. Tornado, Typhoon, Hurricane, Harrier are all examples of this. Although the UK does have an official designation system, it is often not used, particularly by pilots, who prefer the name theme. The biggest 2 exporters are Russia and the US. These 2 countries have developed a much more robust system simply due to the amount of different craft available.<br/><br/>Russia<br/><br/>The official Russian system is to designate the aircraft according to the design bureau where the craft was produced, followed by the prototype number from that office. An Su-35 for example is from the Sukhoi design bureau and is prototype 35. During the Cold War, NATO simplified these designations for radio transmission. Each aircraft is given a name. The first letter denotes the role, B for bomber, F for fighter, H for helicopter. If the name has 1 syllable, it is propeller powered, if it has 2 syllables it is jet powered. So we end up with names such as Flanker (the Su-35), Bear (Tu-95) and Hind (Mi-24).<br/><br/>USA<br/><br/>US aircraft designations are similar to soviet designations in that they contain letters followed by numbers. The numbers in US designation denote the model number. This is not bound to a specific manufacturer however, this is the service model number. The letters denote the aircrafts basic mission and in specialist cases, vehicle type. An additional letter can be assigned to denote a modified mission. This denotes the craft has been changed from the original spec to fill a specific role.<br/><br/>A = Attack. This is a tactical attack craft used for short term tactical gains. Usually these are smaller craft with a varied payload. The only A class craft in the US arsenal at present is the A-10.<br/>B = Bomber. Used for longer term strategic gains, these are generally larger craft carrying large bomb payloads.<br/>C = Cargo. These are craft designed to transport goods or personnel.<br/>D = Drone Operator. This is a modified mission code signifying that this craft can control drones.<br/>E = Electronic. This is usually used as a modified mission code to denote an aircraft with specialist electronics. The EA-18 for example is used to attack radar/radio infrastructure.<br/>F = Fighter. This denotes a small craft designed for air to air combat.<br/>G = Glider. This is a vehicle type code to denote an unpowered glider.<br/>H = Helicopter/SAR. This can be used to denote a helicopter vehicle type, or a search and rescue mission type. The HH-60 for example is a search and rescue helicopter.<br/>K = Tanker. This originates from Kerosene and denotes a craft carrying fuel, usually for mid-air refueling.<br/>L = Laser Equipped/Cold Weather. These are mission terms denoting a specialist fits, usually to utility craft.<br/>M = Multi-Mission. This is a mission code that denotes a craft that is capable of multiple roles. The MH-60 of the US Navy for example can transport, runs CSAR and can deploy mines or torpedoes.<br/>O = Observation. These craft are used to observe or spot enemy. They can be used to direct forces in the C2 role or can act as AFAC.<br/>P = Patrol. This code denotes a long range patrol craft, usually operating from a Navy shore base.<br/>Q = Unmanned Aerial Vehicle. This code denotes drones. They can be of any type and additional codes are often applied. The MQ-9 for example is a Multirole Drone capable of attack or recon.<br/>S = Anti-Submarine. This denotes a craft designed specifically to target and engage submarines. The use of this code is in decline in modern times as the US Navy switches more vehicles to multirole variants.<br/>T = Trainer. Nothing more to say, these craft are used for training purposes.<br/>U = Utility. This denotes a craft capable of multiple roles, much like the M classification. The difference is that M class vehicles are used for combat or special operations, U class are used for support and logistics.<br/>V = VTOL/Staff Transport. If used as a vehicle code, the craft is either VTOL or STOVL. This code is always accompanied with a mission code i.e AV-8 (Attack VTOL model 8 or Harrier). If V is used as the mission code then it denotes VIP transport. Marine 1, the presidential helicopter, is a VH-60 for example.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
	};
};
