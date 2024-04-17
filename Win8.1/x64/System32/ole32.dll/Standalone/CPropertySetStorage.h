enum MAPPED_STREAM_OPTS
{
  MAPPED_STREAM_CREATE = 0,
  MAPPED_STREAM_QI = 1,
};

class CPropertySetStorage
{
  /* 0x0008 */ struct IStorage* _pstg;
  /* 0x0010 */ struct IBlockingLock* _pBlockingLock;
  /* 0x0018 */ unsigned long _ulSig;
  /* 0x001c */ int _fContainingStgIsRefed : 1; /* bit position: 0 */
  /* 0x0020 */ enum MAPPED_STREAM_OPTS _MSOpts;
  /* 0x0024 */ long _cReferences;
}; /* size: 0x0028 */

