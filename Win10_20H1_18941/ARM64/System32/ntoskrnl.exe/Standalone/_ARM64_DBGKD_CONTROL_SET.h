typedef struct _ARM64_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long Continue;
  /* 0x0004 */ unsigned long TraceFlag;
  /* 0x0008 */ unsigned __int64 CurrentSymbolStart;
  /* 0x0010 */ unsigned __int64 CurrentSymbolEnd;
} ARM64_DBGKD_CONTROL_SET, *PARM64_DBGKD_CONTROL_SET; /* size: 0x0018 */

