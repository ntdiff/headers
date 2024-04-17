typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SCMREGKEY
{
  /* 0x0000 */ unsigned __int64 dwEntryLoc;
  /* 0x0008 */ unsigned long dwHash;
  /* 0x000c */ unsigned long dwScmId;
} SCMREGKEY, *PSCMREGKEY; /* size: 0x0010 */

typedef struct _MgotScmToken
{
  /* 0x0000 */ struct _GUID clsid;
  /* 0x0010 */ struct _SCMREGKEY srkRegKey;
} MgotScmToken, *PMgotScmToken; /* size: 0x0020 */

