/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "JAS_A164_GUI";

	
//Add Weapon Preset Combo Box//
    {lbAdd[2108,_x]} forEach 
	[  
		"NO PRESET",
		"Custom Slot 1",
		"Custom Slot 2",
		"Custom Slot 3"
    ];

//Add Hardpoint 1 left outboard//
	{lbAdd[2100,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"ASRAAM",
		"SUU-25",
		"GBU-12",
		"CBU-89",
		"Mk82",
		"Mk82 AIR"
    ];
	
	//Rockets 2 left midline
	{lbAdd[2113,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 x3",
		"Mk82 AIR",
		"Mk82 AIR x3"
    ];
	
//Add Hardpoint 3 left inboard//
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"GBU-10",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65H",
		"AGM-65H x3",
		"AGM-65L",
		"AGM-65L x3",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"Mk84",
		"GBU-31",
		"GBU-38",
		"EGBU-12",
		"EGBU-12 x3",
		"GBU-54",
		"CBU-103",
		"CBU-105",
		"CBU-85",
		"BL-778"
    ];
//Add Hardpoint 4 left belly outer//
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"GBU-12 x3",
		"GBU-10",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 x3",
		"Mk82 AIR",
		"Mk82 AIR x3",
		"Mk84",
		"GBU-31",
		"GBU-38",
		"EGBU-12",
		"EGBU-12 x3",
		"GBU-54",
		"CBU-103",
		"CBU-105",
		"CBU-85",
		"BL-778"
    ];
//Add Hardpoint 5 left belly inner//
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"GBU-10",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"Mk84",
		"GBU-31",
		"GBU-38",
		"EGBU-12",
		"GBU-54",
		"CBU-103",
		"CBU-105",
		"CBU-85",
		"BL-778"
    ];
//Add Hardpoint 6 right belly inner//
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"GBU-10",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"Mk84",
		"GBU-31",
		"GBU-38",
		"EGBU-12",
		"GBU-54",
		"CBU-103",
		"CBU-105",
		"CBU-85",
		"BL-778"
    ];
//Add Hardpoint 7 right belly outer//
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"GBU-12 x3",
		"GBU-10",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 x3",
		"Mk82 AIR",
		"Mk82 AIR x3",
		"Mk84",
		"GBU-31",
		"GBU-38",
		"EGBU-12",
		"EGBU-12 x3",
		"GBU-54",
		"CBU-103",
		"CBU-105",
		"CBU-85",
		"BL-778"
    ];
//Add Hardpoint 8 right inboard//
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"GBU-10",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"AGM-65D",
		"AGM-65D x3",
		"AGM-65H",
		"AGM-65H x3",
		"AGM-65L",
		"AGM-65L x3",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 AIR",
		"Mk84",
		"GBU-31",
		"GBU-38",
		"EGBU-12",
		"EGBU-12 x3",
		"GBU-54",
		"CBU-103",
		"CBU-105",
		"CBU-85",
		"BL-778"
    ];
	
	//Rockets 9 right midline
	{lbAdd[2114,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"GBU-12",
		"AGM-65D",
		"AGM-65H",
		"AGM-65L",
		"CBU-87",
		"CBU-89",
		"CBU-97",
		"Mk82",
		"Mk82 x3",
		"Mk82 AIR",
		"Mk82 AIR x3"
    ];
	
//Add Hardpoint 10 right outboard//
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"DAGR",
		"DAR",
		"ASRAAM",
		"SUU-25",
		"GBU-12",
		"CBU-89",
		"Mk82",
		"Mk82 AIR"
    ];
	