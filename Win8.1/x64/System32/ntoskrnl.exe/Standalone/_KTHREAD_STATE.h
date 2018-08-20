typedef enum _KTHREAD_STATE
{
  Initialized = 0,
  Ready = 1,
  Running = 2,
  Standby = 3,
  Terminated = 4,
  Waiting = 5,
  Transition = 6,
  DeferredReady = 7,
  GateWaitObsolete = 8,
} KTHREAD_STATE, *PKTHREAD_STATE;

