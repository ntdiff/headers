typedef enum _WWAN_READY_STATE
{
  WwanReadyStateOff = 0,
  WwanReadyStateInitialized = 1,
  WwanReadyStateSimNotInserted = 2,
  WwanReadyStateBadSim = 3,
  WwanReadyStateFailure = 4,
  WwanReadyStateNotActivated = 5,
  WwanReadyStateDeviceLocked = 6,
} WWAN_READY_STATE, *PWWAN_READY_STATE;

