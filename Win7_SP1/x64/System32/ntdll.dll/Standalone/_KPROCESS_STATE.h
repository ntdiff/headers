typedef enum _KPROCESS_STATE
{
  ProcessInMemory = 0,
  ProcessOutOfMemory = 1,
  ProcessInTransition = 2,
  ProcessOutTransition = 3,
  ProcessInSwap = 4,
  ProcessOutSwap = 5,
  ProcessAllSwapStates = 6,
} KPROCESS_STATE, *PKPROCESS_STATE;

