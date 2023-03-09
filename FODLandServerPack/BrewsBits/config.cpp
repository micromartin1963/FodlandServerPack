

class CfgPatches
{
	class BrewsWorldServerPack
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class BrewsWorldServerPack
	{
		author = "FodnBrew";
		type = "mod";
		dir = "BrewsWorldServerPack";
		dependencies[] = {"World"};
		class defs
		{

			class worldScriptModule
			{
				value = "";
				files[] = {"FODLandServerPack/BrewsBits/scripts/4_World"};
			};

		};
	};
};
class CfgVehicles
{



};




