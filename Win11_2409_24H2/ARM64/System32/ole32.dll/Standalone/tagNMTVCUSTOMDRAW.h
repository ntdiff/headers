struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagNMCUSTOMDRAWINFO
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned long dwDrawStage;
  /* 0x0020 */ struct HDC__* hdc;
  /* 0x0028 */ struct tagRECT rc;
  /* 0x0038 */ unsigned __int64 dwItemSpec;
  /* 0x0040 */ unsigned int uItemState;
  /* 0x0048 */ __int64 lItemlParam;
}; /* size: 0x0050 */

struct tagNMTVCUSTOMDRAW
{
  /* 0x0000 */ struct tagNMCUSTOMDRAWINFO nmcd;
  /* 0x0050 */ unsigned long clrText;
  /* 0x0054 */ unsigned long clrTextBk;
  /* 0x0058 */ int iLevel;
  /* 0x005c */ long __PADDING__[1];
}; /* size: 0x0060 */

