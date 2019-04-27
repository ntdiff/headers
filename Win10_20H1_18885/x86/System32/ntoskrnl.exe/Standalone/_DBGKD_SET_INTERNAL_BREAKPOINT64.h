typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT64
{
  /* 0x0000 */ unsigned __int64 BreakpointAddress;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ long __PADDING__[1];
} DBGKD_SET_INTERNAL_BREAKPOINT64, *PDBGKD_SET_INTERNAL_BREAKPOINT64; /* size: 0x0010 */

