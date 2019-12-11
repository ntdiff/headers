typedef struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX
{
  /* 0x0000 */ unsigned long WakeReasonBadIndication;
  /* 0x0004 */ unsigned long WakeReasonNoIndication;
  /* 0x0008 */ unsigned long WakeReasonUnknown;
  /* 0x000c */ unsigned long LastUnknownWakeReason;
} NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX, *PNDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX; /* size: 0x0010 */

