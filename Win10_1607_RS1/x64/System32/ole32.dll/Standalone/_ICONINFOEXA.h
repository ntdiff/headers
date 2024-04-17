typedef struct _ICONINFOEXA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ int fIcon;
  /* 0x0008 */ unsigned long xHotspot;
  /* 0x000c */ unsigned long yHotspot;
  /* 0x0010 */ struct HBITMAP__* hbmMask;
  /* 0x0018 */ struct HBITMAP__* hbmColor;
  /* 0x0020 */ unsigned short wResID;
  /* 0x0022 */ char szModName[260];
  /* 0x0126 */ char szResName[260];
  /* 0x022a */ char __PADDING__[6];
} ICONINFOEXA, *PICONINFOEXA; /* size: 0x0230 */

