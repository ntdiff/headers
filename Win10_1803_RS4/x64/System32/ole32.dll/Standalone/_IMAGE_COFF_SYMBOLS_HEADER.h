typedef struct _IMAGE_COFF_SYMBOLS_HEADER
{
  /* 0x0000 */ unsigned long NumberOfSymbols;
  /* 0x0004 */ unsigned long LvaToFirstSymbol;
  /* 0x0008 */ unsigned long NumberOfLinenumbers;
  /* 0x000c */ unsigned long LvaToFirstLinenumber;
  /* 0x0010 */ unsigned long RvaToFirstByteOfCode;
  /* 0x0014 */ unsigned long RvaToLastByteOfCode;
  /* 0x0018 */ unsigned long RvaToFirstByteOfData;
  /* 0x001c */ unsigned long RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER, *PIMAGE_COFF_SYMBOLS_HEADER; /* size: 0x0020 */

