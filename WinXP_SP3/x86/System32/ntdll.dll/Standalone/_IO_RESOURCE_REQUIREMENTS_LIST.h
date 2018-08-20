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
  MaximumInterfaceType = 16,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_4
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _IO_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Option;
  /* 0x0001 */ unsigned char Type;
  /* 0x0002 */ unsigned char ShareDisposition;
  /* 0x0003 */ unsigned char Spare1;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short Spare2;
  union // _TAG_UNNAMED_7
  {
    union
    {
      struct // _TAG_UNNAMED_8
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Port;
      struct // _TAG_UNNAMED_8
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory;
      struct // _TAG_UNNAMED_9
      {
        /* 0x0008 */ unsigned long MinimumVector;
        /* 0x000c */ unsigned long MaximumVector;
      } /* size: 0x0008 */ Interrupt;
      struct // _TAG_UNNAMED_10
      {
        /* 0x0008 */ unsigned long MinimumChannel;
        /* 0x000c */ unsigned long MaximumChannel;
      } /* size: 0x0008 */ Dma;
      struct // _TAG_UNNAMED_8
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Generic;
      struct // _TAG_UNNAMED_11
      {
        /* 0x0008 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct // _TAG_UNNAMED_12
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long MinBusNumber;
        /* 0x0010 */ unsigned long MaxBusNumber;
        /* 0x0014 */ unsigned long Reserved;
      } /* size: 0x0010 */ BusNumber;
      struct // _TAG_UNNAMED_13
      {
        /* 0x0008 */ unsigned long Priority;
        /* 0x000c */ unsigned long Reserved1;
        /* 0x0010 */ unsigned long Reserved2;
      } /* size: 0x000c */ ConfigData;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR; /* size: 0x0020 */

typedef struct _IO_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST; /* size: 0x0028 */

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST
{
  /* 0x0000 */ unsigned long ListSize;
  /* 0x0004 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long SlotNumber;
  /* 0x0010 */ unsigned long Reserved[3];
  /* 0x001c */ unsigned long AlternativeLists;
  /* 0x0020 */ struct _IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST; /* size: 0x0048 */

