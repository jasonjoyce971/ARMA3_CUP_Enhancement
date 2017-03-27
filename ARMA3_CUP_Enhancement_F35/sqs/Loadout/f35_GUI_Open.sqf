/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "f35_GUI";

	
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
		"AIM-120",
		"Sniper XR POD"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"AIM-9X",
		"AIM-120",
		"Sniper XR POD"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88 HARM",
		"GBU-10",
		"GBU-12",
		"EGBU-12 II",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"GBU-54",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88 HARM",
		"GBU-10",
		"GBU-12",
		"EGBU-12 II",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"GBU-54",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88 HARM",
		"GBU-10",
		"GBU-12",
		"EGBU-12 II",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"GBU-54",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Fuel Tank",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88 HARM",
		"GBU-10",
		"GBU-12",
		"EGBU-12 II",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"GBU-54",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Fuel Tank",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];
//Add Hardpoint 7 - internal right outer
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"AIM-120",
		"GBU-12",
		"EGBU-12 II",
		"GBU-38",
		"GBU-54",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];
//Add Hardpoint 8 - internal left outer
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"AIM-120",
		"GBU-12",
		"EGBU-12 II",
		"GBU-38",
		"GBU-54",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];
	
	//Add Hardpoint 9 - internal left inner
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"AIM-120",
		"GBU-12",
		"EGBU-12 II",
		"GBU-38",
		"GBU-54",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];
	
//Add Hardpoint 10 - internal right inner
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"AIM-120",
		"GBU-12",
		"EGBU-12 II",
		"GBU-38",
		"GBU-54",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB",
		"AGM-154A JSOW (CEM)",
		"AGM-154C JSOW (GPB)"
    ];

