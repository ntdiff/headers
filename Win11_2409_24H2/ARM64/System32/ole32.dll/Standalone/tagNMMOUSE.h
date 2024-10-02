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

struct tagNMMOUSE
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned __int64 dwItemSpec;
  /* 0x0020 */ unsigned __int64 dwItemData;
  /* 0x0028 */ struct tagPOINT pt;
  /* 0x0030 */ __int64 dwHitInfo;
}; /* size: 0x0038 */

