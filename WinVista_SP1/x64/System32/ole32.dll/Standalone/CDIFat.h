class CFatVector
{
  /* 0x0030 */ unsigned short _csectTable;
  /* 0x0032 */ unsigned short _csectBlock;
}; /* size: 0x0038 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CDIFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0038 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0040 */ unsigned long _cfsTable;
  /* 0x0044 */ int _fDoingFixup;
  /* 0x0048 */ unsigned long _cUnmarked;
  /* 0x004c */ unsigned long _sectUnmarked[8];
  /* 0x006c */ unsigned long _sectMarkTo[8];
  /* 0x008c */ unsigned long _sectFree[8];
}; /* size: 0x00b0 */

