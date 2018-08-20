struct PROCESSOR_IDLE_TIMES
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 EndTime;
  /* 0x0010 */ unsigned long Reserved[4];
}; /* size: 0x0020 */

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
    struct // _TAG_UNNAMED_2
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
  /* 0x0002 */ unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ void* IdleFunction /* function */;
  /* 0x0004 */ struct PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ unsigned __int64 LastTimeCheck;
  /* 0x0010 */ unsigned __int64 LastIdleTime;
  /* 0x0018 */ struct PROCESSOR_IDLE_TIMES IdleTimes;
  /* 0x0038 */ struct PPM_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x003c */ struct PPM_PERF_STATES* PerfStates;
  /* 0x0040 */ unsigned long LastKernelUserTime;
  /* 0x0044 */ unsigned long LastIdleThreadKTime;
  /* 0x0048 */ unsigned __int64 LastGlobalTimeHv;
  /* 0x0050 */ unsigned __int64 LastProcessorTimeHv;
  /* 0x0058 */ unsigned char ThermalConstraint;
  /* 0x0059 */ unsigned char LastBusyPercentage;
  union // _TAG_UNNAMED_11
  {
    union
    {
      /* 0x005a */ unsigned short AsUSHORT;
      struct /* bitfield */
      {
        /* 0x005a */ unsigned short PStateDomain : 1; /* bit position: 0 */
        /* 0x005a */ unsigned short PStateDomainIdleAccounting : 1; /* bit position: 1 */
        /* 0x005a */ unsigned short Reserved : 14; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Flags;
  /* 0x0060 */ struct _KTIMER PerfTimer;
  /* 0x0088 */ struct _KDPC PerfDpc;
  /* 0x00a8 */ unsigned long LastSysTime;
  /* 0x00ac */ struct _KPRCB* PStateMaster;
  /* 0x00b0 */ unsigned long PStateSet;
  /* 0x00b4 */ unsigned long CurrentPState;
  /* 0x00b8 */ unsigned long Reserved0;
  /* 0x00bc */ unsigned long DesiredPState;
  /* 0x00c0 */ unsigned long Reserved1;
  /* 0x00c4 */ volatile unsigned long PStateIdleStartTime;
  /* 0x00c8 */ unsigned long PStateIdleTime;
  /* 0x00cc */ unsigned long LastPStateIdleTime;
  /* 0x00d0 */ unsigned long PStateStartTime;
  /* 0x00d4 */ unsigned long WmiDispatchPtr;
  /* 0x00d8 */ long WmiInterfaceEnabled;
  /* 0x00dc */ long __PADDING__[1];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x00e0 */

