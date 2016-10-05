/*Fire System Script by Firewill */

_array = _this select 0;
_weapon = _array select 1;
_ammoname = _array select 4;
_plane = _array select 0;

_missobj = nearestobject[_plane, _ammoname];

switch (_ammoname) do
{
    case "JAS_FIR_RBK250":
    {
		_firecbu250 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\CBU103_AP.sqf";
    };
	
	case "FIR_mk82_Snakeye":
    {
		_firesnakeye = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\Snakeye.sqf";
		_crater_500lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_500lb.sqf";
    };
    case "FIR_mk82_GP":
    {
		_crater_500lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_500lb.sqf";
    };
    case "FIR_GBU12":
    {
		_crater_500lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_500lb.sqf";
    };
    case "FIR_GCS1":
    {
		_crater_500lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_500lb.sqf";
    };
    case "FIR_GBU38":
    {
		_jdam_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_JDAM.sqf";
		_crater_500lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_500lb.sqf";
    };
    case "FIR_GBU39":
    {
		_jdam_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_JDAM.sqf";
		_crater_500lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_500lb.sqf";
    };
    case "FIR_GBU53":
    {
		_jdam_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_JDAM.sqf";
		_crater_500lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_500lb.sqf";
    };
    case "FIR_CBU103":
    {
		_jdam_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_JDAM.sqf";
		_firecbu103 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\CBU103_AP.sqf";
    };
    case "FIR_CBU87":
    {
		_firecbu87 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\CBU103_AP.sqf";
    };
    case "FIR_CBU89":
    {
		_firecbu89 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\Gator.sqf";
    };
    case "FIR_CBU97":
    {
		_firecbu97 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\SFW.sqf";
    };
    case "FIR_CBU104":
    {
		_firecbu104 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\Gator.sqf";
    };
    case "FIR_BLU107":
    {
		_firesnakeye = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\Snakeye.sqf";
		_fireblu107 = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\BLU107.sqf";
    };
    case "FIR_GBU32":
    {
		_jdam_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_JDAM.sqf";
		_crater_1000lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_1000lb.sqf";
    };
    case "FIR_GBU10":
    {
		_crater_2000lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_2000lb.sqf";
    };
    case "FIR_GBU24A":
    {
		_crater_2000lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_2000lb.sqf";
    };
    case "FIR_GBU24B":
    {
		_crater_2000lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_2000lb.sqf";
    };
    case "FIR_GBU31":
    {
		_jdam_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_JDAM.sqf";
		_crater_2000lb = [_missobj] execVM "\FIR_AirWeaponSystem_US\script\crater_2000lb.sqf";
    };
    case "EAWS_SCALP_ammo":
    {
		_gps_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_GPS_MSSL.sqf";
    };
    case "FIR_AGM84H":
    {
		_gps_guide = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\TGTSystem\Guide_GPS_MSSL.sqf";
    };
    case "FIR_AGM88":
    {
		_harm_n = [_missobj,_plane] execVM "\FIR_AirWeaponSystem_US\script\SEAD\harm_n.sqf";
    };
	case "JAS_AGM122":
    {
		_harm_n = [_missobj,_plane] execVM "\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\harm_nChopper.sqf";
    };
   
    default{};
};
