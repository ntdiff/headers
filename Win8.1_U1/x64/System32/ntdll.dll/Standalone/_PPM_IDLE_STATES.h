typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

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
  /* 0x0058 */ unsigned long PlatformIdleStateIndex;
  /* 0x005c */ unsigned long ProcessorIdleStateIndex;
  /* 0x0060 */ unsigned long IdleSelectFailureMask;
  /* 0x0064 */ long __PADDING__[1];
} PROCESSOR_IDLE_PREPARE_INFO, *PPROCESSOR_IDLE_PREPARE_INFO; /* size: 0x0068 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0008 */ struct _LIST_ENTRY VetoListHead;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0018 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x00a8 */ unsigned long Latency;
  /* 0x00ac */ unsigned long BreakEvenDuration;
  /* 0x00b0 */ unsigned long Power;
  /* 0x00b4 */ unsigned long StateFlags;
  /* 0x00b8 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x00d0 */ unsigned char StateType;
  /* 0x00d1 */ unsigned char InterruptsEnabled;
  /* 0x00d2 */ unsigned char Interruptible;
  /* 0x00d3 */ unsigned char ContextRetained;
  /* 0x00d4 */ unsigned char CacheCoherent;
  /* 0x00d5 */ unsigned char WakesSpuriously;
  /* 0x00d6 */ unsigned char PlatformOnly;
  /* 0x00d7 */ unsigned char NoCState;
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x00d8 */

typedef struct _PPM_IDLE_STATES
{
  /* 0x0000 */ unsigned char InterfaceVersion;
  /* 0x0001 */ unsigned char ForceIdle;
  /* 0x0002 */ unsigned char EstimateIdleDuration;
  /* 0x0003 */ unsigned char ExitLatencyTraceEnabled;
  /* 0x0004 */ unsigned char NonInterruptibleTransition;
  /* 0x0008 */ unsigned long ExitLatencyCountdown;
  /* 0x000c */ unsigned long TargetState;
  /* 0x0010 */ unsigned long ActualState;
  /* 0x0014 */ unsigned long OldState;
  /* 0x0018 */ unsigned long OverrideIndex;
  /* 0x001c */ unsigned long ProcessorIdleCount;
  /* 0x0020 */ unsigned long Type;
  /* 0x0024 */ unsigned short ReasonFlags;
  /* 0x0028 */ volatile unsigned __int64 InitiateWakeStamp;
  /* 0x0030 */ long PreviousStatus;
  /* 0x0034 */ unsigned long PreviousCancelReason;
  /* 0x0038 */ struct _KAFFINITY_EX PrimaryProcessorMask;
  /* 0x00e0 */ struct _KAFFINITY_EX SecondaryProcessorMask;
  /* 0x0188 */ void* IdlePrepare /* function */;
  /* 0x0190 */ void* IdleExecute /* function */;
  /* 0x0198 */ void* IdlePreselect /* function */;
  /* 0x01a0 */ void* IdleTest /* function */;
  /* 0x01a8 */ void* IdleComplete /* function */;
  /* 0x01b0 */ void* IdleCancel /* function */;
  /* 0x01b8 */ void* IdleIsHalted /* function */;
  /* 0x01c0 */ void* IdleInitiateWake /* function */;
  /* 0x01c8 */ void* QueryPlatformStateResidency /* function */;
  /* 0x01d0 */ struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;
  /* 0x0238 */ struct _PERFINFO_PPM_STATE_SELECTION* Tracing;
  /* 0x0240 */ struct _PPM_IDLE_STATE State[1];
} PPM_IDLE_STATES, *PPPM_IDLE_STATES; /* size: 0x0318 */

