class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedMSFPagePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CMSFPageTable
{
  /* 0x0000 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0008 */ const unsigned long _cbSector;
  /* 0x000c */ const unsigned long _cMinPages;
  /* 0x0010 */ const unsigned long _cMaxPages;
  /* 0x0014 */ unsigned long _cActivePages;
  /* 0x0018 */ unsigned long _cPages;
  /* 0x0020 */ class CBasedMSFPagePtr _pmpCurrent;
  /* 0x0028 */ class CBasedMSFPagePtr _pmpStart;
  /* 0x0030 */ long _cReferences;
}; /* size: 0x0038 */

