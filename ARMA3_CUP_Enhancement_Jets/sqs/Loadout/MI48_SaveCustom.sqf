/*custom save system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;

/* Pick up the number from Combo box */
_hardpoint1 = lbCurSel 2100;
_hardpoint2 = lbCurSel 2201;
_hardpoint3 = lbCurSel 2101;
_hardpoint4 = lbCurSel 2102;

switch (_customslot) do
{
	case "custom_1":
	{
		profileNamespace setVariable ["MI48_Custom_slot1",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4]];
		titleText ["Custom Payload Saved to Slot 1", "PLAIN DOWN",0.5];
	};
	case "custom_2":
	{
		profileNamespace setVariable ["MI48_Custom_slot2",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4]];
		titleText ["Custom Payload Saved to Slot 2", "PLAIN DOWN",0.5];
	};
	case "custom_3":
	{
		profileNamespace setVariable ["MI48_Custom_slot3",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4]];
		titleText ["Custom Payload Saved to Slot 3", "PLAIN DOWN",0.5];
	};
};
