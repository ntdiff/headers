typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KAB_UM_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _KAB_UM_PROCESS_TREE* Trees;
  /* 0x0008 */ unsigned long TreeCount;
  /* 0x000c */ long __PADDING__[1];
} KAB_UM_PROCESS_CONTEXT, *PKAB_UM_PROCESS_CONTEXT; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef union _KEXECUTE_OPTIONS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ExecuteDisable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ExecuteEnable : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char DisableThunkEmulation : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char Permanent : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char ExecuteDispatchEnable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned char ImageDispatchEnable : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned char DisableExceptionChainValidation : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned char Spare : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ volatile unsigned char ExecuteOptions;
    /* 0x0000 */ unsigned char ExecuteOptionsNV;
  }; /* size: 0x0001 */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef struct _KGROUP_MASK
{
  /* 0x0000 */ unsigned __int64 Masks[2];
} KGROUP_MASK, *PKGROUP_MASK; /* size: 0x0010 */

typedef union _KSTACK_COUNT
{
  union
  {
    /* 0x0000 */ long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long State : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long StackCount : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KSTACK_COUNT, *PKSTACK_COUNT; /* size: 0x0004 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0028 */ unsigned __int64 DirectoryTableBase;
  /* 0x0030 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0040 */ unsigned long ProcessLock;
  /* 0x0044 */ unsigned long ProcessTimerDelay;
  /* 0x0048 */ unsigned __int64 DeepFreezeStartTime;
  /* 0x0050 */ struct _KAFFINITY_EX* Affinity;
  /* 0x0058 */ struct _KAB_UM_PROCESS_CONTEXT AutoBoostState;
  /* 0x0068 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0078 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0080 */ volatile struct _KAFFINITY_EX* ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x0088 */ unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x0088 */ unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x0088 */ unsigned long DisableQuantum : 1; /* bit position: 2 */
      /* 0x0088 */ unsigned long DeepFreeze : 1; /* bit position: 3 */
      /* 0x0088 */ unsigned long TimerVirtualization : 1; /* bit position: 4 */
      /* 0x0088 */ unsigned long CheckStackExtents : 1; /* bit position: 5 */
      /* 0x0088 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 6 */
      /* 0x0088 */ unsigned long PpmPolicy : 4; /* bit position: 7 */
      /* 0x0088 */ unsigned long VaSpaceDeleted : 1; /* bit position: 11 */
      /* 0x0088 */ unsigned long MultiGroup : 1; /* bit position: 12 */
      /* 0x0088 */ unsigned long ForegroundProcess : 1; /* bit position: 13 */
      /* 0x0088 */ unsigned long ReservedFlags : 18; /* bit position: 14 */
    }; /* bitfield */
    /* 0x0088 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x008c */ unsigned long Spare0c;
  /* 0x0090 */ char BasePriority;
  /* 0x0091 */ char QuantumReset;
  /* 0x0092 */ char Visited;
  /* 0x0093 */ union _KEXECUTE_OPTIONS Flags;
  /* 0x0098 */ struct _KGROUP_MASK ActiveGroupsMask;
  /* 0x00a8 */ unsigned __int64 ActiveGroupPadding[2];
  /* 0x00b8 */ struct _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK* IdealProcessorAssignmentBlock;
  /* 0x00c0 */ unsigned __int64 Padding[8];
  /* 0x0100 */ unsigned long Spare0d;
  /* 0x0104 */ unsigned short IdealGlobalNode;
  /* 0x0106 */ unsigned short Spare1;
  /* 0x0108 */ volatile union _KSTACK_COUNT StackCount;
  /* 0x0110 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0120 */ unsigned __int64 CycleTime;
  /* 0x0128 */ unsigned __int64 ContextSwitches;
  /* 0x0130 */ struct _KSCHEDULING_GROUP* SchedulingGroup;
  /* 0x0138 */ unsigned __int64 KernelTime;
  /* 0x0140 */ unsigned __int64 UserTime;
  /* 0x0148 */ unsigned __int64 ReadyTime;
  /* 0x0150 */ unsigned long FreezeCount;
  /* 0x0154 */ unsigned long Spare4;
  /* 0x0158 */ unsigned __int64 UserDirectoryTableBase;
  /* 0x0160 */ unsigned char AddressPolicy;
  /* 0x0161 */ unsigned char Spare2[7];
  /* 0x0168 */ void* InstrumentationCallback;
  union
  {
    union
    {
      /* 0x0170 */ unsigned __int64 SecureHandle;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0170 */ unsigned __int64 SecureProcess : 1; /* bit position: 0 */
          /* 0x0170 */ unsigned __int64 TrustedApp : 1; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0008 */ Flags;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ SecureState;
  /* 0x0178 */ unsigned __int64 KernelWaitTime;
  /* 0x0180 */ unsigned __int64 UserWaitTime;
  /* 0x0188 */ unsigned __int64 LastRebalanceQpc;
  /* 0x0190 */ void* PerProcessorCycleTimes;
  /* 0x0198 */ unsigned __int64 ExtendedFeatureDisableMask;
  /* 0x01a0 */ unsigned short PrimaryGroup;
  /* 0x01a2 */ unsigned short Spare3[3];
  /* 0x01a8 */ void* UserCetLogging;
  /* 0x01b0 */ struct _LIST_ENTRY CpuPartitionList;
  /* 0x01c0 */ struct _KPROCESS_AVAILABLE_CPU_STATE* AvailableCpuState;
} KPROCESS, *PKPROCESS; /* size: 0x01c8 */

