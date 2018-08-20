typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

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
  /* 0x0044 */ unsigned long PlatformIdleStateIndex;
  /* 0x0048 */ unsigned long ProcessorIdleStateIndex;
  /* 0x004c */ unsigned long IdleSelectFailureMask;
} PROCESSOR_IDLE_PREPARE_INFO, *PPROCESSOR_IDLE_PREPARE_INFO; /* size: 0x0050 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x000c */ unsigned long Latency;
  /* 0x0010 */ unsigned long Power;
  /* 0x0014 */ unsigned long StateFlags;
  /* 0x0018 */ unsigned char StateType;
  /* 0x0019 */ unsigned char InterruptsEnabled;
  /* 0x001a */ unsigned char Interruptible;
  /* 0x001b */ unsigned char ContextRetained;
  /* 0x001c */ unsigned char CacheCoherent;
  /* 0x001d */ char __PADDING__[3];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0020 */

typedef struct _PPM_IDLE_STATES
{
  /* 0x0000 */ unsigned char ForceIdle;
  /* 0x0001 */ unsigned char EstimateIdleDuration;
  /* 0x0002 */ unsigned char ExitLatencyTraceEnabled;
  /* 0x0004 */ unsigned long ExitLatencyCountdown;
  /* 0x0008 */ unsigned long TargetState;
  /* 0x000c */ unsigned long ActualState;
  /* 0x0010 */ unsigned long ActualPlatformState;
  /* 0x0014 */ unsigned long OldState;
  /* 0x0018 */ unsigned long OverrideIndex;
  /* 0x001c */ unsigned long PlatformIdleCount;
  /* 0x0020 */ unsigned long ProcessorIdleCount;
  /* 0x0024 */ unsigned long Type;
  /* 0x0028 */ unsigned long ReasonFlags;
  /* 0x0030 */ volatile __int64 InitiateWakeStamp;
  /* 0x0038 */ long PreviousStatus;
  /* 0x003c */ struct _KAFFINITY_EX PrimaryProcessorMask;
  /* 0x0048 */ struct _KAFFINITY_EX SecondaryProcessorMask;
  /* 0x0054 */ void* IdlePrepare /* function */;
  /* 0x0058 */ void* IdleExecute /* function */;
  /* 0x005c */ void* IdleComplete /* function */;
  /* 0x0060 */ void* IdleCancel /* function */;
  /* 0x0064 */ void* IdleIsHalted /* function */;
  /* 0x0068 */ void* IdleInitiateWake /* function */;
  /* 0x0070 */ struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;
  /* 0x00c0 */ struct _PPM_IDLE_STATE State[1];
} PPM_IDLE_STATES, *PPPM_IDLE_STATES; /* size: 0x00e0 */

