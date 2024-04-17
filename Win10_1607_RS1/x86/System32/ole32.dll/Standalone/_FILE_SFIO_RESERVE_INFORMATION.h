typedef struct _FILE_SFIO_RESERVE_INFORMATION
{
  /* 0x0000 */ unsigned long RequestsPerPeriod;
  /* 0x0004 */ unsigned long Period;
  /* 0x0008 */ unsigned char RetryFailures;
  /* 0x0009 */ unsigned char Discardable;
  /* 0x000c */ unsigned long RequestSize;
  /* 0x0010 */ unsigned long NumOutstandingRequests;
} FILE_SFIO_RESERVE_INFORMATION, *PFILE_SFIO_RESERVE_INFORMATION; /* size: 0x0014 */

