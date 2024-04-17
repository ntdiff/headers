typedef struct _SYSTEM_DPC_BEHAVIOR_INFORMATION
{
  /* 0x0000 */ unsigned long Spare;
  /* 0x0004 */ unsigned long DpcQueueDepth;
  /* 0x0008 */ unsigned long MinimumDpcRate;
  /* 0x000c */ unsigned long AdjustDpcThreshold;
  /* 0x0010 */ unsigned long IdealDpcRate;
} SYSTEM_DPC_BEHAVIOR_INFORMATION, *PSYSTEM_DPC_BEHAVIOR_INFORMATION; /* size: 0x0014 */

