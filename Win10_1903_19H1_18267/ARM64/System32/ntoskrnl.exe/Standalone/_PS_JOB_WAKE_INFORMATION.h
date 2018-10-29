typedef struct _PS_JOB_WAKE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NotificationChannel;
  /* 0x0008 */ unsigned __int64 WakeCounters[7];
  /* 0x0040 */ unsigned __int64 NoWakeCounter;
} PS_JOB_WAKE_INFORMATION, *PPS_JOB_WAKE_INFORMATION; /* size: 0x0048 */

