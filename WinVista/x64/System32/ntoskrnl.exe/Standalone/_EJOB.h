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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    /* 0x0008 */ long OwnerCount;
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x0018 */ short ActiveCount;
  /* 0x001a */ unsigned short Flag;
  /* 0x0020 */ struct _KSEMAPHORE* SharedWaiters;
  /* 0x0028 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0030 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ void* Reserved2;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _EJOB
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0018 */ struct _LIST_ENTRY JobLinks;
  /* 0x0028 */ struct _LIST_ENTRY ProcessListHead;
  /* 0x0038 */ struct _ERESOURCE JobLock;
  /* 0x00a0 */ union _LARGE_INTEGER TotalUserTime;
  /* 0x00a8 */ union _LARGE_INTEGER TotalKernelTime;
  /* 0x00b0 */ union _LARGE_INTEGER ThisPeriodTotalUserTime;
  /* 0x00b8 */ union _LARGE_INTEGER ThisPeriodTotalKernelTime;
  /* 0x00c0 */ unsigned long TotalPageFaultCount;
  /* 0x00c4 */ unsigned long TotalProcesses;
  /* 0x00c8 */ unsigned long ActiveProcesses;
  /* 0x00cc */ unsigned long TotalTerminatedProcesses;
  /* 0x00d0 */ union _LARGE_INTEGER PerProcessUserTimeLimit;
  /* 0x00d8 */ union _LARGE_INTEGER PerJobUserTimeLimit;
  /* 0x00e0 */ unsigned long LimitFlags;
  /* 0x00e8 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x00f0 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x00f8 */ unsigned long ActiveProcessLimit;
  /* 0x0100 */ unsigned __int64 Affinity;
  /* 0x0108 */ unsigned char PriorityClass;
  /* 0x0110 */ struct _JOB_ACCESS_STATE* AccessState;
  /* 0x0118 */ unsigned long UIRestrictionsClass;
  /* 0x011c */ unsigned long EndOfJobTimeAction;
  /* 0x0120 */ void* CompletionPort;
  /* 0x0128 */ void* CompletionKey;
  /* 0x0130 */ unsigned long SessionId;
  /* 0x0134 */ unsigned long SchedulingClass;
  /* 0x0138 */ unsigned __int64 ReadOperationCount;
  /* 0x0140 */ unsigned __int64 WriteOperationCount;
  /* 0x0148 */ unsigned __int64 OtherOperationCount;
  /* 0x0150 */ unsigned __int64 ReadTransferCount;
  /* 0x0158 */ unsigned __int64 WriteTransferCount;
  /* 0x0160 */ unsigned __int64 OtherTransferCount;
  /* 0x0168 */ unsigned __int64 ProcessMemoryLimit;
  /* 0x0170 */ unsigned __int64 JobMemoryLimit;
  /* 0x0178 */ unsigned __int64 PeakProcessMemoryUsed;
  /* 0x0180 */ unsigned __int64 PeakJobMemoryUsed;
  /* 0x0188 */ unsigned __int64 CurrentJobMemoryUsed;
  /* 0x0190 */ struct _EX_PUSH_LOCK MemoryLimitsLock;
  /* 0x0198 */ struct _LIST_ENTRY JobSetLinks;
  /* 0x01a8 */ unsigned long MemberLevel;
  /* 0x01ac */ unsigned long JobFlags;
} EJOB, *PEJOB; /* size: 0x01b0 */

