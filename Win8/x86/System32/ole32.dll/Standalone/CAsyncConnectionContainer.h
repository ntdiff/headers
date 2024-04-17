class CAsyncConnection
{
  /* 0x0004 */ struct IConnectionPointContainer* _pCPC;
  /* 0x0008 */ struct IDocfileAsyncConnectionPoint* _pdacp;
  /* 0x000c */ unsigned long _dwAsyncFlags;
  /* 0x0010 */ long _cReferences;
}; /* size: 0x0014 */

class CAsyncConnectionContainer
{
  /* 0x0004 */ class CAsyncConnection _cpoint;
}; /* size: 0x0018 */

