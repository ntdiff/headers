typedef struct _PROCESSOR_IDLE_CONSTRAINTS
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned __int64 IdleTime;
  /* 0x0010 */ unsigned __int64 ExpectedIdleDuration;
  /* 0x0018 */ unsigned __int64 MaxIdleDuration;
  /* 0x0020 */ unsigned long OverrideState;
  /* 0x0024 */ unsigned long TimeCheck;
  /* 0x0028 */ unsigned char PromotePercent;
  /* 0x0029 */ unsigned char DemotePercent;
  /* 0x002a */ unsigned char Parked;
  /* 0x002b */ unsigned char Interruptible;
  /* 0x002c */ unsigned char PlatformIdle;
  /* 0x0030 */ unsigned long IRHints;
  /* 0x0034 */ unsigned long IRTruncatedHints;
  /* 0x0038 */ unsigned char ExpectedWakeReason;
  /* 0x0039 */ char __PADDING__[7];
} PROCESSOR_IDLE_CONSTRAINTS, *PPROCESSOR_IDLE_CONSTRAINTS; /* size: 0x0040 */

typedef struct _PROCESSOR_IDLE_PREPARE_INFO
{
  /* 0x0000 */ void* Context;
  /* 0x0008 */ struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;
  /* 0x0048 */ unsigned long DependencyCount;
  /* 0x004c */ unsigned long DependencyUsed;
  /* 0x0050 */ struct _PROCESSOR_IDLE_DEPENDENCY* DependencyArray;
  /* 0x0054 */ unsigned long PlatformIdleStateIndex;
  /* 0x0058 */ unsigned long ProcessorIdleStateIndex;
  /* 0x005c */ unsigned long IdleSelectFailureMask;
} PROCESSOR_IDLE_PREPARE_INFO, *PPROCESSOR_IDLE_PREPARE_INFO; /* size: 0x0060 */

