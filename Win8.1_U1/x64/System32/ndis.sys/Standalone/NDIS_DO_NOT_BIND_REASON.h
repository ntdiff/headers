enum NDIS_DO_NOT_BIND_REASON
{
  Reason_NoBindSourceWantsThisBinding = 1,
  Reason_DriverNotReady = 2,
  Reason_LastBindAttemptFailed = 4,
  Reason_LastRestartAttemptFailed = 8,
  Reason_DriverRejectedBinding = 16,
  Reason_MissingMandatoryFilter = 32,
  Reason_MissingOptionalFilter = 64,
  Reason_MissingModifyingFilter = 128,
  Reason_MandatoryMissingDuringBoot = 256,
  Reason_UnbindOnAttach = 512,
  Reason_UnbindOnDetach = 1024,
  Reason_MiniportLowPower = 2048,
  Reason_RemovingMiniport = 4096,
  Reason_RebindNeeded = 8192,
  Reason_DefaultPortNotActive = 0xffff8000,
  Reason_SecondaryMiniport = 0x10000,
  Reason_MiniportNotReady = 0x20000,
  Reason_DisabledByLegacyIoctl = 0x40000,
  Reason_MiniportDeviceNotStarted = 0x80000,
};

