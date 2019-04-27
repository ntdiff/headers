typedef struct _DBGKD_READ_WRITE_IO64
{
  /* 0x0000 */ unsigned __int64 IoAddress;
  /* 0x0008 */ unsigned long DataSize;
  /* 0x000c */ unsigned long DataValue;
} DBGKD_READ_WRITE_IO64, *PDBGKD_READ_WRITE_IO64; /* size: 0x0010 */

