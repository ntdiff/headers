class CMapKeyToValue
{
  /* 0x0000 */ unsigned int m_cbValue;
  /* 0x0004 */ unsigned int m_cbKey;
  /* 0x0008 */ unsigned int m_cbKeyInAssoc;
  /* 0x000c */ struct CMapKeyToValue::CAssoc** m_pHashTable;
  /* 0x0010 */ unsigned int m_nHashTableSize;
  /* 0x0014 */ void* m_lpfnHashKey /* function */;
  /* 0x0018 */ int m_nCount;
  /* 0x001c */ struct CMapKeyToValue::CAssoc* m_pFreeList;
  /* 0x0020 */ struct CPlex* m_pBlocks;
  /* 0x0024 */ int m_nBlockSize;
}; /* size: 0x0028 */

class CMapUintPtr
{
  /* 0x0000 */ class CMapKeyToValue m_mkv;
}; /* size: 0x0028 */

