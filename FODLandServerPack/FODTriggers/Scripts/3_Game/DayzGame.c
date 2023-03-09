modded class DayZGame
{	
	protected ref FOD__Info m_FODTriggerConfig;

	void DayZGame()
	{

	  
	}
	
    void SetFTRConfig(FOD__Info config)
    {
        m_FODTriggerConfig = config;
    }

    FOD__Info GetFTRConfig()
    {
		return m_FODTriggerConfig;
    }
};