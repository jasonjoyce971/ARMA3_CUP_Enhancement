_missile = _this select 0;
_plane = _this select 1;
//_pilot = driver _plane;
_pilot = gunner _plane;

//If (not Local _plane) ExitWith {};
if (not(_plane iskindof "Helicopter")) ExitWith {titleText ["You must get in the chopper!", "PLAIN DOWN",0.5];};

if (_plane animationPhase "WWSwitch" >= 0.1 or _plane getvariable "SEAD_SET" == "yes") ExitWith {_plane vehiclechat "Use of Old SEAD System";};

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
or (_tgt isKindOf "CUP_O_ZSU23_SLA") or (_tgt isKindOf "CUP_O_ZSU23_TK")
or (_tgt isKindOf "CUP_B_ZSU23_CDF") or (_tgt isKindOf "B_APC_Tracked_01_AA_F")
or (_tgt isKindOf "CUP_WV_B_CRAM") or (_tgt isKindOf "B_T_APC_Tracked_01_AA_F")
or (_tgt isKindOf  "CUP_B_Frigate_ANZAC") or (_tgt isKindOf "CUP_B_M163_USA")
or (_tgt isKindOf  "CUP_O_ZSU23_CSAT") or (_tgt isKindOf "O_T_APC_Tracked_02_AA_ghex_F")
or (_tgt isKindOf "CUP_I_ZSU23_AAF") or (_tgt isKindOf "pook_SON9_base"))) ExitWith {_plane vehiclechat "NO AA TARGET FOUND";};

_plane vehiclechat "Target Acquired, Magnum!";

_tgt_pos = position _tgt;
_missile_speed = (speed _missile)+300;

while {alive _missile} do
{
	_eta = (_tgt distance _missile) / _missile_speed;
	
	_tgt_dir = [_missile, _tgt] call BIS_fnc_DirTo;
	_missile setDir _tgt_dir;

	_tgt_pitch = asin ((((getPosASL _missile) select 2) - ((getPosASL _tgt) select 2)) / (_tgt distance _missile));
	_tgt_pitch = (_tgt_pitch * -1);
	[_missile, _tgt_pitch, 0] call BIS_fnc_setPitchBank;

	_Missile_velocityX = (((getPosASL _tgt) select 0) - ((getPosASL _missile) select 0)) / _eta;
	_Missile_velocityY = (((getPosASL _tgt) select 1) - ((getPosASL _missile) select 1)) / _eta;
	_Missile_velocityZ = (((getPosASL _tgt) select 2) - ((getPosASL _missile) select 2)) / _eta;
	
	_missile setVelocity [_Missile_velocityX,_Missile_velocityY,_Missile_velocityZ];

	sleep 0.03;	
};


