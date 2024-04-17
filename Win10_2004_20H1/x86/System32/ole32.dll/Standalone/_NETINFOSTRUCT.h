typedef struct _NETINFOSTRUCT
{
  /* 0x0000 */ unsigned long cbStructure;
  /* 0x0004 */ unsigned long dwProviderVersion;
  /* 0x0008 */ unsigned long dwStatus;
  /* 0x000c */ unsigned long dwCharacteristics;
  /* 0x0010 */ unsigned long dwHandle;
  /* 0x0014 */ unsigned short wNetType;
  /* 0x0018 */ unsigned long dwPrinters;
  /* 0x001c */ unsigned long dwDrives;
} NETINFOSTRUCT, *PNETINFOSTRUCT; /* size: 0x0020 */

