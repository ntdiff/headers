typedef union _IMAGE_AUX_SYMBOL
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long TagIndex;
      union
      {
        union
        {
          struct
          {
            /* 0x0004 */ unsigned short Linenumber;
            /* 0x0006 */ unsigned short Size;
          } /* size: 0x0004 */ LnSz;
          /* 0x0004 */ unsigned long TotalSize;
        }; /* size: 0x0004 */
      } /* size: 0x0004 */ Misc;
      union
      {
        union
        {
          struct
          {
            /* 0x0008 */ unsigned long PointerToLinenumber;
            /* 0x000c */ unsigned long PointerToNextFunction;
          } /* size: 0x0008 */ Function;
          struct
          {
            /* 0x0008 */ unsigned short Dimension[4];
          } /* size: 0x0008 */ Array;
        }; /* size: 0x0008 */
      } /* size: 0x0008 */ FcnAry;
      /* 0x0010 */ unsigned short TvIndex;
    } /* size: 0x0012 */ Sym;
    struct
    {
      /* 0x0000 */ unsigned char Name[18];
    } /* size: 0x0012 */ File;
    struct
    {
      /* 0x0000 */ unsigned long Length;
      /* 0x0004 */ unsigned short NumberOfRelocations;
      /* 0x0006 */ unsigned short NumberOfLinenumbers;
      /* 0x0008 */ unsigned long CheckSum;
      /* 0x000c */ short Number;
      /* 0x000e */ unsigned char Selection;
      /* 0x000f */ char __PADDING__[1];
    } /* size: 0x0010 */ Section;
  }; /* size: 0x0012 */
} IMAGE_AUX_SYMBOL, *PIMAGE_AUX_SYMBOL; /* size: 0x0012 */

