class FODInfo
{
    string LocationName;
    int TType;
    string FODText;
    string OrigVectorStr;
    string TargetVectorStr;
    string TargetRot;
    string FODRadius;
    string FODClassnameStr;
    int FODSoundIndex;
    int StandDownTime;
    int ShowMarker;
 
    void FODInfo(string loc,int Type,string nam,string v,string v2,string rot,string rad,string cn,int index,int s,int show) 
	{
	LocationName = loc;
	TType = Type;
        FODText = nam;
	OrigVectorStr = v;
	TargetVectorStr = v2;
	TargetRot = rot;
	FODRadius = rad;
	FODClassnameStr = cn;
	FODSoundIndex = index;
	StandDownTime = s;
	ShowMarker = show;
	}
}

class FOD__Info
{
	ref array< ref FODInfo > FODLocs;	
	void FOD__Info()
	{
	FODLocs = new ref array< ref FODInfo >;
	}
}

class FODTriggerConfig
{
	protected const static string m_CfgRoot = "$profile:\\FODTriggers\\";

	static void LoadConfig(string cfgName, out FOD__Info cfgDataSet)
	{
        string configPath = m_CfgRoot + cfgName;

    	    if (!FileExist(configPath))   
        	{
		Print("XXXXXXXXXXXXXX not found Config ERROR default created in --> "+ configPath);
		MyConfig(cfgDataSet);
		SaveCfg(cfgName,cfgDataSet);
		return;
	        }
		else
		{
		Print("FOD Config Found OK");
		}
        JsonFileLoader<FOD__Info>.JsonLoadFile(configPath, cfgDataSet);
	}

	protected static void MyConfig(out FOD__Info cfgDataSet)
	{
        cfgDataSet = new FOD__Info();
	cfgDataSet.FODLocs.Insert( new FODInfo("Beach location 1", 2, "FOD_SoundSet_002", "10810 4 2266", "10825 4 2278","0.0 0.0 0.0", "6.2", "ZmbF_BlueCollarFat_Blue", 2, 61 ,1 ));  // need better default
	}

	protected static void SaveCfg(string cfgName, FOD__Info cfgDataSet)
	{
	string Path =  m_CfgRoot + cfgName;
		if (!FileExist(m_CfgRoot))
		{
		MakeDirectory(m_CfgRoot);
		}
	JsonFileLoader<FOD__Info>.JsonSaveFile(Path, cfgDataSet);
	}









}
