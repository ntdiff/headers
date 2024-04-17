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

typedef struct _POP_FX_WORK_POOL_ITEM
{
  /* 0x0000 */ struct _POP_FX_WORK_POOL* WorkPool;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM WorkItem;
} POP_FX_WORK_POOL_ITEM, *PPOP_FX_WORK_POOL_ITEM; /* size: 0x0028 */

