typedef enum _PO_SLEEP_DISABLE_REASON
{
  PoSleepDisableReasonVideo = 0,
  PoSleepDisableReasonHypervisor = 1,
  PoSleepDisableReasonVhdBoot = 2,
  PoSleepDisableReasonPortableWorkspace = 3,
  PoSleepDisableReasonPolicy = 4,
  PoSleepDisableReasonGuardedHost = 5,
  PoSleepDisableReasonMax = 6,
} PO_SLEEP_DISABLE_REASON, *PPO_SLEEP_DISABLE_REASON;

