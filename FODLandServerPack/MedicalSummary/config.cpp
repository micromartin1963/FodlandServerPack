class CfgPatches
{
	class MedicalSummary
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class MedicalSummary
	{
		author = "FodnBrew";
		type = "mod";
		dir = "FODLandServerPack";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FODLandServerPack/MedicalSummary/scripts/4_World"};
			};
		};
	};
};


class CfgVehicles
{
};




