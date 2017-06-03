/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Chopper!";};
_handle= CreateDialog "JAS_RAH66_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1 - right outboard -> pylonLeft1
	{lbAdd[2100,_x]} forEach 
	[  
		"Empty",
		"DAR",
		"DAGR",
		"AGM-114L",
		"AGM-114N",
		"ASRAAM"
    ];
	
	//Add Hardpoint 2 - left outboard -> pylonRight1
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"DAR",
		"DAGR",
		"AGM-114L",
		"AGM-114N",
		"ASRAAM"
    ];
	
//Add Hardpoint 3 - right midline -> pylonLeft2
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AGM-114L",
		"AGM-114N",
		"ASRAAM"
    ];
//Add Hardpoint 4 - left midline -> pylonRight2
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AGM-114L",
		"AGM-114N",
		"ASRAAM"
    ];
	/*
//Add Hardpoint 5 - right inboard -> pylonLeft3
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"DAR",
		"DAGR",
		"AGM-114L",
		"AGM-114N",
		"ASRAAM"
    ];
//Add Hardpoint 6 - left inboard -> pylonRight3
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"DAR",
		"DAGR",
		"AGM-114L",
		"AGM-114N",
		"ASRAAM"
    ];
	*/
