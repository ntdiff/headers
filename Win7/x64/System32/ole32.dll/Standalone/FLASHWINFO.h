struct FLASHWINFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x0010 */ unsigned long dwFlags;
  /* 0x0014 */ unsigned int uCount;
  /* 0x0018 */ unsigned long dwTimeout;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

