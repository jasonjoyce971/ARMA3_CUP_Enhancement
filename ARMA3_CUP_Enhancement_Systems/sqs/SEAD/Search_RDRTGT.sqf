_plane = _this select 0;
_pilot = driver _plane;

If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Plane")) ExitWith {titleText ["You must get in the plane!", "PLAIN DOWN",0.5];};

_tgt = cursorTarget;

if (not((_tgt isKindOf "O_APC_Tracked_02_AA_F") or (_tgt isKindOf "pook_30N6E2_Base")
or (_tgt isKindOf "pook_30N6E_Base") or (_tgt isKindOf "pook_5P85D_Base")
or (_tgt isKindOf "pook_76N6_radar") or (_tgt isKindOf "pook_96K6_base")
or (_tgt isKindOf "pook_96L6E_radar")or (_tgt isKindOf "pook_9K317_Base")
or (_tgt isKindOf "pook_9K317M2_Base") or (_tgt isKindOf "pook_9K317M3_Base")
or (_tgt isKindOf "pook_9K331_Base") or (_tgt isKindOf "pook_9K332_base")
or (_tgt isKindOf "pook_9K37_Base") or (_tgt isKindOf "pook_9K37M2_base")
or (_tgt isKindOf "pook_9S36_Base") or (_tgt isKindOf "pook_P12_base")
or (_tgt isKindOf "pook_PRV11_base") or (_tgt isKindOf "pook_PU12_base")
or (_tgt isKindOf "pook_radome1") or (_tgt isKindOf "pook_radome2")
or (_tgt isKindOf "pook_S60_base") or (_tgt isKindOf "pook_SA19_Base")
or (_tgt isKindOf "pook_SA20_static_base") or (_tgt isKindOf "pook_SA2_static")
or (_tgt isKindOf "pook_SA2_tracked") or (_tgt isKindOf "pook_SA3_radar_base")
or (_tgt isKindOf "pook_SA3_static") or (_tgt isKindOf "pook_SA3_tracked")
or (_tgt isKindOf "pook_SNR75_radar") or (_tgt isKindOf "pook_SON50_BASE")
or (_tgt isKindOf "CUP_O_2S6M_RU") or (_tgt isKindOf "CUP_I_M163_AAF")
or (_tgt isKindOf "CUP_I_M163_RACS") or (_tgt isKindOf "CUP_O_ZSU23_ChDKZ")
or (_tgt isKindOf "CUP_O_ZSU23_SLA") or (_tgt isKindOf "CUP_O_ZSU23_SLA")
or (_tgt isKindOf "CUP_I_ZSU23_AAF") or (_tgt isKindOf "pook_SON9_base"))) ExitWith {_plane vehiclechat "NO RDR TGT FOUND";};

_tgt_class = typeOf _tgt;
_plane reveal _tgt;

_plane vehiclechat format ["RDR TGT INFO : %1", _tgt_class];


