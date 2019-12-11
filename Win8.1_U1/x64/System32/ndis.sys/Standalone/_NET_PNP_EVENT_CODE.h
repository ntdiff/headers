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
  NetEventNDKEnable = 13,
  NetEventNDKDisable = 14,
  NetEventFilterPreDetach = 15,
  NetEventBindFailed = 16,
  NetEventSwitchActivate = 17,
  NetEventMaximum = 18,
} NET_PNP_EVENT_CODE, *PNET_PNP_EVENT_CODE;

