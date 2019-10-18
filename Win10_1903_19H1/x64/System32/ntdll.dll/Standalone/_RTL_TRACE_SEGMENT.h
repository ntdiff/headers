typedef struct _RTL_TRACE_SEGMENT
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0008 */ struct _RTL_TRACE_DATABASE* Database;
  /* 0x0010 */ struct _RTL_TRACE_SEGMENT* NextSegment;
  /* 0x0018 */ unsigned __int64 TotalSize;
  /* 0x0020 */ char* SegmentStart;
  /* 0x0028 */ char* SegmentEnd;
  /* 0x0030 */ char* SegmentFree;
} RTL_TRACE_SEGMENT, *PRTL_TRACE_SEGMENT; /* size: 0x0038 */

