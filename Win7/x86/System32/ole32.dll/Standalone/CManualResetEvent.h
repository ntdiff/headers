class CMREInnerUnknown
{
  /* 0x0004 */ unsigned long _iRefCount;
  /* 0x0008 */ class CManualResetEvent* _pParent;
}; /* size: 0x000c */

class CManualResetEvent
{
  /* 0x0008 */ class CMREInnerUnknown _cInner;
  /* 0x0014 */ struct IUnknown* _pControl;
  /* 0x0018 */ class CStdEvent* m_cStdEvent;
}; /* size: 0x001c */

