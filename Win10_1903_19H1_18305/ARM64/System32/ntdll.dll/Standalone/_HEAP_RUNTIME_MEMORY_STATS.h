typedef struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS
{
  /* 0x0000 */ volatile unsigned __int64 SmallPagesInUseWithinLarge;
  /* 0x0008 */ volatile unsigned __int64 OpportunisticLargePageCount;
} HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS, *PHEAP_OPPORTUNISTIC_LARGE_PAGE_STATS; /* size: 0x0010 */

typedef struct _RTL_HP_SEG_ALLOC_POLICY
{
  /* 0x0000 */ unsigned __int64 MinLargePages;
  /* 0x0008 */ unsigned __int64 MaxLargePages;
  /* 0x0010 */ unsigned char MinUtilization;
  /* 0x0011 */ char __PADDING__[7];
} RTL_HP_SEG_ALLOC_POLICY, *PRTL_HP_SEG_ALLOC_POLICY; /* size: 0x0018 */

typedef struct _HEAP_RUNTIME_MEMORY_STATS
{
  /* 0x0000 */ volatile unsigned __int64 TotalReservedPages;
  /* 0x0008 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0010 */ unsigned __int64 FreeCommittedPages;
  /* 0x0018 */ unsigned __int64 LfhFreeCommittedPages;
  /* 0x0020 */ struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];
  /* 0x0040 */ struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;
} HEAP_RUNTIME_MEMORY_STATS, *PHEAP_RUNTIME_MEMORY_STATS; /* size: 0x0058 */

