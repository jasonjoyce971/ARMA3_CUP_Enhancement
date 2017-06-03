/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_HELLCAT_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1 - right outboard
	{lbAdd[2100,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Scalpel",
		"Scalpel x3",
		"Scalpel x4",
		"Shrieker HE x7",
		"Shrieker AP x7",
		"DAGR",
		"DAR",
		"20mm Cannon Pod"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Scalpel",
		"Scalpel x3",
		"Scalpel x4",
		"Shrieker HE x7",
		"Shrieker AP x7",
		"DAGR",
		"DAR",
		"20mm Cannon Pod"
    ];
	