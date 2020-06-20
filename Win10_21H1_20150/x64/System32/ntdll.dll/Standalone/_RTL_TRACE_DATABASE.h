typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

typedef struct _RTL_TRACE_DATABASE
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Tag;
  /* 0x0010 */ struct _RTL_TRACE_SEGMENT* SegmentList;
  /* 0x0018 */ unsigned __int64 MaximumSize;
  /* 0x0020 */ unsigned __int64 CurrentSize;
  /* 0x0028 */ void* Owner;
  /* 0x0030 */ struct _RTL_CRITICAL_SECTION Lock;
  /* 0x0058 */ unsigned long NoOfBuckets;
  /* 0x0060 */ struct _RTL_TRACE_BLOCK** Buckets;
  /* 0x0068 */ void* HashFunction /* function */;
  /* 0x0070 */ unsigned __int64 NoOfTraces;
  /* 0x0078 */ unsigned __int64 NoOfHits;
  /* 0x0080 */ unsigned long HashCounter[16];
} RTL_TRACE_DATABASE, *PRTL_TRACE_DATABASE; /* size: 0x00c0 */

