class CSTInnerUnknown
{
  /* 0x0008 */ unsigned long _iRefCount;
  /* 0x0010 */ class CStdEvent* _pParent;
}; /* size: 0x0018 */

class CStdEvent
{
  /* 0x0010 */ class CSTInnerUnknown _cInner;
  /* 0x0028 */ struct IUnknown* _pControl;
  /* 0x0030 */ void* m_hEvent;
}; /* size: 0x0038 */

