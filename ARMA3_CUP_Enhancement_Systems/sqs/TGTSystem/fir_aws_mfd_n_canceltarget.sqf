/*MFD Targeting System by Firewill*/

private ["_plane","_tgtpos","_targetset","_select_mem","_data"];

_select_mem = lbCurSel 2100;
_plane = vehicle player;

/*If (not Local player) ExitWith {};*/
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

if (_plane animationPhase "set_target_switch" >= 0.1) Exitwith {_plane vehiclechat "Currently You're Use Old System.";};

_plane vehiclechat "SYSTEM : Erase the Data from FCS";
_laser_set = _plane getVariable "ITGT_LSR_SET";
	
_marker_d = _plane getvariable "ITGT_C_MARKER";
deleteMarkerLocal _marker_d;
	
	if (_laser_set == "yes")then
	{
		//laser
		_lsr = _plane getvariable "ITGT_LSR";
		deleteVehicle _lsr;
		_plane setVariable ["ITGT_LSR","none"];
		_plane setvariable ["ITGT_LSR_SET","no",true];		
	}
	else
	{
		//gps
		_plane setvariable ["ITGT_NEW","no",true];		
	};


_plane setvariable ["ITGT_C_DATA",[],true];	
_plane setVariable ["ITGT_C_MARKER","none"];	
_plane setVariable ["ITGT_TGT_SET","no",true];	
