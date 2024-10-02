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

struct tagNMLVCUSTOMDRAW
{
  /* 0x0000 */ struct tagNMCUSTOMDRAWINFO nmcd;
  /* 0x0050 */ unsigned long clrText;
  /* 0x0054 */ unsigned long clrTextBk;
  /* 0x0058 */ int iSubItem;
  /* 0x005c */ unsigned long dwItemType;
  /* 0x0060 */ unsigned long clrFace;
  /* 0x0064 */ int iIconEffect;
  /* 0x0068 */ int iIconPhase;
  /* 0x006c */ int iPartId;
  /* 0x0070 */ int iStateId;
  /* 0x0074 */ struct tagRECT rcText;
  /* 0x0084 */ unsigned int uAlign;
}; /* size: 0x0088 */

