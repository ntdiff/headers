typedef struct _RTL_TRACE_BLOCK
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ unsigned long Size;
  /* 0x0010 */ unsigned __int64 UserCount;
  /* 0x0018 */ unsigned __int64 UserSize;
  /* 0x0020 */ void* UserContext;
  /* 0x0028 */ struct _RTL_TRACE_BLOCK* Next;
  /* 0x0030 */ void** Trace;
} RTL_TRACE_BLOCK, *PRTL_TRACE_BLOCK; /* size: 0x0038 */

