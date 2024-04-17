typedef struct _ICONINFOEXW
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ int fIcon;
  /* 0x0008 */ unsigned long xHotspot;
  /* 0x000c */ unsigned long yHotspot;
  /* 0x0010 */ struct HBITMAP__* hbmMask;
  /* 0x0014 */ struct HBITMAP__* hbmColor;
  /* 0x0018 */ unsigned short wResID;
  /* 0x001a */ wchar_t szModName[260];
  /* 0x0222 */ wchar_t szResName[260];
  /* 0x042a */ char __PADDING__[2];
} ICONINFOEXW, *PICONINFOEXW; /* size: 0x042c */

