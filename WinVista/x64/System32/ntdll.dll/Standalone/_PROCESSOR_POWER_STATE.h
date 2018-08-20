struct PROCESSOR_IDLE_TIMES
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 EndTime;
  /* 0x0010 */ unsigned long Reserved[4];
}; /* size: 0x0020 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_4
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
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ long Period;
  /* 0x003c */ long __PADDING__[1];
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ unsigned short Number;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ void* IdleFunction /* function */;
  /* 0x0008 */ struct PPM_IDLE_STATES* IdleStates;
  /* 0x0010 */ unsigned __int64 LastTimeCheck;
  /* 0x0018 */ unsigned __int64 LastIdleTime;
  /* 0x0020 */ struct PROCESSOR_IDLE_TIMES IdleTimes;
  /* 0x0040 */ struct PPM_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0048 */ struct PPM_PERF_STATES* PerfStates;
  /* 0x0050 */ unsigned long LastKernelUserTime;
  /* 0x0054 */ unsigned long LastIdleThreadKTime;
  /* 0x0058 */ unsigned __int64 LastGlobalTimeHv;
  /* 0x0060 */ unsigned __int64 LastProcessorTimeHv;
  /* 0x0068 */ unsigned char ThermalConstraint;
  /* 0x0069 */ unsigned char LastBusyPercentage;
  union // _TAG_UNNAMED_8
  {
    union
    {
      /* 0x006a */ unsigned short AsUSHORT;
      struct /* bitfield */
      {
        /* 0x006a */ unsigned short PStateDomain : 1; /* bit position: 0 */
        /* 0x006a */ unsigned short PStateDomainIdleAccounting : 1; /* bit position: 1 */
        /* 0x006a */ unsigned short Reserved : 14; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Flags;
  /* 0x0070 */ struct _KTIMER PerfTimer;
  /* 0x00b0 */ struct _KDPC PerfDpc;
  /* 0x00f0 */ unsigned long LastSysTime;
  /* 0x00f8 */ struct _KPRCB* PStateMaster;
  /* 0x0100 */ unsigned __int64 PStateSet;
  /* 0x0108 */ unsigned long CurrentPState;
  /* 0x010c */ unsigned long Reserved0;
  /* 0x0110 */ unsigned long DesiredPState;
  /* 0x0114 */ unsigned long Reserved1;
  /* 0x0118 */ volatile unsigned long PStateIdleStartTime;
  /* 0x011c */ unsigned long PStateIdleTime;
  /* 0x0120 */ unsigned long LastPStateIdleTime;
  /* 0x0124 */ unsigned long PStateStartTime;
  /* 0x0128 */ unsigned __int64 WmiDispatchPtr;
  /* 0x0130 */ long WmiInterfaceEnabled;
  /* 0x0134 */ long __PADDING__[1];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0138 */

