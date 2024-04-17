class CFatVector
{
  /* 0x001c */ unsigned short _csectTable;
  /* 0x001e */ unsigned short _csectBlock;
}; /* size: 0x0020 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedFatPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0020 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0024 */ const unsigned long _sid;
  /* 0x0028 */ class CBasedFatPtr _pfatReal;
  /* 0x002c */ class CBasedFatPtr _pfatNoScratch;
  /* 0x0030 */ unsigned long _sectNoSnapshot;
  /* 0x0034 */ unsigned long _sectNoSnapshotFree;
  /* 0x0038 */ unsigned short _uFatShift;
  /* 0x003a */ unsigned short _uFatMask;
  /* 0x003c */ unsigned long _cfsTable;
  /* 0x0040 */ unsigned long _ulFreeSects;
  /* 0x0044 */ unsigned long _cUnmarkedSects;
  /* 0x0048 */ unsigned long _sectFirstFree;
  /* 0x004c */ unsigned long _sectLastUsed;
  /* 0x0050 */ unsigned long _sectMax;
  /* 0x0054 */ unsigned long _ipfsRangeLocks;
  /* 0x0058 */ unsigned short _isectRangeLocks;
}; /* size: 0x005c */

