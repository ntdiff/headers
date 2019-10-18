typedef enum _POWER_INFORMATION_LEVEL_INTERNAL_TTMTCAPI
{
  PowerInformationInternalTtmFirst = 4096,
  PowerInternalTtmOpenTerminal = 4096,
  PowerInternalTtmCreateTerminal = 4097,
  PowerInternalTtmEvacuateDevices = 4098,
  PowerInternalTtmCreateTerminalEventQueue = 4099,
  PowerInternalTtmGetTerminalEvent = 4100,
  PowerInternalTtmSetDefaultDeviceAssignment = 4101,
  PowerInternalTtmAssignDevice = 4102,
  PowerInternalTtmSetDisplayState = 4103,
  PowerInternalTtmSetDisplayTimeouts = 4104,
  PowerInternalTtmSetDisplayPowerRequest = 4105,
  PowerInformationInternalTtmLast = 4105,
} POWER_INFORMATION_LEVEL_INTERNAL_TTMTCAPI, *PPOWER_INFORMATION_LEVEL_INTERNAL_TTMTCAPI;

