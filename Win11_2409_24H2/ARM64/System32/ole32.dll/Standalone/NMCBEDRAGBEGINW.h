struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct NMCBEDRAGBEGINW
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int iItemid;
  /* 0x001c */ wchar_t szText[260];
  /* 0x0224 */ long __PADDING__[1];
}; /* size: 0x0228 */

