/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "MI8_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1 - left inboard
	{lbAdd[2100,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets"
    ];
	
	//Add Hardpoint 2 - right inboard
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",
		"S-13 Rockets"
    ];
	
//Add Hardpoint 3 - left outboard
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",
		"S-13 Rockets"
    ];
//Add Hardpoint 4 - right outboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",
		"S-13 Rockets"
    ];