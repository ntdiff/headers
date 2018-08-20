typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT32
{
  /* 0x0000 */ unsigned long BreakpointAddress;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Calls;
  /* 0x000c */ unsigned long MaxCallsPerPeriod;
  /* 0x0010 */ unsigned long MinInstructions;
  /* 0x0014 */ unsigned long MaxInstructions;
  /* 0x0018 */ unsigned long TotalInstructions;
} DBGKD_GET_INTERNAL_BREAKPOINT32, *PDBGKD_GET_INTERNAL_BREAKPOINT32; /* size: 0x001c */

