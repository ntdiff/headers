class CMREInnerUnknown
{
  /* 0x0008 */ unsigned long _iRefCount;
  /* 0x0010 */ class CManualResetEvent* _pParent;
}; /* size: 0x0018 */

class CManualResetEvent
{
  /* 0x0010 */ class CMREInnerUnknown _cInner;
  /* 0x0028 */ struct IUnknown* _pControl;
  /* 0x0030 */ class CStdEvent* m_cStdEvent;
}; /* size: 0x0038 */

