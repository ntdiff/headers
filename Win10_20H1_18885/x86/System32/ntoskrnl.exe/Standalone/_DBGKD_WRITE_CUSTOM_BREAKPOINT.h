typedef struct _DBGKD_WRITE_CUSTOM_BREAKPOINT
{
  /* 0x0000 */ unsigned __int64 BreakPointAddress;
  /* 0x0008 */ unsigned __int64 BreakPointInstruction;
  /* 0x0010 */ unsigned long BreakPointHandle;
  /* 0x0014 */ unsigned char BreakPointInstructionSize;
  /* 0x0015 */ unsigned char BreakPointInstructionAlignment;
  /* 0x0016 */ char __PADDING__[2];
} DBGKD_WRITE_CUSTOM_BREAKPOINT, *PDBGKD_WRITE_CUSTOM_BREAKPOINT; /* size: 0x0018 */

