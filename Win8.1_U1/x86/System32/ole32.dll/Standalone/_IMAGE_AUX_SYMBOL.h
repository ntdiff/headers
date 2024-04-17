struct IMAGE_AUX_SYMBOL_TOKEN_DEF
{
  /* 0x0000 */ unsigned char bAuxType;
  /* 0x0001 */ unsigned char bReserved;
  /* 0x0002 */ unsigned long SymbolTableIndex;
  /* 0x0006 */ unsigned char rgbReserved[12];
}; /* size: 0x0012 */

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
      /* 0x000f */ unsigned char bReserved;
      /* 0x0010 */ short HighNumber;
    } /* size: 0x0012 */ Section;
    /* 0x0000 */ struct IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
    struct
    {
      /* 0x0000 */ unsigned long crc;
      /* 0x0004 */ unsigned char rgbReserved[14];
    } /* size: 0x0012 */ CRC;
  }; /* size: 0x0012 */
} IMAGE_AUX_SYMBOL, *PIMAGE_AUX_SYMBOL; /* size: 0x0012 */

