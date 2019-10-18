typedef union _TIMELINE_BITMAP
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      /* 0x0000 */ unsigned long EndTime;
      /* 0x0004 */ unsigned long Bitmap;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} TIMELINE_BITMAP, *PTIMELINE_BITMAP; /* size: 0x0008 */

