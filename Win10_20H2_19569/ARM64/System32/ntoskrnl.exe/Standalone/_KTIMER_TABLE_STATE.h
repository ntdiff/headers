typedef struct _KTIMER_TABLE_STATE
{
  /* 0x0000 */ unsigned __int64 LastTimerExpiration[2];
  /* 0x0010 */ unsigned long LastTimerHand[2];
} KTIMER_TABLE_STATE, *PKTIMER_TABLE_STATE; /* size: 0x0018 */

