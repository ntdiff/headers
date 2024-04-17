typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CORE_PRINTER_DRIVERA
{
  /* 0x0000 */ struct _GUID CoreDriverGUID;
  /* 0x0010 */ struct _FILETIME ftDriverDate;
  /* 0x0018 */ unsigned __int64 dwlDriverVersion;
  /* 0x0020 */ char szPackageID[260];
  /* 0x0124 */ long __PADDING__[1];
} CORE_PRINTER_DRIVERA, *PCORE_PRINTER_DRIVERA; /* size: 0x0128 */

