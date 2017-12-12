/*custom save system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;

/* Pick up the number from Combo box */
_hardpoint4 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint1 = lbCurSel 2102;

switch (_customslot) do
{
	case "custom_1":
	{
		profileNamespace setVariable ["L39_Custom_slot1",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint9,_hardpoint10]];
		titleText ["Custom slot 1 saved", "PLAIN DOWN",0.5];
	};
	case "custom_2":
	{
		profileNamespace setVariable ["L39_Custom_slot2",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint9,_hardpoint10]];
		titleText ["Custom slot 2 saved", "PLAIN DOWN",0.5];
	};
	case "custom_3":
	{
		profileNamespace setVariable ["L39_Custom_slot3",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6,_hardpoint7,_hardpoint8,_hardpoint9,_hardpoint10]];
		titleText ["Custom slot 3 saved", "PLAIN DOWN",0.5];
	};
};
