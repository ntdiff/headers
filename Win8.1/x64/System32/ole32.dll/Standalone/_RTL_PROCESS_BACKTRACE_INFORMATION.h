typedef struct _RTL_PROCESS_BACKTRACE_INFORMATION
{
  /* 0x0000 */ char* SymbolicBackTrace;
  /* 0x0008 */ unsigned long TraceCount;
  /* 0x000c */ unsigned short Index;
  /* 0x000e */ unsigned short Depth;
  /* 0x0010 */ void* BackTrace[32];
} RTL_PROCESS_BACKTRACE_INFORMATION, *PRTL_PROCESS_BACKTRACE_INFORMATION; /* size: 0x0110 */

