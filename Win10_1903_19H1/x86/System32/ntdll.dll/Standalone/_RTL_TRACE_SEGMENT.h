typedef struct _RTL_TRACE_SEGMENT
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ struct _RTL_TRACE_DATABASE* Database;
  /* 0x0008 */ struct _RTL_TRACE_SEGMENT* NextSegment;
  /* 0x000c */ unsigned long TotalSize;
  /* 0x0010 */ char* SegmentStart;
  /* 0x0014 */ char* SegmentEnd;
  /* 0x0018 */ char* SegmentFree;
} RTL_TRACE_SEGMENT, *PRTL_TRACE_SEGMENT; /* size: 0x001c */

