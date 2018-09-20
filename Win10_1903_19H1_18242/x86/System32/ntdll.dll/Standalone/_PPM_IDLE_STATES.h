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
  /* 0x0018 */ unsigned __int64 MaxIdleDuration;
  /* 0x0020 */ unsigned long OverrideState;
  /* 0x0024 */ unsigned long TimeCheck;
  /* 0x0028 */ unsigned char PromotePercent;
  /* 0x0029 */ unsigned char DemotePercent;
  /* 0x002a */ unsigned char Parked;
  /* 0x002b */ unsigned char Interruptible;
  /* 0x002c */ unsigned char PlatformIdle;
  /* 0x002d */ unsigned char ExpectedWakeReason;
  /* 0x002e */ unsigned char IdleStateMax;
  /* 0x002f */ char __PADDING__[1];
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

typedef struct _PPM_SELECTION_MENU
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _PPM_SELECTION_MENU_ENTRY* Entries;
} PPM_SELECTION_MENU, *PPPM_SELECTION_MENU; /* size: 0x0008 */

typedef struct _PPM_COORDINATED_SELECTION
{
  /* 0x0000 */ unsigned long MaximumStates;
  /* 0x0004 */ unsigned long SelectedStates;
  /* 0x0008 */ unsigned long DefaultSelection;
  /* 0x000c */ unsigned long* Selection;
} PPM_COORDINATED_SELECTION, *PPPM_COORDINATED_SELECTION; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0004 */ struct _LIST_ENTRY VetoListHead;
  /* 0x000c */ unsigned char CsAccountingBlocks;
  /* 0x000d */ unsigned char BlocksDrips;
  /* 0x0010 */ unsigned long PreallocatedVetoCount;
  /* 0x0014 */ struct _PPM_VETO_ENTRY* PreallocatedVetoList;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0018 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x000c */ struct _UNICODE_STRING Name;
  /* 0x0014 */ unsigned long Latency;
  /* 0x0018 */ unsigned long BreakEvenDuration;
  /* 0x001c */ unsigned long Power;
  /* 0x0020 */ unsigned long StateFlags;
  /* 0x0024 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x003c */ unsigned char StateType;
  /* 0x003d */ unsigned char InterruptsEnabled;
  /* 0x003e */ unsigned char Interruptible;
  /* 0x003f */ unsigned char ContextRetained;
  /* 0x0040 */ unsigned char CacheCoherent;
  /* 0x0041 */ unsigned char WakesSpuriously;
  /* 0x0042 */ unsigned char PlatformOnly;
  /* 0x0043 */ unsigned char NoCState;
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0044 */

typedef struct _PPM_IDLE_STATES
{
  /* 0x0000 */ unsigned char InterfaceVersion;
  /* 0x0001 */ unsigned char IdleOverride;
  /* 0x0002 */ unsigned char EstimateIdleDuration;
  /* 0x0003 */ unsigned char ExitLatencyTraceEnabled;
  /* 0x0004 */ unsigned char NonInterruptibleTransition;
  /* 0x0005 */ unsigned char UnaccountedTransition;
  /* 0x0006 */ unsigned char IdleDurationLimited;
  /* 0x0007 */ unsigned char IdleCheckLimited;
  /* 0x0008 */ unsigned char StrictVetoBias;
  /* 0x000c */ unsigned long ExitLatencyCountdown;
  /* 0x0010 */ unsigned long TargetState;
  /* 0x0014 */ unsigned long ActualState;
  /* 0x0018 */ unsigned long OldState;
  /* 0x001c */ unsigned long OverrideIndex;
  /* 0x0020 */ unsigned long ProcessorIdleCount;
  /* 0x0024 */ unsigned long Type;
  /* 0x0028 */ unsigned __int64 LevelId;
  /* 0x0030 */ unsigned short ReasonFlags;
  /* 0x0038 */ volatile unsigned __int64 InitiateWakeStamp;
  /* 0x0040 */ long PreviousStatus;
  /* 0x0044 */ unsigned long PreviousCancelReason;
  /* 0x0048 */ struct _KAFFINITY_EX PrimaryProcessorMask;
  /* 0x0054 */ struct _KAFFINITY_EX SecondaryProcessorMask;
  /* 0x0060 */ void* IdlePrepare /* function */;
  /* 0x0064 */ void* IdlePreExecute /* function */;
  /* 0x0068 */ void* IdleExecute /* function */;
  /* 0x006c */ void* IdlePreselect /* function */;
  /* 0x0070 */ void* IdleTest /* function */;
  /* 0x0074 */ void* IdleAvailabilityCheck /* function */;
  /* 0x0078 */ void* IdleComplete /* function */;
  /* 0x007c */ void* IdleCancel /* function */;
  /* 0x0080 */ void* IdleIsHalted /* function */;
  /* 0x0084 */ void* IdleInitiateWake /* function */;
  /* 0x0088 */ struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;
  /* 0x00d8 */ struct _KAFFINITY_EX DeepIdleSnapshot;
  /* 0x00e4 */ struct _PERFINFO_PPM_STATE_SELECTION* Tracing;
  /* 0x00e8 */ struct _PERFINFO_PPM_STATE_SELECTION* CoordinatedTracing;
  /* 0x00ec */ struct _PPM_SELECTION_MENU ProcessorMenu;
  /* 0x00f4 */ struct _PPM_SELECTION_MENU CoordinatedMenu;
  /* 0x00fc */ struct _PPM_COORDINATED_SELECTION CoordinatedSelection;
  /* 0x010c */ struct _PPM_IDLE_STATE State[1];
} PPM_IDLE_STATES, *PPPM_IDLE_STATES; /* size: 0x0150 */

