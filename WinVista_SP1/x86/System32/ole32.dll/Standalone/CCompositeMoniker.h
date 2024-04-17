class CTrackingCompositeMoniker
{
  /* 0x0004 */ class CCompositeMoniker* _pCCM;
}; /* size: 0x0008 */

class CCompositeMoniker
{
  /* 0x0014 */ class CTrackingCompositeMoniker _tcm;
  /* 0x001c */ struct IMoniker* m_pmkLeft;
  /* 0x0020 */ struct IMoniker* m_pmkRight;
  /* 0x0024 */ int m_fReduced;
  /* 0x0028 */ int m_fReduceForced;
}; /* size: 0x002c */

