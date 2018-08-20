typedef struct _TRACE_ENABLE_CONTEXT_EX
{
  /* 0x0000 */ unsigned short LoggerId;
  /* 0x0002 */ unsigned char Level;
  /* 0x0003 */ unsigned char InternalFlag;
  /* 0x0004 */ unsigned long EnableFlags;
  /* 0x0008 */ unsigned long EnableFlagsHigh;
  /* 0x000c */ unsigned long Reserved;
} TRACE_ENABLE_CONTEXT_EX, *PTRACE_ENABLE_CONTEXT_EX; /* size: 0x0010 */

