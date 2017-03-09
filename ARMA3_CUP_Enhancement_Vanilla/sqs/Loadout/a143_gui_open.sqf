/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "A143_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2100,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1//
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"AIM-120",
		"AGM-88",
		"HYDRA",
		"ZUNI"
    ];
//Add Hardpoint 2//
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88",
		"GBU-12",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"HYDRA",
		"ZUNI"
    ];
//Add Hardpoint 3//
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88",
		"GBU-12",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"HYDRA",
		"ZUNI"
    ];
//Add Hardpoint 4//
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88",
		"GBU-12",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"HYDRA",
		"ZUNI",
		"LANTIRN Pod"
    ];
//Add Hardpoint 5//
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"AIM-120",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"AGM-88",
		"GBU-12",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"HYDRA",
		"ZUNI"
    ];
//Add Hardpoint 6//
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"AIM-120",
		"AGM-88",
		"HYDRA",
		"ZUNI"
    ];
