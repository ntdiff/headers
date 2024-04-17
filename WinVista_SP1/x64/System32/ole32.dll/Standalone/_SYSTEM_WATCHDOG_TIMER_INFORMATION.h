typedef enum _WATCHDOG_INFORMATION_CLASS
{
  WdInfoTimeoutValue = 0,
  WdInfoResetTimer = 1,
  WdInfoStopTimer = 2,
  WdInfoStartTimer = 3,
  WdInfoTriggerAction = 4,
  WdInfoState = 5,
} WATCHDOG_INFORMATION_CLASS, *PWATCHDOG_INFORMATION_CLASS;

typedef struct _SYSTEM_WATCHDOG_TIMER_INFORMATION
{
  /* 0x0000 */ enum _WATCHDOG_INFORMATION_CLASS WdInfoClass;
  /* 0x0004 */ unsigned long DataValue;
} SYSTEM_WATCHDOG_TIMER_INFORMATION, *PSYSTEM_WATCHDOG_TIMER_INFORMATION; /* size: 0x0008 */

