typedef enum _EXECUTION_CONTEXT_FLAGS
{
  ExecutionContextFlagNone = 0,
  ExecutionContextFlagRunDpcForFirstLoop = 1,
  ExecutionContextFlagRunWorkerThreadAtDispatch = 2,
  ExecutionContextFlagTryExtendMaxTimeAtDispatch = 4,
} EXECUTION_CONTEXT_FLAGS, *PEXECUTION_CONTEXT_FLAGS;

