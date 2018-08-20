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

typedef struct _PROCESS_ENERGY_VALUES_EXTENSION
{
  union
  {
    /* 0x0000 */ union _TIMELINE_BITMAP Timelines[9];
    struct
    {
      /* 0x0000 */ union _TIMELINE_BITMAP CpuTimeline;
      /* 0x0008 */ union _TIMELINE_BITMAP DiskTimeline;
      /* 0x0010 */ union _TIMELINE_BITMAP NetworkTimeline;
      /* 0x0018 */ union _TIMELINE_BITMAP MBBTimeline;
      /* 0x0020 */ union _TIMELINE_BITMAP ForegroundTimeline;
      /* 0x0028 */ union _TIMELINE_BITMAP DesktopVisibleTimeline;
      /* 0x0030 */ union _TIMELINE_BITMAP CompositionRenderedTimeline;
      /* 0x0038 */ union _TIMELINE_BITMAP CompositionDirtyGeneratedTimeline;
      /* 0x0040 */ union _TIMELINE_BITMAP CompositionDirtyPropagatedTimeline;
    }; /* size: 0x0048 */
  }; /* size: 0x0048 */
} PROCESS_ENERGY_VALUES_EXTENSION, *PPROCESS_ENERGY_VALUES_EXTENSION; /* size: 0x0048 */

