typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0010 */ unsigned long SortKey;
  /* 0x0014 */ unsigned char Inserted;
  /* 0x0015 */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0018 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY DmaWaitEntry;
      /* 0x0010 */ unsigned long NumberOfChannels;
      struct /* bitfield */
      {
        /* 0x0014 */ unsigned long SyncCallback : 1; /* bit position: 0 */
        /* 0x0014 */ unsigned long DmaContext : 1; /* bit position: 1 */
        /* 0x0014 */ unsigned long Reserved : 30; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ void* DeviceRoutine /* function */;
  /* 0x0020 */ void* DeviceContext;
  /* 0x0028 */ unsigned long NumberOfMapRegisters;
  /* 0x0030 */ void* DeviceObject;
  /* 0x0038 */ void* CurrentIrp;
  /* 0x0040 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0048 */

