struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagLVKEYDOWN
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned short wVKey;
  /* 0x001a */ unsigned int flags;
}; /* size: 0x001e */

