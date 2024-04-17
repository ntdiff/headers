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
      /* 0x0000 */ unsigned long RatePercent : 7; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved0 : 25; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT; /* size: 0x0004 */

typedef struct _QUOTA_LIMITS_EX
{
  /* 0x0000 */ unsigned long PagedPoolLimit;
  /* 0x0004 */ unsigned long NonPagedPoolLimit;
  /* 0x0008 */ unsigned long MinimumWorkingSetSize;
  /* 0x000c */ unsigned long MaximumWorkingSetSize;
  /* 0x0010 */ unsigned long PagefileLimit;
  /* 0x0018 */ union _LARGE_INTEGER TimeLimit;
  /* 0x0020 */ unsigned long WorkingSetLimit;
  /* 0x0024 */ unsigned long Reserved2;
  /* 0x0028 */ unsigned long Reserved3;
  /* 0x002c */ unsigned long Reserved4;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ union _RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX; /* size: 0x0038 */

