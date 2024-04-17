typedef struct _TAPE_GET_DRIVE_PARAMETERS
{
  /* 0x0000 */ unsigned char ECC;
  /* 0x0001 */ unsigned char Compression;
  /* 0x0002 */ unsigned char DataPadding;
  /* 0x0003 */ unsigned char ReportSetmarks;
  /* 0x0004 */ unsigned long DefaultBlockSize;
  /* 0x0008 */ unsigned long MaximumBlockSize;
  /* 0x000c */ unsigned long MinimumBlockSize;
  /* 0x0010 */ unsigned long MaximumPartitionCount;
  /* 0x0014 */ unsigned long FeaturesLow;
  /* 0x0018 */ unsigned long FeaturesHigh;
  /* 0x001c */ unsigned long EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS, *PTAPE_GET_DRIVE_PARAMETERS; /* size: 0x0020 */

