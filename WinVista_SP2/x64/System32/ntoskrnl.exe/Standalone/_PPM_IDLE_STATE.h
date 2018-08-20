typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ void* IdleHandler /* function */;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ unsigned long Latency;
  /* 0x0014 */ unsigned long Power;
  /* 0x0018 */ unsigned long TimeCheck;
  /* 0x001c */ unsigned long StateFlags;
  /* 0x0020 */ unsigned char PromotePercent;
  /* 0x0021 */ unsigned char DemotePercent;
  /* 0x0022 */ unsigned char PromotePercentBase;
  /* 0x0023 */ unsigned char DemotePercentBase;
  /* 0x0024 */ unsigned char StateType;
  /* 0x0025 */ char __PADDING__[3];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0028 */

