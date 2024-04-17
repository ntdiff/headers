struct tagCREATESTRUCTW
{
  /* 0x0000 */ void* lpCreateParams;
  /* 0x0004 */ struct HINSTANCE__* hInstance;
  /* 0x0008 */ struct HMENU__* hMenu;
  /* 0x000c */ struct HWND__* hwndParent;
  /* 0x0010 */ int cy;
  /* 0x0014 */ int cx;
  /* 0x0018 */ int y;
  /* 0x001c */ int x;
  /* 0x0020 */ long style;
  /* 0x0024 */ const wchar_t* lpszName;
  /* 0x0028 */ const wchar_t* lpszClass;
  /* 0x002c */ unsigned long dwExStyle;
}; /* size: 0x0030 */

