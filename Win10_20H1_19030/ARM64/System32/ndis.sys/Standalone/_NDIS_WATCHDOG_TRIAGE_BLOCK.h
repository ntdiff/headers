typedef struct _NDIS_WATCHDOG_TRIAGE_BLOCK
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long TimeoutMilliseconds;
  /* 0x0008 */ unsigned __int64 GlobalTriage;
  /* 0x0010 */ unsigned __int64 TargetObject;
  /* 0x0018 */ unsigned __int64 StartTime;
  /* 0x0020 */ unsigned __int64 PrimaryThread;
  /* 0x0028 */ unsigned __int64 ExtraArgument;
  /* 0x0030 */ unsigned char Pending9FDetected;
  /* 0x0038 */ unsigned __int64 TargetInstructionPointer;
} NDIS_WATCHDOG_TRIAGE_BLOCK, *PNDIS_WATCHDOG_TRIAGE_BLOCK; /* size: 0x0040 */

