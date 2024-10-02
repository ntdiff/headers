typedef struct _QUERY_CACHED_RUNS_ENTRY
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long TierNameOffset;
  /* 0x0008 */ unsigned long TierNameLength;
  /* 0x000c */ unsigned long MediaType;
  /* 0x0010 */ __int64 LongestFreedRun;
  /* 0x0018 */ __int64 Alignment;
  /* 0x0020 */ unsigned long TotalBins;
  /* 0x0024 */ unsigned long BinsMatched;
  /* 0x0028 */ unsigned long BinsReturned;
  /* 0x002c */ unsigned long BinsOffset;
  /* 0x0030 */ unsigned long MaxRuns;
  /* 0x0034 */ unsigned long TotalRuns;
  /* 0x0038 */ unsigned long RunsMatched;
  /* 0x003c */ unsigned long RunsReturned;
  /* 0x0040 */ unsigned long RunsOffset;
  /* 0x0044 */ long __PADDING__[1];
} QUERY_CACHED_RUNS_ENTRY, *PQUERY_CACHED_RUNS_ENTRY; /* size: 0x0048 */

