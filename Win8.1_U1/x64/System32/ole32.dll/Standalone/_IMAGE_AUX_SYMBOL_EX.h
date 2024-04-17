struct IMAGE_AUX_SYMBOL_TOKEN_DEF
{
  /* 0x0000 */ unsigned char bAuxType;
  /* 0x0001 */ unsigned char bReserved;
  /* 0x0002 */ unsigned long SymbolTableIndex;
  /* 0x0006 */ unsigned char rgbReserved[12];
}; /* size: 0x0012 */

typedef union _IMAGE_AUX_SYMBOL_EX
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long WeakDefaultSymIndex;
      /* 0x0004 */ unsigned long WeakSearchType;
      /* 0x0008 */ unsigned char rgbReserved[12];
    } /* size: 0x0014 */ Sym;
    struct
    {
      /* 0x0000 */ unsigned char Name[20];
    } /* size: 0x0014 */ File;
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
      /* 0x0012 */ unsigned char rgbReserved[2];
    } /* size: 0x0014 */ Section;
    struct
    {
      /* 0x0000 */ struct IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
      /* 0x0012 */ unsigned char rgbReserved[2];
    }; /* size: 0x0014 */
    struct
    {
      /* 0x0000 */ unsigned long crc;
      /* 0x0004 */ unsigned char rgbReserved[16];
    } /* size: 0x0014 */ CRC;
  }; /* size: 0x0014 */
} IMAGE_AUX_SYMBOL_EX, *PIMAGE_AUX_SYMBOL_EX; /* size: 0x0014 */

