typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

struct VOLUME_BITMAP_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER StartingLcn;
  /* 0x0008 */ union _LARGE_INTEGER BitmapSize;
  /* 0x0010 */ unsigned char Buffer[1];
  /* 0x0011 */ char __PADDING__[7];
}; /* size: 0x0018 */

