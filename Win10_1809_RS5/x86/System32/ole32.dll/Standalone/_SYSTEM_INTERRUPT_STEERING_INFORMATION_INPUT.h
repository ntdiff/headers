typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT
{
  /* 0x0000 */ unsigned long Gsiv;
  /* 0x0004 */ unsigned char ControllerInterrupt;
  /* 0x0005 */ unsigned char EdgeInterrupt;
  /* 0x0006 */ unsigned char IsPrimaryInterrupt;
  /* 0x0008 */ struct _GROUP_AFFINITY TargetAffinity;
} SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT, *PSYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT; /* size: 0x0014 */

