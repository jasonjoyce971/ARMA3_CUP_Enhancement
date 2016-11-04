/*MFD Targeting System by Firewill*/

private ["_plane","_tgtpos","_targetset","_select_mem","_data","_backup_data","_backup_data_c"];

_select_mem = lbCurSel 2100;
_plane = vehicle player;

/*If (not Local player) ExitWith {};*/
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

if (_plane animationPhase "set_target_switch" >= 0.1) Exitwith {_plane vehiclechat "Currently You're Use Old System.";};

if (_plane getVariable "ITGT_TGT_SET" == "yes") exitWith{_plane vehicleChat "ERROR : CLEAR THE DESIGNATED DATA FIRST."};
_plane vehiclechat "SYSTEM : Delete Memory Data";
_backup_data_c = _plane getVariable "ITGT_C_DATA";

	Switch (_select_mem) do
	{
		case -1:
		{
			_backup_data = _plane getVariable "ITGT_DATA_1";
			_plane vehiclechat "SYSTEM : ERASE THE DEFAULT SLOT 1";
			_plane setvariable ["ITGT_DATA_1",[],true];			
		/*	_plane setvariable ["ITGT_C_DATA",[],true];*/
			
			_marker_v = _plane getvariable "ITGT_MARKER_1";
			deleteMarkerLocal _marker_v;
		};
		case 0:
		{
			_backup_data = _plane getVariable "ITGT_DATA_1";
			_plane vehiclechat "SYSTEM : ERASE THE SLOT 1";	
			_plane setvariable ["ITGT_DATA_1",[],true];			
		/*	_plane setvariable ["ITGT_C_DATA",[],true];*/
			
			_marker_v = _plane getvariable "ITGT_MARKER_1";
			deleteMarkerLocal _marker_v;
		};
		case 1:
		{
			_backup_data = _plane getVariable "ITGT_DATA_2";
			_plane vehiclechat "SYSTEM : ERASE THE SLOT 2";	
			_plane setvariable ["ITGT_DATA_2",[],true];			
		/*	_plane setvariable ["ITGT_C_DATA",[],true];*/
			
			_marker_v = _plane getvariable "ITGT_MARKER_2";
			deleteMarkerLocal _marker_v;
		};
		case 2:
		{
			_backup_data = _plane getVariable "ITGT_DATA_3";
			_plane vehiclechat "SYSTEM : ERASE THE SLOT 3";	
			_plane setvariable ["ITGT_DATA_3",[],true];			
		/*	_plane setvariable ["ITGT_C_DATA",[],true];*/
			
			_marker_v = _plane getvariable "ITGT_MARKER_3";
			deleteMarkerLocal _marker_v;
		};
		case 3:
		{
			_backup_data = _plane getVariable "ITGT_DATA_4";
			_plane vehiclechat "SYSTEM : ERASE THE SLOT 4";	
			_plane setvariable ["ITGT_DATA_4",[],true];			
		/*	_plane setvariable ["ITGT_C_DATA",[],true];*/
			
			_marker_v = _plane getvariable "ITGT_MARKER_4";
			deleteMarkerLocal _marker_v;
		};
		case 4:
		{
			_backup_data = _plane getVariable "ITGT_DATA_5";
			_plane vehiclechat "SYSTEM : ERASE THE SLOT 5";	
			_plane setvariable ["ITGT_DATA_5",[],true];			
		/*	_plane setvariable ["ITGT_C_DATA",[],true];*/
			
			_marker_v = _plane getvariable "ITGT_MARKER_5";
			deleteMarkerLocal _marker_v;
		};
	};
	

	/*	_laser_set = _plane getVariable "ITGT_LSR_SET";
			
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

		_plane setVariable ["ITGT_C_MARKER","none"];	
		_plane setVariable ["ITGT_TGT_SET","no",true];	
	*/
	
