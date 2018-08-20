typedef struct _TRACE_ENABLE_CONTEXT
{
  /* 0x0000 */ unsigned short LoggerId;
  /* 0x0002 */ unsigned char Level;
  /* 0x0003 */ unsigned char InternalFlag;
  /* 0x0004 */ unsigned long EnableFlags;
} TRACE_ENABLE_CONTEXT, *PTRACE_ENABLE_CONTEXT; /* size: 0x0008 */

