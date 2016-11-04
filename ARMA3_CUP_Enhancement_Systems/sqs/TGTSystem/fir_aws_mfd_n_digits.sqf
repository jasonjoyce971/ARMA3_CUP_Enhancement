private ["_plane","_type"];

_plane = vehicle player;
_type = _this select 0;

switch (_type) do
{
    case "8D":
    {
		_plane setVariable ["ITGT_GRIDTYPE","8D",true];
		_plane vehiclechat "SYSTEM : 8 DIGITS GRID";
		ctrlSetText [1998, "8DIGITS"];
    };

    case "10D":
    {
		_plane setVariable ["ITGT_GRIDTYPE","10D",true];		
		_plane vehiclechat "SYSTEM : 10 DIGITS GRID";
		ctrlSetText [1998, "10DIGITS"];
    };
};