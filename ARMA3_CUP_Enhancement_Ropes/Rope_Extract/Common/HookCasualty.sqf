// Incoming Data
_ChopperName = _this select 3 select 0;
_ChopperType = _this select 3 select 1;
_RopeLength = _this select 3 select 2;
_anchorBar = _this select 3 select 3;
_harness = _this select 3 select 4;

// Turn player into variable
_body = player;

// Remove cut rope action
removeAllActions _body; //test may affect other addons
removeAllActions _ChopperName; //test may affect other addons

// Detect Casualty
_casualtyArray = nearestObjects [_body, ["Man"], 1];
_casualty = _casualtyArray select 1; // Dodgy as fuck

// Delete Harness Helper
if (_harness == harness1) then
{
	deleteVehicle harness1;
	_casualty attachTo [rope0Anchor, [0, 0, 0]];
	_casualty switchMove "ACE_FastRoping";
};

if (_harness == harness2) then
{
	deleteVehicle harness2;
	_casualty attachTo [rope1Anchor, [0, 0, 0]];
	_casualty switchMove "ACE_FastRoping";
};
	
// Add recover action to bird
_ChopperName addAction ["<t color='#22ffff'>Recover Person", "REME_Ropes\Rope_Extract\NATO\GhostHawkRecover.sqf", [_ChopperName,_ChopperType,_RopeLength,_anchorBar,_casualty], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
