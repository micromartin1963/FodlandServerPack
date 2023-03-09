modded class ActionUnpackBox: ActionContinuousBase
{
    override void OnFinishProgressServer(ActionData action_data)
	{
		if (action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player)
		{
			string path = "CfgVehicles " + action_data.m_MainItem.GetType();
			string child_name = "";
			int count;
			array<string> resources = new array<string>;
			
			if(GetGame().ConfigIsExisting(path) && GetGame().ConfigIsExisting(path + " Resources"))
			{
			path = path + " Resources";
			count = GetGame().ConfigGetChildrenCount (path);
				for (int i = 0; i < count; i++)
				{
					GetGame().ConfigGetChildName (path, i, child_name);
					
					if (GetGame().ConfigGetInt(path + " " + child_name + " value" ))
					{
						resources.Insert(child_name);
					}
				}
			string itemType = resources.Get(0);
			int itemCount = GetGame().ConfigGetInt(path + " " + itemType + " value");				
			UnboxLambda lambda = new UnboxLambda(action_data.m_MainItem, itemType, action_data.m_Player, itemCount);
			action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);				
			action_data.m_Player.GetSoftSkillsManager().AddSpecialty(m_SpecialtyWeight);
			}
		}
	}
}