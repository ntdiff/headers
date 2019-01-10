typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_PAGING_FILE_SPACE_BITMAPS
{
  union
  {
    /* 0x0000 */ unsigned long RefCount;
    /* 0x0000 */ struct _MI_PAGING_FILE_SPACE_BITMAPS* Anchor;
  }; /* size: 0x0008 */
  /* 0x0008 */ struct _RTL_BITMAP AllocationBitmap;
  union
  {
    /* 0x0018 */ struct _RTL_BITMAP ReservationBitmap;
    /* 0x0018 */ struct _RTL_BITMAP EvictedBitmap;
  }; /* size: 0x0010 */
} MI_PAGING_FILE_SPACE_BITMAPS, *PMI_PAGING_FILE_SPACE_BITMAPS; /* size: 0x0028 */

