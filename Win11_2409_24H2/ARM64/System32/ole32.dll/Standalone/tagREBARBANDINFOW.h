struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagREBARBANDINFOW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int fMask;
  /* 0x0008 */ unsigned int fStyle;
  /* 0x000c */ unsigned long clrFore;
  /* 0x0010 */ unsigned long clrBack;
  /* 0x0018 */ wchar_t* lpText;
  /* 0x0020 */ unsigned int cch;
  /* 0x0024 */ int iImage;
  /* 0x0028 */ struct HWND__* hwndChild;
  /* 0x0030 */ unsigned int cxMinChild;
  /* 0x0034 */ unsigned int cyMinChild;
  /* 0x0038 */ unsigned int cx;
  /* 0x0040 */ struct HBITMAP__* hbmBack;
  /* 0x0048 */ unsigned int wID;
  /* 0x004c */ unsigned int cyChild;
  /* 0x0050 */ unsigned int cyMaxChild;
  /* 0x0054 */ unsigned int cyIntegral;
  /* 0x0058 */ unsigned int cxIdeal;
  /* 0x0060 */ __int64 lParam;
  /* 0x0068 */ unsigned int cxHeader;
  /* 0x006c */ struct tagRECT rcChevronLocation;
  /* 0x007c */ unsigned int uChevronState;
}; /* size: 0x0080 */

