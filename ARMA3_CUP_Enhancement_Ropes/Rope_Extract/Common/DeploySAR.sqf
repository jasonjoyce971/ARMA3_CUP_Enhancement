/*
 * Main switch case logic used to determine chopper type and assign correct follow on script
 *
 * Each transport airframe capable of SAR will have it's own sub-script to prevent
 * individual scripts being oversized
 *
 */

// Get data from action call
_ChopperName = _this select 0;
_ChopperType = _this select 1;

diag_log format ["CSAR WINCH SYSTEM DEPLOY ACCESSED"];
diag_log format ["CSAR WINCH SYSTEM DEPLOY _ChopperName = %1", _ChopperName];
diag_log format ["CSAR WINCH SYSTEM DEPLOY _ChopperType = %1", _ChopperType];

// Switch to ascertain chopper type
switch (_ChopperType) do
{
	case "JAS_B_CTRG_Heli_Transport_01_sand_F":
	{	
		// Remove deploy rope action
		removeAllActions _ChopperName; //test may affect other addons
		// Animate Doors
		_ChopperName animateDoor ['door_R', 1];
		_ChopperName animateDoor ['door_L', 1];
		// Pause to complete door anim
		
		/*
		sleep 3;
		// Create fast rope gantry at door frame and extend it to deployed position
		_anchorBar = createVehicle ["ACE_friesAnchorBar", [0,0,100], [], 0, "NONE"];
		_anchorBar attachTo [_ChopperName, [0.065, 2.2, -0.15]];
		_anchorBar animate ["extendHookRight", 1];
		sleep 3;
		// Create Rope Objects
		// Create rope
		rope0 = ropeCreate [_ChopperName, [1.7,2.1,-0.15], 0]; //Pos array = [left/right, front/back, up/down]
		// Create Helper Object
		rope0Anchor = createVehicle ["ace_fastroping_helper", [0,0,100], [], 0, "NONE"];
		// Protect object from damage
		rope0Anchor allowDamage false;
		// Attach helper objects
		[rope0Anchor,[0,0,1],[0,0,-1]] ropeAttachTo rope0;
		// Create winch harness object
		harness1 =  createVehicle ["B_TargetSoldier", [0,0,100], [], 0, "NONE"];
		// Attach Harnesses
		harness1 attachTo [rope0Anchor, [0, 0, 0]];
		// Detect Altitude
		_RopeLength = getPosATL _ChopperName select 2;
		// Unwind ropes
		ropeUnwind [rope0, 5, _RopeLength];
		// Convert harness helper objects to variables for export
		_harness1 = harness1;
		// Add harness actions
		harness1 addAction ["<t color='#22ffff'>Hook Up Self", "REME_Ropes\Rope_Extract\Common\HookUp.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness1], 1, false, true, "", ""];
		harness2 addAction ["<t color='#22ffff'>Hook Up Self", "REME_Ropes\Rope_Extract\Common\HookUp.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness2], 1, false, true, "", ""];
		harness1 addAction ["<t color='#22ffff'>Hook Up Casualty", "REME_Ropes\Rope_Extract\Common\HookCasualty.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness1], 1, false, true, "", ""];
		harness2 addAction ["<t color='#22ffff'>Hook Up Casualty", "REME_Ropes\Rope_Extract\Common\HookCasualty.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness2], 1, false, true, "", ""];
		// Add retrieve rope action
		_ChopperName addAction ["<t color='#22ffff'>Winch In", "REME_Ropes\Rope_Extract\Common\Retrieve.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		*/
	};
	case "B_Heli_Transport_01_camo_F":
	{	
		// Remove deploy rope action
		removeAllActions _ChopperName; //test may affect other addons
		
		// Animate Doors
		_ChopperName animateDoor ['door_R', 1];
		_ChopperName animateDoor ['door_L', 1];

		// Pause to complete door anim
		sleep 3;
		
		// Create fast rope gantry at door frame and extend it to deployed position
		_anchorBar = createVehicle ["ACE_friesAnchorBar", [0,0,100], [], 0, "NONE"];
		_anchorBar attachTo [_ChopperName, [0.065, 2.2, -0.15]];
		_anchorBar animate ["extendHookRight", 1];
        _anchorBar animate ["extendHookLeft", 1];
		
		sleep 3;
		
		// Create Rope Objects
		// Create rope
		rope0 = ropeCreate [_ChopperName, [1.7,2.1,-0.15], 0]; //Pos array = [left/right, front/back, up/down]
		// Create Helper Object
		rope0Anchor = createVehicle ["ace_fastroping_helper", [0,0,100], [], 0, "NONE"];
		// Protect object from damage
		rope0Anchor allowDamage false;
		// As above but for opposite side
		// Create rope
		rope1 = ropeCreate [_ChopperName, [-1.6,2.3,-0.15], 0]; //Pos array = [left/right, front/back, up/down]
		// Create Helper Object
		rope1Anchor = createVehicle ["ace_fastroping_helper", [0,0,100], [], 0, "NONE"];
		// Protect object from damage
		rope1Anchor allowDamage false;
		// Attach helper objects
		[rope0Anchor,[0,0,1],[0,0,-1]] ropeAttachTo rope0;
		[rope1Anchor,[0,0,1],[0,0,-1]] ropeAttachTo rope1;
		// Create winch harness object
		harness1 =  createVehicle ["B_TargetSoldier", [0,0,100], [], 0, "NONE"];
		harness2 =  createVehicle ["B_TargetSoldier", [0,0,100], [], 0, "NONE"];
		// Attach Harnesses
		harness1 attachTo [rope0Anchor, [0, 0, 0]];
		harness2 attachTo [rope1Anchor, [0, 0, 0]];
		// Detect Altitude
		_RopeLength = getPosATL _ChopperName select 2;
		// Unwind ropes
		ropeUnwind [rope0, 5, _RopeLength];
		ropeUnwind [rope1, 5, _RopeLength];
		// Convert harness helper objects to variables for export
		_harness1 = harness1;
		_harness2 = harness2;
		// Add harness actions
		harness1 addAction ["<t color='#22ffff'>Hook Up Self", "REME_Ropes\Rope_Extract\Common\HookUp.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness1], 1, false, true, "", ""];
		harness2 addAction ["<t color='#22ffff'>Hook Up Self", "REME_Ropes\Rope_Extract\Common\HookUp.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness2], 1, false, true, "", ""];
		harness1 addAction ["<t color='#22ffff'>Hook Up Casualty", "REME_Ropes\Rope_Extract\Common\HookCasualty.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness1], 1, false, true, "", ""];
		harness2 addAction ["<t color='#22ffff'>Hook Up Casualty", "REME_Ropes\Rope_Extract\Common\HookCasualty.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_harness2], 1, false, true, "", ""];
		// Add retrieve rope action
		_ChopperName addAction ["<t color='#22ffff'>Winch In", "REME_Ropes\Rope_Extract\Common\Retrieve.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		
	};
	
	case "GR_UH60_1":
	{	
		// Remove deploy rope action
		removeAllActions _ChopperName; //test may affect other addons

		// Add retrieve rope action
		_ChopperName addAction ["<t color='#22ffff'>Retrieve Rope", "REME_Ropes\Rope_Insert\Common\Retrieve.sqf", [_ChopperName,_ChopperType,_RopeLength], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];

		// Add fast rope action to cargo slots
		_ChopperName addAction ["<t color='#22ffff'>Fast Rope", "REME_Ropes\Rope_Insert\NATO\MUHUH60RopeOut.sqf", [_ChopperName,_ChopperType,_RopeLength], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo[]) && {_role select 0 isEqualTo 'cargo'})"];
	};
	
	default
	{
		hint "DeploySAR/Chopper Type Not Recognised";
	};
};