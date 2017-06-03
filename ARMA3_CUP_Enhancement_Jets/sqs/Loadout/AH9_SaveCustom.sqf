/*custom save system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;

/* Pick up the number from Combo box */
_hardpoint1 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;

switch (_customslot) do
{
	case "custom_1":
	{
		profileNamespace setVariable ["AH9_Custom_slot1",[_hardpoint1,_hardpoint2]];
		titleText ["Custom Slot 1 is Saved", "PLAIN DOWN",0.5];
	};
	case "custom_2":
	{
		profileNamespace setVariable ["AH9_Custom_slot2",[_hardpoint1,_hardpoint2]];
		titleText ["Custom Slot 2 is Saved", "PLAIN DOWN",0.5];
	};
	case "custom_3":
	{
		profileNamespace setVariable ["AH9_Custom_slot3",[_hardpoint1,_hardpoint2]];
		titleText ["Custom Slot 3 is Saved", "PLAIN DOWN",0.5];
	};
};
