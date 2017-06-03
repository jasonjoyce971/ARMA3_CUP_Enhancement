/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_SHKIRA_STEALTH_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 7 - right inboard
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"R-77"
    ];
//Add Hardpoint 8 - left inboard
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"R-77"
    ];
	
	//Add Hardpoint 9 - left nacelle
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"R-77"
    ];
	
//Add Hardpoint 10 - right nacelle
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"R-77"
    ];

//Add Hardpoint 11 - right belly
	{lbAdd[2117,_x]} forEach 
	[  
		"Empty",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73",
		"R-77"
    ];
	
//Add Hardpoint 12 - left belly
	{lbAdd[2118,_x]} forEach 
	[  
		"Empty",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73",
		"R-77"
    ];
	
	//Add Hardpoint 13 - belly centre
	{lbAdd[3202,_x]} forEach 
	[  
		"Empty",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73",
		"R-77"
    ];