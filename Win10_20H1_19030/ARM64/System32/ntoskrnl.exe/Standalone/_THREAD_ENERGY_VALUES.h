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

typedef struct _THREAD_ENERGY_VALUES
{
  /* 0x0000 */ unsigned __int64 Cycles[2][4];
  /* 0x0040 */ unsigned __int64 AttributedCycles[2][4];
  /* 0x0080 */ unsigned __int64 WorkOnBehalfCycles[2][4];
  /* 0x00c0 */ union _TIMELINE_BITMAP CpuTimeline;
} THREAD_ENERGY_VALUES, *PTHREAD_ENERGY_VALUES; /* size: 0x00c8 */

