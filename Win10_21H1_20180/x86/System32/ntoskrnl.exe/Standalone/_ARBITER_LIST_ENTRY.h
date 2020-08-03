typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0008 */ unsigned long AlternativeCount;
  /* 0x000c */ struct _IO_RESOURCE_DESCRIPTOR* Alternatives;
  /* 0x0010 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0014 */ enum _ARBITER_REQUEST_SOURCE RequestSource;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ long WorkSpace;
  /* 0x0020 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0024 */ unsigned long SlotNumber;
  /* 0x0028 */ unsigned long BusNumber;
  /* 0x002c */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* Assignment;
  /* 0x0030 */ struct _IO_RESOURCE_DESCRIPTOR* SelectedAlternative;
  /* 0x0034 */ enum _ARBITER_RESULT Result;
} ARBITER_LIST_ENTRY, *PARBITER_LIST_ENTRY; /* size: 0x0038 */

