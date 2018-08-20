struct PPM_IDLE_STATE
{
  /* 0x0000 */ void* IdleHandler /* function */;
  /* 0x0004 */ unsigned long Context;
  /* 0x0008 */ unsigned long Latency;
  /* 0x000c */ unsigned long Power;
  /* 0x0010 */ unsigned long TimeCheck;
  /* 0x0014 */ unsigned long StateFlags;
  /* 0x0018 */ unsigned char PromotePercent;
  /* 0x0019 */ unsigned char DemotePercent;
  /* 0x001a */ unsigned char PromotePercentBase;
  /* 0x001b */ unsigned char DemotePercentBase;
  /* 0x001c */ unsigned char StateType;
  /* 0x001d */ char __PADDING__[3];
}; /* size: 0x0020 */

