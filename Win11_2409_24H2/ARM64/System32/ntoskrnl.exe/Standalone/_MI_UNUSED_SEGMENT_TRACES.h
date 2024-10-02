typedef struct _MI_UNUSED_SEGMENT_TRACES
{
  /* 0x0000 */ unsigned __int64 ElapsedTime;
  /* 0x0008 */ unsigned __int64 PagesMoved;
  /* 0x0010 */ unsigned __int64 PagesFlushed;
  /* 0x0018 */ unsigned long NumberOfThreads;
  /* 0x001c */ long __PADDING__[1];
} MI_UNUSED_SEGMENT_TRACES, *PMI_UNUSED_SEGMENT_TRACES; /* size: 0x0020 */

