struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagNMCUSTOMTEXT
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ struct HDC__* hDC;
  /* 0x0020 */ const wchar_t* lpString;
  /* 0x0028 */ int nCount;
  /* 0x0030 */ struct tagRECT* lpRect;
  /* 0x0038 */ unsigned int uFormat;
  /* 0x003c */ int fLink;
}; /* size: 0x0040 */

