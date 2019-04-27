typedef struct _X86_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long TraceFlag;
  /* 0x0004 */ unsigned long Dr7;
  /* 0x0008 */ unsigned long CurrentSymbolStart;
  /* 0x000c */ unsigned long CurrentSymbolEnd;
} X86_DBGKD_CONTROL_SET, *PX86_DBGKD_CONTROL_SET; /* size: 0x0010 */

