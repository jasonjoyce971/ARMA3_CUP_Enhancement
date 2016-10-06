class CfgPatches
{
	class ARMA3_CUP_Enhancement_CH47
	{
		units[]=
		{
			"JAS_CUP_B_CH47F_USA",
			"JAS_CUP_B_CH47F_GB",
			"JAS_CUP_B_CH47F_AAC",
			"JAS_CUP_B_CH47F_VIV_GB",
			"JAS_CUP_B_CH47F_VIV_AAC",
			"JAS_CUP_B_CH47F_VIV_USA"
		};
		weapons[]=
		{
			
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Heli",
			"A3_Weapons_F",
			"A3_CargoPoses_f",
			"ARMA3_CUP_Enhancement_Systems",
			"FIR_AirWeaponSystem_US",
			"CUP_BaseData",
			"CUP_BaseConfigs",
			"CUP_AirVehicles_Core",
			"ARMA3_CUP_Enhancement_Weapons",
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
		class ARMA3_CUP_Enhancement_CH47
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_CH47"
			};
		};
	};
};
/* class CfgMissions
{
	// Campaigns
	class Campaigns
	{
		class RootCampaign
		{
			// Each of these definitions are applied to the root campaign
			briefingname = $STR_A3_CampaignName;
			overviewText = $STR_A3_CampaignOverview;
			author = $STR_A3_Bohemia_Interactive;
			overviewPicture = "a3\Missions_F_EPA\data\img\Campaign_overview_CA.paa";
			// Classes of episodes included
			campaigns[] = {StageA, StageB, StageC};
			class StageA
			{
				directory = "A3\Missions_F_EPA\Campaign";	
				//include the campaign description.ext to make it's content re-usable outside of the campaign
				#include "\A3\Missions_F_EPA\Campaign\description.ext"
			};
			class StageB
			{
				directory = "A3\Missions_F_EPA\CampaignDummy";
			};
			class StageC
			{
				directory = "A3\Missions_F_EPA\CampaignDummy2";
			};
		};
	};
	// Showcase missions
	class Showcases
	{
		displayName = $STR_A3_CFGMISSIONS_SHOWCASES0;
		briefingName = $STR_A3_CFGMISSIONS_SHOWCASES0;
		author = $STR_A3_Bohemia_Interactive;
		overviewPicture = "a3\Missions_F_Beta\data\img\Campaign_overview_CA.paa";
		overviewText = $STR_A3_CFGMISSIONS_SHOWCASES0;
		class Showcase_Ranges
		{
			briefingName = "-{GOL}- AAC Weapons Training";
			directory = "ARMA3_CUP_Enhancement_CH47\missions\AACFlightSchool.Stratis";
			overviewText = "Coastal range complex for fixed wing weapons training";
			overviewPicture = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			author = "-{GOL}-Jason";
		};
	};
	// Multiplayer missions
	class MPMissions
	{
		class MP_COOP_m01
		{
			briefingName="@STR_A3_MP_COOP_m01_briefingName";
			directory = "A3\missions_f\mpscenarios\MP_COOP_m01.Stratis";
		};
	};
	// Challenges
	class Challenges
	{
		briefingName = $STR_A3_CHALLENGES_NAME;
		overviewText = $STR_A3_CHALLENGES_OVERVIEW;
		overviewPicture = "\a3\Missions_F_Beta\data\img\Challenges_overview_CA.paa";
		// Firing Drills
		author = $STR_A3_Bohemia_Interactive;
		class Firing_Drills
		{
			briefingName = $STR_A3_FIRING_DRILLS_NAME;
			overviewText = $STR_A3_FIRING_DRILLS_OVERVIEW;
			overviewPicture = "\a3\Missions_F_Beta\data\img\FiringDrills_overview_CA.paa";
			author = $STR_A3_Bohemia_Interactive;
			class SP_FD04 //Green
			{
				directory = "a3\Missions_F_Beta\Challenges\firing_drills\sp_fd04.stratis";
				briefingName = $STR_A3_FIRING_DRILLS_SP_FD04_NAME;
				overviewText = $STR_A3_FIRING_DRILLS_SP_FD04_OVERVIEW;
				overviewPicture = "\a3\Missions_F_Beta\data\img\SP_FD04_overview_CA.paa";
				author = $STR_A3_Bohemia_Interactive;
			};
		};
	};
}; */
class DefaultEventhandlers;
class Eventhandlers;
class CBA_Extended_EventHandlers;
class IGUIBack;
class RscControlsGroup;
class RscText;
class RangeText : RscText
{
};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscFrame;
class RscCombo;
class Rsclistbox;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscMapControl;
class RscObject;
class RscHTML;
class RscTextCheckbox;
class RscEdit;
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class A10
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-10II Thunderbolt";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "Famous the world over for its performance and its ugly ass looks, the A-10 'Warthog' has been repeatedly touted as the greatest ground attack craft of modern times. Built from the ground up to kill tanks and ground emplacements, everything about the design is there to enhance its ground attack capabilities. This single mindedness of design however does mean that the A-10 is possibly the slowest jet in the game. When you're carrying more bombs than some bombers however, who cares how fast you are?<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2Mk82 GPB<br/>%2Mk82 SNAKE<br/>%2Mk84 GPB<br/>%2HYDRA Rockets<br/>%2ZUNI Rockets<br/>%2CRV-7 Rockets<br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-31<br/>%2GBU-38<br/>%2CBU-87<br/>%2CBU-89<br/>%2CBU-97<br/>%2CBU-103<br/>%2SUU-25<br/><br/>Factions:<br/><br/>%2US Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class A143R
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A143R Buzzard";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Air superiority Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Buzzard is the fictional fast air of the AAF and is loosely based on the L39 Albatros. The Buzzard is the worst of the vanilla aircraft in that its payload is tiny. The 'R' variant goes someway toward fixing this by offering payload customisation but the limited stations mean that the Buzzard is still out classed in the ground attack role. It is however, quite fast and very nimble making it useful in a dog fight or for baiting SAMs in the SEAD role.<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2AIM-120<br/>%2HYDRA Rockets<br/>%2ZUNI Rockets<br/>%2Mk82 GPB<br/>%2Mk82 SNAKE<br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2GBU-12<br/>%2GBU-38<br/>CBU-87<br/>%2CBU-89<br/>%2CBU-97<br/>%2CBU-103<br/>%2LANTIRN Pod for self designating targets<br/><br/>Factions:<br/><br/>%2AAF";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class A164J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-164J Wipeout";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Future Ground Strike Aircraft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The A-164 is the fictional ARMA replacement for the A-10 and is available for the NATO faction. The 'J' variant has the option of adjusting its payload for specific mission requirements and incorporates a CCIP system to improve accuracy with unguided munitions.<br/><br/>Payload Options:<br/><br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-31<br/>%2GBU-32<br/>%2GBU-38<br/>%2CBU-87<br/>%2CBU-89<br/>%2CBU-97<br/>%2CBU-103<br/>%2Mk82 GPB<br/>%2Mk82 Snakeye<br/>%2BLU-107<br/>%2AIM-9M<br/>%2AIM-9X<br/><br/>Factions:<br/><br/>%2NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AH1Z
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AH-1Z Viper";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Attack Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The AH-1Z is the culmination of successive upgrades to the original AH-1 Cobra. The Cobra saw action in Vietnam and throughout the Cold War era until it was eventually phased out of US Army use to make way for the AH-64. The USMC however, prefered the AH-1 since it was easier to stow, maintain and operate at sea. The USMC AH-1 fleet then was upgraded to the W variant Super Cobra and subsequently the Z variant Viper. The platform is comparable to the AH-64 in most aspects, but is still prefered by the USMC simply due to its size.<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2HYDRA Rockets<br/>%2AGM-114K<br/><br/>Factions:<br/><br/>%2USMC<br/>%2Altis Armed Forces";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AH64
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AH-64 Apache";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The AH-64 entered life as a replacement for the USAF AH-1 Cobra. Born to kill soviet tanks during the cold war, the Apache went through the same process as the A-10. It is a purpose built tank hunter and possibly the best helicopter in this role in the world. Nimble and fast with a huge capacity for damage output, the Apache is the epitome of the helicopter gunship.<br/><br/>Payload Options:<br/><br/>%2AIM-9L Sidewinder<br/>%2AGM-122 Sidearm (US Army Only)<br/>%2HYDRA Rockets<br/>%2CRV-7 Rockets<br/>%2AGM-114L 'Longbow' Hellfire II<br/>%2AGM-114N Hellfire II (Thermobaric Warhead)<br/>%2Brimstone (UK AAC Only)<br/><br/>Factions:<br/><br/>%2US Army<br/>%2UK AAC";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AN2
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Antonov An-2";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The An-2 is an old prop powered transport plane dating back to 1946. Given its age it is slow and cumbersome but this dreadful speed does have an advantage, the An-2 can land in fields that other transport planes would consider suicidal.<br/><br/>Factions:<br/><br/>%2Takistani Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AV8
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AV-8 Harrier";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack STOVL";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Harrier chassis was produced in the US as the AV-8 and the UK as the Harrier throughout the 70s and 80s and was the worlds first true STOVL attack craft. Designed to operate from LHDs or the UKs Invincible class aircraft carriers, the Harrier saw nearly 20 years service before being phased out and replaced by the F-35. The last remaining harriers in service are with the USMC and will be replaced by 2020. Due to the nature of its deployment, the AV-8 cannot compare to the A-10 in the ground attack role. It can however take off from airfields that the A-10 can only dream of making it a lot easier to deploy.<br/><br/>Payload Options:<br/><br/>%2AIM-9. The UK GR9 variant has 2 extra hardpoints dedicated to these missiles<br/>%2AIM-120 (USMC Only)<br/>%2AGM-65D<br/>%2AGM-65G<br/>%2AGM-65L<br/>%2AGM-88 (USMC Only)<br/>%2CRV-7 Rockets (UK Only)<br/>%2Mk82 GPB<br/>%2Mk82 SNAKE<br/>%2Mk84 GPB<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-24<br/>%2GBU-31 (USMC Only)<br/>%2GBU-32 (USMC Only)<br/>%2GBU-38 (USMC Only)<br/>%2CBU-87 (USMC Only)<br/>%2CBU-89 (USMC Only)<br/>%2CBU-97 (USMC Only)<br/>%2CBU-103 (USMC Only)<br/><br/>Factions:<br/><br/>%2USMC<br/>%2UK";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AW101
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AW101 Merlin";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Merlin was designed in a joint venture between Agusta from Italy and Westland from the UK on the request of their respective governments to produce a new naval utility helicopter. The original designation EWI01 was lost to a typo and became EW101 which became AW101. The model name Merlin is only officially used by 4 countries, Britain, Denmark, Norway and Portugal but has become more commonly used since the platforms introduction in 1999. The Royal Navy use their Merlins for a variety of tasks including Anti-Submarine warfare, Airborne Early Warning and SAR but the systems primary function is medium lift transport. For a chopper of its capability, the Merlin is suprisingly easy to fly and is quite durable leading to its place as the RAFs prefered mass insertion chopper.<br/><br/>Factions:<br/><br/>%2NATO<br/>%2United Kingdom<br/>%2Altis Armed Forces";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class AW159
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "AW159 Wildcat";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The AW159 came about as an upgrade to the Westland Lynx. Almost everything about the Lynx has been modified and the Wildcat now only shares its basic shape and legendary speed with its predecessor. The Wildcats charm lies in its versatility, it can transport, sling load, provide recon, kill tanks or barrage areas depending on the variant deployed.<br/><br/>Variants:<br/><br/>%2Clean - Basic Transport<br/>%2Anti-Tank - Tank Hunting Gunship<br/>%2General Purpose - Multirole Direct Action Penetrator<br/><br/>Factions:<br/><br/>%2NATO<br/>%2United Kingdom<br/>%2Altis Armed Forces";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		/* class C5
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "C-5 Galaxy";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Mass Transport";
			// Structured text, filled by arguments from 'arguments' param
			description = "The C-5 is the largest aircraft in the NATO arsenal. Capable of transporting anything from infantry to tanks across almost half the world it is THE logistics craft of choice for NATO forces deploying en masse to a theatre. This capability does however come at a price, the Galaxy is more like an airliner than a military aircraft and is possibly the single least maneuvrable aircraft in the game.<br/><br/>Factions:<br/><br/>NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		}; */
		class CH47
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "CH-47 Chinook";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Heavy Lift Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The CH-47 has been in service for decades and perhaps the most easily recognised helicopter in existence due to its tandem rotor system. Its load capacity and ruggedness has seen the Chinook deployed in every NATO warzone since Vietnam and in extreme conditions such as Afghanistan, it is actually prefered over more advanced systems. The vanilla Helicopters DLC introduced the 'Huron' as a fictional future upgrade for the Chinook.<br/><br/>In game terms the Chinook is pretty simple in its employment, it transports men and material. The AAC upgrade pack takes the stock CUP Chinook variants and adds AFM.<br/><br/>Factions:<br/><br/>%2US Army<br/>%2UK";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class CH53
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "CH-53 Stallion";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The CH-53 originated in Vietnam as the 'Jolly Green Giant' of the US Air Force or the 'Sea Stallion' of the USMC. The 53 was designed to offer greater lift capability than the Chinook and offered greater speed and defensive capability. After Vietnam and through the 80s, the Air Force pushed their 53s down a specialised CSAR path that would see the introduction of the Pave Low. The USMC however stuck with their beloved Stallions, upgrading them repeatedly. The Pave Low was retired in 2008 while the latest 'Super' Stallion remains in service with the USMC to this day.<br/><br/>Factions:<br/><br/>%2Germany<br/>%2USMC";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class C130
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "C-130 Hercules";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Mass Transport";
			// Structured text, filled by arguments from 'arguments' param
			description = "The C-130 is possibly the most famous transport plane of all time. Featured in numerous movies and books, the 'Herc' has seen action all over the world over 50 years of service and holds the record for the longest continuous production of a military aircraft. While smaller than the C-5, the C-130 is capable of flying much lower and slower making it a prime choice for airborne insertion.<br/><br/>Factions:<br/><br/>%2UK<br/>%2USMC<br/>%2Takistani Army<br/>%2Altis Armed Forces<br/>%2Royal Army Corps of Sahrani";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class FA18
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "F/A-18 Hornet";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Naval multi-role fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The F/A-18 is the current fighter of choice of the US Navy and USMC. Designed specifically to limit the need for multiple aircraft, the Hornet can dogfight, sink ships, refuel buddys and take out ground targets with relative ease, hence the unique designation F/A. The 'E' variant is a single seat version intended for general purpose deployment, while the 'F' variant is a twin seat version intended for all weather/low visibility use. Often considered the best all round aircraft in the world at present, the Hornet is scheduled to be replaced by the F-35 by 2030.<br/><br/>Payload Options:<br/><br/>%2AIM-9<br/>%2 AIM-120<br/>%2AGM-65D<br/>%2AGM-84<br/>%2GBU-12<br/>%2GBU-31<br/>%2GBU-32<br/>%2GBU-38<br/>%2 ALTFLIR Pod (F variant only)<br/>%2Buddy Fuel Pod (F variant only)<br/><br/>Factions:<br/><br/>NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class F35J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "F-35J Lightning";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Multi-role Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The F-35 is currently under development in 3 variants and is scheduled to replace most current aircraft by 2025. Capable of both fighter and strike missions the F-35 is set to be primarily used by the UK and the USMC although it is also scheduled for deployment by 7 other countries. The 'J' variant in game features adustable payload for mission specific tasks. The J is based on the current B variant and is a Short Take Off Vertical Landing (STOVL) system. It can operate from short airfields and the Landing Helicopter Dock as well as more conventional airbases.<br/><br/>Payload Options:<br/><br/>%2AIM-9X<br/>%2AIM-120<br/>%2GBU-10<br/>%2GBU-12<br/>%2GBU-24B<br/>%2GBU-31<br/>%2GBU-38<br/>%2Mk82 Snakeye<br/>%2Mk82 GPB<br/>%2GBU-39 SDB<br/>%2GBU-53 SDB<br/>%2AGM-154A (USMC ONLY)<br/>%2AGM-154C (USMC ONLY)<br/>%2AGM-65D (USMC ONLY)<br/>%2AGM-65G (USMC ONLY)<br/>%2AGM-65L (USMC ONLY)<br/>%2CBU-87 (USMC ONLY)<br/>%2CBU-89 (USMC ONLY)<br/>%2CBU-97 (USMC ONLY)<br/>%2CBU-103 (USMC ONLY)<br/>%2BRIMSTONE (RAF/RN ONLY)<br/>%2STORM SHADOW (RAF/RN ONLY)<br/><br/>Factions:<br/><br/>%2USMC<br/>%2UK";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class H6J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "H-6J Littlebird";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Multi-role Light Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Littlebird first entered service during Vietnam as the OH-6 Cayuse. Originally intended as an observation platform for artillery and recon, the aircraft was intentionally designed to be fast and light. In 1980, the creation of the 160th Special Operations Aviation Regiment exposed the need for fast, light transports capable of landing where conventional helicopters could not. Boeing won the contract to upgrade the original Hughes chassis and the MH-6 was born. Attack variants came later on the specific request of 160SOAR, giving the regiment a fleet of helicopters that could be deployed by airlift at a moments notice. The Mission Enhanced Littlebird program ensures that the MH-6 and its siblings will remain in service for years to come.<br/><br/>The AAC upgrade pack adds AFM to the CUP H-6 family across all of its variants.<br/><br/>Variants:<br/><br/>MH-6 Transport<br/>AH-6 Light Attack<br/><br/>AH-6 Payload Options<br/><br/>HYDRA 70mm FFAR<br/>AGM-114K<br/>AGM-114N<br/><br/>Factions:<br/><br/>%2US Army<br/>%2Royal Army Corps of Sahrani";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class KA50
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Ka-50 Black Shark";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Armed Recon Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Ka-50, NATO designation Hokum, is a single seat armed recon helicopter. Capable of acting as a gunship, the Black Shark is comparable to the AH-64 but the co-axial rotor arrangement means the Black Shark is actually faster and capable of aerobatics that helicopters cannot usually perform. The Ka-52 Alligator is a special variant of the Ka-50. Fitted with a second seat, the Alligator has increased all weather capability although the positioning of the optics suite means it must operate close to the ground. In game terms the Ka-50 has a changeable payload but the Ka-52 does not, this is due to model limitations.<br/><br/>Payload Options:<br/><br/>%2S-8 Rockets<br/>%2S-13 Rockets<br/>%2GSh-23 Pod<br/>%2FAB-250<br/>%2KAB-250<br/>%2Vikhir<br/>%2Kh-29<br/>%2IGLA<br/><br/>Factions:<br/><br/>%2Russian Federation<br/>%2Sahrani Liberation Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class KA60
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Ka-60 Kasatka";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Ka-60 is a light transport helicopter from Russia. Although present in game, the actual Ka-60 is only just entering service and the base game version is futuristic vanilla content. The platform is expected to be modified for recon, electronic warfare and a Direct Action Penetrator pack is also expected. In game terms the Ka-60 is comparable to the Wildcat and can deliver light CAS, recon or troops. The controls however are notoriously twitchy making accurate CAS delivery tricky.<br/><br/>Factions:<br/><br/>%2CSAT<br/>%2Altis Armed Forces<br/>%2ION PMC";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class MI6
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Mi-6 Hook";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Mass Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Hook is a true giant of the helicopter world, the thing is massive. It is so big in fact, it requires wings as well as rotors to generate enough lift. Owing its design origins to the same need that gave birth to the Chinook, the Hook was designed to lift a complete fighting force, 65 men to be precise. The Hooks size however is a major pitfall making it cumbersome and difficult to control at low speed due to simple inertia.<br/><br/>Factions:<br/><br/>%2Chernarus Defence Force<br/>%2ChDKZ<br/>%2Russian Federation<br/>%2Takistani Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class MI8
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Mi-8/Mi-17 Hip";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Mi-8 and its development successor the Mi-17 are the main transport helicopter of the old eastern bloc. The Mi-8 still stands as the most produced helicopter of all time and has been sold to over 70 countries. As a military asset, the Mi-8 family is capable of deploying up to 14 soldiers into the hottest HLS using the external weapon systems.<br/><br/>Payload Options:<br/><br/>%2 S-8 Rockets<br/>%2S-13 Rockets<br/>%2GSh-23 Pod (Mi-17 Only)<br/><br/>Factions:<br/><br/>Chernarus Defence Force (Mi-17)<br/>%2Czech Republic (Mi-17)<br/>%2ChDKZ (Mi-8)<br/>%2CSAT (Both)<br/>%2Russian Federation (Mi-8)<br/>%2Sahrani Liberation Army (Mi-8)<br/>%2Takistani Army (Mi-17)<br/>%2United Nations (Mi-17)";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class MI24
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Mi-24/Mi-35 Hind";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Assault Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "Instantly recognised wherever it goes, the Hind is neither gunship nor transport chopper. Instead it is capable of punching its way through a defensive line like a gunship, then land a load of 8 soldiers into the hole it made. This unique trait has led to the Hind being dubbed the worlds only Assault Helicopter. After entering service in 1969, the Hind has given birth to over 50 sub-variants and is in operation in over 50 countries. In game there are 6 variants:<br/>D variant - original soviet issue<br/>P variant - introduces AT-6 and features a fixed forward firing autocannon<br/>V variant - retains AT-6 but reverts to the original gimbal cannon mount<br/>Mi-35 - not strictly speaking a variant, this is the designation of the export V variant<br/>Super III - introduces the AT-9 along with an avionics upgrade<br/>Super IV - Super III avionics with upgraded engine protection<br/>The Hinds only real weakness is its own weight, it can be quite a handful to fly especially when fully loaded.<br/><br/>Payload Options:<br/><br/>%2GSh-23 Pod<br/>%2AT-2 (D variant only)<br/>%2IGLA<br/>%2FAB-250<br/>%2KAB-250<br/>%2AT-6 (P + V + Mi-35 + Super variants only)<br/>%2AT-9 (Super variants only)<br/><br/>Factions:<br/><br/>%2Chernarus Defence Force (D variant)<br/>%2Czech Republic (Mi-35)<br/>%2Russian Federation (P + V Variants)<br/>%2Takistani Army (D variant)<br/>%2Altis Armed Forces (D variant)<br/>%2ION PMC (D, Super III + Super IV variants)<br/>%2United Nations (D variant)";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class MI48
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Mi-48 Kajman";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Assault Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Mi-48 is a fictional assault chopper based heavily on the Mi-24. Like the Mi-24 it is designed to fight its way to the target area before disembarking an assault party of ground troops. Its payload and optics also make it a capable gunship.<br/><br/>Factions:<br/><br/>%2CSAT";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class MI290
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Mi-290 Taru";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Taru is a vanilla content, fictional heavy lift chopper based heavily on the Sikorsky S-64. Even the name Taru is pretty close to the US Army S-64 designation Tarhe. The Taru is designed to work with a system of 'pods' that can be sling loaded. These pods can also be stowed under the fuselage but this system is not implemented in game. Instead a series of sub-variants with the pods already stowed are provided instead. This does however lead to a particular quirk of the Taru, only the base model can sling load. Variants with pre-fitted pods lose the ability to hoist since technically their hoist is already in use.<br/><br/>Factions:<br/><br/>%2CSAT";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class MV22
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "MV-22 Osprey";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "VTOL Transport Craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The MV-22 is a transport craft with a twist, it is part helicopter, part airplane. The Ospreys unique design means it can tilt its 'rotors' up to work like a chopper, or forward to work like a plane. This gives it a distinct advantage over other Condor assets but this utility comes at the cost of significantly reduced capacity. What it can do however, is take off and land from anywhere while being capable of flying much faster than any rotary craft.<br/><br/>Factions:<br/><br/>%2USMC";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class RAH66
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "RAH-66 Commanche";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Attack Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The RAH-66 was a program in the 90s designed to replace the AH-1 and OH-58 platforms by providing a single chopper capable of filling both roles. Due to cost overruns and greater emphasis on UAVs, the program was cancelled with only 2 prototypes still in existence. ARMA 3 vanilla content reintroduced the Commanche as the 'Blackfoot' operated by the NATO faction.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class SA330
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "SA-330 Puma";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Puma is the eternal bridsmaid of helicopter fleets around the world. Often forgotten about while people focus on its more famous stablemates, the Puma has quietly been transporting men for over 40 years in most theatres of war.<br/><br/>Factions:<br/><br/>%2United Kingdom<br/>%2Royal Army Corps of Sahrani";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class SU25J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Su-25J Frogfoot";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground Attack Airplane";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Su-25 is a single seat, ground attack craft similar in role to the more famous A-10. Although capable of carrying a wide selection of weapons, the Su-25 excels at low level strafing runs with gun pods or rockets. The AAC upgrade pack adds the ability to change the payload to suite the mission and brings additional weapons such as the RBK cluster bomb, S-13 rocket system and Kh-25 ARM.<br/><br/>Payload Options:<br/><br/>%2R-73<br/>%2GSh-23 Pod<br/>%2S-8 Rockets<br/>%2S-13 Rockets<br/>%2Kh-25<br/>%2Kh-29<br/>%2Vikhir<br/>%2FAB-250<br/>%2KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2Chernarus Defence Forces<br/>%2Russian Federation<br/>%2Sahrani Liberation Army<br/>%2Takistani Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class SU34J
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Su-34J Fullback";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Air Superiority Airplane";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Su-34 is a twin seat strike fighter designed seize air superiority in the local airspace. While capable of interception tasks, the Fullback is not a dogfighter, relying instead on missiles to eliminate air targets. Ground targets however are easy prey. The WSO station has a complete suite of optics and when used in conjunction with guided munitions, can be trusted to knock out any ground installation or vehicle.<br/><br/>Payload Options:<br/><br/>%2R-73<br/>%2GSh-23 Pod<br/>%2S-8 Rockets<br/>%2Kh-25<br/>%2Kh-29<br/>Vikhir<br/>%2FAB-250<br/>%2KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2Chernarus Defence Force<br/>%2Russian Federation<br/>%2Sahrani Liberation Army<br/>%2Altis Armed Forces";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class SU35
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Su-35 Flanker";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Multirole strike craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Su-35 is the culmination of an upgrade program for the original Su-27 Flanker. Faster and more agile than it's predecessor, the 35 is designed as a multirole fighter, much like the F/A-18. The Flanker is geared more toward air to air combat and ground attack is often handed to other squadrons while the Flanker deals more in air superiority. This does not mean that the Flanker is a pure fighter though, it can and often does carry ground attack weapons in order to attack targets of opportunity once the skies are clear.<br/><br/>Payload Options:<br/><br/>%2R-73<br/>%2R-77<br/>%2S-8 Rockets<br/>%2Kh-29<br/>%2KAB-500";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class UH1
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "UH-1 Iroquois";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The UH-1 is possibly the most famous helicopter in the world, it is certainly one of the most common. Built to be easy to maintain, easy to fly and easy to adapt, the system has seen multiple upgrades and life extensions and is still in use today after 60 years of service. In game terms, the AAC specifically operates the MUH UH-1 variants and the CUP UH-1Y.<br/><br/>Variants:<br/><br/>%2UH-1D - basic transport<br/>%2UH-1H - basic transport<br/>%2UH-1H Glow - CSAR<br/>%2UH-1H LMG - Tactical Insertion<br/>%2UH-1H Medevac - Dedicated Medical Transport<br/>%2UH-1H Rocket 48 - Aerial Rocket Artillery<br/>%2UH-1H XM16 - 1st Generation Gunship<br/>%2UH-1H XM21 - 2nd Generation Gunship<br/>%2UH-1N Gunship - Direct Action Penetrator<br/>%2UH-1N Transport - Basic Transport<br/>%2UH-1Y Venom Gunship - USMARSOC DAP<br/>%2UH-1Y Venom MEV - Dedicated Medical Transport<br/>%2UH-1Y Venom Transport - Basic Transport<br/><br/>Factions:<br/><br/>%2NATO<br/>%2USMC";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class UH60
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "UH-60 Blackhawk";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The UH-60 is the US Armys primary transport chopper. The airframe is robust, the systems are reliable and the platform is easy to adjust to task, traits that have resulted in numerous other variants including the US Navy SH-60 Seahawk.<br/><br/>Factions:<br/><br/>%2NATO<br/>%2US Army<br/>%2USMC (SH-60)<br/>%2Royal Army Corps of Sahrani";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class UH80
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "UH-80 Ghosthawk";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The UH-80 is a fictional transport chopper of the NATO faction from vanilla ARMA 3. It is modelled to resemble a futuristic UH-60 and operates in much the same role.";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class YAK130
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Yak-130";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Yak-130 is the fictional ground attack aircraft of the CSAT faction. The Yak is quite capable at ground attack and can even score fairly well in a dog fight. At present though the payload is fixed and is quite insubstantial when compared to other aircraft of this role.<br/><br/>Factions:<br/><br/>%2CSAT";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_CH47\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
	};
};
class RscInGameUI
{
	class RscUnitInfo;
	class Rsc_LilB_Kimi_Base : RscUnitInfo
	{
		controls[] =
		{
			"WeaponInfoControlsGroupRight",
			"CA_BackgroundVehicle",
			"CA_BackgroundVehicleTitle",
			"CA_BackgroundVehicleTitleDark",
			"CA_BackgroundFuel",
			"CA_Vehicle",
			"CA_VehicleRole",
			"CA_HitZones",
			"CA_SpeedBackground",
			"CA_SpeedUnits",
			"CA_Speed",
			"CA_ValueFuel",
			"CA_AltBackground",
			"CA_AltUnits",
			"CA_Alt",
			"CA_TextFlaresMode",
			"CA_TextFlares",
			"CA_Radar"
		};
		class CA_HMDs_Kimi_Autohover : RscPicture
		{
			shadow = 1;
			idc = 1204;
			text = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\autohover_ca.paa";
			x = "5.6 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",  (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.4 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",  (safezoneY + 0.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "0.8 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class Rsc_LilB_Kimi_UI_Turret : Rsc_LilB_Kimi_Base
	{
		idd = 300;
		controls[] =
		{
			"CA_Zeroing",
			"CA_IGUI_elements_group",
			"CA_HMDs_Kimi_Autohover"
		};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group : RscControlsGroup
		{
			idc = 170;
			class VScrollbar : VScrollbar
			{
				width = 0;
			};
			class HScrollbar : HScrollbar
			{
				height = 0;
			};
			x = "0 *   (0.01875 * SafezoneH) +   (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w = "53.5 *   (0.01875 * SafezoneH)";
			h = "40 *   (0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance : RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "24.78 *   (0.01875 * SafezoneH)";
					y = "30.88 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_Speed : RangeText
				{
					idc = 188;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "120";
					x = "14.78 *   (0.01875 * SafezoneH)";
					y = "30.88 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_Alt : RangeText
				{
					idc = 189;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "3825";
					x = "34.78 *   (0.01875 * SafezoneH)";
					y = "30.88 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_VisionMode : RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "12.58 *   (0.01875 * SafezoneH)";
					y = "8 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_FlirMode : RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "15.78 *   (0.01875 * SafezoneH)";
					y = "8 *   (0.025 * SafezoneH)";
					w = "4.5 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class ValueGrid : RangeText
				{
					idc = 172;
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.20 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
				};
				class TextTADS : RangeText
				{
					idc = 1010;
					text = "TADS";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = "12.30 *   (0.01875 * SafezoneH)";
					y = "5 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class ValueTime : RangeText
				{
					idc = 190;
					text = "20:28:35";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.1 *   (0.01875 * SafezoneH)";
					y = "6.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
				};
				class CA_Laser : RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\Apache_LaserOn.paa";
					x = "20.45 *   (0.01875 * SafezoneH)";
					y = "14.1 *   (0.025 * SafezoneH)";
					w = "12.5 *   (0.01875 * SafezoneH)";
					h = "12 *   (0.025 * SafezoneH)";
				};
				class CA_Heading : RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "24.83 *   (0.01875 * SafezoneH)";
					y = "6 *   (0.025 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class HelicopterWreck;
	class Air : AllVehicles
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
	};
	class Helicopter : Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class AnimationSources;
		class HitPoints;
	};
	class Helicopter_Base_F : Helicopter
	{
		class RotorLibHelicopterProperties;
		class DefaultEventhandlers;
		class Turrets : Turrets
		{
			class MainTurret;
			class NewTurret;
		};
		class HitPoints : HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
	};
	class Helicopter_Base_H : Helicopter_Base_F
	{
		class Eventhandlers;
		class ViewPilot;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets : Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class JAS_CUP_CH47F_base: Helicopter_Base_H
	{
		author="-{GOL}-Jason";
		mapSize=27.48;
		_generalMacro="JAS_CUP_CH47F_base";
		class RotorLibHelicopterProperties
		{
			RTDconfig="ARMA3_CUP_Enhancement_CH47\rotorLib\RTD_Heli_Transport_03.xml";
			autoHoverCorrection[]={6.5,0,0};
			defaultCollective=0.60500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=4032;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=350000;
			maxTailRotorStress=350000;
		};
		armor=40;
		maxSpeed=300;
		fuelCapacity=1360;
		fuelConsumptionRate=0.126;
		slingLoadMaxCargoMass=10000;
		radarType=8;
		canFloat=1;
		waterLeakiness=0.050000001;
		maxFordingDepth=2.5;
		waterResistanceCoef=1;
		waterResistance=10;
		waterLinearDampingCoefY=5;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=5;
		waterDamageEngine=0.2;
		liftForceCoef=1.5;
		mainBladeRadius=8;
		tailBladeCenter="rotor_02_center";
		tailBladeRadius=8;
		tailBladeVertical=0;
		memoryPointTaskMarker="TaskMarker_1_pos";
		cost=10000000;
		threat[]={0.30000001,0.2,0.30000001};
		editorSubcategory="EdSubcat_Helicopters";
		icon="\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Map_Heli_Transport_03_base_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Heli_Transport_03_base_CA.paa";
		gearRetracting=0;
		gearUpTime=0;
		gearDownTime=0;
		driveOnComponent[]=
		{
			"gear_1_1_wheels",
			"gear_2_1_wheels",
			"gear_1_2_wheel",
			"gear_2_2_wheel"
		};
		scope=0;
		displayname="CH-47 Base";
		class Library
		{
			libTextDesc="$STR_A3_HURON_DESC_F0";
		};
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverAction = "CUP_CH47_Pilot";
		driverInAction="pilot_Heli_Transport_03";
		GetInAction="GetInMedium";
		getOutAction="GetOutMedium";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[] =
		{
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1",
			"CUP_CH47_Cargo01_EP1",
			"CUP_CH47_Cargo03_EP1",
			"CUP_CH47_Cargo02_EP1"
		};
		enableManualFire=0;
		model="CUP\AirVehicles\CUP_AirVehicles_CH47\CUP_CH_47F.p3d";
		DLC="Heli";
		overviewPicture="\A3\Data_F_Heli\Images\dlcbrowser_heli_01_ca.paa";
		transportSoldier=14;
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		hideWeaponsCargo=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment3"
		};
		memoryPointCM[] =
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[] =
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		lockDetectionSystem="1 + 8 + 4";
		incomingMissileDetectionSystem=16;
		selectionHRotorMove="velka vrtule blur";
		selectionHRotorStill="velka vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		maximumLoad=6000;
		supplyRadius=-0.5;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		class MFD
		{
		};
		class HitPoints : HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "trup";
				visual = "trup";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.5;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			class HitAvionics
			{
				armor = 0.15000001;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 1;
			};
			class HitVRotor
			{
				armor = 0.5;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.30000001;
			};
			class HitHRotor
			{
				armor = 0.5;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
		};
		class AnimationSources : AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "CUP_M134";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "CUP_M134_2";
			};
			class Gatling_1_muzzle_hide
			{
				source = "reload";
				weapon = "CUP_M134";
			};
			class Gatling_1_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_M134";
			};
			class Gatling_2_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_M134_2";
			};
			class machinegun_muzzle_rot
			{
				source = "ammorandom";
				weapon = "CUP_M240_veh_W";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "CUP_M240_veh_W";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "CUP_M240_veh_W";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "CUP_M240_veh_W";
			};
		};
		class UserActions
		{
			/* class Ramp_Open
			{
				userActionID=60;
				displayName="$STR_ACTION_RAMP_OPEN0";
				textToolTip="$STR_ACTION_RAMP_OPEN0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="";
				condition="this doorPhase ""Door_rear_source"" < 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement="this animateDoor ['Door_rear_source', 1]";
				priority=1.5;
				radius=1.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				showWindow=0;
				onlyForPlayer=1;
				shortcut="";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID=61;
				displayName="$STR_ACTION_RAMP_CLOSE0";
				textToolTip="$STR_ACTION_RAMP_CLOSE0";
				condition="this doorPhase ""Door_rear_source"" > 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement="this animateDoor ['Door_rear_source', 0]";
			}; */
		};
		class RenderTargets
		{
			class SlingLoadCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="slingLoad_cam_pos";
					pointDirection="slingLoad_cam_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		dustEffect="HeliDustBig";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustEffectHeli";
			};
			class Exhaust2
			{
				position = "exhaust_2";
				direction = "exhaust_2_dir";
				effect = "ExhaustEffectHeli";
			};
		};
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\int-alarm_loop",
			10,
			1
		};
		soundGetIn[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\close",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\open",
			1,
			1,
			40
		};
		soundEngineOnInt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_start_int",
			0.25118864,
			1
		};
		soundEngineOnExt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_start_ext",
			1.4125376,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_stop_int",
			0.25118864,
			1
		};
		soundEngineOffExt[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_stop_ext",
			1.4125376,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			0.31622776,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",
			2.5118864,
			1,
			150
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_ext",
					1.7782794,
					1,
					800
				};
				frequency="rotorSpeed";
				volume="camPos*(rotorSpeed factor[0.4,1])";
			};
			class RotorExt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_ext",
					1.4125376,
					0.80000001,
					2000
				};
				frequency="rotorSpeed*1.1";
				volume="1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorSwistExt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_forsage_ext",
					1,
					1,
					400
				};
				frequency=1;
				volume="camPos*(rotorThrust factor [0.6, 1])";
				cone[]={1,1.4,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_int",
					0.79432821,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[]=
				{
					"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_int",
					1,
					0.80000001
				};
				frequency="rotorSpeed*1.1";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.63095737,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					1.1220185,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[50,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_ext",
						1.7782794,
						1,
						800
					};
					frequency="rotorSpeed";
					volume="camPos*(rotorSpeed factor[0.4,1])";
				};
				class RotorExt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_ext",
						1.4125376,
						0.80000001,
						2000
					};
					frequency="rotorSpeed*1.1";
					volume="1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorSwistExt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_forsage_ext",
						1,
						1,
						400
					};
					frequency=1;
					volume="camPos*(rotorThrust factor [0.6, 1])";
					cone[]={1,1.4,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_engine_high_int",
						0.79432821,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[]=
					{
						"CUP\AirVehicles\CUP_AirVehicles_CH47\sounds\CH47_rotor_int",
						1,
						0.80000001
					};
					frequency="rotorSpeed*1.1";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.63095737,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[50,80])";
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret : MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = -3;
				maxTurn = 173;
				initTurn = 0;
				soundServo[] =
				{
					"db-40",
					1
				};
				animationSourceHatch = "";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] =
				{
					"CUP_M134"
				};
				magazines[] =
				{
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
				gunnerName = "$STR_CUP_POSITION_CREWCHIEF";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "CUP_CH47_Gunner";
				gunnerInAction = "CUP_CH47_Gunner";
				commanding = -2;
				primaryGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.69999999;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				isCopilot = 0;
				selectionFireAnim = "zasleh";
				slingLoadOperator = 0;
			};
			class RightDoorGun : MainTurret
			{
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 30;
				initElev = -30;
				minTurn = -173;
				maxTurn = 3;
				initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				weapons[] =
				{
					"CUP_M134_2"
				};
				magazines[] =
				{
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerName = "$STR_CUP_POSITION_DOORGUNNER";
				commanding = -2;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				preciseGetInOut = 1;
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				isCopilot = 0;
				turretFollowFreeLook = 0;
				slingLoadOperator = 0;
			};
			class BackDoorGun : MainTurret
			{
				body = "Turret3";
				gun = "Gun_3";
				minTurn = 130;
				maxTurn = 230;
				initTurn = 180;
				minElev = -50;
				maxElev = 50;
				initElev = 0;
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				stabilizedInAxes = 0;
				selectionFireAnim = "zasleh_3";
				proxyIndex = 3;
				gunnerName = "$STR_CUP_POSITION_REARGUNNER";
				gunnerOpticsShowCursor = 0;
				commanding = -1;
				gunnerAction = "CUP_CH47_Gunner01";
				gunnerInAction = "CUP_CH47_Gunner01";
				weapons[] =
				{
					"CUP_M240_veh_W"
				};
				magazines[] =
				{
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
				};
				gunBeg = "muzzle_3";
				gunEnd = "chamber_3";
				primaryGunner = 0;
				memoryPointGun = "machinegun_3";
				memoryPointGunnerOptics = "gunnerview_3";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerCompartments = "Compartment2";
				isCopilot = 0;
				slingLoadOperator = 0;
			};
			class CopilotTurret : CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "CUP_CH47_Pilot";
				gunnerInAction = "CUP_CH47_Pilot";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 4;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				isCopilot = 1;
				slingLoadOperator = 0;
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "pos_light_still_white";
				color[] = { 1, 1, 1 };
				ambient[] = { 0.1, 0.1, 0.1 };
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15000001;
				drawLightCenterSize = 0.039999999;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedStill
			{
				name = "pos_light_still_red";
				color[] = { 0.80000001, 0, 0 };
				ambient[] = { 0.079999998, 0, 0 };
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15000001;
				drawLightCenterSize = 0.039999999;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "pos_light_still_green";
				color[] = { 0, 0.80000001, 0 };
				ambient[] = { 0, 0.079999998, 0 };
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15000001;
				drawLightCenterSize = 0.039999999;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "pos_light_blink_red";
				color[] = { 0.89999998, 0.15000001, 0.1 };
				ambient[] = { 0.090000004, 0.015, 0.0099999998 };
				intensity = 75;
				blinking = 1;
				blinkingStartsOn = 0;
				blinkingPattern[] = { 0.89999998, 0.1 };
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.039999999;
			};
			class WhiteBlinking
			{
				name = "pos_light_blink_white";
				color[] = { 1, 1, 1 };
				ambient[] = { 0.1, 0.1, 0.1 };
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = { 0.1, 0.89999998 };
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.079999998;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = { 7000, 7500, 10000, 1 };
				ambient[] = { 100, 100, 100, 0 };
				position = "light_m";
				direction = "light_m_direction";
				hitpoint = "light_m";
				selection = "light_m";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					directionStabilized = 1;
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					thermalMode[] = { 0, 1 };
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics = 0;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 80;
			maxElev = 80;
			initElev = 80;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 0;
		};
		memoryPointDriverOptics = "slingCamera";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_1_int_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_int.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_2_int_destruct.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_in.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_in_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_damage.rvmat",
				"CUP\AirVehicles\CUP_AirVehicles_CH47\data\ch47_sklo_damage.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		numberPhysicalWheels=4;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=20;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 16;
		LESH_canBeTowed = 1;
		LESH_towFromFront = 0;
		LESH_AxisOffsetTarget[] = { 0, -7.5, -2.3599999 };
		LESH_WheelOffset[] = { 0, 3 };
	};
	class JAS_CUP_CH47F_VIV_Base: JAS_CUP_CH47F_base
	{
		displayName="CH-47J Cargo Transport";
		model="\CUP\AirVehicles\CUP_AirVehicles_CH47\CUP_CH_47F_VIV.p3d";
		transportSoldier=0;
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VTV_limit_1",
					"VTV_limit_2"
				};
				disableHeightLimit=0;
				maxLoadMass=13000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit_1"
				};
				unloadingInterval=3;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class RightDoorGun: RightDoorGun
			{
			};
			class CopilotTurret: CopilotTurret
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class Turret_3
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Gun_3
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class JAS_CUP_B_CH47F_USA : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "CH-47J Troop Transport";
		faction = "CUP_B_US_Army";
		side = 1;
		crew = "CUP_B_US_Pilot";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FUSA.jpg";
	};
	class JAS_CUP_B_CH47F_VIV_USA: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		faction="CUP_B_US_Army";
		side=1;
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FUSA.jpg";
	};
	class JAS_CUP_B_CH47F_AAC : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "CH-47J Troop Transport";
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		side = 1;
		crew = "CUP_B_US_Pilot";
		typicalCargo[] =
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
	class JAS_CUP_B_CH47F_VIV_AAC: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_GIANT";
		side=1;
		crew="CUP_B_US_Pilot";
		typicalCargo[]=
		{
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot",
			"CUP_B_US_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa"
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
	class JAS_CUP_B_CH47F_GB : JAS_CUP_CH47F_base
	{
		author = "CUP Aplion/-{GOL}-Jason";
		scope = 2;
		displayName = "Chinook HC-4J Troop Transport";
		faction = "CUP_B_GB";
		side = 1;
		crew = "CUP_B_BAF_Pilot_DDPM";
		typicalCargo[] =
		{
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM"
		};
		hiddenSelectionsTextures[] =
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
			""
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
	class JAS_CUP_B_CH47F_VIV_GB: JAS_CUP_CH47F_VIV_Base
	{
		author="-{GOL}-Jason";
		scope=2;
		displayName="Chinook HC-4 Cargo Transport";
		faction="CUP_B_GB";
		side=1;
		crew="CUP_B_BAF_Pilot_DDPM";
		typicalCargo[]=
		{
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM",
			"CUP_B_BAF_Pilot_DDPM"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
			"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
			""
		};
		editorPreview="ARMA3_CUP_Enhancement_CH47\UI\editorpreview\CH47FGB.jpg";
	};
};
