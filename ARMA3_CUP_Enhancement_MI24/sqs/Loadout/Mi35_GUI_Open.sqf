/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "MI35_GUI";

	
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
		/*"GSh-23",
		"IGLA",*/
		"9K114 Shturm"
    ];
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		/*"GSh-23",
		"IGLA",*/
		"9K114 Shturm"
    ];
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"S-8 Rockets",
		"S-13 Rockets",
		"FAB-250",
		"KAB-250",
		"IGLA"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"S-8 Rockets",
		"S-13 Rockets",
		"FAB-250",
		"KAB-250",
		"IGLA"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"S-8 Rockets",
		"S-13 Rockets",
		"FAB-250",
		"KAB-250"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"S-8 Rockets",
		"S-13 Rockets",
		"FAB-250",
		"KAB-250"
    ];
	
	/*
	outer pylons = gun pods, iglas, AT-2
	mid pylons = gun pods, AT-2, bombs, rockets
	inner pylons = gun pods, bombs, rockets
	*/	