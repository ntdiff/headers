class CNtfsEnumSTATSTG
{
  /* 0x0004 */ unsigned long _ulSig;
  /* 0x0008 */ long _cRefs;
  /* 0x000c */ unsigned long _istatNextToRead;
  /* 0x0010 */ struct IBlockingLock* _pBlockingLock;
  /* 0x0014 */ class CNtfsSTATSTGArray* _pstatstgarray;
}; /* size: 0x0018 */

