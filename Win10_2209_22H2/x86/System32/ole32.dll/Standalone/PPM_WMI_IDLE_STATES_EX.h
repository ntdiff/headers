struct PPM_WMI_IDLE_STATE
{
  /* 0x0000 */ unsigned long Latency;
  /* 0x0004 */ unsigned long Power;
  /* 0x0008 */ unsigned long TimeCheck;
  /* 0x000c */ unsigned char PromotePercent;
  /* 0x000d */ unsigned char DemotePercent;
  /* 0x000e */ unsigned char StateType;
  /* 0x000f */ unsigned char Reserved;
  /* 0x0010 */ unsigned long StateFlags;
  /* 0x0014 */ unsigned long Context;
  /* 0x0018 */ unsigned long IdleHandler;
  /* 0x001c */ unsigned long Reserved1;
}; /* size: 0x0020 */

struct PPM_WMI_IDLE_STATES_EX
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ unsigned long TargetState;
  /* 0x000c */ unsigned long OldState;
  /* 0x0010 */ void* TargetProcessors;
  /* 0x0014 */ struct PPM_WMI_IDLE_STATE State[1];
}; /* size: 0x0034 */

