typedef struct _DBGKD_READ_MEMORY64
{
  /* 0x0000 */ unsigned __int64 TargetBaseAddress;
  /* 0x0008 */ unsigned long TransferCount;
  /* 0x000c */ unsigned long ActualBytesRead;
} DBGKD_READ_MEMORY64, *PDBGKD_READ_MEMORY64; /* size: 0x0010 */

