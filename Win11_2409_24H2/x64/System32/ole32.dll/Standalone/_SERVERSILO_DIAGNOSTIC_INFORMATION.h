typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SERVERSILO_DIAGNOSTIC_INFORMATION
{
  /* 0x0000 */ struct _GUID ReportId;
  /* 0x0010 */ long ExitStatus;
  /* 0x0014 */ wchar_t CriticalProcessName[15];
  /* 0x0032 */ char __PADDING__[2];
} SERVERSILO_DIAGNOSTIC_INFORMATION, *PSERVERSILO_DIAGNOSTIC_INFORMATION; /* size: 0x0034 */

