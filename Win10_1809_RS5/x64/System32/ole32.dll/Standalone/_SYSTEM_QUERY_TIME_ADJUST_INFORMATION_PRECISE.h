typedef struct _SYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE
{
  /* 0x0000 */ unsigned __int64 TimeAdjustment;
  /* 0x0008 */ unsigned __int64 TimeIncrement;
  /* 0x0010 */ unsigned char Enable;
  /* 0x0011 */ char __PADDING__[7];
} SYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE, *PSYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE; /* size: 0x0018 */

