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
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char ShareDisposition;
  /* 0x0002 */ unsigned short Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Generic;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Port;
      struct
      {
        /* 0x0004 */ unsigned long Level;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned __int64 Affinity;
      } /* size: 0x0010 */ Interrupt;
      struct
      {
        union
        {
          struct
          {
            /* 0x0004 */ unsigned short Reserved;
            /* 0x0006 */ unsigned short MessageCount;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned __int64 Affinity;
          } /* size: 0x0010 */ Raw;
          struct
          {
            /* 0x0004 */ unsigned long Level;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned __int64 Affinity;
          } /* size: 0x0010 */ Translated;
        }; /* size: 0x0010 */
      } /* size: 0x0010 */ MessageInterrupt;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Memory;
      struct
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long Port;
        /* 0x000c */ unsigned long Reserved1;
      } /* size: 0x000c */ Dma;
      struct
      {
        /* 0x0004 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct
      {
        /* 0x0004 */ unsigned long Start;
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Reserved;
      } /* size: 0x000c */ BusNumber;
      struct
      {
        /* 0x0004 */ unsigned long DataSize;
        /* 0x0008 */ unsigned long Reserved1;
        /* 0x000c */ unsigned long Reserved2;
      } /* size: 0x000c */ DeviceSpecificData;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length40;
      } /* size: 0x000c */ Memory40;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length48;
      } /* size: 0x000c */ Memory48;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length64;
      } /* size: 0x000c */ Memory64;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR; /* size: 0x0014 */

typedef struct _CM_PARTIAL_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST; /* size: 0x001c */

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR; /* size: 0x0024 */

