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

typedef struct _QUOTA_LIMITS
{
  /* 0x0000 */ unsigned long PagedPoolLimit;
  /* 0x0004 */ unsigned long NonPagedPoolLimit;
  /* 0x0008 */ unsigned long MinimumWorkingSetSize;
  /* 0x000c */ unsigned long MaximumWorkingSetSize;
  /* 0x0010 */ unsigned long PagefileLimit;
  /* 0x0018 */ union _LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS; /* size: 0x0020 */

