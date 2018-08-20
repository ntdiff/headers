typedef enum _KWAIT_STATE
{
  WaitInProgress = 0,
  WaitCommitted = 1,
  WaitAborted = 2,
  WaitSuspendInProgress = 3,
  WaitSuspended = 4,
  WaitResumeInProgress = 5,
  WaitFirstSuspendState = 3,
  WaitLastSuspendState = 5,
  MaximumWaitState = 6,
} KWAIT_STATE, *PKWAIT_STATE;

