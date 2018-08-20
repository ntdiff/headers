typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _POP_THERMAL_ZONE_METRICS
{
  /* 0x0000 */ unsigned long ActiveCount;
  /* 0x0004 */ unsigned long PassiveCount;
  /* 0x0008 */ unsigned __int64 LastActiveStartTime;
  /* 0x0010 */ unsigned __int64 AverageActiveTime;
  /* 0x0018 */ unsigned __int64 LastPassiveStartTime;
  /* 0x0020 */ unsigned __int64 AveragePassiveTime;
  /* 0x0028 */ union _LARGE_INTEGER StartTickSinceLastReset;
} POP_THERMAL_ZONE_METRICS, *PPOP_THERMAL_ZONE_METRICS; /* size: 0x0030 */

