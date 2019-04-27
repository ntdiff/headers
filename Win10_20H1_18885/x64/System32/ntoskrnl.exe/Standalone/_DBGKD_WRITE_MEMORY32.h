typedef struct _DBGKD_WRITE_MEMORY32
{
  /* 0x0000 */ unsigned long TargetBaseAddress;
  /* 0x0004 */ unsigned long TransferCount;
  /* 0x0008 */ unsigned long ActualBytesWritten;
} DBGKD_WRITE_MEMORY32, *PDBGKD_WRITE_MEMORY32; /* size: 0x000c */

