typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct INTERFACE_HELPER_CLSID
{
  /* 0x0030 */ struct _GUID m_clsid;
  /* 0x0040 */ int m_fDisableTypeLib;
  /* 0x0044 */ int m_fDisableAll;
  /* 0x0048 */ int m_fFoundHelper;
  /* 0x004c */ long __PADDING__[1];
}; /* size: 0x0050 */

