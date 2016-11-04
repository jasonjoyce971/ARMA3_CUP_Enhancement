/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "KA50_GUI";

	
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
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"FAB-250",		//Pod = N/A, mag = JAS_CUP_1Rnd_FAB250_M, wpn = JAS_CUP_Vblauncher_Fab250_veh
		"RBK-250",		//Pod = N/A, mag = JAS_CUP_1Rnd_RBK250_M, wpn = JAS_CUP_Vblauncher_RBK250_veh
		"GSh-23"
    ];
	
	//Add Hardpoint 2 - right inboard
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",
		"S-13 Rockets",
		"FAB-250",
		"RBK-250",
		"GSh-23"
    ];
	
//Add Hardpoint 3 - left outboard
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",
		"S-13 Rockets",
		"Vikhr",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_6Rnd_AT16_M, wpn = JAS_CUP_Vmlauncher_AT16_veh
		"IGLA",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-25",
		"Kh-29",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_1Rnd_Kh29L_M, wpn = JAS_CUP_Vmlauncher_Kh29L_veh
		"FAB-250",
		"RBK-250"
    ];
//Add Hardpoint 4 - right outboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",
		"S-13 Rockets",
		"Vikhr",
		"IGLA",
		"Kh-25",
		"Kh-29",
		"FAB-250",
		"RBK-250"
    ];
