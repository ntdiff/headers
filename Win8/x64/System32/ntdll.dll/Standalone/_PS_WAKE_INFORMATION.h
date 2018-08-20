typedef struct _PS_WAKE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NotificationChannel;
  /* 0x0008 */ unsigned __int64 WakeCounters[8];
} PS_WAKE_INFORMATION, *PPS_WAKE_INFORMATION; /* size: 0x0048 */

