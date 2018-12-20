typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _ETW_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _ETWP_NOTIFICATION_HEADER* DataBlock;
  /* 0x0018 */ struct _ETW_REG_ENTRY* RegEntry;
  /* 0x0020 */ struct _ETW_REG_ENTRY* ReplyObject;
  /* 0x0028 */ void* WakeReference;
  /* 0x0030 */ unsigned short RegIndex;
  /* 0x0032 */ unsigned short ReplyIndex;
  /* 0x0034 */ unsigned long Flags;
} ETW_QUEUE_ENTRY, *PETW_QUEUE_ENTRY; /* size: 0x0038 */

