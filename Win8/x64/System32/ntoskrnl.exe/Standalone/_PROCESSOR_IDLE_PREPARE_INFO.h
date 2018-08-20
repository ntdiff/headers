typedef struct _PROCESSOR_IDLE_CONSTRAINTS
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned __int64 IdleTime;
  /* 0x0010 */ unsigned __int64 ExpectedIdleDuration;
  /* 0x0018 */ unsigned long MaxIdleDuration;
  /* 0x001c */ unsigned long OverrideState;
  /* 0x0020 */ unsigned long TimeCheck;
  /* 0x0024 */ unsigned char PromotePercent;
  /* 0x0025 */ unsigned char DemotePercent;
  /* 0x0026 */ unsigned char Parked;
  /* 0x0027 */ unsigned char Interruptible;
  /* 0x0028 */ unsigned char PlatformIdle;
  /* 0x0029 */ char __PADDING__[7];
} PROCESSOR_IDLE_CONSTRAINTS, *PPROCESSOR_IDLE_CONSTRAINTS; /* size: 0x0030 */

typedef struct _PROCESSOR_IDLE_PREPARE_INFO
{
  /* 0x0000 */ void* Context;
  /* 0x0008 */ struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;
  /* 0x0038 */ unsigned long DependencyCount;
  /* 0x003c */ unsigned long DependencyUsed;
  /* 0x0040 */ struct _PROCESSOR_IDLE_DEPENDENCY* DependencyArray;
  /* 0x0048 */ unsigned long PlatformIdleStateIndex;
  /* 0x004c */ unsigned long ProcessorIdleStateIndex;
  /* 0x0050 */ unsigned long IdleSelectFailureMask;
  /* 0x0054 */ long __PADDING__[1];
} PROCESSOR_IDLE_PREPARE_INFO, *PPROCESSOR_IDLE_PREPARE_INFO; /* size: 0x0058 */

