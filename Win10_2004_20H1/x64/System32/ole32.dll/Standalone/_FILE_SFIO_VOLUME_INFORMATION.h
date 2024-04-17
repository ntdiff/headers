typedef struct _FILE_SFIO_VOLUME_INFORMATION
{
  /* 0x0000 */ unsigned long MaximumRequestsPerPeriod;
  /* 0x0004 */ unsigned long MinimumPeriod;
  /* 0x0008 */ unsigned long MinimumTransferSize;
} FILE_SFIO_VOLUME_INFORMATION, *PFILE_SFIO_VOLUME_INFORMATION; /* size: 0x000c */

