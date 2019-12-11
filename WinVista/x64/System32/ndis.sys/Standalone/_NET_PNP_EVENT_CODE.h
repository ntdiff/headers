typedef enum _NET_PNP_EVENT_CODE
{
  NetEventSetPower = 0,
  NetEventQueryPower = 1,
  NetEventQueryRemoveDevice = 2,
  NetEventCancelRemoveDevice = 3,
  NetEventReconfigure = 4,
  NetEventBindList = 5,
  NetEventBindsComplete = 6,
  NetEventPnPCapabilities = 7,
  NetEventPause = 8,
  NetEventRestart = 9,
  NetEventPortActivation = 10,
  NetEventPortDeactivation = 11,
  NetEventIMReEnableDevice = 12,
  NetEventMaximum = 13,
} NET_PNP_EVENT_CODE, *PNET_PNP_EVENT_CODE;

