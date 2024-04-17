typedef enum _SUSPEND_RESILIENCY_STATE
{
  SuspendResiliencyStateUnknown = 0,
  SuspendResiliencyStateSuspending = 1,
  SuspendResiliencyStateResuming = 2,
  SuspendResiliencyStateTerminating = 3,
  SuspendResiliencyStateSuspended = 4,
  SuspendResiliencyStateRunning = 5,
} SUSPEND_RESILIENCY_STATE, *PSUSPEND_RESILIENCY_STATE;

