class Microsoft::WRL::ComPtr<IShellFolder>
{
  /* 0x0000 */ struct IShellFolder* ptr_;
}; /* size: 0x0008 */

class CItemAncestorIterator
{
  /* 0x0000 */ HRESULT _hr;
  /* 0x0008 */ struct _ITEMIDLIST* _pidlFull;
  /* 0x0010 */ struct _ITEMIDLIST* _pidlRel;
  /* 0x0018 */ class Microsoft::WRL::ComPtr<IShellFolder> _shellFolderCur;
}; /* size: 0x0020 */

