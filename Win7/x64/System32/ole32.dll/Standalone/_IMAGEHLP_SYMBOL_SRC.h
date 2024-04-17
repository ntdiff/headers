typedef struct _IMAGEHLP_SYMBOL_SRC
{
  /* 0x0000 */ unsigned long sizeofstruct;
  /* 0x0004 */ unsigned long type;
  /* 0x0008 */ char file[260];
} IMAGEHLP_SYMBOL_SRC, *PIMAGEHLP_SYMBOL_SRC; /* size: 0x010c */

