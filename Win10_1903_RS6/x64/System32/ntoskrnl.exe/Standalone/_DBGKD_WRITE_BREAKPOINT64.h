typedef struct _DBGKD_WRITE_BREAKPOINT64
{
  /* 0x0000 */ unsigned __int64 BreakPointAddress;
  /* 0x0008 */ unsigned long BreakPointHandle;
  /* 0x000c */ long __PADDING__[1];
} DBGKD_WRITE_BREAKPOINT64, *PDBGKD_WRITE_BREAKPOINT64; /* size: 0x0010 */

