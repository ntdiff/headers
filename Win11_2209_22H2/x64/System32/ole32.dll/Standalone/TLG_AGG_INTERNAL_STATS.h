struct TLG_AGG_INTERNAL_STATS
{
  /* 0x0000 */ unsigned __int64 TotalEntriesFlushed;
  /* 0x0008 */ unsigned __int64 NumFlushes;
  /* 0x0010 */ unsigned long MaxEntriesStored;
  /* 0x0014 */ unsigned long MaxEntriesFlushed;
  /* 0x0018 */ unsigned long MinEntriesFlushed;
  /* 0x001c */ unsigned long NumBucketLimitReached;
  /* 0x0020 */ unsigned long NumAllocationFailures;
  /* 0x0024 */ unsigned long NumLargeEventFailures;
}; /* size: 0x0028 */

