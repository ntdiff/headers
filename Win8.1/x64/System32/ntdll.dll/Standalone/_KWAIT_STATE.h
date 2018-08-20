typedef enum _KWAIT_STATE
{
  WaitInProgress = 0,
  WaitCommitted = 1,
  WaitAborted = 2,
  MaximumWaitState = 3,
} KWAIT_STATE, *PKWAIT_STATE;

