modded class MissionServer
{
	void MissionServer()
    {     

	 FOD__Info config;

	FODTriggerConfig.LoadConfig("FODTRiggersConfig.json",config);

	GetDayZGame().SetFTRConfig(config);



  		
	if (GetGame().IsServer()) 
        {
	FODTriggers.ClearInstance();
	FODTriggers.GetInstance();
        }
		
    }
};