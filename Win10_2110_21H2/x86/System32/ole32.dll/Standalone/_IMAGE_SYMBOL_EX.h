typedef struct _IMAGE_SYMBOL_EX
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
  /* 0x000c */ long SectionNumber;
  /* 0x0010 */ unsigned short Type;
  /* 0x0012 */ unsigned char StorageClass;
  /* 0x0013 */ unsigned char NumberOfAuxSymbols;
} IMAGE_SYMBOL_EX, *PIMAGE_SYMBOL_EX; /* size: 0x0014 */

