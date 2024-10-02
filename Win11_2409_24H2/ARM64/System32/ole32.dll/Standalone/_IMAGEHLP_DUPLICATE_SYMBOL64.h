typedef struct _IMAGEHLP_DUPLICATE_SYMBOL64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long NumberOfDups;
  /* 0x0008 */ struct _IMAGEHLP_SYMBOL64* Symbol;
  /* 0x0010 */ unsigned long SelectedSymbol;
  /* 0x0014 */ long __PADDING__[1];
} IMAGEHLP_DUPLICATE_SYMBOL64, *PIMAGEHLP_DUPLICATE_SYMBOL64; /* size: 0x0018 */

