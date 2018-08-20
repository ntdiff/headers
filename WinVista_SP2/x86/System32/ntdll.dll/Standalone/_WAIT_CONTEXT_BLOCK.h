typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0008 */ unsigned long SortKey;
  /* 0x000c */ unsigned char Inserted;
  /* 0x000d */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0010 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
  /* 0x0010 */ void* DeviceRoutine /* function */;
  /* 0x0014 */ void* DeviceContext;
  /* 0x0018 */ unsigned long NumberOfMapRegisters;
  /* 0x001c */ void* DeviceObject;
  /* 0x0020 */ void* CurrentIrp;
  /* 0x0024 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0028 */

