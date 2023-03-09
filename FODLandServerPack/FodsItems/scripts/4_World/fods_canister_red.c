class fods_canister_red : House
{

	Particle m_ParticleEfx;




	void fods_canister_red()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_ParticleEfx = Particle.PlayOnObject(ParticleList.MODDED_PARTICLE, this, Vector(0, 0.2, 0));
		}
	}


	void ~fods_canister_red()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( m_ParticleEfx )
				m_ParticleEfx.Stop();
		}
	}




}