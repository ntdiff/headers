typedef enum _KWAIT_BLOCK_STATE
{
  WaitBlockBypassStart = 0,
  WaitBlockBypassComplete = 1,
  WaitBlockActive = 2,
  WaitBlockInactive = 3,
  WaitBlockAllStates = 4,
} KWAIT_BLOCK_STATE, *PKWAIT_BLOCK_STATE;

