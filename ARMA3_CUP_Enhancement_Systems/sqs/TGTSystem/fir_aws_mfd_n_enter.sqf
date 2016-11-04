/*MFD Targeting System by Firewill*/

private ["_plane","_tgtpos","_targetset","_select_mem","_tgt_grid","_grid1","_grid2","_grid_1_last","_grid_2_last","_gridarray","_grid_1_last_10d","_grid_2_last_10d","_check"];

_select_mem = lbCurSel 2100;
_plane = vehicle player;
_grid = ctrlText 1400;

/*If (not Local player) ExitWith {};*/
//if (not(_plane iskindof "Plane")) ExitWith {player vehiclechat "You Must get in the Plane!";};

if (_plane animationPhase "set_target_switch" >= 0.1) Exitwith {_plane vehiclechat "Currently You're Use Old System.";};

_type = _plane getvariable ["ITGT_GRIDTYPE","8D"];

_gridarray = toArray(_grid);
_grid_1_last = "";
_grid_2_last = "";
_grid_1_last_10d = "";
_grid_2_last_10d = "";
_grid1 = "";
_grid2 = "";
_tgt_grid = [];

/*if ((count _gridarray) != 8 or (count _gridarray) != 10) exitWith{hintsilent "its not 8 / 10digits!"};*/

_check = "no";

if (_type == "8D" and (count _gridarray == 8)) then
{
	for [{_i=0}, {_i<3}, {_i=_i+1}] do
	{
		_grid1 = _grid1 + toString([_gridarray select _i]);
	};

	for [{_i=4}, {_i<7}, {_i=_i+1}] do
	{
		_grid2 = _grid2 + toString([_gridarray select _i]);
	};

	_grid1 = _grid1 call BIS_fnc_parseNumber;
	_grid2 = _grid2 call BIS_fnc_parseNumber;
	_grid1 = _grid1 * 100;
	_grid2 = _grid2 * 100;

	_grid_1_last = toString([_gridarray select 3]);
	_grid_2_last = toString([_gridarray select 7]);
	_grid_1_last = _grid_1_last call BIS_fnc_parseNumber;
	_grid_2_last = _grid_2_last call BIS_fnc_parseNumber;
	_grid_1_last = _grid_1_last * 10;
	_grid_2_last = _grid_2_last * 10;

	_grid1 = _grid1 + _grid_1_last;
	_grid2 = _grid2 + _grid_2_last;

	_tgt_grid = [_grid1,_grid2];
	_check = "yes";
};

if (_type == "10D" and (count _gridarray == 10)) then
{
	for [{_i=0}, {_i<3}, {_i=_i+1}] do
	{
		_grid1 = _grid1 + toString([_gridarray select _i]);
	};

	for [{_i=5}, {_i<8}, {_i=_i+1}] do
	{
		_grid2 = _grid2 + toString([_gridarray select _i]);
	};

	_grid1 = _grid1 call BIS_fnc_parseNumber;
	_grid2 = _grid2 call BIS_fnc_parseNumber;
	_grid1 = _grid1 * 100;
	_grid2 = _grid2 * 100;

	_grid_1_last = toString([_gridarray select 3]);
	_grid_2_last = toString([_gridarray select 8]);
	_grid_1_last = _grid_1_last call BIS_fnc_parseNumber;
	_grid_2_last = _grid_2_last call BIS_fnc_parseNumber;
	_grid_1_last = _grid_1_last * 10;
	_grid_2_last = _grid_2_last * 10;

	_grid1 = _grid1 + _grid_1_last;
	_grid2 = _grid2 + _grid_2_last;
	
	_grid_1_last_10d = toString([_gridarray select 4]);
	_grid_2_last_10d = toString([_gridarray select 9]);
	_grid_1_last_10d = _grid_1_last_10d call BIS_fnc_parseNumber;
	_grid_2_last_10d = _grid_2_last_10d call BIS_fnc_parseNumber;

	_grid1 = _grid1 + _grid_1_last_10d;
	_grid2 = _grid2 + _grid_2_last_10d;
	
	_tgt_grid = [_grid1,_grid2];
	_check = "yes";
};

if (_check == "no") exitWith {_plane vehiclechat "SYSTEM ERROR : PLEASE CHECK THE COORDINATES"};

_plane vehiclechat "SYSTEM : Record Target Coordinates to Memory.";

_nan = round(random 10000);

	Switch (_select_mem) do
	{
		case -1:
		{
			_marker_v = _plane getvariable "ITGT_MARKER_1";
			if (_marker_v == "none") then
			{
			}
			else
			{
				deleteMarkerLocal _marker_v;
			};
			_mn = format["%1_default_slot_marker",_nan];			
			_default_marker = createMarkerLocal [_mn, [0,0]];
			_default_marker setMarkerColorLocal "ColorBlue";
			_default_marker setMarkerShapeLocal "ICON";
			_default_marker setMarkerSizeLocal [0.8,0.8];
			_default_marker setMarkerTypeLocal "mil_triangle";
			_default_marker setMarkerTextLocal "TGT POS 1";
			_default_marker setMarkerAlphaLocal 1;
			_default_marker setMarkerPosLocal _tgt_grid;	
			_plane setVariable ["ITGT_MARKER_1",_default_marker,true];
			
			_plane vehiclechat "SYSTEM : SAVE THE DEFAULT SLOT 1";
			_plane setvariable ["ITGT_DATA_1",_tgt_grid,true];

		};
		case 0:
		{
			_marker_v = _plane getvariable "ITGT_MARKER_1";
			if (_marker_v == "none") then
			{
			}
			else
			{
				deleteMarkerLocal _marker_v;
			};
			_mn = format["%1_default_slot_marker",_nan];			
			_default_marker = createMarkerLocal [_mn, [0,0]];
			_default_marker setMarkerColorLocal "ColorBlue";
			_default_marker setMarkerShapeLocal "ICON";
			_default_marker setMarkerSizeLocal [0.8,0.8];
			_default_marker setMarkerTypeLocal "mil_triangle";
			_default_marker setMarkerTextLocal "TGT POS 1";
			_default_marker setMarkerAlphaLocal 1;
			_default_marker setMarkerPosLocal _tgt_grid;	
			_plane setVariable ["ITGT_MARKER_1",_default_marker,true];		
		
			_plane vehiclechat "SYSTEM : SAVE THE SLOT 1";	
			_plane setvariable ["ITGT_DATA_1",_tgt_grid,true];

		};
		case 1:
		{
			_marker_v = _plane getvariable "ITGT_MARKER_2";
			if (_marker_v == "none") then
			{
			}
			else
			{
				deleteMarkerLocal _marker_v;
			};
			_mn = format["%1_default_slot_marker",_nan];			
			_default_marker = createMarkerLocal [_mn, [0,0]];
			_default_marker setMarkerColorLocal "ColorBlue";
			_default_marker setMarkerShapeLocal "ICON";
			_default_marker setMarkerSizeLocal [0.8,0.8];
			_default_marker setMarkerTypeLocal "mil_triangle";
			_default_marker setMarkerTextLocal "TGT POS 2";
			_default_marker setMarkerAlphaLocal 1;
			_default_marker setMarkerPosLocal _tgt_grid;	
			_plane setVariable ["ITGT_MARKER_2",_default_marker,true];		
		
			_plane vehiclechat "SYSTEM : SAVE THE SLOT 2";	
			_plane setvariable ["ITGT_DATA_2",_tgt_grid,true];

		};
		case 2:
		{
			_marker_v = _plane getvariable "ITGT_MARKER_3";
			if (_marker_v == "none") then
			{
			}
			else
			{
				deleteMarkerLocal _marker_v;
			};
			_mn = format["%1_default_slot_marker",_nan];			
			_default_marker = createMarkerLocal [_mn, [0,0]];
			_default_marker setMarkerColorLocal "ColorBlue";
			_default_marker setMarkerShapeLocal "ICON";
			_default_marker setMarkerSizeLocal [0.8,0.8];
			_default_marker setMarkerTypeLocal "mil_triangle";
			_default_marker setMarkerTextLocal "TGT POS 3";
			_default_marker setMarkerAlphaLocal 1;
			_default_marker setMarkerPosLocal _tgt_grid;	
			_plane setVariable ["ITGT_MARKER_3",_default_marker,true];		
		
			_plane vehiclechat "SYSTEM : SAVE THE SLOT 3";	
			_plane setvariable ["ITGT_DATA_3",_tgt_grid,true];

		};
		case 3:
		{
			_marker_v = _plane getvariable "ITGT_MARKER_4";
			if (_marker_v == "none") then
			{
			}
			else
			{
				deleteMarkerLocal _marker_v;
			};
			_mn = format["%1_default_slot_marker",_nan];			
			_default_marker = createMarkerLocal [_mn, [0,0]];
			_default_marker setMarkerColorLocal "ColorBlue";
			_default_marker setMarkerShapeLocal "ICON";
			_default_marker setMarkerSizeLocal [0.8,0.8];
			_default_marker setMarkerTypeLocal "mil_triangle";
			_default_marker setMarkerTextLocal "TGT POS 4";
			_default_marker setMarkerAlphaLocal 1;
			_default_marker setMarkerPosLocal _tgt_grid;	
			_plane setVariable ["ITGT_MARKER_4",_default_marker,true];		
		
			_plane vehiclechat "SYSTEM : SAVE THE SLOT 4";	
			_plane setvariable ["ITGT_DATA_4",_tgt_grid,true];

		};
		case 4:
		{
			_marker_v = _plane getvariable "ITGT_MARKER_5";
			if (_marker_v == "none") then
			{
			}
			else
			{
				deleteMarkerLocal _marker_v;
			};
			_mn = format["%1_default_slot_marker",_nan];			
			_default_marker = createMarkerLocal [_mn, [0,0]];
			_default_marker setMarkerColorLocal "ColorBlue";
			_default_marker setMarkerShapeLocal "ICON";
			_default_marker setMarkerSizeLocal [0.8,0.8];
			_default_marker setMarkerTypeLocal "mil_triangle";
			_default_marker setMarkerTextLocal "TGT POS 5";
			_default_marker setMarkerAlphaLocal 1;
			_default_marker setMarkerPosLocal _tgt_grid;	
			_plane setVariable ["ITGT_MARKER_5",_default_marker,true];		
		
			_plane vehiclechat "SYSTEM : SAVE THE SLOT 5";	
			_plane setvariable ["ITGT_DATA_5",_tgt_grid,true];

		};
	};
