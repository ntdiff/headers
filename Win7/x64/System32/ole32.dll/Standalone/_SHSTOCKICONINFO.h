typedef struct _SHSTOCKICONINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct HICON__* hIcon;
  /* 0x0010 */ int iSysImageIndex;
  /* 0x0014 */ int iIcon;
  /* 0x0018 */ wchar_t szPath[260];
} SHSTOCKICONINFO, *PSHSTOCKICONINFO; /* size: 0x0220 */

