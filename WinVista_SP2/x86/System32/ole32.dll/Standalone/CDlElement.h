class CBasedDlElementPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CDlElement
{
  /* 0x0000 */ class CBasedDlElementPtr _pdlePrev;
  /* 0x0004 */ class CBasedDlElementPtr _pdleNext;
}; /* size: 0x0008 */

