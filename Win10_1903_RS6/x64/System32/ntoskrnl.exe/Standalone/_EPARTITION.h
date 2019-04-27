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

typedef struct _EPARTITION
{
  /* 0x0000 */ void* MmPartition;
  /* 0x0008 */ void* CcPartition;
  /* 0x0010 */ void* ExPartition;
  /* 0x0018 */ __int64 HardReferenceCount;
  /* 0x0020 */ __int64 OpenHandleCount;
  /* 0x0028 */ struct _LIST_ENTRY ActivePartitionLinks;
  /* 0x0038 */ struct _EPARTITION* ParentPartition;
  /* 0x0040 */ struct _WORK_QUEUE_ITEM TeardownWorkItem;
  /* 0x0060 */ struct _EX_PUSH_LOCK TeardownLock;
  /* 0x0068 */ struct _EPROCESS* SystemProcess;
  /* 0x0070 */ void* SystemProcessHandle;
  union
  {
    /* 0x0078 */ unsigned long PartitionFlags;
    /* 0x0078 */ unsigned long PairedWithJob : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x007c */ long __PADDING__[1];
} EPARTITION, *PEPARTITION; /* size: 0x0080 */

