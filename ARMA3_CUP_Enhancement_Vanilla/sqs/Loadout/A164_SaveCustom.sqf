/*custom save system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;

/* Pick up the number from Combo box */
_hardpoint1 = lbCurSel 2100;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;
_hardpoint5 = lbCurSel 2103;
_hardpoint6 = lbCurSel 2104;
_hardpoint7 = lbCurSel 2105;
_hardpoint8 = lbCurSel 2106;
_hardpoint10 = lbCurSel 2107;

_rocket1 = lbCurSel 2113;
_rocket2 = lbCurSel 2114;

switch (_customslot) do
{
	case "custom_1":
	{
		profileNamespace setVariable ["A164J_Custom_slot1",[_hardpoint1,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint10,_rocket1,_rocket2]];
		titleText ["Custom Payload Saved to Slot 1", "PLAIN DOWN",0.5];
	};
	case "custom_2":
	{
		profileNamespace setVariable ["A164J_Custom_slot2",[_hardpoint1,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint10,_rocket1,_rocket2]];
		titleText ["Custom Payload Saved to Slot 2", "PLAIN DOWN",0.5];
	};
	case "custom_3":
	{
		profileNamespace setVariable ["A164J_Custom_slot3",[_hardpoint1,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint10,_rocket1,_rocket2]];
		titleText ["Custom Payload Saved to Slot 3", "PLAIN DOWN",0.5];
	};
};
