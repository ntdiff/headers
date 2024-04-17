typedef struct _IMAGEHLP_DUPLICATE_SYMBOL
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long NumberOfDups;
  /* 0x0008 */ struct _IMAGEHLP_SYMBOL* Symbol;
  /* 0x000c */ unsigned long SelectedSymbol;
} IMAGEHLP_DUPLICATE_SYMBOL, *PIMAGEHLP_DUPLICATE_SYMBOL; /* size: 0x0010 */

