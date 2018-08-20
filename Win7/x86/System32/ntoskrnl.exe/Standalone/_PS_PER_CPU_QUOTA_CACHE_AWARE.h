typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PS_PER_CPU_QUOTA_CACHE_AWARE
{
  /* 0x0000 */ struct _LIST_ENTRY SortedListEntry;
  /* 0x0008 */ struct _LIST_ENTRY IdleOnlyListHead;
  /* 0x0010 */ unsigned __int64 CycleBaseAllowance;
  /* 0x0018 */ __int64 CyclesRemaining;
  /* 0x0020 */ unsigned long CurrentGeneration;
  /* 0x0024 */ long __PADDING__[7];
} PS_PER_CPU_QUOTA_CACHE_AWARE, *PPS_PER_CPU_QUOTA_CACHE_AWARE; /* size: 0x0040 */

