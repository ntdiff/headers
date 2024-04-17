typedef struct _IMAGEHLP_SYMBOL
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long Address;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long MaxNameLength;
  /* 0x0014 */ char Name[1];
  /* 0x0015 */ char __PADDING__[3];
} IMAGEHLP_SYMBOL, *PIMAGEHLP_SYMBOL; /* size: 0x0018 */

