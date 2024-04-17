typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CComNoClassInfo
{
  /* 0x000c */ long m_cRef;
  /* 0x0010 */ struct _GUID m_clsid;
  /* 0x0020 */ wchar_t* m_wszProgID;
  /* 0x0024 */ unsigned long m_ValueFlags;
}; /* size: 0x0028 */

