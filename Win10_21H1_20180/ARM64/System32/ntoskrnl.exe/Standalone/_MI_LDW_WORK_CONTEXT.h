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

typedef struct _MI_LDW_WORK_CONTEXT
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ struct _FILE_OBJECT* FileObject;
  /* 0x0028 */ long ErrorStatus;
  /* 0x002c */ volatile long Active;
  /* 0x0030 */ unsigned char FreeWhenDone;
  /* 0x0031 */ char __PADDING__[7];
} MI_LDW_WORK_CONTEXT, *PMI_LDW_WORK_CONTEXT; /* size: 0x0038 */

