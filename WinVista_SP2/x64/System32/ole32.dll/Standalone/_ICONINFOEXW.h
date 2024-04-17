typedef struct _ICONINFOEXW
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ int fIcon;
  /* 0x0008 */ unsigned long xHotspot;
  /* 0x000c */ unsigned long yHotspot;
  /* 0x0010 */ struct HBITMAP__* hbmMask;
  /* 0x0018 */ struct HBITMAP__* hbmColor;
  /* 0x0020 */ unsigned short wResID;
  /* 0x0022 */ wchar_t szModName[260];
  /* 0x022a */ wchar_t szResName[260];
  /* 0x0432 */ char __PADDING__[6];
} ICONINFOEXW, *PICONINFOEXW; /* size: 0x0438 */

