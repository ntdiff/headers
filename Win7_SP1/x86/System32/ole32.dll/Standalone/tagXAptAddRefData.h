struct tagXAptAddRefData
{
  /* 0x0000 */ unsigned short cIfs;
  /* 0x0004 */ struct tagREMINTERFACEREF* pIfRefs;
  /* 0x0008 */ HRESULT* pResults;
  /* 0x000c */ class CRemoteUnknown* pRemUnk;
}; /* size: 0x0010 */

