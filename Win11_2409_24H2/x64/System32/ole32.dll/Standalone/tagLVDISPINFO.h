struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagLVITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int iItem;
  /* 0x0008 */ int iSubItem;
  /* 0x000c */ unsigned int state;
  /* 0x0010 */ unsigned int stateMask;
  /* 0x0018 */ char* pszText;
  /* 0x0020 */ int cchTextMax;
  /* 0x0024 */ int iImage;
  /* 0x0028 */ __int64 lParam;
  /* 0x0030 */ int iIndent;
  /* 0x0034 */ int iGroupId;
  /* 0x0038 */ unsigned int cColumns;
  /* 0x0040 */ unsigned int* puColumns;
  /* 0x0048 */ int* piColFmt;
  /* 0x0050 */ int iGroup;
  /* 0x0054 */ long __PADDING__[1];
}; /* size: 0x0058 */

struct tagLVDISPINFO
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ struct tagLVITEMA item;
}; /* size: 0x0070 */

