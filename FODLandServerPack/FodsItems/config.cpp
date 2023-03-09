

class CfgPatches
{
	class FodsItems
	{
		units[] = {"MyStartSign","MyFinishSign","PVPSign","PVPSign2","ExitSign",fods_canister_red"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters","DZ_Surfaces"};
	};
};
class CfgMods
{
	class FodsItems
	{
		dir = "FODLandServerPack";
		author = "FodnBrew";
		type = "mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FODLandServerPack/FodsItems/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"FODLandServerPack/FodsItems/scripts/4_World"};
			};

		};
	};
};
class CfgVehicles
{

	class House;
	class HouseNoDestruct;



	class FOD_Vending_Military: House
	{
		scope = 2;
		displayName = "Vending Machine ";
		model = "FODLandServerPack\FodsItems\models\vending_mil.p3d";

	};

	class MyFinishSign : House
	{
		scope = 2;
		model = "FODLandServerPack\FodsItems\models\MyFinishSign.p3d";

	};

	class MyStartSign : House
	{
		scope = 2;
		model = "FODLandServerPack\FodsItems\models\MyStartSign.p3d";
	};

	class PVPSign : House
	{
		scope = 2;
		model = "FODLandServerPack\FodsItems\models\pvp.p3d";
	};
	class PVPSign2 : House
	{
		scope = 2;
		model = "FODLandServerPack\FodsItems\models\pvp2.p3d";
	};

	class ExitSign : HouseNoDestruct
	{
		scope = 2;
		model = "FODLandServerPack\FodsItems\models\exit.p3d";
	};



	class fods_canister_red : House
	{
		scope = 2;
		model = "FODLandServerPack\FodsItems\models\red_canister.p3d";
	};









};
