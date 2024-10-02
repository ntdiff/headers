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

