class CContainerIterator
{
  /* 0x0000 */ HRESULT _hr;
  /* 0x0004 */ unsigned long _grfExtraEnumFlags;
  /* 0x0008 */ struct IShellItem* _psiContainer;
  /* 0x0010 */ struct IEnumShellItems* _penum;
  /* 0x0018 */ struct IObjectCollection* _pContainerQueue;
  /* 0x0020 */ unsigned __int64 _cContainersFound;
}; /* size: 0x0028 */

