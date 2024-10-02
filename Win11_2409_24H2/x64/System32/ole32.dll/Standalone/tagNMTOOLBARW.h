struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

typedef struct _TBBUTTON
{
  /* 0x0000 */ int iBitmap;
  /* 0x0004 */ int idCommand;
  /* 0x0008 */ unsigned char fsState;
  /* 0x0009 */ unsigned char fsStyle;
  /* 0x000a */ unsigned char bReserved[6];
  /* 0x0010 */ unsigned __int64 dwData;
  /* 0x0018 */ __int64 iString;
} TBBUTTON, *PTBBUTTON; /* size: 0x0020 */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagNMTOOLBARW
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ int iItem;
  /* 0x0020 */ struct _TBBUTTON tbButton;
  /* 0x0040 */ int cchText;
  /* 0x0048 */ wchar_t* pszText;
  /* 0x0050 */ struct tagRECT rcButton;
}; /* size: 0x0060 */

