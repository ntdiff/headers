typedef struct _TRACE_PROVIDER_INSTANCE_INFO
{
  /* 0x0000 */ unsigned long NextOffset;
  /* 0x0004 */ unsigned long EnableCount;
  /* 0x0008 */ unsigned long Pid;
  /* 0x000c */ unsigned long Flags;
} TRACE_PROVIDER_INSTANCE_INFO, *PTRACE_PROVIDER_INSTANCE_INFO; /* size: 0x0010 */

