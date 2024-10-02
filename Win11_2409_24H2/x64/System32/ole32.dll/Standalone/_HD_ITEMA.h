typedef struct _HD_ITEMA
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ int cxy;
  /* 0x0008 */ char* pszText;
  /* 0x0010 */ struct HBITMAP__* hbm;
  /* 0x0018 */ int cchTextMax;
  /* 0x001c */ int fmt;
  /* 0x0020 */ __int64 lParam;
  /* 0x0028 */ int iImage;
  /* 0x002c */ int iOrder;
  /* 0x0030 */ unsigned int type;
  /* 0x0038 */ void* pvFilter;
  /* 0x0040 */ unsigned int state;
  /* 0x0044 */ long __PADDING__[1];
} HD_ITEMA, *PHD_ITEMA; /* size: 0x0048 */

