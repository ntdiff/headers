typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT64
{
  /* 0x0000 */ unsigned __int64 BreakpointAddress;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Calls;
  /* 0x0010 */ unsigned long MaxCallsPerPeriod;
  /* 0x0014 */ unsigned long MinInstructions;
  /* 0x0018 */ unsigned long MaxInstructions;
  /* 0x001c */ unsigned long TotalInstructions;
} DBGKD_GET_INTERNAL_BREAKPOINT64, *PDBGKD_GET_INTERNAL_BREAKPOINT64; /* size: 0x0020 */

