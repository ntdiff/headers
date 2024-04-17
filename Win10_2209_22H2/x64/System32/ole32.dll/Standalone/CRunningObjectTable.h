class CArrayFValue
{
  /* 0x0000 */ unsigned char* m_pData;
  /* 0x0008 */ unsigned int m_cbValue;
  /* 0x000c */ int m_nSize;
  /* 0x0010 */ int m_nMaxSize;
  /* 0x0014 */ int m_nGrowBy;
}; /* size: 0x0018 */

class CCliRotHintTable
{
  /* 0x0008 */ void* _hSm;
}; /* size: 0x0010 */

class CRunningObjectTable
{
  /* 0x0010 */ class CArrayFValue _afvRotList;
  /* 0x0028 */ class CCliRotHintTable _crht;
  /* 0x0038 */ unsigned short _wSigRotItem;
}; /* size: 0x0040 */

