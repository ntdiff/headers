enum NDIS_PAUSE_REASON
{
  PauseReason_InitialPause = 1,
  PauseReason_LowPower = 2,
  PauseReason_Pnp = 4,
  PauseReason_RemovingMiniport = 8,
  PauseReason_LowerDriverPaused = 16,
  PauseReason_RestartNeeded = 32,
  PauseReason_MandatoryMissingDuringBoot = 64,
  PauseReason_Wdf = 128,
  PauseReason_NetEventRequirePause = 256,
  PauseReason_InterfaceChangeInProgress = 512,
};

