typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct ClassMonikerData
{
  /* 0x0000 */ struct _GUID clsid;
  /* 0x0010 */ unsigned long cbExtra;
}; /* size: 0x0014 */

class CClassMoniker
{
  /* 0x000c */ long _cRefs;
  /* 0x0010 */ struct ClassMonikerData _data;
  /* 0x0024 */ void* _pExtra;
  /* 0x0028 */ wchar_t* _pszCodeBase;
  /* 0x002c */ unsigned long _dwFileVersionMS;
  /* 0x0030 */ unsigned long _dwFileVersionLS;
}; /* size: 0x0034 */

