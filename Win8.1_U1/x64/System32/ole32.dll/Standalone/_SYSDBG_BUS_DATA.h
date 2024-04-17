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

typedef struct _SYSDBG_BUS_DATA
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0008 */ void* Buffer;
  /* 0x0010 */ unsigned long Request;
  /* 0x0014 */ enum _BUS_DATA_TYPE BusDataType;
  /* 0x0018 */ unsigned long BusNumber;
  /* 0x001c */ unsigned long SlotNumber;
} SYSDBG_BUS_DATA, *PSYSDBG_BUS_DATA; /* size: 0x0020 */

