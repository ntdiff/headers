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

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef struct _KSDEVICE
{
  /* 0x0000 */ const struct _KSDEVICE_DESCRIPTOR* Descriptor;
  /* 0x0004 */ void* Bag;
  /* 0x0008 */ void* Context;
  /* 0x000c */ struct _DEVICE_OBJECT* FunctionalDeviceObject;
  /* 0x0010 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0014 */ struct _DEVICE_OBJECT* NextDeviceObject;
  /* 0x0018 */ unsigned char Started;
  /* 0x001c */ enum _SYSTEM_POWER_STATE SystemPowerState;
  /* 0x0020 */ enum _DEVICE_POWER_STATE DevicePowerState;
} KSDEVICE, *PKSDEVICE; /* size: 0x0024 */

