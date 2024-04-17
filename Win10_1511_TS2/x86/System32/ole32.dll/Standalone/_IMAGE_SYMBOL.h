typedef struct _IMAGE_SYMBOL
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned char ShortName[8];
      struct
      {
        /* 0x0000 */ unsigned long Short;
        /* 0x0004 */ unsigned long Long;
      } /* size: 0x0008 */ Name;
      /* 0x0000 */ unsigned long LongName[2];
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ N;
  /* 0x0008 */ unsigned long Value;
  /* 0x000c */ short SectionNumber;
  /* 0x000e */ unsigned short Type;
  /* 0x0010 */ unsigned char StorageClass;
  /* 0x0011 */ unsigned char NumberOfAuxSymbols;
} IMAGE_SYMBOL, *PIMAGE_SYMBOL; /* size: 0x0012 */

