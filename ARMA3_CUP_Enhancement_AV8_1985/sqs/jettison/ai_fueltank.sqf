/*AI Jettison Fueltank By Firewill*/

_plane = _this select 0;
_pilot = driver _plane;

if (_pilot == player) exitwith {};

while {alive _plane} do
{
	if (_plane animationphase "fuelswitch" > 0.9 and (behaviour _pilot == "COMBAT" or behaviour _pilot == "STEALTH" or combatmode _pilot == "RED")) then
	{
		_droptank = [_plane] execVM "FIR_AV8B\sqs\Jettison\droptanks.sqf";
		_plane animate ["fuelswitch",0];
	}
	else
	{
	
	};
sleep 0.5;
};
