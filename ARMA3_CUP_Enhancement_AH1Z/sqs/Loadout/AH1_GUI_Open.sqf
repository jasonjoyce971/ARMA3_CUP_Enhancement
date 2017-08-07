/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "AH1_GUI";

	
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
		"AGM-122"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"AIM-9L",
		"AGM-122"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"APKWS x7",
		"AGM-114K x4",
		"AGM-114N x4"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"APKWS x7",
		"AGM-114K x4",
		"AGM-114N x4"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"APKWS x7",
		"AGM-114K x4",
		"AGM-114N x4"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"HYDRA x7",
		"HYDRA x19",
		"APKWS x7",
		"AGM-114K x4",
		"AGM-114N x4"
    ];
