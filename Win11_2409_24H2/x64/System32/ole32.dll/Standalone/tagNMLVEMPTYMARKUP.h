struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMLVEMPTYMARKUP
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ wchar_t szMarkup[2084];
  /* 0x1064 */ long __PADDING__[1];
}; /* size: 0x1068 */

