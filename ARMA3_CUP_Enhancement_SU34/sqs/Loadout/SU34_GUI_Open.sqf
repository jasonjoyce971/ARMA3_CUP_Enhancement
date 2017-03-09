/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "SU34_GUI";

	
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
		"R-73",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets"	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
    ];
//Add Hardpoint 4 - left outboard
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"R-73",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets"	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
    ];
//Add Hardpoint 5 - right mid
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"R-73",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"Vikhr",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29L",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = FIR_Kh29_1rnd_M, wpn = FIR_Kh29L
		"Kh-29T",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"RBK-250"
    ];
//Add Hardpoint 6 - left mid
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"R-73",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"Vikhr",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29L",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = FIR_Kh29_1rnd_M, wpn = FIR_Kh29L
		"Kh-29T",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"RBK-250"
    ];
//Add Hardpoint 7 - right inboard
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"Vikhr",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29L",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = FIR_Kh29_1rnd_M, wpn = FIR_Kh29L
		"Kh-29T",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"RBK-250"
    ];
//Add Hardpoint 8 - left inboard
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"S-8 Rockets",	//Pod = JAS_CUP_1Rnd_S8_Pod_Heli_M, mag = JAS_CUP_40Rnd_S8_M, wpn = JAS_CUP_Vmlauncher_S8_veh
		"S-13 Rockets",	//Pod = JAS_CUP_S13_Pod_Heli_M, mag = JAS_S13_5rnd_M, wpn = JAS_CUP_Vmlauncher_S13_veh 
		"GSh-23",
		"Vikhr",			//Pod = JAS_CUP_2Rnd_Igla_Rack_M, mag = CUP_2Rnd_Igla_M, wpn = CUP_Vmlauncher_Igla_twice_veh
		"Kh-29L",		//Pod = JAS_CUP_Vikhr_Rack_6Rnd_M, mag = FIR_Kh29_1rnd_M, wpn = FIR_Kh29L
		"Kh-29T",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L",
		"RBK-250"
    ];
	
	//Add Hardpoint 9 - left nacelle
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"Fuel Tank",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L"
    ];
	
//Add Hardpoint 10 - right nacelle
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"Fuel Tank",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L"
    ];

//Add Hardpoint 11 - right belly
	{lbAdd[2117,_x]} forEach 
	[  
		"Empty",
		"Kh-29L",
		"Kh-29T",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L"
    ];
	
//Add Hardpoint 12 - left belly
	{lbAdd[2118,_x]} forEach 
	[  
		"Empty",
		"Kh-29L",
		"Kh-29T",
		"KH-25",
		"FAB-250",
		"KAB-500KR",
		"KAB-500SE",
		"KAB-500L"
    ];