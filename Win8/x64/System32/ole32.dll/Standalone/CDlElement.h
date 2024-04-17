class CBasedDlElementPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CDlElement
{
  /* 0x0000 */ class CBasedDlElementPtr _pdlePrev;
  /* 0x0008 */ class CBasedDlElementPtr _pdleNext;
}; /* size: 0x0010 */

