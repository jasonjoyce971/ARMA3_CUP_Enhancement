/*Loadout Refuel by Firewill*/
if (not Local player) Exitwith {};
_plane = vehicle Player;

_class = typeOf _plane;

titleText ["Refuelling...", "PLAIN DOWN",0.5];

sleep 5;

_plane setfuel 1;

titleText ["Refuelling Complete", "PLAIN DOWN",0.1];