struct tagSMDATA
{
  /* 0x0000 */ unsigned long dwMask;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ struct HMENU__* hmenu;
  /* 0x0010 */ struct HWND__* hwnd;
  /* 0x0018 */ unsigned int uId;
  /* 0x001c */ unsigned int uIdParent;
  /* 0x0020 */ unsigned int uIdAncestor;
  /* 0x0028 */ struct IUnknown* punk;
  /* 0x0030 */ struct _ITEMIDLIST* pidlFolder;
  /* 0x0038 */ struct _ITEMIDLIST* pidlItem;
  /* 0x0040 */ struct IShellFolder* psf;
  /* 0x0048 */ void* pvUserData;
}; /* size: 0x0050 */

