enum MAPPED_STREAM_OPTS
{
  MAPPED_STREAM_CREATE = 0,
  MAPPED_STREAM_QI = 1,
};

class CPropertySetStorage
{
  /* 0x0004 */ struct IStorage* _pstg;
  /* 0x0008 */ struct IBlockingLock* _pBlockingLock;
  /* 0x000c */ unsigned long _ulSig;
  /* 0x0010 */ int _fContainingStgIsRefed : 1; /* bit position: 0 */
  /* 0x0014 */ enum MAPPED_STREAM_OPTS _MSOpts;
  /* 0x0018 */ long _cReferences;
}; /* size: 0x001c */

