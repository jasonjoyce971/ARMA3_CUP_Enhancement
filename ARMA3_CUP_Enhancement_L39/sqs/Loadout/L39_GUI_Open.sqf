/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "L39_GUI";

	
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
		"R-73",
		"GSh-23 Gun Pod",
		"S-5 Rockets",
		"S-8 Rockets",
		"FAB-250",
		"KAB-250",
		"RBK-250",
		"Kh-25"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"GSh-23 Gun Pod",
		"S-5 Rockets",
		"S-8 Rockets",
		"FAB-250",
		"KAB-250",
		"RBK-250",
		"Kh-25"
    ];
	
//Add Hardpoint 3 - right inboard
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"GSh-23 Gun Pod",
		"S-5 Rockets",
		"S-8 Rockets",
		"FAB-250",
		"KAB-250",
		"RBK-250",
		"Kh-25"
    ];
//Add Hardpoint 4 - left inboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"GSh-23 Gun Pod",
		"S-5 Rockets",
		"S-8 Rockets",
		"FAB-250",
		"KAB-250",
		"RBK-250",
		"Kh-25"
    ];
