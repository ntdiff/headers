class CArrayFValue
{
  /* 0x0000 */ unsigned char* m_pData;
  /* 0x0004 */ unsigned int m_cbValue;
  /* 0x0008 */ int m_nSize;
  /* 0x000c */ int m_nMaxSize;
  /* 0x0010 */ int m_nGrowBy;
}; /* size: 0x0014 */

class CCliRotHintTable
{
  /* 0x0004 */ void* _hSm;
}; /* size: 0x0008 */

class CRunningObjectTable
{
  /* 0x0008 */ class CArrayFValue _afvRotList;
  /* 0x001c */ class CCliRotHintTable _crht;
  /* 0x0024 */ unsigned short _wSigRotItem;
}; /* size: 0x0028 */

