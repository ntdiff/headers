typedef struct _TPP_REFCOUNT
{
  /* 0x0000 */ volatile long Refcount;
} TPP_REFCOUNT, *PTPP_REFCOUNT; /* size: 0x0004 */

typedef union _TPP_POOL_QUEUE_STATE
{
  union
  {
    /* 0x0000 */ __int64 Exchange;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ long RunningThreadGoal : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned long PendingReleaseCount : 16; /* bit position: 16 */
      }; /* bitfield */
      /* 0x0004 */ unsigned long QueueLength;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} TPP_POOL_QUEUE_STATE, *PTPP_POOL_QUEUE_STATE; /* size: 0x0008 */

typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TPP_PH
{
  /* 0x0000 */ struct _TPP_PH_LINKS* Root;
} TPP_PH, *PTPP_PH; /* size: 0x0008 */

typedef struct _TP_TASK
{
  /* 0x0000 */ const struct _TP_TASK_CALLBACKS* Callbacks;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ unsigned char IdealProcessor;
  /* 0x0010 */ struct _LIST_ENTRY ListEntry;
} TP_TASK, *PTP_TASK; /* size: 0x0020 */

typedef struct _TP_DIRECT
{
  /* 0x0000 */ struct _TP_TASK Task;
  /* 0x0020 */ unsigned __int64 Lock;
  /* 0x0028 */ struct _LIST_ENTRY IoCompletionInformationList;
  /* 0x0038 */ void* Callback /* function */;
  /* 0x0040 */ unsigned long NumaNode;
  /* 0x0044 */ unsigned char IdealProcessor;
  /* 0x0045 */ char __PADDING__[3];
} TP_DIRECT, *PTP_DIRECT; /* size: 0x0048 */

typedef struct _TPP_TIMER_SUBQUEUE
{
  /* 0x0000 */ __int64 Expiration;
  /* 0x0008 */ struct _TPP_PH WindowStart;
  /* 0x0010 */ struct _TPP_PH WindowEnd;
  /* 0x0018 */ void* Timer;
  /* 0x0020 */ void* TimerPkt;
  /* 0x0028 */ struct _TP_DIRECT Direct;
  /* 0x0070 */ unsigned long ExpirationWindow;
  /* 0x0074 */ long __PADDING__[1];
} TPP_TIMER_SUBQUEUE, *PTPP_TIMER_SUBQUEUE; /* size: 0x0078 */

typedef struct _TPP_TIMER_QUEUE
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0008 */ struct _TPP_TIMER_SUBQUEUE AbsoluteQueue;
  /* 0x0080 */ struct _TPP_TIMER_SUBQUEUE RelativeQueue;
  /* 0x00f8 */ long AllocatedTimerCount;
  /* 0x00fc */ long __PADDING__[1];
} TPP_TIMER_QUEUE, *PTPP_TIMER_QUEUE; /* size: 0x0100 */

typedef struct _TPP_CALLER
{
  /* 0x0000 */ void* ReturnAddress;
} TPP_CALLER, *PTPP_CALLER; /* size: 0x0008 */

typedef struct _RTL_CONDITION_VARIABLE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 WakeCount : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_CONDITION_VARIABLE, *PRTL_CONDITION_VARIABLE; /* size: 0x0008 */

typedef struct _TP_POOL
{
  /* 0x0000 */ struct _TPP_REFCOUNT Refcount;
  /* 0x0008 */ volatile union _TPP_POOL_QUEUE_STATE QueueState;
  /* 0x0010 */ struct _TPP_QUEUE* TaskQueue[3];
  /* 0x0028 */ struct _TPP_NUMA_NODE* NumaNode;
  /* 0x0030 */ struct _GROUP_AFFINITY* ProximityInfo;
  /* 0x0038 */ void* WorkerFactory;
  /* 0x0040 */ void* CompletionPort;
  /* 0x0048 */ struct _RTL_SRWLOCK Lock;
  /* 0x0050 */ struct _LIST_ENTRY PoolObjectList;
  /* 0x0060 */ struct _LIST_ENTRY WorkerList;
  /* 0x0070 */ struct _TPP_TIMER_QUEUE TimerQueue;
  /* 0x0170 */ struct _RTL_SRWLOCK ShutdownLock;
  /* 0x0178 */ unsigned char ShutdownInitiated;
  /* 0x0179 */ unsigned char Released;
  /* 0x017a */ unsigned short PoolFlags;
  /* 0x0180 */ struct _LIST_ENTRY PoolLinks;
  /* 0x0190 */ struct _TPP_CALLER AllocCaller;
  /* 0x0198 */ struct _TPP_CALLER ReleaseCaller;
  /* 0x01a0 */ volatile long AvailableWorkerCount;
  /* 0x01a4 */ volatile long LongRunningWorkerCount;
  /* 0x01a8 */ unsigned long LastProcCount;
  /* 0x01ac */ volatile long NodeStatus;
  /* 0x01b0 */ volatile long BindingCount;
  struct /* bitfield */
  {
    /* 0x01b4 */ unsigned long CallbackChecksDisabled : 1; /* bit position: 0 */
    /* 0x01b4 */ unsigned long TrimTarget : 11; /* bit position: 1 */
    /* 0x01b4 */ unsigned long TrimmedThrdCount : 11; /* bit position: 12 */
  }; /* bitfield */
  /* 0x01b8 */ unsigned long SelectedCpuSetCount;
  /* 0x01c0 */ struct _RTL_CONDITION_VARIABLE TrimComplete;
  /* 0x01c8 */ struct _LIST_ENTRY TrimmedWorkerList;
} TP_POOL, *PTP_POOL; /* size: 0x01d8 */

