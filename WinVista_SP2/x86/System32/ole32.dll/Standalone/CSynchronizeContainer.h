class CSCInnerUnknown
{
  /* 0x0004 */ unsigned long _iRefCount;
  /* 0x0008 */ class CSynchronizeContainer* _pParent;
}; /* size: 0x000c */

class CSynchronizeContainer
{
  /* 0x0004 */ class CSCInnerUnknown _cInner;
  /* 0x0010 */ struct IUnknown* _pControl;
  /* 0x0014 */ unsigned long _lLast;
  /* 0x0018 */ void* _aEvent[63];
  /* 0x0114 */ struct ISynchronize* _aSync[63];
}; /* size: 0x0210 */

