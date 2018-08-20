typedef struct _PROCESSOR_IDLE_CONSTRAINTS
{
  /* 0x0000 */ unsigned __int64 TotalTime;
  /* 0x0008 */ unsigned __int64 IdleTime;
  /* 0x0010 */ unsigned __int64 ExpectedIdleDuration;
  /* 0x0018 */ unsigned long MaxIdleDuration;
  /* 0x001c */ unsigned long OverrideState;
  /* 0x0020 */ unsigned long TimeCheck;
  /* 0x0024 */ unsigned char PromotePercent;
  /* 0x0025 */ unsigned char DemotePercent;
  /* 0x0026 */ unsigned char Parked;
  /* 0x0027 */ unsigned char Interruptible;
  /* 0x0028 */ unsigned char PlatformIdle;
  /* 0x0029 */ char __PADDING__[7];
} PROCESSOR_IDLE_CONSTRAINTS, *PPROCESSOR_IDLE_CONSTRAINTS; /* size: 0x0030 */

