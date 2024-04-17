typedef struct _POOLED_USAGE_AND_LIMITS
{
  /* 0x0000 */ unsigned __int64 PeakPagedPoolUsage;
  /* 0x0008 */ unsigned __int64 PagedPoolUsage;
  /* 0x0010 */ unsigned __int64 PagedPoolLimit;
  /* 0x0018 */ unsigned __int64 PeakNonPagedPoolUsage;
  /* 0x0020 */ unsigned __int64 NonPagedPoolUsage;
  /* 0x0028 */ unsigned __int64 NonPagedPoolLimit;
  /* 0x0030 */ unsigned __int64 PeakPagefileUsage;
  /* 0x0038 */ unsigned __int64 PagefileUsage;
  /* 0x0040 */ unsigned __int64 PagefileLimit;
} POOLED_USAGE_AND_LIMITS, *PPOOLED_USAGE_AND_LIMITS; /* size: 0x0048 */

