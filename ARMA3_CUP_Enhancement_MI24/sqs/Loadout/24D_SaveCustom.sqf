/*custom save system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;

/* Pick up the number from Combo box */
_hardpoint1 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;
_hardpoint5 = lbCurSel 2103;
_hardpoint6 = lbCurSel 2104;
_hardpoint7 = lbCurSel 2105;
_hardpoint8 = lbCurSel 2106;
_hardpoint9 = lbCurSel 2202;
_hardpoint10 = lbCurSel 2107;

switch (_customslot) do
{
	case "custom_1":
	{
		profileNamespace setVariable ["24D_Custom_slot1",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint9,_hardpoint10]];
		titleText ["Custom Slot 1 Saved", "PLAIN DOWN",0.5];
	};
	case "custom_2":
	{
		profileNamespace setVariable ["24D_Custom_slot2",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint9,_hardpoint10]];
		titleText ["Custom Slot 2 Saved", "PLAIN DOWN",0.5];
	};
	case "custom_3":
	{
		profileNamespace setVariable ["24D_Custom_slot3",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint9,_hardpoint10]];
		titleText ["Custom Slot 3 Saved", "PLAIN DOWN",0.5];
	};
};
