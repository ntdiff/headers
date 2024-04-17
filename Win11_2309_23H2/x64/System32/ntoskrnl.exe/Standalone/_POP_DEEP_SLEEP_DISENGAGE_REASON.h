typedef enum _POP_DEEP_SLEEP_DISENGAGE_REASON
{
  PopDeepSleepDisengageReasonInactive = 0,
  PopDeepSleepDisengageReasonNonAoAc = 1,
  PopDeepSleepDisengageReasonPendingIrps = 2,
  PopDeepSleepDisengageReasonPowerSettings = 3,
  PopDeepSleepDisengageReasonDozeS4WorkerQueued = 4,
  PopDeepSleepDisengageReasonSystemPowerTransition = 5,
  PopDeepSleepDisengageReasonDeviceBlockingDrips = 6,
  PopDeepSleepDisengageReasonAcpi = 7,
  PopDeepSleepDisengageReasonDirectedDripsTransition = 8,
  PopDeepSleepDisengageReasonPepPreVeto = 9,
  PopDeepSleepDisengageReasonThermal = 10,
  PopDeepSleepDisengageReasonMax = 11,
} POP_DEEP_SLEEP_DISENGAGE_REASON, *PPOP_DEEP_SLEEP_DISENGAGE_REASON;

