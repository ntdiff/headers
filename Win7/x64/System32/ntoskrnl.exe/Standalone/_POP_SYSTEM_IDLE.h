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

typedef struct _POP_SYSTEM_IDLE
{
  /* 0x0000 */ long AverageIdleness;
  /* 0x0004 */ long LowestIdleness;
  /* 0x0008 */ unsigned long Time;
  /* 0x000c */ unsigned long Timeout;
  /* 0x0010 */ unsigned long LastUserInput;
  /* 0x0014 */ struct POWER_ACTION_POLICY Action;
  /* 0x0020 */ enum _SYSTEM_POWER_STATE MinState;
  /* 0x0024 */ unsigned char SystemRequired;
  /* 0x0025 */ unsigned char IdleWorker;
  /* 0x0026 */ unsigned char Sampling;
  /* 0x0028 */ unsigned __int64 LastTick;
  /* 0x0030 */ unsigned long LastSystemRequiredTime;
  /* 0x0034 */ long __PADDING__[1];
} POP_SYSTEM_IDLE, *PPOP_SYSTEM_IDLE; /* size: 0x0038 */

