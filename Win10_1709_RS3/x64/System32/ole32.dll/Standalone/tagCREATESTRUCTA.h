struct tagCREATESTRUCTA
{
  /* 0x0000 */ void* lpCreateParams;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  /* 0x0010 */ struct HMENU__* hMenu;
  /* 0x0018 */ struct HWND__* hwndParent;
  /* 0x0020 */ int cy;
  /* 0x0024 */ int cx;
  /* 0x0028 */ int y;
  /* 0x002c */ int x;
  /* 0x0030 */ long style;
  /* 0x0038 */ const char* lpszName;
  /* 0x0040 */ const char* lpszClass;
  /* 0x0048 */ unsigned long dwExStyle;
  /* 0x004c */ long __PADDING__[1];
}; /* size: 0x0050 */

