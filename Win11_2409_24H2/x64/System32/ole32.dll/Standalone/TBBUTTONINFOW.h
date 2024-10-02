struct TBBUTTONINFOW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned long dwMask;
  /* 0x0008 */ int idCommand;
  /* 0x000c */ int iImage;
  /* 0x0010 */ unsigned char fsState;
  /* 0x0011 */ unsigned char fsStyle;
  /* 0x0012 */ unsigned short cx;
  /* 0x0018 */ unsigned __int64 lParam;
  /* 0x0020 */ wchar_t* pszText;
  /* 0x0028 */ int cchText;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

