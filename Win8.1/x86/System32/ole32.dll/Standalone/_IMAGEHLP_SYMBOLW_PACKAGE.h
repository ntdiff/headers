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

typedef struct _IMAGEHLP_SYMBOLW_PACKAGE
{
  /* 0x0000 */ struct _IMAGEHLP_SYMBOLW sym;
  /* 0x0018 */ wchar_t name[2001];
  /* 0x0fba */ char __PADDING__[2];
} IMAGEHLP_SYMBOLW_PACKAGE, *PIMAGEHLP_SYMBOLW_PACKAGE; /* size: 0x0fbc */

