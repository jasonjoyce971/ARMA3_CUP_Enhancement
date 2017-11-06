/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_WASP_STEALTH_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1 right outboard
	{lbAdd[2100,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-97",
		"Mk82 GPB",
		"Mk82 AIR",
		"AGM-154A",
		"AGM-154C",
		"AIM-120D",
		"CBU-85",
		"BL-778"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-97",
		"Mk82 GPB",
		"Mk82 AIR",
		"AGM-154A",
		"AGM-154C",
		"AIM-120D",
		"CBU-85",
		"BL-778"
    ];
	
//Add Hardpoint 3 - right inboard
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AIM-120D"
    ];
//Add Hardpoint 4 - left inboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AIM-120D"
    ];
//Add Hardpoint 5 - right mid
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-97",
		"Mk82 GPB",
		"Mk82 AIR",
		"AGM-154A",
		"AGM-154C",
		"AIM-120D",
		"CBU-85",
		"BL-778"
    ];
//Add Hardpoint 6 - left mid
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-97",
		"Mk82 GPB",
		"Mk82 AIR",
		"AGM-154A",
		"AGM-154C",
		"AIM-120D",
		"CBU-85",
		"BL-778"
    ];
//Add Hardpoint 7 - right inboard
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"AIM-9X"
    ];
//Add Hardpoint 8 - left inboard
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"AIM-9X"
    ];
	