typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct INTERFACE_HELPER_CLSID
{
  /* 0x0020 */ struct _GUID m_clsid;
  /* 0x0030 */ int m_fDisableTypeLib;
  /* 0x0034 */ int m_fDisableAll;
  /* 0x0038 */ int m_fFoundHelper;
}; /* size: 0x003c */

