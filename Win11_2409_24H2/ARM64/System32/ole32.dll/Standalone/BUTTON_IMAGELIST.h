struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct BUTTON_IMAGELIST
{
  /* 0x0000 */ struct _IMAGELIST* himl;
  /* 0x0008 */ struct tagRECT margin;
  /* 0x0018 */ unsigned int uAlign;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

