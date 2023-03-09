class MedicalSummary
{
	void SendMessage(PlayerBase player , string textstr)
	{
	Param1<string> msgRp0 = new Param1<string>( textstr );
	GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, msgRp0, true, player.GetIdentity());
	}
}








