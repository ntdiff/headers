typedef struct _POOLED_USAGE_AND_LIMITS
{
  /* 0x0000 */ unsigned long PeakPagedPoolUsage;
  /* 0x0004 */ unsigned long PagedPoolUsage;
  /* 0x0008 */ unsigned long PagedPoolLimit;
  /* 0x000c */ unsigned long PeakNonPagedPoolUsage;
  /* 0x0010 */ unsigned long NonPagedPoolUsage;
  /* 0x0014 */ unsigned long NonPagedPoolLimit;
  /* 0x0018 */ unsigned long PeakPagefileUsage;
  /* 0x001c */ unsigned long PagefileUsage;
  /* 0x0020 */ unsigned long PagefileLimit;
} POOLED_USAGE_AND_LIMITS, *PPOOLED_USAGE_AND_LIMITS; /* size: 0x0024 */

