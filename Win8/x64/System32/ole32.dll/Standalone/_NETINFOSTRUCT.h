typedef struct _NETINFOSTRUCT
{
  /* 0x0000 */ unsigned long cbStructure;
  /* 0x0004 */ unsigned long dwProviderVersion;
  /* 0x0008 */ unsigned long dwStatus;
  /* 0x000c */ unsigned long dwCharacteristics;
  /* 0x0010 */ unsigned __int64 dwHandle;
  /* 0x0018 */ unsigned short wNetType;
  /* 0x001c */ unsigned long dwPrinters;
  /* 0x0020 */ unsigned long dwDrives;
  /* 0x0024 */ long __PADDING__[1];
} NETINFOSTRUCT, *PNETINFOSTRUCT; /* size: 0x0028 */

