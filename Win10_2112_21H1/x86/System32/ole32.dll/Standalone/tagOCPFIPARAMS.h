struct tagOCPFIPARAMS
{
  /* 0x0000 */ unsigned long cbStructSize;
  /* 0x0004 */ struct HWND__* hWndOwner;
  /* 0x0008 */ int x;
  /* 0x000c */ int y;
  /* 0x0010 */ const wchar_t* lpszCaption;
  /* 0x0014 */ unsigned long cObjects;
  /* 0x0018 */ struct IUnknown** lplpUnk;
  /* 0x001c */ unsigned long cPages;
  /* 0x0020 */ struct _GUID* lpPages;
  /* 0x0024 */ unsigned long lcid;
  /* 0x0028 */ long dispidInitialProperty;
}; /* size: 0x002c */

