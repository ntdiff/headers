typedef struct _ETW_SESSION_PERF_COUNTERS
{
  /* 0x0000 */ long BufferMemoryPagedPool;
  /* 0x0004 */ long BufferMemoryNonPagedPool;
  /* 0x0008 */ unsigned __int64 EventsLoggedCount;
  /* 0x0010 */ long EventsLost;
  /* 0x0014 */ long NumConsumers;
} ETW_SESSION_PERF_COUNTERS, *PETW_SESSION_PERF_COUNTERS; /* size: 0x0018 */

