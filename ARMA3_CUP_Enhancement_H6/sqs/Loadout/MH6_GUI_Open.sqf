/*Loadout Dialog By Firewill*/

private ["_plane"];

_plane = vehicle player;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {player vehiclechat "You Must get in the Plane!";};
_handle= CreateDialog "MH6_GUI";

//Add Hardpoint 1 - right outboard
	{lbAdd[2202,_x]} forEach 
	[  
		"Scout",
		"Transport"
    ];
	