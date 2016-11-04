/*MFD Targeting System by Firewill*/

private ["_plane","_tgtpos","_targetset","_select_mem","_data","_des_marker","_lsr_marker","_lsr_tgt","_lsr"];

_select_mem = lbCurSel 2100;
_plane = vehicle player;

/*If (not Local player) ExitWith {};*/
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

if (_plane animationPhase "set_target_switch" >= 0.1) Exitwith {_plane vehiclechat "Currently You're Use Old System.";};

_plane vehiclechat "SYSTEM : Send the Target Coordinate to the FCS";
_data = "";
_nan = round(random 10000);

if (_plane getVariable "ITGT_TGT_SET" == "yes") exitWith{_plane vehicleChat "ERROR : CLEAR THE DESIGNATED DATA FIRST."};

/*_marker_d = _plane getvariable "ITGT_C_MARKER";
_lsr = _plane getvariable "ITGT_LSR";
if (_marker_d == "none") then
{
}
else
{
	deleteMarkerLocal _marker_d;
};

if (_lsr == "none") then
{
}
else
{
	deleteVehicle _lsr;
};*/

	Switch (_select_mem) do
	{
		case -1:
		{
			_plane vehiclechat "SYSTEM : SEND THE DEFAULT SLOT 1";
			_data = _plane getvariable "ITGT_DATA_1";
			_plane setvariable ["ITGT_C_DATA",_data,true];

					
		};
		case 0:
		{
			_plane vehiclechat "SYSTEM : SEND THE SLOT 1";	
			_data = _plane getvariable "ITGT_DATA_1";
			_plane setvariable ["ITGT_C_DATA",_data,true];

		};
		case 1:
		{
			_plane vehiclechat "SYSTEM : SEND THE SLOT 2";	
			_data = _plane getvariable "ITGT_DATA_2";
			_plane setvariable ["ITGT_C_DATA",_data,true];

		};
		case 2:
		{
			_plane vehiclechat "SYSTEM : SEND THE SLOT 3";	
			_data = _plane getvariable "ITGT_DATA_3";
			_plane setvariable ["ITGT_C_DATA",_data,true];

		};
		case 3:
		{
			_plane vehiclechat "SYSTEM : SEND THE SLOT 4";	
			_data = _plane getvariable "ITGT_DATA_4";
			_plane setvariable ["ITGT_C_DATA",_data,true];

		};
		case 4:
		{
			_plane vehiclechat "SYSTEM : SEND THE SLOT 5";	
			_data = _plane getvariable "ITGT_DATA_5";
			_plane setvariable ["ITGT_C_DATA",_data,true];

		};
	};

_mn = format["%1_des_marker",_nan];		

_type = _plane getvariable "ITGT_TYPE";

switch (_type) do
{
    case "GPS":
    {
		_des_marker = createMarkerLocal [_mn, [0,0]];
		_des_marker setMarkerColorLocal "ColorBlue";
		_des_marker setMarkerShapeLocal "ICON";
		_des_marker setMarkerSizeLocal [0.8,0.8];
		_des_marker setMarkerTypeLocal "selector_selectedMission";
		_des_marker setMarkerTextLocal "";
		_des_marker setMarkerAlphaLocal 1;
		_des_marker setMarkerPosLocal _data;	
		
		_plane setvariable ["ITGT_NEW","yes",true];	
    };

    case "LSR":
    {
		_des_marker = createMarkerLocal [_mn, [0,0]];
		_des_marker setMarkerColorLocal "ColorRed";
		_des_marker setMarkerShapeLocal "ICON";
		_des_marker setMarkerSizeLocal [1,1];
		_des_marker setMarkerTypeLocal "selector_selectedEnemy";
		_des_marker setMarkerAlphaLocal 1;
		_des_marker setMarkerPosLocal _data;	
		
		_lsr_tgt = "FIR_I_TGT" CreateVehicle _data;		
		_plane setvariable ["ITGT_LSR",_lsr_tgt,true];	
		
		_plane setvariable ["ITGT_LSR_SET","yes",true];			
    };
};
	
_plane setVariable ["ITGT_C_MARKER",_des_marker,true];	
_plane setVariable ["ITGT_TGT_SET","yes",true];
	

