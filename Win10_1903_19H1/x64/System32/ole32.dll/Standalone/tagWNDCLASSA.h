struct tagWNDCLASSA
{
  /* 0x0000 */ unsigned int style;
  /* 0x0008 */ void* lpfnWndProc /* function */;
  /* 0x0010 */ int cbClsExtra;
  /* 0x0014 */ int cbWndExtra;
  /* 0x0018 */ struct HINSTANCE__* hInstance;
  /* 0x0020 */ struct HICON__* hIcon;
  /* 0x0028 */ struct HICON__* hCursor;
  /* 0x0030 */ struct HBRUSH__* hbrBackground;
  /* 0x0038 */ const char* lpszMenuName;
  /* 0x0040 */ const char* lpszClassName;
}; /* size: 0x0048 */

