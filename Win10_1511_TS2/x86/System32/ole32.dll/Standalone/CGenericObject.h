typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CClass
{
  /* 0x0000 */ struct _GUID m_clsid;
  /* 0x0010 */ wchar_t* m_szClsid;
}; /* size: 0x0014 */

class CData
{
  /* 0x0000 */ unsigned long m_cbSize;
  /* 0x0004 */ void* m_pv;
  /* 0x0008 */ void* m_h;
  /* 0x000c */ int m_fNoFree;
}; /* size: 0x0010 */

class CGenericObject
{
  /* 0x0000 */ class CClass m_class;
  /* 0x0014 */ class CClass m_classLast;
  /* 0x0028 */ class CPres* m_ppres;
  /* 0x002c */ class CData m_dataNative;
  /* 0x003c */ int m_fLink;
  /* 0x0040 */ int m_fStatic;
  /* 0x0044 */ int m_fNoBlankPres;
  /* 0x0048 */ wchar_t* m_szTopic;
  /* 0x004c */ wchar_t* m_szItem;
  /* 0x0050 */ unsigned long m_lnkupdopt;
}; /* size: 0x0054 */

