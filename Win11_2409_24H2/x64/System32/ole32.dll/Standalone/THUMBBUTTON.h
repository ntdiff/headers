enum THUMBBUTTONMASK
{
  THB_BITMAP = 1,
  THB_ICON = 2,
  THB_TOOLTIP = 4,
  THB_FLAGS = 8,
};

enum THUMBBUTTONFLAGS
{
  THBF_ENABLED = 0,
  THBF_DISABLED = 1,
  THBF_DISMISSONCLICK = 2,
  THBF_NOBACKGROUND = 4,
  THBF_HIDDEN = 8,
  THBF_NONINTERACTIVE = 16,
};

struct THUMBBUTTON
{
  /* 0x0000 */ enum THUMBBUTTONMASK dwMask;
  /* 0x0004 */ unsigned int iId;
  /* 0x0008 */ unsigned int iBitmap;
  /* 0x0010 */ struct HICON__* hIcon;
  /* 0x0018 */ wchar_t szTip[260];
  /* 0x0220 */ enum THUMBBUTTONFLAGS dwFlags;
  /* 0x0224 */ long __PADDING__[1];
}; /* size: 0x0228 */

