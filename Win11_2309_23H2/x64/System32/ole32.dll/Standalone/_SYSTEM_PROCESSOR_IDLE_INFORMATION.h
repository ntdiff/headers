typedef struct _SYSTEM_PROCESSOR_IDLE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 IdleTime;
  /* 0x0008 */ unsigned __int64 C1Time;
  /* 0x0010 */ unsigned __int64 C2Time;
  /* 0x0018 */ unsigned __int64 C3Time;
  /* 0x0020 */ unsigned long C1Transitions;
  /* 0x0024 */ unsigned long C2Transitions;
  /* 0x0028 */ unsigned long C3Transitions;
  /* 0x002c */ unsigned long Padding;
} SYSTEM_PROCESSOR_IDLE_INFORMATION, *PSYSTEM_PROCESSOR_IDLE_INFORMATION; /* size: 0x0030 */

