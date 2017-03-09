/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_A164_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1//
	{lbAdd[2100,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"SUU-25 x8"
    ];
//Add Hardpoint 3//
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AGM-65D x 3",
		"GBU-12 x 2",
		"GBU-38 x 3",
		"Mk82 Snakeye x 3",
		"Mk82 GPB x 3",
		"BLU-107/B x 3"
    ];
//Add Hardpoint 4//
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82Snakeye",
		"Mk82 GPB"
    ];
//Add Hardpoint 5//
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82Snakeye",
		"Mk82 GPB"
    ];
//Add Hardpoint 6//
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82Snakeye",
		"Mk82 GPB"
    ];
//Add Hardpoint 7//
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31",
		"GBU-32",
		"GBU-38",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 CEM WCMD",
		"CBU-105 SFW WCMD",
		"Mk82Snakeye",
		"Mk82 GPB"
    ];
//Add Hardpoint 8//
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"AGM-65D x 3",
		"GBU-12 x 2",
		"GBU-38 x 3",
		"Mk82 Snakeye x 3",
		"Mk82 GPB x 3",
		"BLU-107/B x 3"
    ];
//Add Hardpoint 10//
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"AIM-9M",
		"AIM-9X",
		"ECM POD",
		"Sniper XR POD",
		"SUU-25 x8"
    ];

//Rockets 1//
	{lbAdd[2113,_x]} forEach 
	[  
		"HE Rockets",
		"AP Rockets"
    ];
	
	//Rockets 1//
	{lbAdd[2114,_x]} forEach 
	[  
		"HE Rockets",
		"AP Rockets"
    ];