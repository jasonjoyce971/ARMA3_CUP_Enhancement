/*Jettison Fueltank Script By Firewill*/

_f15 = _this select 0;

_fuelcount_C = {_x == "FIR_f15C_Fueltank_1rnd_M"} count magazines _f15;
_fuelcount_E = {_x == "FIR_f15E_Fueltank_1rnd_M"} count magazines _f15;


if (fuel _f15 >= 0.5) then
{
_f15 setfuel 0.5;
};

_f15 say "FIR_ReleaseSound";

sleep 0.01;

_tankvel =[0,0,0];

if (_f15 iskindof "FIR_F15_Base" or _f15 iskindof "FIR_F15D_Base") then
{
	Switch (_fuelcount_C) Do
	{
		case 1:
		{
			_f15 removemagazines "FIR_f15C_Fueltank_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15c_Fueltank.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];

		};
		case 2:
		{
			_f15 removemagazines "FIR_f15C_Fueltank_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15c_Fueltank.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15c_Fueltank.p3d","","SpaceObject",1,100,[1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];

		};
		case 3:
		{
			_f15 removemagazines "FIR_f15C_Fueltank_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15c_Fueltank.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15c_Fueltank.p3d","","SpaceObject",1,100,[1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15c_Fueltank.p3d","","SpaceObject",1,100,[0,0,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];

		};
	};



	sleep 0.1;

}
else
{
	Switch (_fuelcount_E) Do
	{
		case 1:
		{
			_f15 removemagazines "FIR_f15E_Fueltank_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15e_Fueltank.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];

		};
		case 2:
		{
			_f15 removemagazines "FIR_f15E_Fueltank_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15E_Fueltank.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15E_Fueltank.p3d","","SpaceObject",1,100,[1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];

		};
		case 3:
		{
			_f15 removemagazines "FIR_f15E_Fueltank_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			_f15 addmagazine "FIR_Empty_1rnd_M";
			
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15E_Fueltank.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15E_Fueltank.p3d","","SpaceObject",1,100,[1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];
			drop["\FIR_AirweaponSystem_US\data\fueltank\F15E_Fueltank.p3d","","SpaceObject",1,100,[0,0,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f15];

		};
	};



	sleep 0.1;	

};
