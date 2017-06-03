/*loadout system by Firewill*/

if (not Local player) Exitwith {};
_plane = vehicle Player;

Private ["_texture","_preset","_hardpoint1","_hardpoint2"];
/* Pick up the number from Combo box */
_hardpoint1 = lbCurSel 2202;

titleText ["Configuring.....", "PLAIN DOWN",0.5];

sleep 0.3;

Switch (_hardpoint1) Do
{
	case -1:
	{
		_plane animate ["hideBench", 1];
		_plane animate ["hideFries", 1];
	};
	case 0:
	{
		_plane animate ["hideBench", 1];
		_plane animate ["hideFries", 1];
	};
	case 1:
	{
		_plane animate ["hideBench", 0];
		_plane animate ["hideFries", 0];
	};
};

sleep 2;

titleText ["Configuration! Complete", "PLAIN DOWN",0.5];