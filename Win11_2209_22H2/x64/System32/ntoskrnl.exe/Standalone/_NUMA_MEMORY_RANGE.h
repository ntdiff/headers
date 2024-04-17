typedef struct _NUMA_MEMORY_RANGE
{
  /* 0x0000 */ unsigned long ProximityId;
  /* 0x0008 */ unsigned __int64 BasePage;
  /* 0x0010 */ unsigned __int64 EndPage;
} NUMA_MEMORY_RANGE, *PNUMA_MEMORY_RANGE; /* size: 0x0018 */

