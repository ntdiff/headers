typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _POP_DEVICE_IDLE_TYPE
{
  DeviceIdleNormal = 0,
  DeviceIdleDisk = 1,
} POP_DEVICE_IDLE_TYPE, *PPOP_DEVICE_IDLE_TYPE;

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef struct _DEVICE_OBJECT_POWER_EXTENSION
{
  /* 0x0000 */ volatile unsigned long IdleCount;
  /* 0x0004 */ volatile unsigned long BusyCount;
  /* 0x0008 */ volatile unsigned long BusyReference;
  /* 0x000c */ unsigned long TotalBusyCount;
  /* 0x0010 */ unsigned long ConservationIdleTime;
  /* 0x0014 */ unsigned long PerformanceIdleTime;
  /* 0x0018 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x001c */ struct _LIST_ENTRY IdleList;
  /* 0x0024 */ enum _POP_DEVICE_IDLE_TYPE IdleType;
  /* 0x0028 */ enum _DEVICE_POWER_STATE IdleState;
  /* 0x002c */ enum _DEVICE_POWER_STATE CurrentState;
  /* 0x0030 */ struct _POP_COOLING_EXTENSION* CoolingExtension;
  /* 0x0034 */ struct _LIST_ENTRY Volume;
  union
  {
    struct
    {
      /* 0x003c */ unsigned long IdleTime;
      /* 0x0040 */ unsigned long NonIdleTime;
    } /* size: 0x0008 */ Disk;
  } /* size: 0x0008 */ Specific;
} DEVICE_OBJECT_POWER_EXTENSION, *PDEVICE_OBJECT_POWER_EXTENSION; /* size: 0x0044 */

