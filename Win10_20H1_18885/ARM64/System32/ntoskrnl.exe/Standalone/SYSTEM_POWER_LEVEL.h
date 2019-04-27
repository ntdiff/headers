enum POWER_ACTION
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
  PowerActionDisplayOff = 8,
};

struct POWER_ACTION_POLICY
{
  /* 0x0000 */ enum POWER_ACTION Action;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long EventCode;
}; /* size: 0x000c */

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

struct SYSTEM_POWER_LEVEL
{
  /* 0x0000 */ unsigned char Enable;
  /* 0x0001 */ unsigned char Spare[3];
  /* 0x0004 */ unsigned long BatteryLevel;
  /* 0x0008 */ struct POWER_ACTION_POLICY PowerPolicy;
  /* 0x0014 */ enum _SYSTEM_POWER_STATE MinSystemState;
}; /* size: 0x0018 */

