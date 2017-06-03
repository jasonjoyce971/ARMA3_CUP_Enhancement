/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "SH60_GUI";

	
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
		"AGM-112K",
		"AGM-112N",
		"AGM-112 Combi"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"AGM-112K",
		"AGM-112N",
		"AGM-112 Combi"
    ];
	
//Add Hardpoint 3 - right inboard
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AGM-112K",
		"AGM-112N",
		"AGM-112 Combi"
    ];
//Add Hardpoint 4 - left inboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AGM-112K",
		"AGM-112N",
		"AGM-112 Combi"
    ];
