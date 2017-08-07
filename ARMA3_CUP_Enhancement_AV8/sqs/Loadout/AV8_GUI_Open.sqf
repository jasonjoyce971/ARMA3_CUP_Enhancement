/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "AV8_GUI";

	
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
		"AIM-9L",
		"AIM-120",
		"ECM POD",
		"Sniper XR POD"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AIM-120",
		"ECM POD",
		"Sniper XR POD"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AIM-120",
		"APKWS x19",
		"CRV-7 FAT x19",
		"CRV-7 HE x19",
		"CRV-7 KEP x19",
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
		"GBU-54 LJDAM",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"Fuel Tank"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AIM-120",
		"APKWS x19",
		"CRV-7 FAT x19",
		"CRV-7 HE x19",
		"CRV-7 KEP x19",
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
		"GBU-54 LJDAM",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"Fuel Tank"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AIM-120",
		"APKWS x19",
		"CRV-7 FAT x19",
		"CRV-7 HE x19",
		"CRV-7 KEP x19",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65G",
		"AGM-65G x3",
		"AGM-65L",
		"AGM-65L x3",
		"AGM-88 HARM",
		"GBU-10",
		"GBU-12",
		"GBU-12 x3",
		"EGBU-12 II",
		"EGBU-12 II x3",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"GBU-54 LJDAM",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 Snakeye x3",
		"Mk82 GPB",
		"Mk82 GPB x3",
		"Mk84 GPB",
		"Fuel Tank"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AIM-120",
		"APKWS x19",
		"CRV-7 FAT x19",
		"CRV-7 HE x19",
		"CRV-7 KEP x19",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65G",
		"AGM-65G x3",
		"AGM-65L",
		"AGM-65L x3",
		"AGM-88 HARM",
		"GBU-10",
		"GBU-12",
		"GBU-12 x3",
		"EGBU-12 II",
		"EGBU-12 II x3",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"GBU-54 LJDAM",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82 Snakeye",
		"Mk82 Snakeye x3",
		"Mk82 GPB",
		"Mk82 GPB x3",
		"Mk84 GPB",
		"Fuel Tank"
    ];
