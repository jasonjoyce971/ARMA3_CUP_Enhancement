/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "RHS_A10J_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1 - right outboard
	/*{lbAdd[2100,_x]} forEach 
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
		"ECM POD",
		"SUU-25 x8"
    ];*/
	
	//Add Hardpoint 2 - left outboard 
	/*{lbAdd[2201,_x]} forEach 
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
		"ECM POD",
		"SUU-25 x8"
    ];*/
	
//Add Hardpoint 3 - right midline - station 2/10 config
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
		//"CRV7 x19",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-12"
    ];
//Add Hardpoint 4 - left midline - station 2/10 config
	{lbAdd[2102,_x]} forEach 
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
		//"CRV7 x19",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-12"
    ];
//Add Hardpoint 5 - maverick selection
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65G",
		"AGM-65L",
		"AGM-65L x3"
    ];
//Add Hardpoint 6 - maverick selection
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65G",
		"AGM-65L",
		"AGM-65L x3"
    ];
//Add Hardpoint 7 - right belly outer
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-10",
		"GBU-12"
    ];
//Add Hardpoint 8 - left belly outer
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-10",
		"GBU-12"
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
		"GBU-10",
		"GBU-12"
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
		"GBU-10",
		"GBU-12"
    ];
	
	//Add Hardpoint 11 - belly centre
	/*{lbAdd[21008,_x]} forEach 
	[  
		"Empty",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"GBU-10",
		"GBU-12"
    ];*/

