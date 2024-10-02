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

typedef struct _NMTBCUSTOMDRAW
{
  /* 0x0000 */ struct tagNMCUSTOMDRAWINFO nmcd;
  /* 0x0050 */ struct HBRUSH__* hbrMonoDither;
  /* 0x0058 */ struct HBRUSH__* hbrLines;
  /* 0x0060 */ struct HPEN__* hpenLines;
  /* 0x0068 */ unsigned long clrText;
  /* 0x006c */ unsigned long clrMark;
  /* 0x0070 */ unsigned long clrTextHighlight;
  /* 0x0074 */ unsigned long clrBtnFace;
  /* 0x0078 */ unsigned long clrBtnHighlight;
  /* 0x007c */ unsigned long clrHighlightHotTrack;
  /* 0x0080 */ struct tagRECT rcText;
  /* 0x0090 */ int nStringBkMode;
  /* 0x0094 */ int nHLStringBkMode;
  /* 0x0098 */ int iListGap;
  /* 0x009c */ long __PADDING__[1];
} NMTBCUSTOMDRAW, *PNMTBCUSTOMDRAW; /* size: 0x00a0 */

