typedef struct _PS_WAKE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NotificationChannel;
  /* 0x0008 */ unsigned __int64 WakeCounters[5];
  /* 0x0030 */ unsigned __int64 NoWakeCounter;
} PS_WAKE_INFORMATION, *PPS_WAKE_INFORMATION; /* size: 0x0038 */

