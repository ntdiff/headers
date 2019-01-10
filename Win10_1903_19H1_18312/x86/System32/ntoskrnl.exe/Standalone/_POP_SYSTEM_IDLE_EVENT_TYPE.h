typedef enum _POP_SYSTEM_IDLE_EVENT_TYPE
{
  PopSystemIdleEventTypeMonitorOffUserInput = 0,
  PopSystemIdleEventTypeMonitorOnUserInput = 1,
  PopSystemIdleEventTypeUserPresence = 2,
  PopSystemIdleEventTypeResumeFromSxSystemPowerState = 3,
  PopSystemIdleEventTypeMax = 4,
  PopSystemIdleEventTypeInvalid = 4,
} POP_SYSTEM_IDLE_EVENT_TYPE, *PPOP_SYSTEM_IDLE_EVENT_TYPE;

