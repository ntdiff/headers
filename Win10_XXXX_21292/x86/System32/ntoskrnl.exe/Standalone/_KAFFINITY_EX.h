typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned long Bitmap[1];
    /* 0x0008 */ unsigned long StaticBitmap[1];
  }; /* size: 0x0004 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

