class CNtfsEnumSTATSTG
{
  /* 0x0008 */ unsigned long _ulSig;
  /* 0x000c */ long _cRefs;
  /* 0x0010 */ unsigned long _istatNextToRead;
  /* 0x0018 */ struct IBlockingLock* _pBlockingLock;
  /* 0x0020 */ class CNtfsSTATSTGArray* _pstatstgarray;
}; /* size: 0x0028 */

