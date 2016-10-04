/*Loadout Repair by Firewill*/
if (not Local player) Exitwith {};
_plane = vehicle Player;

titleText ["Repairing...", "PLAIN DOWN",0.5];

sleep 5;

_plane setdamage 0;

titleText ["Repairs Complete", "PLAIN DOWN",0.1];