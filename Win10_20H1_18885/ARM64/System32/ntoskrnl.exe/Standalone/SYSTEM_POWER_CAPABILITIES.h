struct BATTERY_REPORTING_SCALE
{
  /* 0x0000 */ unsigned long Granularity;
  /* 0x0004 */ unsigned long Capacity;
}; /* size: 0x0008 */

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

struct SYSTEM_POWER_CAPABILITIES
{
  /* 0x0000 */ unsigned char PowerButtonPresent;
  /* 0x0001 */ unsigned char SleepButtonPresent;
  /* 0x0002 */ unsigned char LidPresent;
  /* 0x0003 */ unsigned char SystemS1;
  /* 0x0004 */ unsigned char SystemS2;
  /* 0x0005 */ unsigned char SystemS3;
  /* 0x0006 */ unsigned char SystemS4;
  /* 0x0007 */ unsigned char SystemS5;
  /* 0x0008 */ unsigned char HiberFilePresent;
  /* 0x0009 */ unsigned char FullWake;
  /* 0x000a */ unsigned char VideoDimPresent;
  /* 0x000b */ unsigned char ApmPresent;
  /* 0x000c */ unsigned char UpsPresent;
  /* 0x000d */ unsigned char ThermalControl;
  /* 0x000e */ unsigned char ProcessorThrottle;
  /* 0x000f */ unsigned char ProcessorMinThrottle;
  /* 0x0010 */ unsigned char ProcessorMaxThrottle;
  /* 0x0011 */ unsigned char FastSystemS4;
  /* 0x0012 */ unsigned char Hiberboot;
  /* 0x0013 */ unsigned char WakeAlarmPresent;
  /* 0x0014 */ unsigned char AoAc;
  /* 0x0015 */ unsigned char DiskSpinDown;
  /* 0x0016 */ unsigned char HiberFileType;
  /* 0x0017 */ unsigned char AoAcConnectivitySupported;
  /* 0x0018 */ unsigned char spare3[6];
  /* 0x001e */ unsigned char SystemBatteriesPresent;
  /* 0x001f */ unsigned char BatteriesAreShortTerm;
  /* 0x0020 */ struct BATTERY_REPORTING_SCALE BatteryScale[3];
  /* 0x0038 */ enum _SYSTEM_POWER_STATE AcOnLineWake;
  /* 0x003c */ enum _SYSTEM_POWER_STATE SoftLidWake;
  /* 0x0040 */ enum _SYSTEM_POWER_STATE RtcWake;
  /* 0x0044 */ enum _SYSTEM_POWER_STATE MinDeviceWakeState;
  /* 0x0048 */ enum _SYSTEM_POWER_STATE DefaultLowLatencyWake;
}; /* size: 0x004c */

