typedef enum _WATCHDOG_INFORMATION_CLASS
{
  WdInfoTimeoutValue = 0,
  WdInfoResetTimer = 1,
  WdInfoStopTimer = 2,
  WdInfoStartTimer = 3,
  WdInfoTriggerAction = 4,
  WdInfoState = 5,
  WdInfoTriggerReset = 6,
  WdInfoNop = 7,
} WATCHDOG_INFORMATION_CLASS, *PWATCHDOG_INFORMATION_CLASS;

