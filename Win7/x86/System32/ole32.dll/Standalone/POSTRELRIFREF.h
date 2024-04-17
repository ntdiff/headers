typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagREMINTERFACEREF
{
  /* 0x0000 */ struct _GUID ipid;
  /* 0x0010 */ unsigned long cPublicRefs;
  /* 0x0014 */ unsigned long cPrivateRefs;
}; /* size: 0x0018 */

struct POSTRELRIFREF
{
  /* 0x0008 */ long cRefs;
  /* 0x000c */ class OXIDEntry* pOXIDEntry;
  /* 0x0010 */ struct IRemUnknown* pRemUnk;
  /* 0x0014 */ int fReleaseRemUnkProxy;
  /* 0x0018 */ struct IUnknown* pAsyncRelease;
  /* 0x001c */ unsigned short cRifRef;
  /* 0x0020 */ struct tagREMINTERFACEREF arRifRef;
}; /* size: 0x0038 */

