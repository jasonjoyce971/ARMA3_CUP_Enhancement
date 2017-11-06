/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Chopper!";};
_handle= CreateDialog "JAS_GRYPHON_GUI";

	
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
		"AIM-9X",
		"AIM-9X x2",
		"IRIS-T",
		"Meteor",
		"AIM-120C"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"AIM-9X",
		"AIM-9X x2",
		"IRIS-T",
		"Meteor",
		"AIM-120C"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AGM-65D",
		"AGM-65D x2",
		"AGM-65H",
		"AGM-65H x2",
		"AGM-65L",
		"AGM-65L x2",
		"AIM-9X",
		"AIM-9X x2",
		"IRIS-T",
		"Meteor",
		"AIM-120C",
		"AIM-120C x2"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AGM-65D",
		"AGM-65D x2",
		"AGM-65H",
		"AGM-65H x2",
		"AGM-65L",
		"AGM-65L x2",
		"AIM-9X",
		"AIM-9X x2",
		"IRIS-T",
		"Meteor",
		"AIM-120C",
		"AIM-120C x2"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-12 x2",
		"GBU-12 x3",
		"AGM-65D",
		"AGM-65D x2",
		"AGM-65H",
		"AGM-65H x2",
		"AGM-65L",
		"AGM-65L x2",
		"Mk82",
		"Mk82 x3",
		"AIM-9X",
		"AIM-9X x2",
		"IRIS-T",
		"Meteor",
		"AIM-120C",
		"AIM-120C x2",
		"CBU-85",
		"CBU-85 x2",
		"BL-778",
		"BL-778 x2"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-12 x2",
		"GBU-12 x3",
		"AGM-65D",
		"AGM-65D x2",
		"AGM-65H",
		"AGM-65H x2",
		"AGM-65L",
		"AGM-65L x2",
		"Mk82",
		"Mk82 x3",
		"AIM-9X",
		"AIM-9X x2",
		"IRIS-T",
		"Meteor",
		"AIM-120C",
		"AIM-120C x2",
		"CBU-85",
		"CBU-85 x2",
		"BL-778",
		"BL-778 x2"
    ];
