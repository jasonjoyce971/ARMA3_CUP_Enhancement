/* 
 * Initialisation of Script package
 *
 * Adds actions to transport helicopter, passing in relevant data for later use
 *
 * Simple call using any init or onAct field - example uses game logic
 * null = [helicopter name, helicopter class] execVM "REME_Ropes\Rope_Extract\Common\Rope_extract_init.sqf";
 * <_this, "helicopter class"> remoteExec ["JAS_fnc_Rope_Init", 0, true];
 *
 */

// Store incoming arguments
_ChopperName = _this select 0;
_ChopperType = _this select 1;


// Vehicle variables to track usage in various functions
_ChopperName setVariable ["CSAR_ChopperName",_ChopperName,true];
_ChopperName setVariable ["CSAR_ChopperType",_ChopperType,true];

Switch (_ChopperType) do
{
	default
	{
		// Add action to call deploy rope script
		//_ChopperName addAction ["<t color='#22ffff'>Deploy SAR Winch", "REME_Ropes\Rope_Extract\Common\DeploySAR.sqf", [_ChopperName,_ChopperType], 1, false, true, "", "_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
		
		_ChopperName addAction ["<t color='#22ffff'>Deploy SAR Winch",[_ChopperName,_ChopperType] remoteExec ["JAS_fnc_Rope_Deploy", 0, true],[],1,false,true,"","_role = assignedVehicleRole player; (!(_role isEqualTo []) && {_role select 0 isEqualTo 'Turret'})"];
	};
};

// Debug Logging Section
_confirmVarName = _ChopperName getVariable "CSAR_ChopperName";
_confirmVarType = _ChopperName getVariable "CSAR_ChopperType";
diag_log format ["CSAR WINCH SYSTEM INIT _ChopperName = %1", _ChopperName];
diag_log format ["CSAR WINCH SYSTEM INIT _ChopperType = %1", _ChopperType];
diag_log format ["CSAR WINCH SYSTEM INIT _ChopperName Unit Variable = %1", _confirmVarName];
diag_log format ["CSAR WINCH SYSTEM INIT _ChopperType Unit Variable = %1", _confirmVarType];
