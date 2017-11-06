/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_ALCA_GUI";

	
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
		"AIM-9X",
		"IRIS-T",
		"AIM-120C"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"AIM-9X",
		"IRIS-T",
		"AIM-120C"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"ASRAAM",
		"GBU-12",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"Mk82",
		"AIM-9X",
		"IRIS-T",
		"AIM-120C"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"ASRAAM",
		"GBU-12",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"Mk82",
		"AIM-9X",
		"IRIS-T",
		"AIM-120C"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"PL-20 Gun Pod",
		"GBU-12",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"Mk82",
		"RBK-500"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"PL-20 Gun Pod",
		"GBU-12",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"Mk82",
		"RBK-500"
    ];
	//Add Hardpoint 9 - internal left inner
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"PL-20 Gun Pod",
		"GBU-12",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"CBU-87",
		"Mk82",
		"RBK-500"
    ];
