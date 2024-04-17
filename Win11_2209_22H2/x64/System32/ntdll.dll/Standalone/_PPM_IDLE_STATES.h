typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

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
  /* 0x0048 */ unsigned long PlatformIdleStateIndex;
  /* 0x004c */ unsigned long ProcessorIdleStateIndex;
  /* 0x0050 */ unsigned long IdleSelectFailureMask;
  /* 0x0054 */ long __PADDING__[1];
} PROCESSOR_IDLE_PREPARE_INFO, *PPROCESSOR_IDLE_PREPARE_INFO; /* size: 0x0058 */

typedef struct _PPM_SELECTION_MENU
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0008 */ struct _PPM_SELECTION_MENU_ENTRY* Entries;
} PPM_SELECTION_MENU, *PPPM_SELECTION_MENU; /* size: 0x0010 */

typedef struct _PPM_COORDINATED_SELECTION
{
  /* 0x0000 */ unsigned long MaximumStates;
  /* 0x0004 */ unsigned long SelectedStates;
  /* 0x0008 */ unsigned long DefaultSelection;
  /* 0x0010 */ unsigned long* Selection;
} PPM_COORDINATED_SELECTION, *PPPM_COORDINATED_SELECTION; /* size: 0x0018 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PPM_VETO_ACCOUNTING
{
  /* 0x0000 */ volatile long VetoPresent;
  /* 0x0008 */ struct _LIST_ENTRY VetoListHead;
  /* 0x0018 */ unsigned char CsAccountingBlocks;
  /* 0x0019 */ unsigned char BlocksDrips;
  /* 0x001c */ unsigned long PreallocatedVetoCount;
  /* 0x0020 */ struct _PPM_VETO_ENTRY* PreallocatedVetoList;
} PPM_VETO_ACCOUNTING, *PPPM_VETO_ACCOUNTING; /* size: 0x0028 */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x0108 */ struct _UNICODE_STRING Name;
  /* 0x0118 */ unsigned long Latency;
  /* 0x011c */ unsigned long BreakEvenDuration;
  /* 0x0120 */ unsigned long Power;
  /* 0x0124 */ unsigned long StateFlags;
  /* 0x0128 */ struct _PPM_VETO_ACCOUNTING VetoAccounting;
  /* 0x0150 */ unsigned char StateType;
  /* 0x0151 */ unsigned char InterruptsEnabled;
  /* 0x0152 */ unsigned char Interruptible;
  /* 0x0153 */ unsigned char ContextRetained;
  /* 0x0154 */ unsigned char CacheCoherent;
  /* 0x0155 */ unsigned char WakesSpuriously;
  /* 0x0156 */ unsigned char PlatformOnly;
  /* 0x0157 */ unsigned char NoCState;
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0158 */

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
  /* 0x0008 */ unsigned __int64 IdleReevaluationDuration;
  /* 0x0010 */ unsigned char StrictVetoBias;
  /* 0x0014 */ unsigned long ExitLatencyCountdown;
  /* 0x0018 */ unsigned long TargetState;
  /* 0x001c */ unsigned long ActualState;
  /* 0x0020 */ unsigned long OldState;
  /* 0x0024 */ unsigned long OverrideIndex;
  /* 0x0028 */ unsigned long ProcessorIdleCount;
  /* 0x002c */ unsigned long Type;
  /* 0x0030 */ unsigned __int64 LevelId;
  /* 0x0038 */ unsigned short ReasonFlags;
  /* 0x0040 */ volatile unsigned __int64 InitiateWakeStamp;
  /* 0x0048 */ long PreviousStatus;
  /* 0x004c */ unsigned long PreviousCancelReason;
  /* 0x0050 */ struct _KAFFINITY_EX PrimaryProcessorMask;
  /* 0x0158 */ struct _KAFFINITY_EX SecondaryProcessorMask;
  /* 0x0260 */ void* IdlePrepare /* function */;
  /* 0x0268 */ void* IdlePreExecute /* function */;
  /* 0x0270 */ void* IdleExecute /* function */;
  /* 0x0278 */ void* IdlePreselect /* function */;
  /* 0x0280 */ void* IdleTest /* function */;
  /* 0x0288 */ void* IdleAvailabilityCheck /* function */;
  /* 0x0290 */ void* IdleComplete /* function */;
  /* 0x0298 */ void* IdleCancel /* function */;
  /* 0x02a0 */ void* IdleIsHalted /* function */;
  /* 0x02a8 */ void* IdleInitiateWake /* function */;
  /* 0x02b0 */ struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;
  /* 0x0308 */ struct _KAFFINITY_EX DeepIdleSnapshot;
  /* 0x0410 */ struct _PERFINFO_PPM_STATE_SELECTION* Tracing;
  /* 0x0418 */ struct _PERFINFO_PPM_STATE_SELECTION* CoordinatedTracing;
  /* 0x0420 */ struct _PPM_SELECTION_MENU ProcessorMenu;
  /* 0x0430 */ struct _PPM_SELECTION_MENU CoordinatedMenu;
  /* 0x0440 */ struct _PPM_COORDINATED_SELECTION CoordinatedSelection;
  /* 0x0458 */ struct _PPM_IDLE_STATE State[1];
} PPM_IDLE_STATES, *PPPM_IDLE_STATES; /* size: 0x05b0 */

