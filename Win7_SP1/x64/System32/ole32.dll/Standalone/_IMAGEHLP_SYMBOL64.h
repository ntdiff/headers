typedef struct _IMAGEHLP_SYMBOL64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ unsigned __int64 Address;
  /* 0x0010 */ unsigned long Size;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ unsigned long MaxNameLength;
  /* 0x001c */ char Name[1];
  /* 0x001d */ char __PADDING__[3];
} IMAGEHLP_SYMBOL64, *PIMAGEHLP_SYMBOL64; /* size: 0x0020 */

