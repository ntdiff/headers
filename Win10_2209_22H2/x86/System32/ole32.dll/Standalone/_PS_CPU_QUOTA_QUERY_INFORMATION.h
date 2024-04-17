typedef struct _PS_CPU_QUOTA_QUERY_ENTRY
{
  /* 0x0000 */ unsigned long SessionId;
  /* 0x0004 */ unsigned long Weight;
} PS_CPU_QUOTA_QUERY_ENTRY, *PPS_CPU_QUOTA_QUERY_ENTRY; /* size: 0x0008 */

typedef struct _PS_CPU_QUOTA_QUERY_INFORMATION
{
  /* 0x0000 */ unsigned long SessionCount;
  /* 0x0004 */ struct _PS_CPU_QUOTA_QUERY_ENTRY SessionInformation[1];
} PS_CPU_QUOTA_QUERY_INFORMATION, *PPS_CPU_QUOTA_QUERY_INFORMATION; /* size: 0x000c */

