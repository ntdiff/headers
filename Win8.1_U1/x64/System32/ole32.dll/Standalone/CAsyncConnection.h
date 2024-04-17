class CAsyncConnection
{
  /* 0x0008 */ struct IConnectionPointContainer* _pCPC;
  /* 0x0010 */ struct IDocfileAsyncConnectionPoint* _pdacp;
  /* 0x0018 */ unsigned long _dwAsyncFlags;
  /* 0x001c */ long _cReferences;
}; /* size: 0x0020 */

