struct tagPICTDESC
{
  /* 0x0000 */ unsigned int cbSizeofstruct;
  /* 0x0004 */ unsigned int picType;
  union
  {
    struct
    {
      /* 0x0008 */ struct HBITMAP__* hbitmap;
      /* 0x0010 */ struct HPALETTE__* hpal;
    } /* size: 0x0010 */ bmp;
    struct
    {
      /* 0x0008 */ struct HMETAFILE__* hmeta;
      /* 0x0010 */ int xExt;
      /* 0x0014 */ int yExt;
    } /* size: 0x0010 */ wmf;
    struct
    {
      /* 0x0008 */ struct HICON__* hicon;
    } /* size: 0x0008 */ icon;
    struct
    {
      struct
      {
        /* 0x0008 */ struct HENHMETAFILE__* hemf;
      } /* size: 0x0008 */ emf;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
}; /* size: 0x0018 */

