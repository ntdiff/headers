typedef struct _IMAGEHLP_SYMBOLW
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long Address;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long MaxNameLength;
  /* 0x0014 */ wchar_t Name[1];
  /* 0x0016 */ char __PADDING__[2];
} IMAGEHLP_SYMBOLW, *PIMAGEHLP_SYMBOLW; /* size: 0x0018 */

