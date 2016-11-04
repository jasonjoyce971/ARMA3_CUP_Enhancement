/*custom save system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;

/* Pick up the number from Combo box */
_hardpoint1 = lbCurSel 2101;
_hardpoint2 = lbCurSel 2102;
_hardpoint3 = lbCurSel 2103;
_hardpoint4 = lbCurSel 2104;
_hardpoint5 = lbCurSel 2105;
_hardpoint6 = lbCurSel 2106;


switch (_customslot) do
{
	case "custom_1":
	{
		profileNamespace setVariable ["A143_Custom_slot1",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6]];
		_plane vehiclechat "Custom Slot 1 is Saved";
	};
	case "custom_2":
	{
		profileNamespace setVariable ["A143_Custom_slot2",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6]];
		_plane vehiclechat "Custom Slot 2 is Saved";
	};
	case "custom_3":
	{
		profileNamespace setVariable ["A143_Custom_slot3",[_hardpoint1,_hardpoint2,_hardpoint3,_hardpoint4,_hardpoint5,_hardpoint6]];
		_plane vehiclechat "Custom Slot 3 is Saved";
	};
};
