typedef struct _RTL_PROCESS_BACKTRACE_INFORMATION
{
  /* 0x0000 */ char* SymbolicBackTrace;
  /* 0x0004 */ unsigned long TraceCount;
  /* 0x0008 */ unsigned short Index;
  /* 0x000a */ unsigned short Depth;
  /* 0x000c */ void* BackTrace[32];
} RTL_PROCESS_BACKTRACE_INFORMATION, *PRTL_PROCESS_BACKTRACE_INFORMATION; /* size: 0x008c */

