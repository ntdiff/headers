typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

typedef struct _RTL_TRACE_DATABASE
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Tag;
  /* 0x000c */ struct _RTL_TRACE_SEGMENT* SegmentList;
  /* 0x0010 */ unsigned long MaximumSize;
  /* 0x0014 */ unsigned long CurrentSize;
  /* 0x0018 */ void* Owner;
  /* 0x001c */ struct _RTL_CRITICAL_SECTION Lock;
  /* 0x0034 */ unsigned long NoOfBuckets;
  /* 0x0038 */ struct _RTL_TRACE_BLOCK** Buckets;
  /* 0x003c */ void* HashFunction /* function */;
  /* 0x0040 */ unsigned long NoOfTraces;
  /* 0x0044 */ unsigned long NoOfHits;
  /* 0x0048 */ unsigned long HashCounter[16];
} RTL_TRACE_DATABASE, *PRTL_TRACE_DATABASE; /* size: 0x0088 */

