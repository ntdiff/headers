typedef struct _ICONINFO
{
  /* 0x0000 */ int fIcon;
  /* 0x0004 */ unsigned long xHotspot;
  /* 0x0008 */ unsigned long yHotspot;
  /* 0x0010 */ struct HBITMAP__* hbmMask;
  /* 0x0018 */ struct HBITMAP__* hbmColor;
} ICONINFO, *PICONINFO; /* size: 0x0020 */

