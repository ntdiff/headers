typedef struct _SYSTEM_POWER_STATE_DISABLE_REASON
{
  /* 0x0000 */ unsigned char AffectedState[8];
  /* 0x0008 */ unsigned long PowerReasonCode;
  /* 0x000c */ unsigned long PowerReasonLength;
} SYSTEM_POWER_STATE_DISABLE_REASON, *PSYSTEM_POWER_STATE_DISABLE_REASON; /* size: 0x0010 */

