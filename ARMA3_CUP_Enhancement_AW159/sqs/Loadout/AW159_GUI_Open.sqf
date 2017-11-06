/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "AW159_GUI";

	
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
		"M-621 Cannon",
		"CRV-7 FAT",
		"CRV-7 HE",
		"CRV-7 KEP",
		"AGM-114K",
		"AGM-114N"
    ];
	//Add Hardpoint 2 - left outboard 
	{lbAdd[2201,_x]} forEach 
	[  
		"Empty",
		"M-621 Cannon",
		"CRV-7 FAT",
		"CRV-7 HE",
		"CRV-7 KEP",
		"AGM-114K",
		"AGM-114N"
    ];
