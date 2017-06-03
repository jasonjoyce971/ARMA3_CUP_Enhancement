/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_YAK_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1 - right wingtip
	{lbAdd[2100,_x]} forEach 
	[  
		"Empty",
		"R-73"
    ];
	
	//Add Hardpoint 2 - left wingtip 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"R-73"
    ];
	
//Add Hardpoint 3 - right outboard
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
//Add Hardpoint 4 - left outboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
//Add Hardpoint 7 - right wingpit
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
//Add Hardpoint 8 - left wingpit
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
	//Add Rocket Selection 1
	{lbAdd[2117,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
	//Add Rocket Selection 2
	{lbAdd[2118,_x]} forEach 
	[  
		"Empty",
		"GSh-23",
		"Scalpel x4",
		"RBK-250",
		"KAB-250",
		"S-8 x20 HE",
		"S-8 x20 AP",
		"S-8KOR x19",
		"Kh-25MPU",
		"Kh-25R",
		"Kh-25MTP",
		"Kh-25MT",
		"Kh-25MS",
		"Kh-25ML",
		"R-73"
    ];
	