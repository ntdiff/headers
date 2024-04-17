typedef struct _FILE_ATTRIBUTE_CACHE_VALUE
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned short Size;
  /* 0x0006 */ unsigned short RequiredSize;
  /* 0x0008 */ unsigned char Data[1];
  /* 0x0009 */ char __PADDING__[3];
} FILE_ATTRIBUTE_CACHE_VALUE, *PFILE_ATTRIBUTE_CACHE_VALUE; /* size: 0x000c */

