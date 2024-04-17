typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _nlsversioninfoex
{
  /* 0x0000 */ unsigned long dwNLSVersionInfoSize;
  /* 0x0004 */ unsigned long dwNLSVersion;
  /* 0x0008 */ unsigned long dwDefinedVersion;
  /* 0x000c */ unsigned long dwEffectiveId;
  /* 0x0010 */ struct _GUID guidCustomVersion;
} nlsversioninfoex, *Pnlsversioninfoex; /* size: 0x0020 */

