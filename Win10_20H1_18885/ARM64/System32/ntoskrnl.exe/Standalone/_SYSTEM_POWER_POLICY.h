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

typedef struct _SYSTEM_POWER_POLICY
{
  /* 0x0000 */ unsigned long Revision;
  /* 0x0004 */ struct POWER_ACTION_POLICY PowerButton;
  /* 0x0010 */ struct POWER_ACTION_POLICY SleepButton;
  /* 0x001c */ struct POWER_ACTION_POLICY LidClose;
  /* 0x0028 */ enum _SYSTEM_POWER_STATE LidOpenWake;
  /* 0x002c */ unsigned long Reserved;
  /* 0x0030 */ struct POWER_ACTION_POLICY Idle;
  /* 0x003c */ unsigned long IdleTimeout;
  /* 0x0040 */ unsigned char IdleSensitivity;
  /* 0x0041 */ unsigned char DynamicThrottle;
  /* 0x0042 */ unsigned char Spare2[2];
  /* 0x0044 */ enum _SYSTEM_POWER_STATE MinSleep;
  /* 0x0048 */ enum _SYSTEM_POWER_STATE MaxSleep;
  /* 0x004c */ enum _SYSTEM_POWER_STATE ReducedLatencySleep;
  /* 0x0050 */ unsigned long WinLogonFlags;
  /* 0x0054 */ unsigned long Spare3;
  /* 0x0058 */ unsigned long DozeS4Timeout;
  /* 0x005c */ unsigned long BroadcastCapacityResolution;
  /* 0x0060 */ struct SYSTEM_POWER_LEVEL DischargePolicy[4];
  /* 0x00c0 */ unsigned long VideoTimeout;
  /* 0x00c4 */ unsigned char VideoDimDisplay;
  /* 0x00c8 */ unsigned long VideoReserved[3];
  /* 0x00d4 */ unsigned long SpindownTimeout;
  /* 0x00d8 */ unsigned char OptimizeForPower;
  /* 0x00d9 */ unsigned char FanThrottleTolerance;
  /* 0x00da */ unsigned char ForcedThrottle;
  /* 0x00db */ unsigned char MinThrottle;
  /* 0x00dc */ struct POWER_ACTION_POLICY OverThrottled;
} SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY; /* size: 0x00e8 */

