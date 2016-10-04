/*init script by Firewill */
private ["_plane","_pilot"];
_plane = _this select 0;
_pilot = driver _plane;
if (!local _plane) exitwith{};

_plane setVariable ["ITGT_VT","no",true];
_plane setVariable ["TGT_POD","yes",true];
_plane setVariable ["ITGT_GRIDTYPE","8D",true];
_plane setVariable ["ITGT_C_DATA",[]];
_plane setVariable ["ITGT_DATA_1",[]];
_plane setVariable ["ITGT_DATA_2",[]];
_plane setVariable ["ITGT_DATA_3",[]];
_plane setVariable ["ITGT_DATA_4",[]];
_plane setVariable ["ITGT_DATA_5",[]];
_plane setVariable ["ITGT_NEW","no"];
_plane setVariable ["ITGT_TYPE","GPS",true];
_plane setVariable ["ITGT_LSR","none"];
_plane setVariable ["ITGT_LSR_SET","no"];
_plane setVariable ["ITGT_TGT_SET","no"];
_plane setVariable ["ITGT_C_MARKER","none"];
_plane setVariable ["ITGT_MARKER_1","none"];
_plane setVariable ["ITGT_MARKER_2","none"];
_plane setVariable ["ITGT_MARKER_3","none"];
_plane setVariable ["ITGT_MARKER_4","none"];
_plane setVariable ["ITGT_MARKER_5","none"];
