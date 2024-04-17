typedef struct _RTL_PROCESS_BACKTRACE_INFORMATION
{
  /* 0x0000 */ char* SymbolicBackTrace;
  /* 0x0008 */ unsigned long TraceCount;
  /* 0x000c */ unsigned short Index;
  /* 0x000e */ unsigned short Depth;
  /* 0x0010 */ void* BackTrace[32];
} RTL_PROCESS_BACKTRACE_INFORMATION, *PRTL_PROCESS_BACKTRACE_INFORMATION; /* size: 0x0110 */

typedef struct _RTL_PROCESS_BACKTRACES
{
  /* 0x0000 */ unsigned __int64 CommittedMemory;
  /* 0x0008 */ unsigned __int64 ReservedMemory;
  /* 0x0010 */ unsigned long NumberOfBackTraceLookups;
  /* 0x0014 */ unsigned long NumberOfBackTraces;
  /* 0x0018 */ struct _RTL_PROCESS_BACKTRACE_INFORMATION BackTraces[1];
} RTL_PROCESS_BACKTRACES, *PRTL_PROCESS_BACKTRACES; /* size: 0x0128 */

