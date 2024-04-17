typedef struct _TAPE_SET_DRIVE_PARAMETERS
{
  /* 0x0000 */ unsigned char ECC;
  /* 0x0001 */ unsigned char Compression;
  /* 0x0002 */ unsigned char DataPadding;
  /* 0x0003 */ unsigned char ReportSetmarks;
  /* 0x0004 */ unsigned long EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS, *PTAPE_SET_DRIVE_PARAMETERS; /* size: 0x0008 */

