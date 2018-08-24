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
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
              union
              {
                /* 0x0003 */ unsigned char TimerMiscFlags;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned long OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long OwnerCount : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0004 */ unsigned long TableSize;
  }; /* size: 0x0004 */
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0008 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0008 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x000c */ short ActiveCount;
  /* 0x000e */ unsigned short Flag;
  /* 0x0010 */ struct _KSEMAPHORE* SharedWaiters;
  /* 0x0014 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0018 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0020 */ unsigned long ActiveEntries;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long NumberOfSharedWaiters;
  /* 0x002c */ unsigned long NumberOfExclusiveWaiters;
  union
  {
    /* 0x0030 */ void* Address;
    /* 0x0030 */ unsigned long CreatorBackTraceIndex;
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0038 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _EJOB
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0010 */ struct _LIST_ENTRY JobLinks;
  /* 0x0018 */ struct _LIST_ENTRY ProcessListHead;
  /* 0x0020 */ struct _ERESOURCE JobLock;
  /* 0x0058 */ union _LARGE_INTEGER TotalUserTime;
  /* 0x0060 */ union _LARGE_INTEGER TotalKernelTime;
  /* 0x0068 */ union _LARGE_INTEGER ThisPeriodTotalUserTime;
  /* 0x0070 */ union _LARGE_INTEGER ThisPeriodTotalKernelTime;
  /* 0x0078 */ unsigned long TotalPageFaultCount;
  /* 0x007c */ unsigned long TotalProcesses;
  /* 0x0080 */ unsigned long ActiveProcesses;
  /* 0x0084 */ unsigned long TotalTerminatedProcesses;
  /* 0x0088 */ union _LARGE_INTEGER PerProcessUserTimeLimit;
  /* 0x0090 */ union _LARGE_INTEGER PerJobUserTimeLimit;
  /* 0x0098 */ unsigned long MinimumWorkingSetSize;
  /* 0x009c */ unsigned long MaximumWorkingSetSize;
  /* 0x00a0 */ unsigned long LimitFlags;
  /* 0x00a4 */ unsigned long ActiveProcessLimit;
  /* 0x00a8 */ struct _KAFFINITY_EX Affinity;
  /* 0x00b4 */ unsigned char PriorityClass;
  /* 0x00b8 */ struct _JOB_ACCESS_STATE* AccessState;
  /* 0x00bc */ unsigned long UIRestrictionsClass;
  /* 0x00c0 */ unsigned long EndOfJobTimeAction;
  /* 0x00c4 */ void* CompletionPort;
  /* 0x00c8 */ void* CompletionKey;
  /* 0x00cc */ unsigned long SessionId;
  /* 0x00d0 */ unsigned long SchedulingClass;
  /* 0x00d8 */ unsigned __int64 ReadOperationCount;
  /* 0x00e0 */ unsigned __int64 WriteOperationCount;
  /* 0x00e8 */ unsigned __int64 OtherOperationCount;
  /* 0x00f0 */ unsigned __int64 ReadTransferCount;
  /* 0x00f8 */ unsigned __int64 WriteTransferCount;
  /* 0x0100 */ unsigned __int64 OtherTransferCount;
  /* 0x0108 */ unsigned long ProcessMemoryLimit;
  /* 0x010c */ unsigned long JobMemoryLimit;
  /* 0x0110 */ unsigned long PeakProcessMemoryUsed;
  /* 0x0114 */ unsigned long PeakJobMemoryUsed;
  /* 0x0118 */ unsigned __int64 CurrentJobMemoryUsed;
  /* 0x0120 */ struct _EX_PUSH_LOCK MemoryLimitsLock;
  /* 0x0124 */ struct _LIST_ENTRY JobSetLinks;
  /* 0x012c */ unsigned long MemberLevel;
  /* 0x0130 */ unsigned long JobFlags;
  /* 0x0134 */ long __PADDING__[1];
} EJOB, *PEJOB; /* size: 0x0138 */

