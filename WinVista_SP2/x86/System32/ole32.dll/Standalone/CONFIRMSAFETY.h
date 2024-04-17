typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct CONFIRMSAFETY
{
  /* 0x0000 */ struct _GUID clsid;
  /* 0x0010 */ struct IUnknown* pUnk;
  /* 0x0014 */ unsigned long dwFlags;
}; /* size: 0x0018 */

