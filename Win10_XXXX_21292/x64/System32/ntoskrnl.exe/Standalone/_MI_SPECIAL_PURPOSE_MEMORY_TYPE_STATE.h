typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_SPECIAL_PURPOSE_MEMORY_TYPE_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 TypeId;
  /* 0x0018 */ unsigned __int64 Attributes[4];
  /* 0x0038 */ void* PartitionHandle;
  /* 0x0040 */ struct _MI_PARTITION* Partition;
} MI_SPECIAL_PURPOSE_MEMORY_TYPE_STATE, *PMI_SPECIAL_PURPOSE_MEMORY_TYPE_STATE; /* size: 0x0048 */

