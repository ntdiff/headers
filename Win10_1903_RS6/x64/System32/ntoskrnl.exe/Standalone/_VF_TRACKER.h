typedef struct _VF_TRACKER
{
  /* 0x0000 */ unsigned long TrackerFlags;
  /* 0x0004 */ unsigned long TrackerSize;
  /* 0x0008 */ unsigned long TrackerIndex;
  /* 0x000c */ unsigned long TraceDepth;
} VF_TRACKER, *PVF_TRACKER; /* size: 0x0010 */

