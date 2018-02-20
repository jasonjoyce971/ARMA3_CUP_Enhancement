/*New Fire Control System by Firewill */
private ["_ammoname","_weapon","_plane","_array","_missobj","_Lowdrag","_gps_bomb","_gps_mssl","_crater","_Cluster","_Gator","_SFW","_ARPB","_HARM","_Smoke","_Smoke_C","_FLR"];

_array = _this select 0;
_weapon = _array select 1;
_ammoname = _array select 4;
_magname = _array select 5;
_plane = _array select 0;

//if (!local _plane) exitwith{};

if (_weapon == "FIR_CMLauncher") exitWith {};

_missobj = nearestobject[_plane, _ammoname];

/* 0 is no capability */
_Lowdrag = 0;  /* 1 is enable*/
_gps_bomb = 0; /* 1 is enable*/
_gps_mssl = 0; /* 1 is enable*/
_tv_mssl = 0; /* 1 is enable*/
_tv_bomb = 0; /* 1 is enable*/
_crater = 0; /* 1 is 500lb/ 2 is 1000lb and 3 is 2000lb */
_Cluster = 0; /* 1 is enable*/
_Gator = 0; /* 1 is enable*/
_SFW = 0; /* 1 is enable*/
_ARPB = 0; /* 1 is enable for Anti-Runway Penetration Bomb*/
_HARM = 0; /* 1 is enable*/
_Smoke = 0; /* 1 is enable*/
_FAEB = 0; /* 1 is enable*/
_Smoke_C = ""; /* 1 is enable*/
_APKWS = 0; /* 1 is enable */
_WP = 0; /* 1 is enable*/
_DUAL = 0; /* 1 is enable*/
_TARPS = 0; /* 1 is enable*/

_Lowdrag = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_LowDrag");
_gps_bomb = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_GPS_Bomb_Guide");
_DUAL = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_DUAL");
_gps_mssl = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_GPS_Mssl_Guide");
_tv_mssl = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_TV_Mssl_Guide");
_tv_bomb = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_TV_Bomb_Guide");
_agm65b = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AGM65B_Guide");
_cg = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_CG");
_crater = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_Crater");
_Cluster = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_Cluster");
_Gator = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_GATOR");
_SFW = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_SFW");
_ARPB = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_ARPB");
_FAEB = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_FAEB");
_HARM = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_HARM");
_Smoke = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_SMOKE_RKT");
_FLR = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_FLARE");
_Smoke_C = getText (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_SMOKE_RKT_COLOR");
_APKWS = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_APKWS");
_WP = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_WP");
_TARPS = getnumber (Configfile >> "CfgAmmo" >> _ammoname >> "FIR_AWS_TARPS");

//temporary disabled due to shake in Dedi //
// if (_weapon == "FIR_M61A2" or _weapon == "FIR_GAU8") then
// {
	// _gunshake = [_weapon] execVM "\FIR_AirWeaponSystem_US\script\function\AWS_GunShake.sqf";
// };

if (_Lowdrag == 1) then
{
	_firesnakeye = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\Snakeye.sqf";
};

if (_gps_bomb == 1) then
{
	_jdam_guide = [_missobj,_plane,_ammoname] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_JDAM.sqf";
};

if (_gps_mssl == 1) then
{
	_gps_guide = [_missobj,_plane,_ammoname] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_GPS_MSSL.sqf";
};

// if (_cg == 1) then
// {
	// _cg_guide = [_missobj,_plane,_ammoname] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\EO_Tracking.sqf";
// };

if (_tv_bomb == 1) then
{
	_tv_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_TV_Bomb.sqf";
};

if (_tv_mssl == 1) then
{
	_tv_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_TV_MSSL.sqf";
};

if (_agm65b == 1) then
{
	_tv_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_AGM65B.sqf";
};

if (_TARPS == 1) then
{
	_TARPS = execVM "\FIR_AirWeaponSystem_US\script\TARPS.sqf";
};


if (_APKWS == 1) then
{
	_apkws_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_APKWS.sqf";
};

if (_Cluster == 1) then
{
		_firecbu103 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\CBU103_AP.sqf";
};

if (_SFW == 1) then
{
		_firecbu97 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\SFW.sqf";
};

if (_FAEB == 1) then
{
		_firecbu97 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\BLU118.sqf";
};

if (_Gator == 1) then
{
		_firecbu89 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\Gator.sqf";
};

if (_ARPB == 1) then
{
		_fireblu107 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\BLU107.sqf";
};

if (_Smoke_C == "WHITE") then
{
	_smoke_rkt = [_missobj,"white"] execVM "\FIR_AirWeaponSystem_US\script\Smoke_RKT.sqf";
};

if (_Smoke_C == "RED") then
{
	_smoke_rkt = [_missobj,"red"] execVM "\FIR_AirWeaponSystem_US\script\Smoke_RKT.sqf";
};

if (_Smoke_C == "ORANGE") then
{
	_smoke_rkt = [_missobj,"orange"] execVM "\FIR_AirWeaponSystem_US\script\Smoke_RKT.sqf";
};

if (_Smoke_C == "PURPLE") then
{
	_smoke_rkt = [_missobj,"purple"] execVM "\FIR_AirWeaponSystem_US\script\Smoke_RKT.sqf";
};

if (_WP == 1) then
{
	_wp_effect = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\WP_Hit.sqf";
};


if (_HARM == 1) then
{
		_harm_n = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\SEAD\harm_n.sqf";
};

if (_FLR == 1) then
{
		_flr = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\SUU25.sqf";
};

/*if (_Smoke_C == "WHITE") then
{
	_smoke_rkt = [_missobj,"white"] execVM "\ARMA3_CUP_Enhancement_Weapons\script\Smoke_RKT.sqf";
};

if (_Smoke_C == "RED") then
{
	_smoke_rkt = [_missobj,"red"] execVM "\ARMA3_CUP_Enhancement_Weapons\script\Smoke_RKT.sqf";
};

if (_Smoke_C == "ORANGE") then
{
	_smoke_rkt = [_missobj,"orange"] execVM "\ARMA3_CUP_Enhancement_Weapons\script\Smoke_RKT.sqf";
};

if (_Smoke_C == "PURPLE") then
{
			_smoke_rkt = [_missobj,"purple"] execVM "\ARMA3_CUP_Enhancement_Weapons\script\Smoke_RKT.sqf";
};*/

switch (_crater) do
{  
	case 1:
    {
		_crater_500lb = [_missobj,"500lb"] execVM "\FIR_AirWeaponSystem_US\script\crater.sqf";
    };
	case 2:
    {
		_crater_1000lb = [_missobj,"1000lb"] execVM "\FIR_AirWeaponSystem_US\script\crater.sqf";
    };
	case 3:
    {
		_crater_2000lb = [_missobj,"2000lb"] execVM "\FIR_AirWeaponSystem_US\script\crater.sqf";
    };
	default{};
};

