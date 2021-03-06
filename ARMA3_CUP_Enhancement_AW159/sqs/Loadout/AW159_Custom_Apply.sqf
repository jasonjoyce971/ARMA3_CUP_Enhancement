/*loadout system by Firewill*/
_customslot = _this select 0;

if (not Local player) Exitwith {};
_plane = vehicle Player;
_array = [];

switch (_customslot) do
{
	case "custom1":
	{
		_array = profileNamespace getVariable "AW159_Custom_slot1";
	};
	case "custom2":
	{
		_array = profileNamespace getVariable "AW159_Custom_slot2";
		};
	case "custom3":
	{
		_array = profileNamespace getVariable "AW159_Custom_slot3";
	};
};

/* Pick up the number from Combo box */
_hardpoint1 = _array select 0;
_hardpoint2 = _array select 1;
_hardpoint3 = _array select 2;
_hardpoint4 = _array select 3;
_hardpoint5 = _array select 4;
_hardpoint6 = _array select 5;
_hardpoint7 = _array select 6;
_hardpoint8 = _array select 7;
_hardpoint9 = _array select 8;
_hardpoint10 = _array select 9;



sleep 0.01;


	Switch (_hardpoint1) Do //Right Pylon
	{
		case -1:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};
		case 0:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons1", "", true, []];
		};		
		case 1: // Gun Pod
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M", true, []];
		};
		case 2: // CRV-7 FAT
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, [0]];
		};
		case 3: // CRV-7 HE
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, [0]];
		};
		case 4: // CRV-7 KEP
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, [0]];
		};
		case 5: // Hellfire K
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
		};
		case 6: // Hellfire N
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons1", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.3;
	
	Switch (_hardpoint2) Do
	{
		case -1:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};
		case 0:
		{
			_plane animateSource ["hide_radar", 0, true];
			_plane animateSource ["hide_struts", 0, true];
			_plane setPylonLoadOut ["pylons2", "", true, []];
		};		
		case 1: // Gun Pod
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M", true, []];
		};
		case 2: // CRV-7 FAT
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_FAT_M", true, [0]];
		};
		case 3: // CRV-7 HE
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_HE_M", true, [0]];
		};
		case 4: // CRV-7 KEP
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_CUP_PylonPod_19Rnd_CRV7_KEP_M", true, [0]];
		};
		case 5: // Hellfire K
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_K_1rnd_PYLON_M", true, [0]];
		};
		case 6: // Hellfire N
		{
			_plane animateSource ["hide_radar", 1, true];
			_plane animateSource ["hide_struts", 1, true];
			_plane setPylonLoadOut ["pylons2", "JAS_FIR_Hellfire_N_1rnd_PYLON_M", true, [0]];
		};
	};
	
sleep 0.01;