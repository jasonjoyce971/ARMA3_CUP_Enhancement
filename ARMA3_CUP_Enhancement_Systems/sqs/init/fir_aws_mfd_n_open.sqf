/* Open MFD By Firewill */
private ["_plane"];

_plane = vehicle player;

/*If (not Local player) ExitWith {};*/
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Aircraft!";};
_handle= CreateDialog "JAS_FIR_AWS_MFD_N";

    {lbAdd[2100,_x]} forEach 
	[  
		"Memory Slot 1",
		"Memory Slot 2",
		"Memory Slot 3",
		"Memory Slot 4",
		"Memory Slot 5"
    ];

/* _type = _plane getvariable "ITGT_TYPE";

switch (_type) do
{
    case "GPS":
    {
		ctrlSetText [1999, "MODE : GPS"];
    };

    case "LSR":
    {
		ctrlSetText [1999, "MODE : LSR"];
    };
}; */

_type2 = _plane getvariable "ITGT_GRIDTYPE";

switch (_type2) do
{
    case "8D":
    {
		ctrlSetText [1998, "8DIGITS"];
    };

    case "10D":
    {
		ctrlSetText [1998, "10DIGITS"];
    };
};