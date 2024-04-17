typedef enum _SYSTEM_NET_RATE_CONTROL_TYPE
{
  SystemNetRateControlSet = 0,
  SystemNetRateControlQuota = 1,
} SYSTEM_NET_RATE_CONTROL_TYPE, *PSYSTEM_NET_RATE_CONTROL_TYPE;

typedef struct _SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER
{
  /* 0x0000 */ unsigned __int64 PolicyCookie;
  /* 0x0008 */ enum _SYSTEM_NET_RATE_CONTROL_TYPE Type;
  /* 0x000c */ long __PADDING__[1];
} SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER, *PSYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER; /* size: 0x0010 */

typedef struct _SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT
{
  /* 0x0000 */ struct _SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER Header;
  /* 0x0010 */ unsigned __int64 OverQuotaHistory;
  /* 0x0018 */ unsigned long IntervalLength;
  /* 0x001c */ unsigned long NumberOfIntervals;
} SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT, *PSYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT; /* size: 0x0020 */

