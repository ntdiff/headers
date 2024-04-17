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

typedef struct _ADMINISTRATOR_POWER_POLICY
{
  /* 0x0000 */ enum _SYSTEM_POWER_STATE MinSleep;
  /* 0x0004 */ enum _SYSTEM_POWER_STATE MaxSleep;
  /* 0x0008 */ unsigned long MinVideoTimeout;
  /* 0x000c */ unsigned long MaxVideoTimeout;
  /* 0x0010 */ unsigned long MinSpindownTimeout;
  /* 0x0014 */ unsigned long MaxSpindownTimeout;
} ADMINISTRATOR_POWER_POLICY, *PADMINISTRATOR_POWER_POLICY; /* size: 0x0018 */

