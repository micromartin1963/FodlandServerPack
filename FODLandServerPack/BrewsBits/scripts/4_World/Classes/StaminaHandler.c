modded class StaminaHandler{

	void ResetCooldown(HumanMovementState pHumanMovementState)
	{
		m_StaminaDelta = (GameConstants.STAMINA_GAIN_JOG_PER_SEC + CalcStaminaGainBonus());
		SetCooldown(GameConstants.STAMINA_REGEN_COOLDOWN_DEPLETION);
	}
	
	override void StaminaProcessor_Move(HumanMovementState pHumanMovementState)
	{
		this.ResetCooldown(pHumanMovementState);
	}

	override void StaminaProcessor_Ladder(HumanMovementState pHumanMovementState)
	{
		this.ResetCooldown(pHumanMovementState);
	}
	
	override void StaminaProcessor_Swimming(HumanMovementState pHumanMovementState)
	{
		this.ResetCooldown(pHumanMovementState);
	}	

}