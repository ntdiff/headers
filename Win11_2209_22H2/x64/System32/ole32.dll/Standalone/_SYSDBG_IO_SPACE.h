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

typedef struct _SYSDBG_IO_SPACE
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ void* Buffer;
  /* 0x0010 */ unsigned long Request;
  /* 0x0014 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0018 */ unsigned long BusNumber;
  /* 0x001c */ unsigned long AddressSpace;
} SYSDBG_IO_SPACE, *PSYSDBG_IO_SPACE; /* size: 0x0020 */

