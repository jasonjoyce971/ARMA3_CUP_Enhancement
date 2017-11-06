/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Chopper!";};
_handle= CreateDialog "JAS_Y32_GUI";

	
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
		"scalpel",
		"scalpel x3",
		"scalpel x4",
		"tratnyr HE x20",
		"tratnyr AP x20",
		"skyfire x19",
		"sahr-3",
		"20mm Cannon Pod",
		"LOM-250G",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"RBK-500"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"scalpel",
		"scalpel x3",
		"scalpel x4",
		"tratnyr HE x20",
		"tratnyr AP x20",
		"skyfire x19",
		"sahr-3",
		"20mm Cannon Pod",
		"LOM-250G",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"RBK-500"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"scalpel",
		"scalpel x3",
		"scalpel x4",
		"tratnyr HE x20",
		"tratnyr AP x20",
		"skyfire x19",
		"sahr-3",
		"20mm Cannon Pod",
		"LOM-250G",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"RBK-500"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"scalpel",
		"scalpel x3",
		"scalpel x4",
		"tratnyr HE x20",
		"tratnyr AP x20",
		"skyfire x19",
		"sahr-3",
		"20mm Cannon Pod",
		"LOM-250G",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"RBK-500"
    ];
