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
  /* 0x0000 */ unsigned __int64 PagedPoolLimit;
  /* 0x0008 */ unsigned __int64 NonPagedPoolLimit;
  /* 0x0010 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0018 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0020 */ unsigned __int64 PagefileLimit;
  /* 0x0028 */ union _LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS; /* size: 0x0030 */

