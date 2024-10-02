struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagTOOLINFOA
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int uFlags;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x0010 */ unsigned __int64 uId;
  /* 0x0018 */ struct tagRECT rect;
  /* 0x0028 */ struct HINSTANCE__* hinst;
  /* 0x0030 */ char* lpszText;
  /* 0x0038 */ __int64 lParam;
  /* 0x0040 */ void* lpReserved;
}; /* size: 0x0048 */

