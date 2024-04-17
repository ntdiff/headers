struct tagWNDCLASSEXW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int style;
  /* 0x0008 */ void* lpfnWndProc /* function */;
  /* 0x000c */ int cbClsExtra;
  /* 0x0010 */ int cbWndExtra;
  /* 0x0014 */ struct HINSTANCE__* hInstance;
  /* 0x0018 */ struct HICON__* hIcon;
  /* 0x001c */ struct HICON__* hCursor;
  /* 0x0020 */ struct HBRUSH__* hbrBackground;
  /* 0x0024 */ const wchar_t* lpszMenuName;
  /* 0x0028 */ const wchar_t* lpszClassName;
  /* 0x002c */ struct HICON__* hIconSm;
}; /* size: 0x0030 */

