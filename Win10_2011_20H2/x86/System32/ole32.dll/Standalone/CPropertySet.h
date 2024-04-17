typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagPROPHEADER
{
  /* 0x0000 */ unsigned short wByteOrder;
  /* 0x0002 */ unsigned short wFormat;
  /* 0x0004 */ unsigned long dwOSVer;
  /* 0x0008 */ struct _GUID clsID;
  /* 0x0018 */ unsigned long cSections;
}; /* size: 0x001c */

class CArray<CPropertySection *,CPropertySection * &>
{
  /* 0x0000 */ class CPropertySection** m_pData;
  /* 0x0004 */ int m_nSize;
  /* 0x0008 */ int m_nMaxSize;
  /* 0x000c */ int m_nGrowBy;
}; /* size: 0x0010 */

class CPropertySet
{
  /* 0x0000 */ struct tagPROPHEADER m_PH;
  /* 0x001c */ class CArray<CPropertySection *,CPropertySection * &> m_SectionList;
}; /* size: 0x002c */

