/*Jettison Fueltank Script By Firewill*/

_av8b = _this select 0;


_av8b_pylon = GetPylonMagazines _av8b;

_leftwing1 = _av8b_pylon select 1;
_leftwing2 = _av8b_pylon select 2;
_rightwing1 = _av8b_pylon select 3;
_rightwing2 = _av8b_pylon select 4;

if (fuel _av8b <= 0.4) then
{
_av8b animate ["fuelswitch",0];
}
else
{
_av8b setfuel 0.4;
_av8b animate ["fuelswitch",0];
};

_av8b say "FIR_ReleaseSound";

sleep 0.01;

_tankvel =[0,0,0];

if (_leftwing1 == "FIR_av8b_Fueltank_L_P_1rnd_M" ) then
{
	drop["\FIR_AirweaponSystem_US\data\fueltank\AV8B_Fueltank_L.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_av8b];
	_av8b setPylonLoadOut [2, "FIR_Empty_P_1rnd_M", false, []];
};
if (_leftwing2 == "FIR_av8b_Fueltank_L_P_1rnd_M" ) then
{
	drop["\FIR_AirweaponSystem_US\data\fueltank\AV8B_Fueltank_L.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_av8b];
	_av8b setPylonLoadOut [3, "FIR_Empty_P_1rnd_M", false, []];
};


if (_rightwing1 == "FIR_av8b_Fueltank_R_P_1rnd_M" ) then
{
	drop["\FIR_AirweaponSystem_US\data\fueltank\AV8B_Fueltank_R.p3d","","SpaceObject",1,100,[1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_av8b];
	_av8b setPylonLoadOut [4, "FIR_Empty_P_1rnd_M", false, []];
};

if (_rightwing2 == "FIR_av8b_Fueltank_R_P_1rnd_M" ) then
{
	drop["\FIR_AirweaponSystem_US\data\fueltank\AV8B_Fueltank_R.p3d","","SpaceObject",1,100,[1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_av8b];
	_av8b setPylonLoadOut [5, "FIR_Empty_P_1rnd_M", false, []];
};


sleep 0.1;

