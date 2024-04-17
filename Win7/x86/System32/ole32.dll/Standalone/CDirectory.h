class CDirVector
{
  /* 0x001c */ unsigned short _cbSector;
}; /* size: 0x0020 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CDirectory
{
  /* 0x0000 */ class CDirVector _dv;
  /* 0x0020 */ unsigned long _cdsTable;
  /* 0x0024 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0028 */ unsigned short _cdeEntries;
  /* 0x002c */ unsigned long _sidFirstFree;
}; /* size: 0x0030 */

