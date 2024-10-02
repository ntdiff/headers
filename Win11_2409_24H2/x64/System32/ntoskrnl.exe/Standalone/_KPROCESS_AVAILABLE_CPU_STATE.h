typedef union _RTL_TICK_LOCK
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsULong64;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Busy : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Ticks : 63; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} RTL_TICK_LOCK, *PRTL_TICK_LOCK; /* size: 0x0008 */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef union _KI_AVAILABLE_CPUS_WORK_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long WorkerExecuting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long WorkPresent : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} KI_AVAILABLE_CPUS_WORK_STATE, *PKI_AVAILABLE_CPUS_WORK_STATE; /* size: 0x0004 */

typedef struct _KI_AVAILABLE_CPUS_WORK_ITEM
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM ExWorkItem;
  /* 0x0020 */ struct _EX_RUNDOWN_REF RundownRef;
  /* 0x0028 */ union _KI_AVAILABLE_CPUS_WORK_STATE WorkState;
  /* 0x0030 */ void* Callback /* function */;
  /* 0x0038 */ void* Context;
} KI_AVAILABLE_CPUS_WORK_ITEM, *PKI_AVAILABLE_CPUS_WORK_ITEM; /* size: 0x0040 */

typedef struct _KPROCESS_AVAILABLE_CPU_STATE
{
  /* 0x0000 */ union _RTL_TICK_LOCK SequenceNumber;
  /* 0x0008 */ unsigned __int64 CpuSetSequenceNumber;
  /* 0x0010 */ unsigned __int64 ForceParkSequenceNumber;
  /* 0x0018 */ struct _KAFFINITY_EX* Affinity;
  /* 0x0020 */ struct _EX_PUSH_LOCK SubscriptionLock;
  /* 0x0028 */ struct _LIST_ENTRY SubscriptionList;
  /* 0x0038 */ struct _KI_AVAILABLE_CPUS_WORK_ITEM WorkItem;
} KPROCESS_AVAILABLE_CPU_STATE, *PKPROCESS_AVAILABLE_CPU_STATE; /* size: 0x0078 */

