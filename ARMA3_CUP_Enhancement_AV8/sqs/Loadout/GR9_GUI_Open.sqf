/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "GR9_GUI";

	
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
		"CRV7 FAT x19",
		"CRV7 HE x19",
		"CRV7 KEP x19",
		"ECM POD",
		"Sniper XR POD"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"CRV7 FAT x19",
		"CRV7 HE x19",
		"CRV7 KEP x19",
		"ECM POD",
		"Sniper XR POD"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"AIM-9L"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"AIM-9L"
    ];
//Add Hardpoint 7 - internal right outer
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB"
    ];
//Add Hardpoint 8 - internal left outer
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AGM-65D",
		"AGM-65G",
		"AGM-65L",
		"GBU-10",
		"GBU-12",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"Mk84 GPB"
    ];
	
	//Add Hardpoint 9 - internal left inner
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"Sniper XR POD"
    ];
