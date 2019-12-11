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

typedef struct _NDIS_DPC_WORK_ITEM
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0028 */ void* InterruptContext;
  /* 0x0030 */ void* SystemArgument1;
  /* 0x0038 */ void* SystemArgument2;
  /* 0x0040 */ unsigned long TargetCpu;
  /* 0x0044 */ unsigned long Flags;
  /* 0x0048 */ unsigned __int64 Lock;
} NDIS_DPC_WORK_ITEM, *PNDIS_DPC_WORK_ITEM; /* size: 0x0050 */

