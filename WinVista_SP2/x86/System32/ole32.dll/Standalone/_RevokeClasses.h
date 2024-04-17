typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RevokeEntry
{
  /* 0x0000 */ struct _GUID clsid;
  /* 0x0010 */ unsigned long dwReg;
} RevokeEntry, *PRevokeEntry; /* size: 0x0014 */

typedef struct _RevokeClasses
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ struct _RevokeEntry revent[1];
} RevokeClasses, *PRevokeClasses; /* size: 0x0018 */

