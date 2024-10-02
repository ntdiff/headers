typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PS_CPU_PARTITION
{
  /* 0x0000 */ struct _KCPU_PARTITION* Partition;
  /* 0x0008 */ struct _PS_CPU_PARTITION* Parent;
  /* 0x0010 */ struct _LIST_ENTRY PartitionListEntry;
} PS_CPU_PARTITION, *PPS_CPU_PARTITION; /* size: 0x0020 */

