typedef struct _FILE_TRACKING_INFORMATION
{
  /* 0x0000 */ void* DestinationFile;
  /* 0x0004 */ unsigned long ObjectInformationLength;
  /* 0x0008 */ char ObjectInformation[1];
  /* 0x0009 */ char __PADDING__[3];
} FILE_TRACKING_INFORMATION, *PFILE_TRACKING_INFORMATION; /* size: 0x000c */

