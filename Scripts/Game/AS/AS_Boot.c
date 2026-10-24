// Milestone 0 smoke test: proves the addon is packed, downloaded and loaded by the dedicated server.
modded class SCR_BaseGameMode
{
	override protected void OnGameStart()
	{
		super.OnGameStart();
		Print("[AS] Antistasi-Reforger loaded", LogLevel.NORMAL);
	}
}
