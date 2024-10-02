struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagLITEM
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int iLink;
  /* 0x0008 */ unsigned int state;
  /* 0x000c */ unsigned int stateMask;
  /* 0x0010 */ wchar_t szID[48];
  /* 0x0070 */ wchar_t szUrl[2084];
}; /* size: 0x10b8 */

struct tagNMLVLINK
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ struct tagLITEM link;
  /* 0x10d0 */ int iItem;
  /* 0x10d4 */ int iSubItem;
}; /* size: 0x10d8 */

