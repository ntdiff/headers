typedef struct _IMAGE_DEBUG_MISC
{
  /* 0x0000 */ unsigned long DataType;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned char Unicode;
  /* 0x0009 */ unsigned char Reserved[3];
  /* 0x000c */ unsigned char Data[1];
  /* 0x000d */ char __PADDING__[3];
} IMAGE_DEBUG_MISC, *PIMAGE_DEBUG_MISC; /* size: 0x0010 */

