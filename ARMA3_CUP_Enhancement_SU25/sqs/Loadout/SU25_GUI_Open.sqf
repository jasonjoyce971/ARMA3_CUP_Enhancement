/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "SU25_GUI";

	
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
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"R-73"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"R-73"
    ];
	
//Add Hardpoint 3 - right mid/out
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"KH-25",
		"R-73",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29T",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_1Rnd_Kh29L_M, wpn = JAS_CUP_Vmlauncher_Kh29L_veh
		"Kh-29L",
		"FAB-250",
		"KAB-500L"
    ];
//Add Hardpoint 4 - left mid/out
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"KH-25",
		"R-73",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29T",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_1Rnd_Kh29L_M, wpn = JAS_CUP_Vmlauncher_Kh29L_veh
		"Kh-29L",
		"FAB-250",
		"KAB-500L"
    ];
//Add Hardpoint 5 - right mid
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"KH-25",
		"R-73",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29T",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_1Rnd_Kh29L_M, wpn = JAS_CUP_Vmlauncher_Kh29L_veh
		"Kh-29L",
		"FAB-250",
		"KAB-500L",
		"RBK-250"
    ];
//Add Hardpoint 6 - left mid
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"KH-25",
		"R-73",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29T",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_1Rnd_Kh29L_M, wpn = JAS_CUP_Vmlauncher_Kh29L_veh
		"Kh-29L",
		"FAB-250",
		"KAB-500L",
		"RBK-250"
    ];
//Add Hardpoint 7 - right mid in
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"Vikhr",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29T",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_1Rnd_Kh29L_M, wpn = JAS_CUP_Vmlauncher_Kh29L_veh
		"Kh-29L",
		"FAB-250",
		"KAB-500L",
		"RBK-250"
    ];
//Add Hardpoint 8 - left mid in
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"Vikhr",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29T",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = JAS_CUP_1Rnd_Kh29L_M, wpn = JAS_CUP_Vmlauncher_Kh29L_veh
		"Kh-29L",
		"FAB-250",
		"KAB-500L",
		"RBK-250"
    ];
	
	//Add Hardpoint 9 - left inner
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"FAB-250",
		"KAB-500L",
		"RBK-250"
    ];
	
//Add Hardpoint 10 - right inner
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"FAB-250",
		"KAB-500L",
		"RBK-250"
    ];

