/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "AH6_GUI";

	
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
		"HYDRA x7",
		"HYDRA x19",
		"APKWS x7",
		"AGM-114K x2",
		"AGM-114N x2"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"APKWS x7",
		"AGM-114K x2",
		"AGM-114N x2"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"AGM-114K x2"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"AGM-114K x4"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"AGM-114K x4"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"AGM-114K x4"
    ];
//Add Hardpoint 7 - internal right outer
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-38",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB"
    ];
//Add Hardpoint 8 - internal left outer
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-38",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB"
    ];
	
	//Add Hardpoint 9 - internal left inner
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-38",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB"
    ];
	
//Add Hardpoint 10 - internal right inner
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"GBU-12",
		"GBU-38",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"CBU-87 CEM",
		"CBU-89 GATOR",
		"CBU-97 SFW",
		"CBU-103 WCMD",
		"GBU-39 SDB",
		"GBU-53 SDB"
    ];

