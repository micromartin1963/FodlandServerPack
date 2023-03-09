class BloodTestRptTarget
{
	static void DisplayReport(ActionBase action, PlayerBase player, PlayerBase target)
	{
	string output = "";
	string preoutput = "";
	int count = 0;
	string  m_Entries[7];

	for(int c = 0 ; c < 7; c++) m_Entries[c] = "";

	if(target.GetSingleAgentCount(eAgents.CHOLERA) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.CHOLERA) < 100)
		{
			m_Entries[0] = "Mild Cholera. (Please take Tetracycline Antibiotics / Injector)\"" ;
		}	
		if(target.GetSingleAgentCount(eAgents.CHOLERA) > 100  && target.GetSingleAgentCount(eAgents.CHOLERA) < 200)
		{
			m_Entries[0] = "High level of Cholera. (Please take Tetracycline Antibiotics / Injector)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.CHOLERA) > 200)
		{
			m_Entries[0] = "Very High level of Cholera. (Please take Tetracycline Antibiotics / Injector)\"" ;
		}
	count++;		
	}

	if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.SALMONELLA) < 100)
		{
			m_Entries[1] = "Mild Salmonella. (Please take Charcoal / Injector)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 100  && target.GetSingleAgentCount(eAgents.SALMONELLA) < 200  )
		{
			m_Entries[1] = "High level of Salmonella. (Please take Charcoal / Injector)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 200)
		{
			m_Entries[1] = "Very High level of Salmonella. (Please take Charcoal / Injector)\"";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.INFLUENZA) < 100)
		{
			m_Entries[2] = "Mild Influenza. (Please take Tetracycline / Injector)\"" ;
		}	
		if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 100  && target.GetSingleAgentCount(eAgents.INFLUENZA) < 200 )
		{
			m_Entries[2] = "High level of Influenza. (Please take Tetracycline / Injector)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 200)
		{
			m_Entries[2] = "Very High level of Influenza. (Please take Tetracycline / Injector)\"";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.FOOD_POISON) < 100)
		{
			m_Entries[3] = "Mild Food Poisoning. (Please take Tetracycline Antibiotics / Injector)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 100  && target.GetSingleAgentCount(eAgents.FOOD_POISON) < 200 )
		{
			m_Entries[3] = "High level of  Food Poisoning. (Please take Tetracycline Antibiotics / Injector)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 200)
		{
			m_Entries[3] = "Very High level of Food Poisoning. (Please take Tetracycline Antibiotics / Injector)\"";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 0)
	{
		m_Entries[4] = "Chemical Poisoning. (Please use a PO-X injector)\"";
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) < 100)
		{
			m_Entries[5] = "Mild Wound Infection. (Please use Iodine / Alcohol tinture)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 100  && target.GetSingleAgentCount(eAgents.WOUND_AGENT) < 200 )
		{
			m_Entries[5] = "High level of wound Infection. (Please use Iodine / Alcohol tinture)\"";
		}	
		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 200)
		{
			m_Entries[5] = "Very High level of wound Infection. (Please use Iodine / Alcohol tinture)\"";
		}
	count++;	
	}

	if(target.GetSingleAgentCount(eAgents.BRAIN) > 0)
	{
			m_Entries[6] = "Kuru. (Please use a Kuru injector)\"";
	count++;	
	}

	if(count == 0)
	{
	output = "They have no illness"  ;
	action.SendMessageToClient(player, output );
	}
	
	if(count != 0)
	{
		int x = 0;
			for( x ; x <= 6 ; x++)
			{
				if(m_Entries[x] != "")
				{		
				output = "Fod says: \"They have: " + m_Entries[x] ;
				action.SendMessageToClient(player, output );
				}				
			}	
	}
	
	}
}


modded class ActionTestBloodTarget
{
	override void OnFinishProgressServer(ActionData action_data)
	{	
		super.OnFinishProgressServer(action_data);
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		//BloodTestRptTarget.DisplayReport(this, action_data.m_Player, action_data.m_Player);
		BloodTestRptTarget.DisplayReport(this, action_data.m_Player, ntarget);
	}
}


