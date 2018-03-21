/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "f35RAF_GUI";

	
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
		"ASRAAM",
		"Meteor",
		"BRIMSTONE"
		//"Sniper XR POD"
    ];
	
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM",
		"BRIMSTONE"
		//"Sniper XR POD"
    ];
	
//Add Hardpoint 3 - right midline
	{lbAdd[2101,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM",
		"BRIMSTONE x2",
		"AGM-88 HARM",
		"GBU-12",
		"EGBU-12 IV",
		"GBU-38 JDAM",
		"GBU-54 LJDAM"
    ];
//Add Hardpoint 4 - left midline
	{lbAdd[2102,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM",
		"BRIMSTONE x2",
		"AGM-88 HARM",
		"GBU-12",
		"EGBU-12 IV",
		"GBU-38 JDAM",
		"GBU-54 LJDAM"
    ];
//Add Hardpoint 5 - right inboard
	{lbAdd[2103,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM",
		"BRIMSTONE x2",
		"AGM-88 HARM",
		"GBU-12",
		"EGBU-12 IV",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31 JDAM",
		"GBU-32 JDAM",
		"GBU-38 JDAM",
		"GBU-39 SDB I",
		"GBU-53 SDB II",
		"GBU-54 LJDAM",
		"Storm Shadow"
    ];
//Add Hardpoint 6 - left inboard
	{lbAdd[2104,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM",
		"BRIMSTONE x2",
		"AGM-88 HARM",
		"GBU-12",
		"EGBU-12 IV",
		"GBU-24A",
		"GBU-24B",
		"GBU-24/118",
		"GBU-31 JDAM",
		"GBU-32 JDAM",
		"GBU-38 JDAM",
		"GBU-39 SDB I",
		"GBU-53 SDB II",
		"GBU-54 LJDAM",
		"Storm Shadow"
    ];
//Add Hardpoint 7 - internal right outer
	{lbAdd[2105,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM",
		"GBU-12",
		"EGBU-12 IV",
		"GBU-38 JDAM",
		"GBU-39 SDB I",
		"GBU-53 SDB II",
		"GBU-54 LJDAM",
		"BRIMSTONE x2"
    ];
//Add Hardpoint 8 - internal left outer
	{lbAdd[2106,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM",
		"GBU-12",
		"EGBU-12 IV",
		"GBU-38 JDAM",
		"GBU-39 SDB I",
		"GBU-53 SDB II",
		"GBU-54 LJDAM",
		"BRIMSTONE x2"
    ];
	
	//Add Hardpoint 9 - internal left inner
	{lbAdd[2202,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM"
		/*"GBU-12",
		"EGBU-12 IV",
		"GBU-38",
		"GBU-54",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"GBU-39 SDB",
		"GBU-53 SDB",
		"BRIMSTONE"*/
    ];
	
//Add Hardpoint 10 - internal right inner
	{lbAdd[2107,_x]} forEach 
	[  
		"Empty",
		"ASRAAM",
		"Meteor BVRAAM"
		/*"GBU-12",
		"EGBU-12 IV",
		"GBU-38",
		"GBU-54",
		"Mk82 Snakeye",
		"Mk82 GPB",
		"GBU-39 SDB",
		"GBU-53 SDB",
		"BRIMSTONE"*/
    ];

	//Add Hardpoint 11 - belly centre
	{lbAdd[21008,_x]} forEach 
	[  
		"Empty",
		"GAU-22 POD"
    ];