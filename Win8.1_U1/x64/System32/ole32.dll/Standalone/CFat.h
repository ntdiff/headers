class CFatVector
{
  /* 0x0030 */ unsigned short _csectTable;
  /* 0x0032 */ unsigned short _csectBlock;
}; /* size: 0x0038 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedFatPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0038 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0040 */ const unsigned long _sid;
  /* 0x0048 */ class CBasedFatPtr _pfatReal;
  /* 0x0050 */ class CBasedFatPtr _pfatNoScratch;
  /* 0x0058 */ unsigned long _sectNoSnapshot;
  /* 0x005c */ unsigned long _sectNoSnapshotFree;
  /* 0x0060 */ unsigned short _uFatShift;
  /* 0x0062 */ unsigned short _uFatMask;
  /* 0x0064 */ unsigned long _cfsTable;
  /* 0x0068 */ unsigned long _ulFreeSects;
  /* 0x006c */ unsigned long _cUnmarkedSects;
  /* 0x0070 */ unsigned long _sectFirstFree;
  /* 0x0074 */ unsigned long _sectLastUsed;
  /* 0x0078 */ unsigned long _sectMax;
  /* 0x007c */ unsigned long _ipfsRangeLocks;
  /* 0x0080 */ unsigned short _isectRangeLocks;
}; /* size: 0x0088 */

