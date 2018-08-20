typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

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

typedef struct _EPARTITION
{
  /* 0x0000 */ void* MmPartition;
  /* 0x0004 */ void* CcPartition;
  /* 0x0008 */ void* ExPartition;
  /* 0x000c */ long HardReferenceCount;
  /* 0x0010 */ long OpenHandleCount;
  /* 0x0014 */ struct _LIST_ENTRY ActivePartitionLinks;
  /* 0x001c */ struct _EPARTITION* ParentPartition;
  /* 0x0020 */ struct _WORK_QUEUE_ITEM TeardownWorkItem;
  /* 0x0030 */ struct _EX_PUSH_LOCK TeardownLock;
  /* 0x0034 */ struct _EPROCESS* SystemProcess;
  /* 0x0038 */ void* SystemProcessHandle;
  union
  {
    /* 0x003c */ unsigned long PartitionFlags;
    /* 0x003c */ unsigned long PairedWithJob : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
} EPARTITION, *PEPARTITION; /* size: 0x0040 */

