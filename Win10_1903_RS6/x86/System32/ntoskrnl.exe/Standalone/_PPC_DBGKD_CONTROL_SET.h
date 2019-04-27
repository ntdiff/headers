typedef struct _PPC_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned long CurrentSymbolStart;
  /* 0x0008 */ unsigned long CurrentSymbolEnd;
} PPC_DBGKD_CONTROL_SET, *PPPC_DBGKD_CONTROL_SET; /* size: 0x000c */

