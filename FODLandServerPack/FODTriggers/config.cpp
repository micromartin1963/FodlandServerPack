#define _ARMA_

class CfgPatches
{
	class FODTriggers
	{
		units[] = {"FODSign_Marker"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Effects","DZ_Scripts","DZ_Characters","JM_CF_Scripts"};
	};
};
class CfgMods
{
	class FODTriggers
	{
		dir = "FODLandServerPack";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "FODTriggers";
		credits = "Hunterz";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FODLandServerPack/FODTriggers/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"FODLandServerPack/FODTriggers/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"FODLandServerPack/FODTriggers/Scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{


	class House;
	class HouseNoDestruct;

	class FODSign_Marker : HouseNoDestruct
	{
		scope = 2;
		model = "\FODLandServerPack\FODTriggers\models\sign_marker.p3d";
	};

};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;

	class FOD_SoundShader1: baseCharacter_SoundShader
	{
		samples[] = {{"FODLandServerPack\FODTriggers\sounds\teleport",1}};
		volume = 1;
		range = 60;
		rangeCurve[] = {{0,1},{0.5,0.7},{1,0}};
	};
	class FOD_SoundShader5: baseCharacter_SoundShader
	{
		samples[] = {{"FODLandServerPack\FODTriggers\sounds\teleport",1}};
		volume = 1;
		range = 60;
		rangeCurve[] = {{0,1},{0.5,0.7},{1,0}};
	};
	class FOD_SoundShader2: baseCharacter_SoundShader
	{
		samples[] = {{"FODLandServerPack\FODTriggers\sounds\attack_1",1}};
		volume = 1;
		range = 60;
		rangeCurve[] = {{0,1},{0.5,0.7},{1,0}};
	};
	class FOD_SoundShader3: baseCharacter_SoundShader
	{
		samples[] = {{"FODLandServerPack\FODTriggers\sounds\gregorian_chant",1}};
		volume = 1;
		range = 60;
		rangeCurve[] = {{0,1},{0.5,0.7},{1,0}};
	};
	class FOD_SoundShader4: baseCharacter_SoundShader
	{
		samples[] = {{"FODLandServerPack\FODTriggers\sounds\whisper",1}};
		volume = 1;
		range = 60;
		rangeCurve[] = {{0,1},{0.5,0.7},{1,0}};
	};

};


class CfgSoundSets
{
	//class baseCharacter_SoundSet;
	class FOD_SoundSet_300001			//teleport
	{
		soundShaders[] = {"FOD_SoundShader1"};
	};
	class FOD_SoundSet_200001			//teleport at target try
	{
		soundShaders[] = {"FOD_SoundShader5"};
	};
	class FOD_SoundSet_100001			//Zombie snort short
	{
		soundShaders[] = {"FOD_SoundShader2"};
	};
	class FOD_SoundSet_100002			//gregorian chant
	{
		soundShaders[] = {"FOD_SoundShader3"};
	};
	class FOD_SoundSet_630002			//30 secs of whisper
	{
		soundShaders[] = {"FOD_SoundShader4"};
	};

};

