typedef struct _EXFAT_STATISTICS
{
  /* 0x0000 */ unsigned long CreateHits;
  /* 0x0004 */ unsigned long SuccessfulCreates;
  /* 0x0008 */ unsigned long FailedCreates;
  /* 0x000c */ unsigned long NonCachedReads;
  /* 0x0010 */ unsigned long NonCachedReadBytes;
  /* 0x0014 */ unsigned long NonCachedWrites;
  /* 0x0018 */ unsigned long NonCachedWriteBytes;
  /* 0x001c */ unsigned long NonCachedDiskReads;
  /* 0x0020 */ unsigned long NonCachedDiskWrites;
} EXFAT_STATISTICS, *PEXFAT_STATISTICS; /* size: 0x0024 */

