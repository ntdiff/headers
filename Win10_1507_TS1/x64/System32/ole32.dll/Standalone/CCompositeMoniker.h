class CTrackingCompositeMoniker
{
  /* 0x0008 */ class CCompositeMoniker* _pCCM;
}; /* size: 0x0010 */

class CCompositeMoniker
{
  /* 0x0028 */ class CTrackingCompositeMoniker _tcm;
  /* 0x0038 */ struct IMoniker* m_pmkLeft;
  /* 0x0040 */ struct IMoniker* m_pmkRight;
  /* 0x0048 */ int m_fReduced;
  /* 0x004c */ int m_fReduceForced;
}; /* size: 0x0050 */

