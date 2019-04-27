typedef struct _RTL_TRACE_BLOCK
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long UserCount;
  /* 0x0010 */ unsigned long UserSize;
  /* 0x0014 */ void* UserContext;
  /* 0x0018 */ struct _RTL_TRACE_BLOCK* Next;
  /* 0x001c */ void** Trace;
} RTL_TRACE_BLOCK, *PRTL_TRACE_BLOCK; /* size: 0x0020 */

