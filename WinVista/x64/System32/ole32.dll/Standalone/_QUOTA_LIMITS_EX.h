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

typedef union _RATE_QUOTA_LIMIT
{
  union
  {
    /* 0x0000 */ unsigned long RateData;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long RatePhase : 4; /* bit position: 0 */
      /* 0x0000 */ unsigned long RatePercent : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT; /* size: 0x0004 */

typedef struct _QUOTA_LIMITS_EX
{
  /* 0x0000 */ unsigned __int64 PagedPoolLimit;
  /* 0x0008 */ unsigned __int64 NonPagedPoolLimit;
  /* 0x0010 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0018 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0020 */ unsigned __int64 PagefileLimit;
  /* 0x0028 */ union _LARGE_INTEGER TimeLimit;
  /* 0x0030 */ unsigned __int64 WorkingSetLimit;
  /* 0x0038 */ unsigned __int64 Reserved2;
  /* 0x0040 */ unsigned __int64 Reserved3;
  /* 0x0048 */ unsigned __int64 Reserved4;
  /* 0x0050 */ unsigned long Flags;
  /* 0x0054 */ union _RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX; /* size: 0x0058 */

