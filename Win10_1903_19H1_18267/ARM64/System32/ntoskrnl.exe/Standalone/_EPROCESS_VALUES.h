typedef struct _EPROCESS_VALUES
{
  /* 0x0000 */ unsigned __int64 KernelTime;
  /* 0x0008 */ unsigned __int64 UserTime;
  /* 0x0010 */ unsigned __int64 ReadyTime;
  /* 0x0018 */ unsigned __int64 CycleTime;
  /* 0x0020 */ unsigned __int64 ContextSwitches;
  /* 0x0028 */ __int64 ReadOperationCount;
  /* 0x0030 */ __int64 WriteOperationCount;
  /* 0x0038 */ __int64 OtherOperationCount;
  /* 0x0040 */ __int64 ReadTransferCount;
  /* 0x0048 */ __int64 WriteTransferCount;
  /* 0x0050 */ __int64 OtherTransferCount;
} EPROCESS_VALUES, *PEPROCESS_VALUES; /* size: 0x0058 */

