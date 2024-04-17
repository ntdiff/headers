typedef struct _IMAGEHLP_SYMBOLW64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ unsigned __int64 Address;
  /* 0x0010 */ unsigned long Size;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ unsigned long MaxNameLength;
  /* 0x001c */ wchar_t Name[1];
  /* 0x001e */ char __PADDING__[2];
} IMAGEHLP_SYMBOLW64, *PIMAGEHLP_SYMBOLW64; /* size: 0x0020 */

typedef struct _IMAGEHLP_SYMBOLW64_PACKAGE
{
  /* 0x0000 */ struct _IMAGEHLP_SYMBOLW64 sym;
  /* 0x0020 */ wchar_t name[2001];
  /* 0x0fc2 */ char __PADDING__[6];
} IMAGEHLP_SYMBOLW64_PACKAGE, *PIMAGEHLP_SYMBOLW64_PACKAGE; /* size: 0x0fc8 */

