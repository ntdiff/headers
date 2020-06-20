typedef struct _KTIMER_TABLE_STATE
{
  /* 0x0000 */ unsigned __int64 LastTimerExpiration[1];
  /* 0x0008 */ unsigned long LastTimerHand[1];
  /* 0x000c */ long __PADDING__[1];
} KTIMER_TABLE_STATE, *PKTIMER_TABLE_STATE; /* size: 0x0010 */

