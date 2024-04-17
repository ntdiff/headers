enum POWER_MONITOR_REQUEST_REASON
{
  MonitorRequestReasonUnknown = 0,
  MonitorRequestReasonPowerButton = 1,
  MonitorRequestReasonRemoteConnection = 2,
  MonitorRequestReasonScMonitorpower = 3,
  MonitorRequestReasonUserInput = 4,
  MonitorRequestReasonAcDcDisplayBurst = 5,
  MonitorRequestReasonUserDisplayBurst = 6,
  MonitorRequestReasonPoSetSystemState = 7,
  MonitorRequestReasonSetThreadExecutionState = 8,
  MonitorRequestReasonFullWake = 9,
  MonitorRequestReasonSessionUnlock = 10,
  MonitorRequestReasonScreenOffRequest = 11,
  MonitorRequestReasonIdleTimeout = 12,
  MonitorRequestReasonPolicyChange = 13,
  MonitorRequestReasonSleepButton = 14,
  MonitorRequestReasonLid = 15,
  MonitorRequestReasonMax = 16,
};

typedef struct _POWER_MONITOR_INVOCATION
{
  /* 0x0000 */ unsigned char On;
  /* 0x0001 */ unsigned char Console;
  /* 0x0004 */ enum POWER_MONITOR_REQUEST_REASON RequestReason;
} POWER_MONITOR_INVOCATION, *PPOWER_MONITOR_INVOCATION; /* size: 0x0008 */

