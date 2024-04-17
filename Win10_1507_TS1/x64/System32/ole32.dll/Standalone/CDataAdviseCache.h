class CMapKeyToValue
{
  /* 0x0000 */ unsigned int m_cbValue;
  /* 0x0004 */ unsigned int m_cbKey;
  /* 0x0008 */ unsigned int m_cbKeyInAssoc;
  /* 0x0010 */ struct CMapKeyToValue::CAssoc** m_pHashTable;
  /* 0x0018 */ unsigned int m_nHashTableSize;
  /* 0x0020 */ void* m_lpfnHashKey /* function */;
  /* 0x0028 */ int m_nCount;
  /* 0x0030 */ struct CMapKeyToValue::CAssoc* m_pFreeList;
  /* 0x0038 */ struct CPlex* m_pBlocks;
  /* 0x0040 */ int m_nBlockSize;
}; /* size: 0x0048 */

class CMapDwordDword
{
  /* 0x0000 */ class CMapKeyToValue m_mkv;
}; /* size: 0x0048 */

class CDataAdviseCache
{
  /* 0x0000 */ struct IDataAdviseHolder* m_pDAH;
  /* 0x0008 */ class CMapDwordDword m_mapClientToDelegate;
}; /* size: 0x0050 */

