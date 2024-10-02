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

struct tagNMTBRESTORE
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ unsigned long* pData;
  /* 0x0020 */ unsigned long* pCurrent;
  /* 0x0028 */ unsigned int cbData;
  /* 0x002c */ int iItem;
  /* 0x0030 */ int cButtons;
  /* 0x0034 */ int cbBytesPerRecord;
  /* 0x0038 */ struct _TBBUTTON tbButton;
}; /* size: 0x0058 */

