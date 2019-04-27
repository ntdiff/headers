typedef struct _DBGKD_READ_WRITE_IO32
{
  /* 0x0000 */ unsigned long DataSize;
  /* 0x0004 */ unsigned long IoAddress;
  /* 0x0008 */ unsigned long DataValue;
} DBGKD_READ_WRITE_IO32, *PDBGKD_READ_WRITE_IO32; /* size: 0x000c */

