private ["_air","_status","_index","_cam","_mav","_weapon","_mssl","_mav_status","_mav_vector_dir","_mav_vector_up","_mav_vector_dir_x","_mav_vector_dir_y","_mav_vector_dir_z","_mav_vector_up_x","_mav_vector_up_y","_mav_vector_up_z"];

_array = _this select 0;

_air = _array select 0;
_weapon = _array select 1; //weapon fired
_mssl = _array select 4; //ammo type
_mav_vector = 0;

_planetype = typeof _air;

_status = _air getvariable "Cam_tracking";

if ((_weapon != "JAS_FIR_AGM65G" or _weapon != "JAS_FIR_AGM65D") and (_mssl != "FIR_AGM65D" or _mssl != "FIR_AGM65G")) exitWith {};
if (_status == "run") exitWith {};

_air setvariable ["Cam_Tracking","run",true];

_mav = nearestObject [_air,_mssl];


/*check cam_targeting screen in aircraft. */
/*	_index = -1;
	{
		if (_x == "cam_targeting") exitwith {_index = _foreachindex;};
	} foreach getarray (configfile >> "CfgVehicles" >> _planetype >> "hiddenSelections");*/

_air setObjectTexture [2, "#(argb,512,512,1)r2t(mavcamrtt,1)"];

_mav_vector_dir = vectorDir _mav;
_mav_vector_dir_x = _mav_vector_dir select 0;
_mav_vector_dir_y = _mav_vector_dir select 1;
_mav_vector_dir_z = _mav_vector_dir select 2;

_mav_vector_up = vectorUp _mav;
_mav_vector_up_x = _mav_vector_up select 0;
_mav_vector_up_y = _mav_vector_up select 1;
_mav_vector_up_z = _mav_vector_up select 2;

/*create the cam and attach to aircraft, also setting FLIR mode*/
_cam = "camera" camCreate [0,-0.3,0];
_cam cameraEffect ["Internal", "Back", "mavcamrtt"];
_cam attachTo [_mav, [0,0,0]];
_cam camSetFov 0.35;
"mavcamrtt" setPiPEffect [2];

_cam setVectorDir [_mav_vector_dir_x,_mav_vector_dir_y,_mav_vector_dir_z];
_cam setVectorUp [_mav_vector_up_x,_mav_vector_up_y,_mav_vector_up_z];



while {alive _mav} do
{
	_pos = getpos _mav;
	_dir = getdir _mav;
	_cam setpos _pos;
	_cam setdir _dir;
_mav_vector_dir = vectorDir _mav;
_mav_vector_dir_x = _mav_vector_dir select 0;
_mav_vector_dir_y = _mav_vector_dir select 1;
_mav_vector_dir_z = _mav_vector_dir select 2;

_mav_vector_up = vectorUp _mav;
_mav_vector_up_x = _mav_vector_up select 0;
_mav_vector_up_y = _mav_vector_up select 1;
_mav_vector_up_z = _mav_vector_up select 2;

_cam setVectorDir [_mav_vector_dir_x,_mav_vector_dir_y,_mav_vector_dir_z];
_cam setVectorUp [_mav_vector_up_x,_mav_vector_up_y,_mav_vector_up_z];

    sleep 0.01;
};
_cam cameraEffect ["terminate","back"];
camdestroy _cam;
_air setvariable ["Cam_Tracking","no",true];
_air setObjectTexture [2, "#(argb,512,512,1)r2t(rendertarget0,1.0)"];
