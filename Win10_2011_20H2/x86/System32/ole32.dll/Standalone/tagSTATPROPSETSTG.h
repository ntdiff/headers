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

struct tagSTATPROPSETSTG
{
  /* 0x0000 */ struct _GUID fmtid;
  /* 0x0010 */ struct _GUID clsid;
  /* 0x0020 */ unsigned long grfFlags;
  /* 0x0024 */ struct _FILETIME mtime;
  /* 0x002c */ struct _FILETIME ctime;
  /* 0x0034 */ struct _FILETIME atime;
  /* 0x003c */ unsigned long dwOSVersion;
}; /* size: 0x0040 */

