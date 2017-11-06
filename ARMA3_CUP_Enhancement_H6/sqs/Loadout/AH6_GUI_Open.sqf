/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "AH6_GUI";

// Miniguns are fixed. Loadout selection is for outboard pylons only
	
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
		"GAU-19", // Done
		"HYDRA x7", // Done
		"HYDRA x19", // Done
		"APKWS x7", // Done
		"AGM-114K x2", // Done
		"AGM-114N x2" // Done
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"GAU-19",
		"HYDRA x7",
		"HYDRA x19",
		"APKWS x7",
		"AGM-114K x2",
		"AGM-114N x2"
    ];
	