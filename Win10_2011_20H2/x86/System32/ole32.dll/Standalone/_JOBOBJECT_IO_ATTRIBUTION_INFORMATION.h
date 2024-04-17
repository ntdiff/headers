typedef struct _JOBOBJECT_IO_ATTRIBUTION_STATS
{
  /* 0x0000 */ unsigned long IoCount;
  /* 0x0008 */ unsigned __int64 TotalNonOverlappedQueueTime;
  /* 0x0010 */ unsigned __int64 TotalNonOverlappedServiceTime;
  /* 0x0018 */ unsigned __int64 TotalSize;
} JOBOBJECT_IO_ATTRIBUTION_STATS, *PJOBOBJECT_IO_ATTRIBUTION_STATS; /* size: 0x0020 */

typedef struct _JOBOBJECT_IO_ATTRIBUTION_INFORMATION
{
  /* 0x0000 */ unsigned long ControlFlags;
  /* 0x0008 */ struct _JOBOBJECT_IO_ATTRIBUTION_STATS ReadStats;
  /* 0x0028 */ struct _JOBOBJECT_IO_ATTRIBUTION_STATS WriteStats;
} JOBOBJECT_IO_ATTRIBUTION_INFORMATION, *PJOBOBJECT_IO_ATTRIBUTION_INFORMATION; /* size: 0x0048 */

