typedef struct _ETW_PERF_COUNTERS
{
  /* 0x0000 */ long TotalActiveSessions;
  /* 0x0004 */ long TotalBufferMemoryNonPagedPool;
  /* 0x0008 */ long TotalBufferMemoryPagedPool;
  /* 0x000c */ long TotalGuidsEnabled;
  /* 0x0010 */ long TotalGuidsNotEnabled;
  /* 0x0014 */ long TotalGuidsPreEnabled;
} ETW_PERF_COUNTERS, *PETW_PERF_COUNTERS; /* size: 0x0018 */

