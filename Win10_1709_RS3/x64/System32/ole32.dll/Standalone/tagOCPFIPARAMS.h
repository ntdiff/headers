struct tagOCPFIPARAMS
{
  /* 0x0000 */ unsigned long cbStructSize;
  /* 0x0008 */ struct HWND__* hWndOwner;
  /* 0x0010 */ int x;
  /* 0x0014 */ int y;
  /* 0x0018 */ const wchar_t* lpszCaption;
  /* 0x0020 */ unsigned long cObjects;
  /* 0x0028 */ struct IUnknown** lplpUnk;
  /* 0x0030 */ unsigned long cPages;
  /* 0x0038 */ struct _GUID* lpPages;
  /* 0x0040 */ unsigned long lcid;
  /* 0x0044 */ long dispidInitialProperty;
}; /* size: 0x0048 */

