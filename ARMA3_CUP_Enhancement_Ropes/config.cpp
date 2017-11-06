#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class ARMA3_CUP_Enhancement_Ropes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ARMA3_CUP_Enhancement_Systems"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ARMA3_CUP_Enhancement_Ropes
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_Ropes"
			};
		};
	};
};
class CfgFunctions
{
	class JAS
	{
		class JAS_Ropes
		{
			class Rope_Init
			{
				file="\ARMA3_CUP_Enhancement_Ropes\Rope_Extract\Common\Rope_extract_init.sqf";
			};
			class Rope_Deploy
			{
				file="\ARMA3_CUP_Enhancement_Ropes\Rope_Extract\Common\DeploySAR.sqf";
			};
			class Rope_HookSelf
			{
				file="\ARMA3_CUP_Enhancement_Ropes\Rope_Extract\Common\HookUp.sqf";
			};
			class Rope_HookOther
			{
				file="\ARMA3_CUP_Enhancement_Ropes\Rope_Extract\Common\HookCasualty.sqf";
			};
			class Rope_Retrieve
			{
				file="\ARMA3_CUP_Enhancement_Ropes\Rope_Extract\Common\Retrieve.sqf";
			};
		};
	};
};
class CfgRemoteExec
{        
	// List of script functions allowed to be sent from client via remoteExec
    class Functions
    {
    	// State of remoteExec: 0-turned off, 1-turned on, taking whitelist into account, 2-turned on, however, ignoring whitelists (default because of backward compatibility)
        mode = 2;
        // Ability to send jip messages: 0-disabled, 1-enabled (default)
        jip = 1;
        /*your functions here*/
        class JAS_fnc_Rope_Init
        {
            allowedTargets=0; // can target anyone (default)
            jip = 1; // sending jip messages is disabled for this function (overrides settings in the Functions class)
        };
		class JAS_fnc_Rope_Deploy
        {
            allowedTargets=0; // can target anyone (default)
            jip = 1; // sending jip messages is disabled for this function (overrides settings in the Functions class)
        };
		class JAS_fnc_Rope_HookSelf
        {
            allowedTargets=0; // can target anyone (default)
            jip = 1; // sending jip messages is disabled for this function (overrides settings in the Functions class)
        };
		class JAS_fnc_Rope_HookOther
        {
            allowedTargets=0; // can target anyone (default)
            jip = 1; // sending jip messages is disabled for this function (overrides settings in the Functions class)
        };
		class JAS_fnc_Rope_Retrieve
        {
            allowedTargets=0; // can target anyone (default)
            jip = 1; // sending jip messages is disabled for this function (overrides settings in the Functions class)
        };
    };        
};

class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class B_CTRG_Heli_Transport_01_sand_F{};
	class JAS_B_CTRG_Heli_Transport_01_sand_F: B_CTRG_Heli_Transport_01_sand_F
	{
		faction="GOL_AAC_BLUFOR";
		editorSubcategory="GOL_AAC_RAVEN";
		displayName = "EXPERIMENTAL";
		class eventhandlers
		{
			Init = "[_this select 0, ""JAS_B_CTRG_Heli_Transport_01_sand_F""] remoteExec [""JAS_fnc_Rope_Init"", 0, true];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
};