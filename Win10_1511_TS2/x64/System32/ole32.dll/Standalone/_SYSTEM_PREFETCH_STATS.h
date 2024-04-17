typedef struct _SYSTEM_PREFETCH_STATS
{
  /* 0x0000 */ unsigned long DemandFilePageCount;
  /* 0x0004 */ unsigned long DemandFileIOCount;
  /* 0x0008 */ unsigned long TrickleFilePageCount;
  /* 0x000c */ unsigned long TrickleFileIOCount;
  /* 0x0010 */ unsigned long DemandPrivatePageCount;
  /* 0x0014 */ unsigned long DemandPrivateIOCount;
  /* 0x0018 */ unsigned long TricklePrivatePageCount;
  /* 0x001c */ unsigned long TricklePrivateIOCount;
} SYSTEM_PREFETCH_STATS, *PSYSTEM_PREFETCH_STATS; /* size: 0x0020 */

