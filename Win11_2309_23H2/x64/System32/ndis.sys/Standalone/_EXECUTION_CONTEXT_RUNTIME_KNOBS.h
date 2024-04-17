typedef enum _EXECUTION_CONTEXT_FLAGS
{
  ExecutionContextFlagNone = 0,
  ExecutionContextFlagRunDpcForFirstLoop = 1,
  ExecutionContextFlagRunWorkerThreadAtDispatch = 2,
  ExecutionContextFlagTryExtendMaxTimeAtDispatch = 4,
} EXECUTION_CONTEXT_FLAGS, *PEXECUTION_CONTEXT_FLAGS;

typedef struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS
{
  /* 0x0000 */ unsigned int AtPassive;
  /* 0x0004 */ unsigned int AtDispatch;
} EXECUTION_CONTEXT_WORK_UNIT_KNOBS, *PEXECUTION_CONTEXT_WORK_UNIT_KNOBS; /* size: 0x0008 */

typedef struct _EXECUTION_CONTEXT_RUNTIME_KNOBS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ enum _EXECUTION_CONTEXT_FLAGS Flags;
  /* 0x0008 */ unsigned int MaxTimeAtDispatch;
  /* 0x000c */ unsigned int DispatchTimeWarning;
  /* 0x0010 */ unsigned int DispatchTimeWarningInterval;
  /* 0x0014 */ unsigned int DpcWatchdogTimerThreshold;
  /* 0x0018 */ unsigned int WorkerThreadPriority;
  /* 0x001c */ struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsSend;
  /* 0x0024 */ struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsSendComplete;
  /* 0x002c */ struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsReceive;
  /* 0x0034 */ struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsReceiveComplete;
} EXECUTION_CONTEXT_RUNTIME_KNOBS, *PEXECUTION_CONTEXT_RUNTIME_KNOBS; /* size: 0x003c */

