typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSECTIONHEADER
{
  /* 0x0000 */ unsigned long cbSection;
  /* 0x0004 */ unsigned long cProperties;
}; /* size: 0x0008 */

class CArray<CProperty *,CProperty * &>
{
  /* 0x0000 */ class CProperty** m_pData;
  /* 0x0008 */ int m_nSize;
  /* 0x000c */ int m_nMaxSize;
  /* 0x0010 */ int m_nGrowBy;
}; /* size: 0x0018 */

class CMap<unsigned short *,unsigned short * &,unsigned long,unsigned long &>
{
  /* 0x0000 */ struct CMap<unsigned short *,unsigned short * &,unsigned long,unsigned long &>::CAssoc** m_pHashTable;
  /* 0x0008 */ unsigned int m_nHashTableSize;
  /* 0x000c */ int m_nCount;
  /* 0x0010 */ struct CMap<unsigned short *,unsigned short * &,unsigned long,unsigned long &>::CAssoc* m_pFreeList;
  /* 0x0018 */ struct CPlex* m_pBlocks;
  /* 0x0020 */ int m_nBlockSize;
}; /* size: 0x0028 */

class CPropertySection
{
  /* 0x0000 */ struct _GUID m_FormatID;
  /* 0x0010 */ struct tagSECTIONHEADER m_SH;
  /* 0x0018 */ class CArray<CProperty *,CProperty * &> m_PropList;
  /* 0x0030 */ class CMap<unsigned short *,unsigned short * &,unsigned long,unsigned long &> m_NameDict;
  /* 0x0058 */ wchar_t* m_pwszSectionName;
}; /* size: 0x0060 */

