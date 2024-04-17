typedef enum _WAIT_TYPE
{
  WaitAll = 0,
  WaitAny = 1,
  WaitNotification = 2,
  WaitDequeue = 3,
  WaitDpc = 4,
} WAIT_TYPE, *PWAIT_TYPE;

