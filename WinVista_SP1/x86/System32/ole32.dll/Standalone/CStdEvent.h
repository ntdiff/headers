class CSTInnerUnknown
{
  /* 0x0004 */ unsigned long _iRefCount;
  /* 0x0008 */ class CStdEvent* _pParent;
}; /* size: 0x000c */

class CStdEvent
{
  /* 0x0008 */ class CSTInnerUnknown _cInner;
  /* 0x0014 */ struct IUnknown* _pControl;
  /* 0x0018 */ void* m_hEvent;
}; /* size: 0x001c */

