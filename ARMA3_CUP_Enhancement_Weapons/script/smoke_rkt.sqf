private ["_subpos","_smoke_rkt","_smoke_rktzpos","_smoke_color","_color","_Smoke"];

_smoke_rkt = _this select 0;
_smoke_color = _this select 1;
_smoke_rktzpos = getpos _smoke_rkt select 2;

_color = "";

switch (_smoke_color) do
{  
	case "white":
	{
		_color = "JAS_FIR_AWS_SmokeShell";
	};
	case "red":
	{
		_color = "JAS_FIR_AWS_SmokeShell_Red";
	};
	case "orange":
	{
		_color = "JAS_FIR_AWS_SmokeShell_Orange";
	};
	case "purple":
	{
		_color = "JAS_FIR_AWS_SmokeShell_Purple";
	};
};

while {alive _smoke_rkt} do
{
	_subpos = getpos _smoke_rkt;
};

_isWater = surfaceIsWater _subpos;

if(_isWater) ExitWith{};

for [{_i=0}, {_i < 1}, {_i=_i+1}] do
{
	_Smoke = _color createvehicle _subpos;
	_Smoke setpos [(getpos _Smoke select 0) , (getpos _Smoke select 1), (getpos _Smoke select 2)]; 
};
