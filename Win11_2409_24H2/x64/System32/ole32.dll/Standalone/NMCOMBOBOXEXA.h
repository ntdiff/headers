struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagCOMBOBOXEXITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0008 */ __int64 iItem;
  /* 0x0010 */ char* pszText;
  /* 0x0018 */ int cchTextMax;
  /* 0x001c */ int iImage;
  /* 0x0020 */ int iSelectedImage;
  /* 0x0024 */ int iOverlay;
  /* 0x0028 */ int iIndent;
  /* 0x0030 */ __int64 lParam;
}; /* size: 0x0038 */

struct NMCOMBOBOXEXA
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ struct tagCOMBOBOXEXITEMA ceItem;
}; /* size: 0x0050 */

