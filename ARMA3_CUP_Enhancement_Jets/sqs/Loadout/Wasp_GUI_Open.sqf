/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_WASP_GUI";

	
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
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-9X x2",
		"AIM-120D",
		"AIM-7"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-9X x2",
		"AIM-120D",
		"AIM-7"
    ];
	
//Add Hardpoint 3 - right inboard
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-12 x2",
		"AGM-65D",
		"AGM-65D x2",
		"AGM-65H",
		"AGM-65H x2",
		"AGM-65L",
		"AGM-65L x2",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-120D",
		"AIM-9X x2",
		"AIM-120D x2",
		"AIM-7",
		"AGM-84H SLAM ER",
		"AGM-88",
		"AGM-154A",
		"AGM-154C",
		"GBU-32",
		"CBU-85",
		"CBU-85 x2",
		"BL-778",
		"BL-778 x2"
    ];
//Add Hardpoint 4 - left inboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-12 x2",
		"AGM-65D",
		"AGM-65D x2",
		"AGM-65H",
		"AGM-65H x2",
		"AGM-65L",
		"AGM-65L x2",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-120D",
		"AIM-9X x2",
		"AIM-120D x2",
		"AIM-7",
		"AGM-84H SLAM ER",
		"AGM-88",
		"AGM-154A",
		"AGM-154C",
		"GBU-32",
		"CBU-85",
		"CBU-85 x2",
		"BL-778",
		"BL-778 x2"
    ];
//Add Hardpoint 5 - right mid
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"AIM-120D"
    ];
//Add Hardpoint 6 - left mid
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"AIM-120D"
    ];
//Add Hardpoint 7 - right inboard
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"AIM-120D"
    ];
//Add Hardpoint 8 - left inboard
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"AIM-120D"
    ];
	
	//Add Hardpoint 9 - left nacelle
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-120D",
		"AGM-154A",
		"AGM-154C",
		"GBU-32",
		"CBU-85",
		"BL-778"
    ];
	
//Add Hardpoint 10 - right nacelle
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-120D",
		"AGM-154A",
		"AGM-154C",
		"GBU-32",
		"CBU-85",
		"BL-778"
    ];

//Add Hardpoint 11 - right belly
	{lbAdd[2117,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-120D",
		"AGM-154A",
		"AGM-154C",
		"GBU-32",
		"CBU-85",
		"BL-778"
    ];
	
//Add Hardpoint 12 - left belly
	{lbAdd[2118,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"GBU-38",
		"AIM-9X",
		"AIM-120D",
		"AGM-154A",
		"AGM-154C",
		"GBU-32",
		"CBU-85",
		"BL-778"
    ];