struct tagLVBKIMAGEA
{
  /* 0x0000 */ unsigned long ulFlags;
  /* 0x0008 */ struct HBITMAP__* hbm;
  /* 0x0010 */ char* pszImage;
  /* 0x0018 */ unsigned int cchImageMax;
  /* 0x001c */ int xOffsetPercent;
  /* 0x0020 */ int yOffsetPercent;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

