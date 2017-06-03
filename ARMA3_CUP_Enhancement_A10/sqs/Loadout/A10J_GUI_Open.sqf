/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "A10J_GUI";

	
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
		"AIM-9L x2",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-12",
		"EGBU-12 II",
		"ECM POD",
		"SUU-25 x8"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"AIM-9L x2",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-12",
		"EGBU-12 II",
		"ECM POD",
		"SUU-25 x8"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"HYDRA HE x7",
		"HYDRA SMK W x7",
		"HYDRA SMK R x7",
		"HYDRA SMK O x7",
		"HYDRA SMK P x7",
		"HYDRA HE x19",
		"APKWS HYDRA x7",
		"ZUNI x4",
		"CRV7 x19",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-12",
		"EGBU-12 II",
		"Lightning II POD"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA SMK W x7",
		"HYDRA SMK R x7",
		"HYDRA SMK O x7",
		"HYDRA SMK P x7",
		"HYDRA x19",
		"APKWS HYDRA x7",
		"ZUNI x4",
		"CRV7 x19",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-12",
		"EGBU-12 II",
		"Lightning II POD"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 Snakeye x3",
		"Mk82 GPB",
		"Mk82 GPB x3",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-10",
		"GBU-12",
		"GBU-12 x3",
		"EGBU-12 II",
		"EGBU-12 II x3",
		"GBU-31",
		"GBU-38",
		"GBU-54",
		"HYDRA x7",
		"HYDRA SMK W x7",
		"HYDRA SMK R x7",
		"HYDRA SMK O x7",
		"HYDRA SMK P x7",
		"HYDRA x19",
		"HYDRA x21",
		"APKWS HYDRA x7",
		"APKWS HYDRA x21",
		"ZUNI x4",
		"CRV7 x19",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65G",
		"AGM-65G x3",
		"AGM-65L",
		"AGM-65L x3",
		"AGM-65H",
		"AGM-65H x3"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 Snakeye x3",
		"Mk82 GPB",
		"Mk82 GPB x3",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-10",
		"GBU-12",
		"GBU-12 x3",
		"EGBU-12 II",
		"EGBU-12 II x3",
		"GBU-31",
		"GBU-38",
		"GBU-54",
		"HYDRA x7",
		"HYDRA SMK W x7",
		"HYDRA SMK R x7",
		"HYDRA SMK O x7",
		"HYDRA SMK P x7",
		"HYDRA x19",
		"HYDRA x21",
		"APKWS HYDRA x7",
		"APKWS HYDRA x21",
		"ZUNI x4",
		"CRV7 x19",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65G",
		"AGM-65G x3",
		"AGM-65L",
		"AGM-65L x3",
		"AGM-65H",
		"AGM-65H x3"
    ];
//Add Hardpoint 7 - right belly outer
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 Snakeye x3",
		"Mk82 GPB",
		"Mk82 GPB x3",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-10",
		"GBU-12",
		"GBU-12 x3",
		"EGBU-12 II",
		"EGBU-12 II x3",
		"GBU-31",
		"GBU-38",
		"GBU-54",
		"HYDRA x7",
		"HYDRA x19",
		"HYDRA x21",
		"APKWS HYDRA x7",
		"APKWS HYDRA x21",
		"ZUNI x4",
		"CRV7 x19"
    ];
//Add Hardpoint 8 - left belly outer
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 Snakeye x3",
		"Mk82 GPB",
		"Mk82 GPB x3",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-10",
		"GBU-12",
		"GBU-12 x3",
		"EGBU-12 II",
		"EGBU-12 II x3",
		"GBU-31",
		"GBU-38",
		"GBU-54",
		"HYDRA x7",
		"HYDRA x19",
		"HYDRA x21",
		"APKWS HYDRA x7",
		"APKWS HYDRA x21",
		"ZUNI x4",
		"CRV7 x19"
    ];
	
	//Add Hardpoint 9 - right belly inner
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-10",
		"GBU-12",
		"EGBU-12 II",
		"GBU-31",
		"GBU-38",
		"GBU-54"
    ];
	
//Add Hardpoint 10 - left belly inner
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"GBU-10",
		"GBU-12",
		"EGBU-12 II",
		"GBU-31",
		"GBU-38",
		"GBU-54"
    ];
	
	//Add Hardpoint 11 - belly centre
	{lbAdd[21008,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-10",
		"GBU-12",
		"EGBU-12 II"
    ];

