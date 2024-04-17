struct tagWNDCLASSW
{
  /* 0x0000 */ unsigned int style;
  /* 0x0004 */ void* lpfnWndProc /* function */;
  /* 0x0008 */ int cbClsExtra;
  /* 0x000c */ int cbWndExtra;
  /* 0x0010 */ struct HINSTANCE__* hInstance;
  /* 0x0014 */ struct HICON__* hIcon;
  /* 0x0018 */ struct HICON__* hCursor;
  /* 0x001c */ struct HBRUSH__* hbrBackground;
  /* 0x0020 */ const wchar_t* lpszMenuName;
  /* 0x0024 */ const wchar_t* lpszClassName;
}; /* size: 0x0028 */

