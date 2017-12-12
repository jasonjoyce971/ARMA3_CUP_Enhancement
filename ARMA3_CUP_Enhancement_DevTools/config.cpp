class CfgPatches
{
	class ARMA3_CUP_Enhancement_DevTools
	{
		units[]=
		{
			
		};
		weapons[]=
		{
			
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ARMA3_CUP_Enhancement_DevTools
		{
			list[]=
			{
				"ARMA3_CUP_Enhancement_DevTools"
			};
		};
	};
};
class CfgFunctions
{
	class DREAD
	{
		class copyConfigClass
		{
			class copyConfigClass
			{
				file="\ARMA3_CUP_Enhancement_DevTools\sqs\fn_copyConfigClass.sqf.sqf";
			};
		};
	};
};