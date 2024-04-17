class CDirVector
{
  /* 0x0030 */ unsigned short _cbSector;
}; /* size: 0x0038 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CDirectory
{
  /* 0x0000 */ class CDirVector _dv;
  /* 0x0038 */ unsigned long _cdsTable;
  /* 0x0040 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0048 */ unsigned short _cdeEntries;
  /* 0x004c */ unsigned long _sidFirstFree;
}; /* size: 0x0050 */

