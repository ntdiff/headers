typedef struct _ARM_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned long CurrentSymbolStart;
  /* 0x0008 */ unsigned long CurrentSymbolEnd;
} ARM_DBGKD_CONTROL_SET, *PARM_DBGKD_CONTROL_SET; /* size: 0x000c */

