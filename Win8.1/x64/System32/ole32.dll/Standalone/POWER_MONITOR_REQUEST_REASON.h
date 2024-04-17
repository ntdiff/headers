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

