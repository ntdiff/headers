typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _ARBITER_REQUEST_SOURCE
{
  ArbiterRequestUndefined = -1,
  ArbiterRequestLegacyReported = 0,
  ArbiterRequestHalReported = 1,
  ArbiterRequestLegacyAssigned = 2,
  ArbiterRequestPnpDetected = 3,
  ArbiterRequestPnpEnumerated = 4,
} ARBITER_REQUEST_SOURCE, *PARBITER_REQUEST_SOURCE;

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

typedef enum _ARBITER_RESULT
{
  ArbiterResultUndefined = -1,
  ArbiterResultSuccess = 0,
  ArbiterResultExternalConflict = 1,
  ArbiterResultNullRequest = 2,
} ARBITER_RESULT, *PARBITER_RESULT;

typedef struct _ARBITER_LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long AlternativeCount;
  /* 0x0018 */ struct _IO_RESOURCE_DESCRIPTOR* Alternatives;
  /* 0x0020 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0028 */ enum _ARBITER_REQUEST_SOURCE RequestSource;
  /* 0x002c */ unsigned long Flags;
  /* 0x0030 */ __int64 WorkSpace;
  /* 0x0038 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x003c */ unsigned long SlotNumber;
  /* 0x0040 */ unsigned long BusNumber;
  /* 0x0048 */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* Assignment;
  /* 0x0050 */ struct _IO_RESOURCE_DESCRIPTOR* SelectedAlternative;
  /* 0x0058 */ enum _ARBITER_RESULT Result;
  /* 0x005c */ long __PADDING__[1];
} ARBITER_LIST_ENTRY, *PARBITER_LIST_ENTRY; /* size: 0x0060 */

