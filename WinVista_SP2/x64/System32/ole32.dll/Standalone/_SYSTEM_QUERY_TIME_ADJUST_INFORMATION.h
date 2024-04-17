typedef struct _SYSTEM_QUERY_TIME_ADJUST_INFORMATION
{
  /* 0x0000 */ unsigned long TimeAdjustment;
  /* 0x0004 */ unsigned long TimeIncrement;
  /* 0x0008 */ unsigned char Enable;
  /* 0x0009 */ char __PADDING__[3];
} SYSTEM_QUERY_TIME_ADJUST_INFORMATION, *PSYSTEM_QUERY_TIME_ADJUST_INFORMATION; /* size: 0x000c */

