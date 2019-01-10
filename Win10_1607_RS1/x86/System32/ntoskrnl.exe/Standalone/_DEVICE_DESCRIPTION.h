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

typedef enum _DMA_WIDTH
{
  Width8Bits = 0,
  Width16Bits = 1,
  Width32Bits = 2,
  Width64Bits = 3,
  WidthNoWrap = 4,
  MaximumDmaWidth = 5,
} DMA_WIDTH, *PDMA_WIDTH;

typedef enum _DMA_SPEED
{
  Compatible = 0,
  TypeA = 1,
  TypeB = 2,
  TypeC = 3,
  TypeF = 4,
  MaximumDmaSpeed = 5,
} DMA_SPEED, *PDMA_SPEED;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _DEVICE_DESCRIPTION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char Master;
  /* 0x0005 */ unsigned char ScatterGather;
  /* 0x0006 */ unsigned char DemandMode;
  /* 0x0007 */ unsigned char AutoInitialize;
  /* 0x0008 */ unsigned char Dma32BitAddresses;
  /* 0x0009 */ unsigned char IgnoreCount;
  /* 0x000a */ unsigned char Reserved1;
  /* 0x000b */ unsigned char Dma64BitAddresses;
  /* 0x000c */ unsigned long BusNumber;
  /* 0x0010 */ unsigned long DmaChannel;
  /* 0x0014 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0018 */ enum _DMA_WIDTH DmaWidth;
  /* 0x001c */ enum _DMA_SPEED DmaSpeed;
  /* 0x0020 */ unsigned long MaximumLength;
  /* 0x0024 */ unsigned long DmaPort;
  /* 0x0028 */ unsigned long DmaAddressWidth;
  /* 0x002c */ unsigned long DmaControllerInstance;
  /* 0x0030 */ unsigned long DmaRequestLine;
  /* 0x0038 */ union _LARGE_INTEGER DeviceAddress;
} DEVICE_DESCRIPTION, *PDEVICE_DESCRIPTION; /* size: 0x0040 */

