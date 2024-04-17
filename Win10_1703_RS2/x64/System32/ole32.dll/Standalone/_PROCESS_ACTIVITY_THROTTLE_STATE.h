typedef enum _PROCESS_ACTIVITY_THROTTLE_STATE
{
  ProcessActivityThrottleStateSystemManaged = 0,
  ProcessActivityThrottleStateForceOn = 1,
  ProcessActivityThrottleStateForceOff = 2,
  MaxProcessActivityThrottleState = 3,
} PROCESS_ACTIVITY_THROTTLE_STATE, *PPROCESS_ACTIVITY_THROTTLE_STATE;

