typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PO_DIRECTED_DRIPS_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY QueueLink;
  /* 0x0008 */ struct _LIST_ENTRY VisitedQueueLink;
  /* 0x0010 */ volatile unsigned long Flags;
  /* 0x0014 */ unsigned long CachedFlags;
  /* 0x0018 */ unsigned long DeviceUsageCount;
  /* 0x001c */ void* Diagnostic;
} PO_DIRECTED_DRIPS_STATE, *PPO_DIRECTED_DRIPS_STATE; /* size: 0x0020 */

