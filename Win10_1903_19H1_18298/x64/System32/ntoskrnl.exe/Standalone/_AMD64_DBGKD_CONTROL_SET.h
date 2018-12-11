typedef struct _AMD64_DBGKD_CONTROL_SET
{
  /* 0x0000 */ unsigned long TraceFlag;
  /* 0x0004 */ unsigned __int64 Dr7;
  /* 0x000c */ unsigned __int64 CurrentSymbolStart;
  /* 0x0014 */ unsigned __int64 CurrentSymbolEnd;
} AMD64_DBGKD_CONTROL_SET, *PAMD64_DBGKD_CONTROL_SET; /* size: 0x001c */

