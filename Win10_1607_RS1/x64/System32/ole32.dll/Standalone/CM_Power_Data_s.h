typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

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

struct CM_Power_Data_s
{
  /* 0x0000 */ unsigned long PD_Size;
  /* 0x0004 */ enum _DEVICE_POWER_STATE PD_MostRecentPowerState;
  /* 0x0008 */ unsigned long PD_Capabilities;
  /* 0x000c */ unsigned long PD_D1Latency;
  /* 0x0010 */ unsigned long PD_D2Latency;
  /* 0x0014 */ unsigned long PD_D3Latency;
  /* 0x0018 */ enum _DEVICE_POWER_STATE PD_PowerStateMapping[7];
  /* 0x0034 */ enum _SYSTEM_POWER_STATE PD_DeepestSystemWake;
}; /* size: 0x0038 */

