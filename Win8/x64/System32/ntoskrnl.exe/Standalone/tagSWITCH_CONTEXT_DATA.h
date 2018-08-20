typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSWITCH_CONTEXT_DATA
{
  /* 0x0000 */ struct _GUID guPlatform;
  /* 0x0010 */ struct _GUID guMinPlatform;
  /* 0x0020 */ unsigned long ulElementCount;
  /* 0x0024 */ unsigned short ulContextMinimum;
  /* 0x0028 */ unsigned __int64 ullOsMaxVersionTested;
  /* 0x0030 */ struct _GUID guElements[1];
}; /* size: 0x0040 */

