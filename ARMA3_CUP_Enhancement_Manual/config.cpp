class CfgPatches
{
	class ARMA3_CUP_Enhancement_Manual
	{
		units[]=
		{
			
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
			"FIR_AirWeaponSystem_US",
			"ARMA3_CUP_Enhancement_Systems",
			"ARMA3_CUP_Enhancement_Weapons",
			"CUP_BaseData",
			"CUP_BaseConfigs",
			"CUP_AirVehicles_Core",
			"CUP_AirVehicles_a10",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_VehicleWeapons",
			"CUP_Weapons_Pods",
			"CUP_Weapons_WeaponsCore",
			"A3_Modules_F"
		};
		name="Field Manual";
		author="-{GOL}-Jason";
		url="https://github.com/jasonjoyce971/ARMA3_CUP_Enhancement#arma3_cup_enhancement";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ARMA3_CUP_Enhancement_Manual
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_Manual"
			};
		};
	};
};
class CfgHints
{
	class JASAIRCRAFT
	{
		// Topic title (displayed only in topic listbox in Field Manual)
		displayName = "-{GOL}-Aircraft Guide";
		class 0designationPractices
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
		class A10
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-10II Thunderbolt";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "Famous the world over for its performance and its ugly ass looks, the A-10 'Warthog' has been repeatedly touted as the greatest ground attack craft of modern times. Built from the ground up to kill tanks and ground emplacements, everything about the design is there to enhance its ground attack capabilities. This single mindedness of design however does mean that the A-10 is possibly the slowest jet in the game. When you're carrying more bombs than some bombers however, who cares how fast you are?<br/><br/>Payload Options:<br/><br/>%2AIM-9 Sidewinder<br/>%2Mk82 General Purpose Bomb<br/>%2Mk82 Snake Eye Retarded Bomb<br/>%2Mk84 General Purpose Bomb<br/>%2HYDRA Rockets<br/>%2APKWS Rockets<br/>%2ZUNI Rockets<br/>%2CRV-7 Rockets<br/>%2AGM-65D Maverick (IR Guided)<br/>%2AGM-65G Maverick (IR Guided with 300lb Penetration Warhead)<br/>%2AGM-65L Maverick (Laser Guided)<br/>%2GBU-10 Paveway Laser Guided Bomb<br/>%2GBU-12 Paveway Laser Guided Bomb<br/>%2EGBU-12 II GPS/INS Enhanced Paveway Laser Guided Bomb<br/>%2GBU-31 JDAM GPS Guided Bomb<br/>%2GBU-38 JDAM GPS Guided Bomb<br/>%2GBU-54 Laser Enhanced JDAM GPS Guided Bomb<br/>%2CBU-87 Combined Effects Cluster Bomb<br/>%2CBU-89 GATOR Mine Dispensing Cluster Bomb<br/>%2CBU-97 Sensor Fuzed Cluster Bomb<br/>%2CBU-103 Combined Effects Wind Corrected Munitions Dispenser<br/>%2CBU-105 Sensor Fuzed Wind Corrected Munitions Dispenser<br/>%2SUU-25 Illumination Flair Dispenser<br/><br/>Factions:<br/><br/>%2US Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class A143
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-143 Buzzard";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Light Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The fictional Buzzard is the spiritual successor of the L-159 ALCA. Originating from the L-39 trainer the ALCA has become a reasonbly capable attack craft but lacks the payload to be truly great.<br/><br/>Payload Options:<br/><br/>%2DAGR Rockets<br/>%2PL-20 20mm Gun Pod<br/>%2ASRAAM<br/>%2AIM-9 Sidewinder<br/>%2IRIS-T<br/>%2AIM-120C AMRAAM<br/>%2GBU-12 Paveway Laser Guided Bomb<br/>%2CBU-87 Combined Effects Cluster Bomb<br/>%2Mk82 General Purpose Bomb<br/>%2AGM-65D Maverick (IR Guided)<br/>%2AGM-65H Maverick (TV Guided)<br/>%2AGM-65L Maverick (Laser Guided)<br/><br/>Factions:<br/><br/>%2AAF";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class A149
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-149 Gryphon";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Multi-role Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The fictional Gryphon is the air superiority fighter of AAF and is modelled loosely on the SAAB JAS 39 Gripen. In keeping with the overall theme the Gryphon is the worst of the 3 air superiority fighters from the Jets DLC but that does not mean it cannot fight. In the hands of a capable pilot, the Gryphon can dogfight quite well and is capable of light ground strike work.<br/><br/>Payload Options:<br/><br/>%2AIM-9X Sidewinder<br/>%2AIM-120C AMRAAM<br/>%2IRIS-T<br/>%2Meteor<br/>%2AGM-65D Maverick (IR Guided)<br/>%2AGM-65H Maverick (TV Guided)<br/>%2AGM-65L Maverick (Laser Guided)<br/>%2GBU-12 Paveway Laser Guided Bomb<br/>%2Mk82 General Purpose Bomb<br/><br/>Factions:<br/><br/>%2AAF";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class A164
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "A-164 Wipeout";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Ground Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The fictional Wipeout is the spiritual successor of the venerable A-10 Thunderbolt. Designed to the same specification the Wipeout is the premier Vanilla ground attack platform.<br/><br/>Payload Options:<br/><br/>%2DAGR Rockets<br/>%2DAR Rockets<br/>%2ASRAAM<br/>%2SUU-25 Illumination Flair Dispenser<br/>%2GBU-10 Paveway Laser Guided Bomb<br/>%2GBU-12 Paveway Laser guided Bomb<br/>%2GBU-24 Paveway Enhanced Glide Laser Guided Bomb<br/>%2EGBU-12 Paveway GPS/INS Enhanced Laser Guided Bomb<br/>%2GBU-31 JDAM GPS Guided Bomb<br/>%2GBU-38 JDAM GPS Guided Bomb<br/>%2GBU-54 JDAM Laser Enhanced GPS Guided Bomb<br/>%2CBU-87 Combined Effects Cluster Bomb<br/>%2CBU-89 GATOR Mine Dispensing Cluster Bomb<br/>%2CBU-97 Sensor Fuzed Cluster Bomb<br/>%2CBU-103 Combined Effects Wind Corrected Munitions Dispenser<br/>%2CBU-105 Sensor Fuzed Wind Corrected Munitions Dispenser<br/>%2Mk82 General Purpose Bomb<br/>%2Mk82 Snake Eye Retarded Bomb<br/>%2Mk84 General Purpose Bomb<br/>%2AGM-65D Maverick (IR Guided)<br/>%2AGM-65H Maverick (TV Guided)<br/>%2AGM-65L Maverick (Laser Guided)<br/><br/>Factions:<br/><br/>%2NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The AH-1Z is the culmination of successive upgrades to the original AH-1 Cobra. The Cobra saw action in Vietnam and throughout the Cold War era until it was eventually phased out of US Army use to make way for the AH-64. The USMC however, prefered the AH-1 since it was easier to stow, maintain and operate at sea. The USMC AH-1 fleet then was upgraded to the W variant Super Cobra and subsequently the Z variant Viper. The platform is comparable to the AH-64 in most aspects, but is still prefered by the USMC simply due to its size.<br/><br/>Payload Options:<br/><br/>%2AIM-9 Sidewinder<br/>%2AGM-122 Sidearm<br/>%2HYDRA Rockets<br/>%2APKWS Rockets<br/>%2AGM-114K Hellfire II (HEAT Warhead)<br/>%2AGM-114N Hellfire II (Thermobaric Warhead)<br/><br/>Factions:<br/><br/>%2USMC<br/>%2Altis Armed Forces";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The AH-64 entered life as a replacement for the USAF AH-1 Cobra. Born to kill soviet tanks during the cold war, the Apache went through the same process as the A-10. It is a purpose built tank hunter and possibly the best helicopter in this role in the world. Nimble and fast with a huge capacity for damage output, the Apache is the epitome of the helicopter gunship.<br/><br/>Payload Options:<br/><br/>%2AIM-9 Sidewinder<br/>%2AGM-122 Sidearm (US Army Only)<br/>%2HYDRA Rockets<br/>%2CRV-7 Rockets<br/>%2APKWS Rockets<br/>%2AGM-114L 'Longbow' Hellfire II<br/>%2AGM-114N Hellfire II (Thermobaric Warhead)<br/>%2Brimstone (UK AAC Only)<br/><br/>Factions:<br/><br/>%2US Army<br/>%2UK AAC";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The Harrier chassis was produced in the US as the AV-8 and the UK as the Harrier throughout the 70s and 80s and was the worlds first true STOVL attack craft. Designed to operate from LHDs or the UKs Invincible class aircraft carriers, the Harrier saw nearly 20 years service before being phased out and replaced by the F-35. The last remaining harriers in service are with the USMC and will be replaced by 2020. Due to the nature of its deployment, the AV-8 cannot compare to the A-10 in the ground attack role. It can however take off from airfields that the A-10 can only dream of making it a lot easier to deploy.<br/><br/>Payload Options:<br/><br/>%2AIM-9. The UK GR9 variant has 2 extra hardpoints dedicated to these missiles<br/>%2AIM-120 (USMC Only)<br/>%2AGM-65D Maverick (IR Guided)<br/>%2AGM-65G (IR Guided with 300lb Penetration Warhead)<br/>%2AGM-65L (Laser Guided)<br/>%2AGM-88 HARM (USMC Only)<br/>%2CRV-7 Rockets (UK Only)<br/>%2Mk82 General Purpose Bomb<br/>%2Mk82 Snake Eye Retarded Bomb<br/>%2Mk84 General Purpose Bomb<br/>%2GBU-10 Paveway Laser Guided Bomb<br/>%2GBU-12 Paveway Laser Guided Bomb<br/>%2EGBU-12 II GPS/INS Enhanced Paveway Laser Guided Bomb<br/>%2GBU-24 Enhanced Gliding Paveway Laser Guided Bomb<br/>%2GBU-31 JDAM GPS Guided Bomb (USMC Only)<br/>%2GBU-32 JDAM GPS Guided Bomb (USMC Only)<br/>%2GBU-38 JDAM GPS Guided Bomb (USMC Only)<br/>%2GBU-54 Laser Enhanced JDAM GPS Guided Bomb (USMC Only)<br/>%2CBU-87 Combined Effects Cluster Bomb (USMC Only)<br/>%2CBU-89 GATOR Mine Dispensing Cluster Bomb (USMC Only)<br/>%2CBU-97 Sensor Fuzed Cluster Bomb (USMC Only)<br/>%2CBU-103 Combined Effects Wind Corrected Munitions Dispenser (USMC Only)<br/><br/>Factions:<br/><br/>%2USMC<br/>%2UK";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The Merlin was designed in a joint venture between Agusta from Italy and Westland from the UK on the request of their respective governments to produce a new naval utility helicopter. The original designation EWI01 was lost to a typo and became EW101 which became AW101. The model name Merlin is only officially used by 4 countries, Britain, Denmark, Norway and Portugal but has become more commonly used since the platforms introduction in 1999. The Royal Navy use their Merlins for a variety of tasks including Anti-Submarine warfare, Airborne Early Warning and SAR but the systems primary function is medium lift transport. For a chopper of its capability, the Merlin is suprisingly easy to fly and is quite durable leading to its place as the RAFs prefered mass insertion chopper.<br/><br/>Factions:<br/><br/>%2United Kingdom<br/>%2Altis Armed Forces (Vanilla Variant)";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The AW159 came about as an upgrade to the Westland Lynx. Almost everything about the Lynx has been modified and the Wildcat now only shares its basic shape and legendary speed with its predecessor. The Wildcats charm lies in its versatility, it can transport, sling load, provide recon, kill tanks or barrage areas depending on the variant deployed.<br/><br/>Payload Options:<br/><br/>%2M-621 Cannon Pod<br/>%2CRV-7 Rockets<br/>%2AGM-114K Hellfire II (HEAT Warhead)<br/>%2AGM-114N Hellfire II (Thermobaric Warhead)<br/><br/>Factions:<br/><br/>%2NATO<br/>%2United Kingdom<br/>%2Altis Armed Forces";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class CH47
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "CH-47 Chinook";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Heavy Lift Transport Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The CH-47 has been in service for decades and perhaps the most easily recognised helicopter in existence due to its tandem rotor system. Its load capacity and ruggedness has seen the Chinook deployed in every NATO warzone since Vietnam and in extreme conditions such as Afghanistan, it is actually prefered over more advanced systems due to it's simplicity. The ARMA 3 Helicopters DLC introduced the 'Huron' as a fictional future upgrade for the Chinook.<br/><br/>In game terms the Chinook is pretty simple in its employment, it transports men and material.<br/><br/>Factions:<br/><br/>%2US Army<br/>%2UK";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class FA181
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "F/A-181 Black Wasp";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Multi-role Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The fictional Wasp is the spiritual successor of the F/A-18 Hornet of the US Navy. In line with modern trends, the Wasp is not a dedicated fighter nor is it a dedicated strike platform. Instead it is a true multi-role fighter capable of both roles although the multi-role nature means it lacks the wider payload options of true strike aircraft. The Wasp is also one of the few cats and traps aircraft in game capable of using the systems aboard the USS Freedom.<br/><br/>Payload Options:<br/><br/>%2AIM-9X Sidewinder<br/>%2AIM-120D AMRAAM<br/>%2GBU-12 Paveway Laser Guided Bomb<br/>%2CBU-87 Combined Effects Cluster Bomb<br/>%2CBU-89 GATOR Mine Dispensing Cluster Bomb<br/>%2CBU-97 Sensor Fuzed Cluster Bomb<br/>%2Mk82 General Purpose Bomb<br/>%2Mk82 Snake Eye Retarded Bomb<br/>%2GBU-32 JDAM GPS Guided Bomb<br/>%2GBU-38 JDAM GPS Guided Bomb<br/>%2AGM-154A Joint Stand Off Weapon Combined Effects Cluster GPS Guided Glide Bomb<br/>%2AGM-154C Joint Stand Off Weapon General Purpose GPS Guided Glide Bomb<br/><br/>Factions:<br/><br/>%2NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The F-35 is currently under development in 3 variants and is scheduled to replace most current aircraft by 2025. Capable of both fighter and strike missions the F-35 is set to be primarily used by the UK and the USMC although it is also scheduled for deployment by 7 other countries. The fictional J variant is based on the current B variant and is a Short Take Off Vertical Landing (STOVL) system. It can operate from short airfields and the Landing Helicopter Dock as well as more conventional airbases.<br/><br/>Payload Options:<br/><br/>%2GBU-10 Paveway Laser Guided Bomb<br/>%2GBU-12 Paveway Laser Guided Bomb<br/>%2GBU-24B Paveway Enhanced Glide Laser Guided Bomb<br/>%2GBU-31 JDAM GPS Guided Bomb<br/>%2GBU-38 JDAM GPS Guided Bomb<br/>%2Mk82 Snakeye Retarded Bomb<br/>%2Mk82 General Purpose Bomb<br/>%2GBU-39 GPS Guided Small Diameter Glide Bomb<br/>%2GBU-53 IR Enhanced GPS Guided Small Diameter Glide Bomb<br/>%2GBU-54 Laser Enhanced JDAM GPS Guided Bomb<br/>%2AIM-9X Sidewinder (USMC Only)<br/>%2AIM-120 AMRAAM (USMC Only)<br/>%2AGM-154A Joint Stand Off Weapon Combined Effects Cluster GPS Guided Glide Bomb (USMC ONLY)<br/>%2AGM-154C Joint Stand Off Weapon General Purpose GPS Guided Glide Bomb (USMC ONLY)<br/>%2AGM-65D Maverick (IR Guided, USMC ONLY)<br/>%2AGM-65G (IR Guided with 300lb Penetrator Warhead, USMC ONLY)<br/>%2AGM-65L (Laser Guided, USMC ONLY)<br/>%2EGBU-12 GPS/INS Enhanced Laser Guided Bomb (USMC ONLY)<br/>%2CBU-87 Combined Effects Cluster Bomb (USMC ONLY)<br/>%2CBU-89 GATOR Mine Dispensing Cluster Bomb (USMC ONLY)<br/>%2CBU-97 Sensor Fuzed Cluster Bomb (USMC ONLY)<br/>%2CBU-103 Combined Effects Wind Corrected Munitions Dispenser (USMC ONLY)<br/>%2CBU-105 Sensor Fuzed Wind Corrected Munitions Dispenser (USMC Only)<br/>%2BRIMSTONE Laser/IR Guided HEAT Warhead ATGM (RAF/RN ONLY)<br/>%2STORM SHADOW Tactical Cruise Missile (RAF/RN ONLY)<br/>%2 EGBU-12 Paveway IV GPS/INS Enhanced Laser Guided Bomb (RAF/RN ONLY)<br/><br/>Factions:<br/><br/>%2USMC<br/>%2UK";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The Littlebird first entered service during Vietnam as the OH-6 Cayuse. Originally intended as an observation platform for artillery and recon, the aircraft was intentionally designed to be fast and light. In 1980, the creation of the 160th Special Operations Aviation Regiment exposed the need for fast, light transports capable of landing where conventional helicopters could not. Boeing won the contract to upgrade the original Hughes chassis and the MH-6 was born. Attack variants came later on the specific request of 160SOAR, giving the regiment a fleet of helicopters that could be deployed by airlift at a moments notice. The Mission Enhanced Littlebird program ensures that the MH-6 and its siblings will remain in service for years to come.<br/><br/>Payload Options:<br/><br/>%2GAU-19 .50 cal Gatling Gun<br/>%2HYDRA Rockets<br/>%2APKWS Rockets<br/>%2AGM-114K Hellfire II (HEAT Warhead)<br/>%2AGM-114N Hellfire II (Thermobaric Warhead)<br/><br/>Factions:<br/><br/>%2US Army<br/>%2Royal Army Corps of Sahrani";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class H60
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "H-60 Family";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The UH-60 Blackhawk and its naval cousin the SH-60 Seahawk are the US Forces primary transport choppers. The airframe is robust, the systems are reliable and the platform is easy to adjust to task. Specialist Direct Action Penetrator variants provide the Hawks with more potent weaponry bringing them closer to the Soviet Assault Helicopters in terms of role and performance.<br/><br/>Payload Options:<br/><br/>%2HYDRA Rockets (Army Variants Only)<br/>%2AGM-114K Hellfire II (HEAT Warhead)<br/>%2AGM-114N Hellfire II (Thermobaric Warhead)<br/><br/>Factions:<br/><br/>%2NATO<br/>%2US Army (UH-60)<br/>%2USMC (SH-60)<br/>%2Royal Army Corps of Sahrani (UH-60)";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The Ka-50, NATO designation Hokum, is a single seat armed recon helicopter. Capable of acting as a gunship, the Black Shark is comparable to the AH-64 but the co-axial rotor arrangement means the Black Shark is actually faster and capable of aerobatics that helicopters cannot usually perform. The Ka-52 Alligator is a special variant of the Ka-50. Fitted with a second seat, the Alligator has increased all weather capability although the positioning of the optics suite means it must operate close to the ground. In game terms the Ka-50 has a changeable payload but the Ka-52 does not, this is due to model limitations.<br/><br/>Payload Options:<br/><br/>%2S-8 Rockets<br/>%2S-13 Rockets<br/>%2GSh-23 Pod<br/>%2FAB-250<br/>%2Kh-25<br/>%2Vikhir<br/>%2Kh-29T<br/>%2IGLA<br/><br/>Factions:<br/><br/>%2Russian Federation<br/>%2Sahrani Liberation Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class L39
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "L-39 Albatros";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Light attack craft";
			// Structured text, filled by arguments from 'arguments' param
			description = "The L-39 entered service as a jet trainer in the 1970s. Numerous upgrades were made to the platform but it wasn't until the ZA variant that the L-39 was given weapons. The airframe however is small and frail and thus the payload is tiny when compared to other ground attack craft. The L-159 ALCA is developed from the L-39 and is much more capable, featuring enhanced avionics and a sturdier frame.<br/><br/>Payload Options:<br/>%2GSh-23 Gun Pods<br/>%2R-60 Missiles<br/>%2S-5 Rockets<br/>%2S-8 Rockets<br/>%2FAB-250<br/>%2 KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2ACR<br/>%2TKA<br/>%2AAF";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The Mi-48 is the fictional successor to the Mi-24 Hind. Like its real life counterpart the Mi-48 is an assault helicopter in that it can fight its way to an HLS then land to deposit its cargo of troops. The Mi-48 is also a capable gunship with the usual plethora of AT weaponry and a good supply of area denial munitions to deal with infantry.<br/><br/>Payload Options:<br/><br/>%2R-73 Adder<br/>%2GSh-23 Gun Pod<br/>%2Scalpel Laser/IR Dual Seeker Light AT Missile<br/>%2LOM-250 Laser Guided Bomb<br/>%2S-8 Rockets<br/>%2<br/>%2Kh-25R (Radio Guided)<br/>%2Kh-25MTP (IR Guided)<br/>%2Kh-25MT (TV Guided)<br/>%2Kh-25MS (GPS Guided)<br/>%2Kh-25ML (Laser Guided)<br/>%2KAB-500KR TV Guided Bomb<br/>%2KAB-500SE GPS Guided Bomb<br/>%2KAB-500L Laser Guided Bomb<br/><br/>Factions:<br/><br/>%2CSAT";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class RAH66
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "RAH-66 Commanche";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Armed Recon Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The RAH-66 program was developed during the 80s and 90s and was intended to be a forward scout for the AH-64. The program was eventually cancelled in 2004 due to escalating costs. The project is the basis for the vanilla Blackfoot and is the gunship of choice for the NATO faction. While not as heavily armed as the Mi-48, the RAH-66 is much more stealthy and more suited to sneaking behind enemy lines to deliver precision strikes rather than slugging it out on the frontline.<br/><br/>Payload Options:<br/><br/>%2DAR Rockets<br/>%2DAGR Rockets<br/>%2AGM-114L Hellfire II (HEAT Warhead)<br/>%2AGM-114N Hellfire II (Thermobaric Warhead)<br/>%2ASRAAM<br/><br/>Factions:<br/><br/>%2NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The Su-25 is a single seat, ground attack craft similar in role to the more famous A-10. Although capable of carrying a wide selection of weapons, the Su-25 excels at low level strafing runs with gun pods or rockets.<br/><br/>Payload Options:<br/><br/>%2R-73<br/>%2GSh-23 Pod<br/>%2S-8 Rockets<br/>%2S-13 Rockets<br/>%2Kh-25<br/>%2Kh-29<br/>%2Vikhir<br/>%2FAB-250<br/>%2KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2Chernarus Defence Forces<br/>%2Russian Federation<br/>%2Sahrani Liberation Army<br/>%2Takistani Army";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
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
			description = "The Su-34 is a twin seat strike fighter/bomber designed as a multi-role frontline combat platform. While capable of interception tasks, the Fullback is not a dogfighter, relying instead on missiles to eliminate air targets. Ground targets however are easy prey. The WSO station has a complete suite of optics and when used in conjunction with guided munitions, can be trusted to knock out any ground installation or vehicle.<br/><br/>Payload Options:<br/><br/>%2R-73<br/>%2GSh-23 Pod<br/>%2S-8 Rockets<br/>%2Kh-25<br/>%2Kh-29<br/>%2Vikhir<br/>%2FAB-250<br/>%2KAB-250<br/>%2RBK-250<br/><br/>Factions:<br/><br/>%2Chernarus Defence Force<br/>%2Russian Federation<br/>%2Sahrani Liberation Army<br/>%2Altis Armed Forces";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class TO201
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "To-201 Shkira";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Multi-role Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The fictional Shkira is the air superiority fighter of CSAT and is modelled loosely on the Soviet T-50 PAK FA. In line with modern trends, the Shkira is not a dedicated fighter nor is it a dedicated strike platform. Instead it is a true multi-role fighter capable of both roles although the multi-role nature means it lacks the wider payload options of true strike aircraft. The Shkira is however a very capable interceptor, possibly the best of the fictional aircraft in this role.<br/><br/>Payload Options:<br/><br/>%2R-73 Archer<br/>%2R-77 Adder<br/>%2KAB-500KR TV Guided Bomb<br/>%2KAB-500SE GPS Guided Bomb<br/>%2KAB-500L Laser Guided Bomb<br/>%2Kh-25MPU (Anti-Radiation)<br/>%2Kh-25R (Radio Guided)<br/>%2Kh-25MTP (IR Guided)<br/>%2Kh-25MT (TV Guided)<br/>%2Kh-25MS (GPS Guided)<br/>%2Kh-25ML (Laser Guided)<br/><br/>Factions:<br/><br/>%2CSAT";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class WY55
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "WY-55 Hellcat";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Medium Utility Helicopter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The fictional Hellcat is the successor of the AW-159 Wildcat and is the primary rotary asset of the AAF. The Hellcat is a true utility helicopter capable of completing recon, light CAS and transport tasks but it lacks the payload or stopping power to bring itself into competition with the RAH-66 or the Mi-48.<br/><br/>Payload Options:<br/><br/>%2DAR Rockets<br/>%2HYDRA Rockets<br/>%2DAGR Rockets<br/>%2PL-20 20mm Gun Pod<br/>%2ASRAAM<br/><br/>Factions:<br/><br/>%2AAF";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class Y32
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Y-32 Xian";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "VTOL Assault Transport";
			// Structured text, filled by arguments from 'arguments' param
			description = "The fictional Xian is the next generation of assault transports. Filling the same assault role as the Mi-48 or its real life counterpart the Mi-24, the Xian is designed to fight its way to a dropzone before deploying its troops. The vectored thrust jet engines mean that the Xian is capable of much faster speeds than the more traditional assault helicopter and its size makes it able to carry many more soldiers.<br/><br/>Payload Options:<br/><br/>%2R-73 Adder<br/>%2GSh-23 Gun Pod<br/>%2Scalpel Laser/IR Dual Seeker Light AT Missile<br/>%2LOM-250 Laser Guided Bomb<br/>%2S-8 Rockets<br/>%2<br/>%2Kh-25R (Radio Guided)<br/>%2Kh-25MTP (IR Guided)<br/>%2Kh-25MT (TV Guided)<br/>%2Kh-25MS (GPS Guided)<br/>%2Kh-25ML (Laser Guided)<br/>%2KAB-500KR TV Guided Bomb<br/>%2KAB-500SE GPS Guided Bomb<br/>%2KAB-500L Laser Guided Bomb<br/><br/>Factions:<br/><br/>%2NATO";
			// Optional structured text, filled by arguments from 'arguments' param (first argument
			// is %11, see notes bellow), grey color of text
			tip = "";
			arguments[] = {};
			// Optional image
			image = "\ARMA3_CUP_Enhancement_Systems\presentation\picture.paa";
			// optional parameter for not showing of image in context hint in mission (default false))
			noImage = false;
		};
		class YAK131
		{
			// Hint title, filled by arguments from 'arguments' param
			displayName = "Yak 131";
			// Optional hint subtitle, filled by arguments from 'arguments' param
			displayNameShort = "Light Strike Fighter";
			// Structured text, filled by arguments from 'arguments' param
			description = "The Yak 131 is an armed version future variant of he Yak 130. Slated to replace the ageing Su-25 fleet the Yak is scheduled to have numerous avionics upgrades over the Frogfoot including passive radar arrays and the GSh-301 cannon from the Flanker series. The Yak is a capable ground attack platform being more nimble than the Wipeout but this agility comes at the cost of a slightly smaller payload.<br/><br/>Payload Options:<br/><br/>%2R-73 Adder<br/>%2GSh-23 Gun Pod<br/>%2Scalpel Laser/IR Dual Seeker Light AT Missile<br/>%2RBK-250 Cluster Bomb<br/>%2KAB-250 Laser Guided Bomb<br/>%2S-8 Rockets<br/>%2Kh-25 MPU (Anti Radiation)<br/>%2Kh-25R (Radio Guided)<br/>%2Kh-25MTP (IR Guided)<br/>%2Kh-25MT (TV Guided)<br/>%2Kh-25MS (GPS Guided)<br/>%2Kh-25ML (Laser Guided)<br/><br/>Factions:<br/><br/>%2CSAT";
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
			description = "This pack was designed to upgrade the Community Upgrade Project Aircraft. Most of the models and sounds are from CUP.<br/><br/>Brimstone and Storm Shadow weapon systems are from AWS Eurofighter Typhoon by Pinaz93 and Hcpookie.<br/><br/>AWS systems and weapons by Firewill.";
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
			displayNameShort = "What callsigns represent in the Guerrillas of Liberation AAC";
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
			description = "Banshee is the Air Superiority fighter of the AAC. It is Banshees job to protect the other callsigns as they work, be it from air defences or enemy aircraft. The aircraft then are fast, nimble and carry a wide selection of weapons to target the various threats that can hurt the AAC. These specialist weapons however often need additional avionics from the aircraft meaning payload is often restricted.<br/><br/>Responsibilities:<br/><br/>%2Suppression of Enemy Air Defences (SEAD)<br/>%2Anti-Air Interception<br/>%2Fighter Escort<br/>%2Combat Air Patrol<br/><br/>Aircraft currently operated:<br/><br/>%2A-143 R variant specifically<br/>%2F-35 and its variants<br/>%2F/A-181 Black Wasp<br/>%2SU-34 and its variants<br/>%2To-201 Shkira<br/>%2A-149 Gryphon";
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
			description = "The AWS FCS Targeting System controls all GPS Guided munitions available on the aircraft. The system is based on a simple MFD that allows the pilot to enter target information, store the information, select guidance type and finally designate the target before weapons release.<br/><br/>Target Data Input:<br/>Target Data can be locked into the FCS in two ways. First and easiest is by using the mouse input. First select the memory slot from the drop down menu. Next press DGN on the left bank of buttons on the MFD. Next click on the map area where you wish to set the target location.<br/>Target data can also be entered as a grid reference in the bottom left corner of the MFD. As above, you must first select the memory slot, then you simply enter the grid reference. The grid type can be toggled between 8 figure or 10 figure grids by the 8 and 10 buttons on the bottom bank of MFD switches. The grid is entered into the FCS with the ENT button.<br/><br/>Target Selection:<br/>Target selection is carried out by simply selecting the relevant memory slot from the drop down menu.<br/><br/>Target Designation:<br/>With the target data stored and the munition type selected, the target is now locked into the FCS by pressing the SEL button on the left bank of MFD switches. This sets the given memory slot as the active target, ready for engagement.<br/><br/>Switching targets:<br/>To switch target the FCS must first be cleared using the CLR button on the left bank of MFD buttons.<br/><br/>Memory Slot Deletion:<br/>Finally you can delete target data by selecting the relevant memory slot and clicking the DEL button on the left bank of MFD buttons. If the target is currently designated, it must be cleared before deleting.<br/><br/>With the target designated, simply fly to the release parameter and drop the bomb. The FCS and bomb guidance systems will do the rest";
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
			description = "The SEAD system from AWS is designed to replicate anti-radar warfare. When engaging OPFOR anti-air assets with Anti-Radiation Missiles (ARMs) you do not in fact lock onto the vehicle, you lock onto the radar signal.<br/><br/>The system works from the scroll menu and you must have a valid ARM selected as your current weapon. When within 6km of the target area, select the action 'Find Radar Target'. This will put a lockable signal on the ground which is visible on your radar. Lock the target with %11 then fire.<br/><br/>Due to the fact you are engaging a missile based anti-air system, it is recommended that you use an ECM pod as part of your loadout to help you avoid incoming.<br/><br/>One major point to note, this system will not detect a unit that does not use radar guidance such as the static ZSU AAA gun.<br/><br/>As the Jets DLC content is expanded upon this system will slowly be replaced by the Passive Radar Sensor System.";
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
			description = "%2 GBU-24<br/><br/>The Paveway series was developed in the wake of Vietnam as a way to improve bomb drop accuracy. The guidance system traces a laser signal and uses built in vanes to 'fly' the bomb to the target. The GBU-24 is an upgrade on the GBU-10. Designed with improved aerodynamics, the GBU-24 is capable of much longer glide ranges than the GBU-10 making it a solid choice for a standoff bomb attack.<br/><br/>The GBU-24A system fits the Paveway III guidance kit to the standard Mk84 2000lb bomb. The GBU-24B system fits the Paveway III guidance system to the BLU-109 penetration bomb. Finally the GBU-24/118 fits the Paveway III guidance system to the BLU-118 Thermobaric Penetrator bomb.<br/><br/>The Paveway system is reliant on a laser signal to track to target. The source of this signal however can be anything. FAC/JTAC, onboard laser guidance through I-TGT and buddy lase from another aircraft are all viable options.";
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
};
