/*
 * Switch case logic to determine correct chopper type and retrieve the ropes accordingly
 *
 * Switch case ends with the reset of the action logic ready for another drop
 *
 */

// Get data from action call
_ChopperName = _this select 3 select 0;
_ChopperType = _this select 3 select 1;
_RopeLength = _this select 3 select 2;
_anchorBar = _this select 3 select 3;

// Switch to ascertain chopper type
switch (_ChopperType) do
{
	case "B_Heli_Transport_01_camo_F":
	{	
		// Remove cut rope action
		removeAllActions _ChopperName; //test may affect other addons
	
		// Get Used ropes
		_RopeArray = (ropes _ChopperName);
		
		// Delete Helpers
		deleteVehicle rope0Anchor;
		deleteVehicle rope1Anchor;
		deleteVehicle harness1;
		deleteVehicle harness2;
	
		// First we "cut" the ropes using ropeUnwind makes for smoother animation - [rope, speed, distance to wind to]
		{ropeUnwind [_x, 3, 0]} forEach _RopeArray;
		
		// Wait for rope anim to end
		if(_RopeLength<=10) then {sleep 5;};
		if(_RopeLength<=20) then {sleep 10;};
		if(_RopeLength<=30) then {sleep 15;};
		if(_RopeLength<=40) then {sleep 20;};
		if(_RopeLength<=50) then {sleep 25;};
		
		// Destroy harness
		
		//destroy rope objects
		{ropeDestroy _x} forEach _RopeArray;
		
		// Animate Anchor Bar
		_anchorBar animate ["extendHookRight", 0];
        _anchorBar animate ["extendHookLeft", 0];
		
		sleep 5;
		
		// Animate Doors
		_ChopperName animateDoor ['door_R', 0];
		_ChopperName animateDoor ['door_L', 0];
		
		if (RopeInsertionEnabled) then
		{
			_ChopperName addAction ["<t color='#22ffff'>Deploy 10m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,10], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
			_ChopperName addAction ["<t color='#22ffff'>Deploy 20m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,20], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
			_ChopperName addAction ["<t color='#22ffff'>Deploy 30m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,30], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
			_ChopperName addAction ["<t color='#22ffff'>Deploy 40m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,40], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
			_ChopperName addAction ["<t color='#22ffff'>Deploy 50m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,50], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		};
		
		// Reset actions for next drop
		_ChopperName addAction ["<t color='#22ffff'>Deploy SAR Winch", "REME_Ropes\Rope_Extract\Common\DeploySAR.sqf", [_ChopperName,_ChopperType], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
	};
	
	case "GR_UH60_1":
	{	
		// Get Used ropes
		_RopeArray = (ropes _ChopperName);
	
		// First we "cut" the ropes using ropeUnwind makes for smoother animation - [rope, speed, distance to wind to]
		{ropeUnwind [_x, 3, 0]} forEach _RopeArray;
		
		// Wait for rope anim to end
		if(_RopeLength==10) then {sleep 5;};
		if(_RopeLength==20) then {sleep 10;};
		if(_RopeLength==30) then {sleep 15;};
		if(_RopeLength==40) then {sleep 20;};
		if(_RopeLength==50) then {sleep 25;};
		
		//destroy rope objects
		{ropeDestroy _x} forEach _RopeArray;
		
		// Remove cut rope action
		removeAllActions _ChopperName; //test may affect other addons
		
		// Reset actions for next drop
		_ChopperName addAction ["<t color='#22ffff'>Deploy 10m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,10], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		_ChopperName addAction ["<t color='#22ffff'>Deploy 20m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,20], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		_ChopperName addAction ["<t color='#22ffff'>Deploy 30m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,30], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		_ChopperName addAction ["<t color='#22ffff'>Deploy 40m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,40], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		_ChopperName addAction ["<t color='#22ffff'>Deploy 50m Rope", "REME_Ropes\Rope_Insert\Common\Deploy.sqf", [_ChopperName,_ChopperType,50], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
	};
	
	default
	{
		hint "Chopper Type Not Recognised";
	};
};