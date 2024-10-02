struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMCHAR
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned int ch;
  /* 0x001c */ unsigned long dwItemPrev;
  /* 0x0020 */ unsigned long dwItemNext;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

