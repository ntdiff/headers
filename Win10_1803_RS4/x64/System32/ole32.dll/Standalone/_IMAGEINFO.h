struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

typedef struct _IMAGEINFO
{
  /* 0x0000 */ struct HBITMAP__* hbmImage;
  /* 0x0008 */ struct HBITMAP__* hbmMask;
  /* 0x0010 */ int Unused1;
  /* 0x0014 */ int Unused2;
  /* 0x0018 */ struct tagRECT rcImage;
} IMAGEINFO, *PIMAGEINFO; /* size: 0x0028 */

