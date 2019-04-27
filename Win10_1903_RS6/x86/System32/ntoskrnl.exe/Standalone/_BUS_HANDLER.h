typedef enum _INTERFACE_TYPE
{
  InterfaceTypeUndefined = -1,
  Internal = 0,
  Isa = 1,
  Eisa = 2,
  MicroChannel = 3,
  TurboChannel = 4,
  PCIBus = 5,
  VMEBus = 6,
  NuBus = 7,
  PCMCIABus = 8,
  CBus = 9,
  MPIBus = 10,
  MPSABus = 11,
  ProcessorInternal = 12,
  InternalPowerBus = 13,
  PNPISABus = 14,
  PNPBus = 15,
  Vmcs = 16,
  ACPIBus = 17,
  MaximumInterfaceType = 18,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

typedef enum _BUS_DATA_TYPE
{
  ConfigurationSpaceUndefined = -1,
  Cmos = 0,
  EisaConfiguration = 1,
  Pos = 2,
  CbusConfiguration = 3,
  PCIConfiguration = 4,
  VMEConfiguration = 5,
  NuBusConfiguration = 6,
  PCMCIAConfiguration = 7,
  MPIConfiguration = 8,
  MPSAConfiguration = 9,
  PNPISAConfiguration = 10,
  SgiInternalConfiguration = 11,
  MaximumBusDataType = 12,
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;

typedef struct _BUS_HANDLER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0008 */ enum _BUS_DATA_TYPE ConfigurationType;
  /* 0x000c */ unsigned long BusNumber;
  /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0014 */ struct _BUS_HANDLER* ParentHandler;
  /* 0x0018 */ void* BusData;
  /* 0x001c */ unsigned long DeviceControlExtensionSize;
  /* 0x0020 */ struct _SUPPORTED_RANGES* BusAddresses;
  /* 0x0024 */ unsigned long Reserved[4];
  /* 0x0034 */ void* GetBusData /* function */;
  /* 0x0038 */ void* SetBusData /* function */;
  /* 0x003c */ void* AdjustResourceList /* function */;
  /* 0x0040 */ void* AssignSlotResources /* function */;
  /* 0x0044 */ void* TranslateBusAddress /* function */;
  /* 0x0048 */ void* Spare1;
  /* 0x004c */ void* Spare2;
  /* 0x0050 */ void* Spare3;
  /* 0x0054 */ void* Spare4;
  /* 0x0058 */ void* Spare5;
  /* 0x005c */ void* Spare6;
  /* 0x0060 */ void* Spare7;
  /* 0x0064 */ void* Spare8;
} BUS_HANDLER, *PBUS_HANDLER; /* size: 0x0068 */

