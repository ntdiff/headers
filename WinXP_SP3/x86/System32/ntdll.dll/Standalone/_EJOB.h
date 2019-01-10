typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Absolute;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char Inserted;
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
    /* 0x0004 */ long OwnerCount;
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
  /* 0x0018 */ struct _OWNER_ENTRY OwnerThreads[2];
  /* 0x0028 */ unsigned long ContentionCount;
  /* 0x002c */ unsigned short NumberOfSharedWaiters;
  /* 0x002e */ unsigned short NumberOfExclusiveWaiters;
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
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _IO_COUNTERS
{
  /* 0x0000 */ unsigned __int64 ReadOperationCount;
  /* 0x0008 */ unsigned __int64 WriteOperationCount;
  /* 0x0010 */ unsigned __int64 OtherOperationCount;
  /* 0x0018 */ unsigned __int64 ReadTransferCount;
  /* 0x0020 */ unsigned __int64 WriteTransferCount;
  /* 0x0028 */ unsigned __int64 OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS; /* size: 0x0030 */

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ long Count;
  /* 0x0004 */ struct _KTHREAD* Owner;
  /* 0x0008 */ unsigned long Contention;
  /* 0x000c */ struct _KEVENT Event;
  /* 0x001c */ unsigned long OldIrql;
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0020 */

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
  /* 0x0098 */ unsigned long LimitFlags;
  /* 0x009c */ unsigned long MinimumWorkingSetSize;
  /* 0x00a0 */ unsigned long MaximumWorkingSetSize;
  /* 0x00a4 */ unsigned long ActiveProcessLimit;
  /* 0x00a8 */ unsigned long Affinity;
  /* 0x00ac */ unsigned char PriorityClass;
  /* 0x00b0 */ unsigned long UIRestrictionsClass;
  /* 0x00b4 */ unsigned long SecurityLimitFlags;
  /* 0x00b8 */ void* Token;
  /* 0x00bc */ struct _PS_JOB_TOKEN_FILTER* Filter;
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
  /* 0x0108 */ struct _IO_COUNTERS IoInfo;
  /* 0x0138 */ unsigned long ProcessMemoryLimit;
  /* 0x013c */ unsigned long JobMemoryLimit;
  /* 0x0140 */ unsigned long PeakProcessMemoryUsed;
  /* 0x0144 */ unsigned long PeakJobMemoryUsed;
  /* 0x0148 */ unsigned long CurrentJobMemoryUsed;
  /* 0x014c */ struct _FAST_MUTEX MemoryLimitsLock;
  /* 0x016c */ struct _LIST_ENTRY JobSetLinks;
  /* 0x0174 */ unsigned long MemberLevel;
  /* 0x0178 */ unsigned long JobFlags;
  /* 0x017c */ long __PADDING__[1];
} EJOB, *PEJOB; /* size: 0x0180 */

