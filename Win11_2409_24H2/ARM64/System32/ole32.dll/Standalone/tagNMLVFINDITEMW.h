struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagLVFINDINFOW
{
  /* 0x0000 */ unsigned int flags;
  /* 0x0008 */ const wchar_t* psz;
  /* 0x0010 */ __int64 lParam;
  /* 0x0018 */ struct tagPOINT pt;
  /* 0x0020 */ unsigned int vkDirection;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

struct tagNMLVFINDITEMW
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int iStart;
  /* 0x0020 */ struct tagLVFINDINFOW lvfi;
}; /* size: 0x0048 */

