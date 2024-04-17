typedef struct _IO_COUNTERS
{
  /* 0x0000 */ unsigned __int64 ReadOperationCount;
  /* 0x0008 */ unsigned __int64 WriteOperationCount;
  /* 0x0010 */ unsigned __int64 OtherOperationCount;
  /* 0x0018 */ unsigned __int64 ReadTransferCount;
  /* 0x0020 */ unsigned __int64 WriteTransferCount;
  /* 0x0028 */ unsigned __int64 OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS; /* size: 0x0030 */

