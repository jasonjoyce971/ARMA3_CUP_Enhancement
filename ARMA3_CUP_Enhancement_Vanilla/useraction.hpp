		class UserActions
		{
			class A143_Gui_Open
			{
				displayName = "<t color='#739eff'>Open Dialog</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User6";
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_HelipadCivil_F""]) < 25) and (damage (nearestObject [this, ""Land_HelipadCivil_F""]) < 1) and (speed this < 1))";
				statement = "this execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\A143_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open Targeting System";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "this getvariable ""TGT_POD"" == ""yes"";";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
			};	
			class FindRadarTGT
			{
				displayName = "Find Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""FIR_AGM88"" and this getvariable ""SEAD_SET"" == ""no""; ";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\harm.sqf""; ";
				onlyforplayer = "False";
			};
			class ClearRadarTGT
			{
				displayName = "Clear Radar Target";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				condition = "currentweapon this == ""FIR_AGM88"" and this getvariable ""SEAD_SET"" == ""yes""; ";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\SEAD\harmoff.sqf""; ";
				onlyforplayer = "False";
			};
			class SearchRDRTGT
			{
				displayName = "QIT ON";
				position = "pos cano";
				radius = 15;
				shortcut = "";
				condition = "currentweapon this == ""FIR_AGM88"";";
				statement = "[this] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\SEAD\Search_RDRTGT.sqf""; ";
				onlyforplayer = "False";
			};
			class CUP_F35B_Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#FF0000'>Pull Ejection Cord</t>";
				condition = "player in this and isengineon this";
				statement = "[this, false] spawn CUP_fnc_ejectPlayerFromAircraft";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
		};
