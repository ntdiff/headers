typedef enum _WATCHDOG_HANDLER_ACTION
{
  WdActionSetTimeoutValue = 0,
  WdActionQueryTimeoutValue = 1,
  WdActionResetTimer = 2,
  WdActionStopTimer = 3,
  WdActionStartTimer = 4,
  WdActionSetTriggerAction = 5,
  WdActionQueryTriggerAction = 6,
  WdActionQueryState = 7,
  WdActionSleep = 8,
  WdActionWake = 9,
  WdActionMarkHiberPhase = 10,
} WATCHDOG_HANDLER_ACTION, *PWATCHDOG_HANDLER_ACTION;

