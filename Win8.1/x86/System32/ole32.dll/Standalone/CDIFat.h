class CFatVector
{
  /* 0x001c */ unsigned short _csectTable;
  /* 0x001e */ unsigned short _csectBlock;
}; /* size: 0x0020 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CDIFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0020 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0024 */ unsigned long _cfsTable;
  /* 0x0028 */ int _fDoingFixup;
  /* 0x002c */ unsigned long _cUnmarked;
  /* 0x0030 */ unsigned long _sectUnmarked[8];
  /* 0x0050 */ unsigned long _sectMarkTo[8];
  /* 0x0070 */ unsigned long _sectFree[8];
}; /* size: 0x0090 */

