class CSCInnerUnknown
{
  /* 0x0008 */ unsigned long _iRefCount;
  /* 0x0010 */ class CSynchronizeContainer* _pParent;
}; /* size: 0x0018 */

class CSynchronizeContainer
{
  /* 0x0008 */ class CSCInnerUnknown _cInner;
  /* 0x0020 */ struct IUnknown* _pControl;
  /* 0x0028 */ unsigned long _lLast;
  /* 0x0030 */ void* _aEvent[63];
  /* 0x0228 */ struct ISynchronize* _aSync[63];
}; /* size: 0x0420 */

