typedef struct _SHSTOCKICONINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct HICON__* hIcon;
  /* 0x0008 */ int iSysImageIndex;
  /* 0x000c */ int iIcon;
  /* 0x0010 */ wchar_t szPath[260];
} SHSTOCKICONINFO, *PSHSTOCKICONINFO; /* size: 0x0218 */

