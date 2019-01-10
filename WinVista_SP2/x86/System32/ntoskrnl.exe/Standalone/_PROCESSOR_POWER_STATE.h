typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ unsigned __int64 LastTimeCheck;
  /* 0x0010 */ unsigned __int64 IdleTimeAccumulated;
  union
  {
    struct
    {
      /* 0x0018 */ unsigned __int64 IdleTransitionTime;
    } /* size: 0x0008 */ Native;
    struct
    {
      /* 0x0018 */ unsigned __int64 LastIdleCheck;
    } /* size: 0x0008 */ Hv;
  }; /* size: 0x0008 */
  /* 0x0020 */ struct PPM_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0024 */ struct _PPM_PERF_STATES* PerfStates;
  /* 0x0028 */ unsigned long LastKernelUserTime;
  /* 0x002c */ unsigned long LastIdleThreadKTime;
  /* 0x0030 */ unsigned __int64 LastGlobalTimeHv;
  /* 0x0038 */ unsigned __int64 LastProcessorTimeHv;
  /* 0x0040 */ unsigned char ThermalConstraint;
  /* 0x0041 */ unsigned char LastBusyPercentage;
  union
  {
    union
    {
      /* 0x0042 */ unsigned short AsUSHORT;
      struct /* bitfield */
      {
        /* 0x0042 */ unsigned short PStateDomain : 1; /* bit position: 0 */
        /* 0x0042 */ unsigned short PStateDomainIdleAccounting : 1; /* bit position: 1 */
        /* 0x0042 */ unsigned short Reserved : 14; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Flags;
  /* 0x0048 */ struct _KTIMER PerfTimer;
  /* 0x0070 */ struct _KDPC PerfDpc;
  /* 0x0090 */ unsigned long LastSysTime;
  /* 0x0094 */ struct _KPRCB* PStateMaster;
  /* 0x0098 */ unsigned long PStateSet;
  /* 0x009c */ unsigned long CurrentPState;
  /* 0x00a0 */ unsigned long DesiredPState;
  /* 0x00a4 */ volatile unsigned long PStateIdleStartTime;
  /* 0x00a8 */ unsigned long PStateIdleTime;
  /* 0x00ac */ unsigned long LastPStateIdleTime;
  /* 0x00b0 */ unsigned long PStateStartTime;
  /* 0x00b4 */ unsigned long DiaIndex;
  /* 0x00b8 */ unsigned long Reserved0;
  /* 0x00bc */ unsigned long WmiDispatchPtr;
  /* 0x00c0 */ long WmiInterfaceEnabled;
  /* 0x00c4 */ long __PADDING__[1];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x00c8 */

