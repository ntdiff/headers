typedef struct _FILE_TRACKING_INFORMATION
{
  /* 0x0000 */ void* DestinationFile;
  /* 0x0008 */ unsigned long ObjectInformationLength;
  /* 0x000c */ char ObjectInformation[1];
  /* 0x000d */ char __PADDING__[3];
} FILE_TRACKING_INFORMATION, *PFILE_TRACKING_INFORMATION; /* size: 0x0010 */

