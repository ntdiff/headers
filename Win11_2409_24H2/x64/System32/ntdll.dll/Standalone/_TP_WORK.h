typedef struct _TPP_REFCOUNT
{
  /* 0x0000 */ volatile long Refcount;
} TPP_REFCOUNT, *PTPP_REFCOUNT; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _TPP_FLAGS_COUNT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Count : 60; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Flags : 4; /* bit position: 60 */
    }; /* bitfield */
    /* 0x0000 */ __int64 Data;
  }; /* size: 0x0008 */
} TPP_FLAGS_COUNT, *PTPP_FLAGS_COUNT; /* size: 0x0008 */

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

typedef struct _TPP_ITE
{
  /* 0x0000 */ struct _TPP_ITE_WAITER* First;
} TPP_ITE, *PTPP_ITE; /* size: 0x0008 */

typedef struct _TPP_BARRIER
{
  /* 0x0000 */ volatile union _TPP_FLAGS_COUNT Ptr;
  /* 0x0008 */ struct _RTL_SRWLOCK WaitLock;
  /* 0x0010 */ struct _TPP_ITE WaitList;
} TPP_BARRIER, *PTPP_BARRIER; /* size: 0x0018 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _ALPC_WORK_ON_BEHALF_TICKET
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ unsigned long ThreadCreationTimeLow;
} ALPC_WORK_ON_BEHALF_TICKET, *PALPC_WORK_ON_BEHALF_TICKET; /* size: 0x0008 */

typedef struct _TPP_CALLER
{
  /* 0x0000 */ void* ReturnAddress;
} TPP_CALLER, *PTPP_CALLER; /* size: 0x0008 */

typedef enum _TP_CALLBACK_PRIORITY
{
  TP_CALLBACK_PRIORITY_HIGH = 0,
  TP_CALLBACK_PRIORITY_NORMAL = 1,
  TP_CALLBACK_PRIORITY_LOW = 2,
  TP_CALLBACK_PRIORITY_INVALID = 3,
  TP_CALLBACK_PRIORITY_COUNT = 3,
} TP_CALLBACK_PRIORITY, *PTP_CALLBACK_PRIORITY;

typedef struct _TPP_CLEANUP_GROUP_MEMBER
{
  /* 0x0000 */ struct _TPP_REFCOUNT Refcount;
  /* 0x0008 */ const struct _TPP_CLEANUP_GROUP_MEMBER_VFUNCS* VFuncs;
  /* 0x0010 */ struct _TP_CLEANUP_GROUP* CleanupGroup;
  /* 0x0018 */ void* CleanupGroupCancelCallback /* function */;
  /* 0x0020 */ void* FinalizationCallback /* function */;
  /* 0x0028 */ struct _LIST_ENTRY CleanupGroupMemberLinks;
  /* 0x0038 */ struct _TPP_BARRIER CallbackBarrier;
  union
  {
    /* 0x0050 */ void* Callback;
    /* 0x0050 */ void* WorkCallback /* function */;
    /* 0x0050 */ void* SimpleCallback /* function */;
    /* 0x0050 */ void* TimerCallback /* function */;
    /* 0x0050 */ void* WaitCallback /* function */;
    /* 0x0050 */ void* IoCallback /* function */;
    /* 0x0050 */ void* AlpcCallback /* function */;
    /* 0x0050 */ void* AlpcCallbackEx /* function */;
    /* 0x0050 */ void* JobCallback /* function */;
  }; /* size: 0x0008 */
  /* 0x0058 */ void* Context;
  /* 0x0060 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0068 */ void* SubProcessTag;
  /* 0x0070 */ struct _GUID ActivityId;
  /* 0x0080 */ struct _ALPC_WORK_ON_BEHALF_TICKET WorkOnBehalfTicket;
  /* 0x0088 */ void* RaceDll;
  /* 0x0090 */ struct _TP_POOL* Pool;
  /* 0x0098 */ struct _LIST_ENTRY PoolObjectLinks;
  union
  {
    /* 0x00a8 */ volatile long Flags;
    struct /* bitfield */
    {
      /* 0x00a8 */ unsigned long LongFunction : 1; /* bit position: 0 */
      /* 0x00a8 */ unsigned long Persistent : 1; /* bit position: 1 */
      /* 0x00a8 */ unsigned long UnusedPublic : 14; /* bit position: 2 */
      /* 0x00a8 */ unsigned long Released : 1; /* bit position: 16 */
      /* 0x00a8 */ unsigned long CleanupGroupReleased : 1; /* bit position: 17 */
      /* 0x00a8 */ unsigned long InCleanupGroupCleanupList : 1; /* bit position: 18 */
      /* 0x00a8 */ unsigned long UnusedPrivate : 13; /* bit position: 19 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x00b0 */ struct _TPP_CALLER AllocCaller;
  /* 0x00b8 */ struct _TPP_CALLER ReleaseCaller;
  /* 0x00c0 */ enum _TP_CALLBACK_PRIORITY CallbackPriority;
  /* 0x00c4 */ long __PADDING__[1];
} TPP_CLEANUP_GROUP_MEMBER, *PTPP_CLEANUP_GROUP_MEMBER; /* size: 0x00c8 */

typedef struct _TP_TASK
{
  /* 0x0000 */ const struct _TP_TASK_CALLBACKS* Callbacks;
  /* 0x0008 */ unsigned long NumaNode;
  /* 0x000c */ unsigned char IdealProcessor;
  /* 0x0010 */ struct _LIST_ENTRY ListEntry;
} TP_TASK, *PTP_TASK; /* size: 0x0020 */

typedef union _TPP_WORK_STATE
{
  union
  {
    /* 0x0000 */ long Exchange;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Insertable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingCallbackCount : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} TPP_WORK_STATE, *PTPP_WORK_STATE; /* size: 0x0004 */

typedef struct _TP_WORK
{
  /* 0x0000 */ struct _TPP_CLEANUP_GROUP_MEMBER CleanupGroupMember;
  /* 0x00c8 */ struct _TP_TASK Task;
  /* 0x00e8 */ volatile union _TPP_WORK_STATE WorkState;
  /* 0x00ec */ long __PADDING__[1];
} TP_WORK, *PTP_WORK; /* size: 0x00f0 */

