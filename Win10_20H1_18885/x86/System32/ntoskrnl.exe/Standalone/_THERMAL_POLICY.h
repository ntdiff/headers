typedef struct _THERMAL_POLICY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char WaitForUpdate;
  /* 0x0005 */ unsigned char Hibernate;
  /* 0x0006 */ unsigned char Critical;
  /* 0x0007 */ unsigned char ThermalStandby;
  /* 0x0008 */ unsigned long ActivationReasons;
  /* 0x000c */ unsigned long PassiveLimit;
  /* 0x0010 */ unsigned long ActiveLevel;
  /* 0x0014 */ unsigned char OverThrottled;
  /* 0x0015 */ char __PADDING__[3];
} THERMAL_POLICY, *PTHERMAL_POLICY; /* size: 0x0018 */

