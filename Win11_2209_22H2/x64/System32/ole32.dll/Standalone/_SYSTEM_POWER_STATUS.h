typedef struct _SYSTEM_POWER_STATUS
{
  /* 0x0000 */ unsigned char ACLineStatus;
  /* 0x0001 */ unsigned char BatteryFlag;
  /* 0x0002 */ unsigned char BatteryLifePercent;
  /* 0x0003 */ unsigned char SystemStatusFlag;
  /* 0x0004 */ unsigned long BatteryLifeTime;
  /* 0x0008 */ unsigned long BatteryFullLifeTime;
} SYSTEM_POWER_STATUS, *PSYSTEM_POWER_STATUS; /* size: 0x000c */

