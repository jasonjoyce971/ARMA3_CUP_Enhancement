
/* TGT System By Firewill */
private ["_plane","_tgtpos","_i_tgt"];

_plane = vehicle player;

/*If (not Local _plane) ExitWith {};*/
if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

/*_plane setVariable ["ITGT_VT","yes",true];*/

_tgtPos = screenToWorld [0.5,0.5];
_i_tgt = "FIR_I_TGT_FAKE" CreateVehicle _tgtpos;
sleep 0.5;

while {alive _plane and _plane getvariable "ITGT_VT" == "yes"} do
{
	_posASL = screenToWorld [0.5,0.5];
	_i_tgt setpos _posASL;	
	sleep 0.03;
};

sleep 0.05;

deleteVehicle _i_tgt;
