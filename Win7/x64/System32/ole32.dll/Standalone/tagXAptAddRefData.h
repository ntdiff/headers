struct tagXAptAddRefData
{
  /* 0x0000 */ unsigned short cIfs;
  /* 0x0008 */ struct tagREMINTERFACEREF* pIfRefs;
  /* 0x0010 */ HRESULT* pResults;
  /* 0x0018 */ class CRemoteUnknown* pRemUnk;
}; /* size: 0x0020 */

