typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef enum _FAULT_INFORMATION_ARCH
{
  FaultInformationInvalid = 0,
  FaultInformationArm64 = 1,
  FaultInformationX64 = 2,
} FAULT_INFORMATION_ARCH, *PFAULT_INFORMATION_ARCH;

typedef struct _FAULT_INFORMATION_ARM64_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long WriteNotRead : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long InstructionNotData : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Privileged : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long FaultAddressValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
  }; /* bitfield */
} FAULT_INFORMATION_ARM64_FLAGS, *PFAULT_INFORMATION_ARM64_FLAGS; /* size: 0x0004 */

typedef enum _FAULT_INFORMATION_ARM64_TYPE
{
  UnsupportedUpstreamTransaction = 0,
  AddressSizeFault = 1,
  TlbMatchConflict = 2,
  ExternalFault = 3,
  PermissionFault = 4,
  AccessFlagFault = 5,
  TranslationFault = 6,
  MaxFaultType = 7,
} FAULT_INFORMATION_ARM64_TYPE, *PFAULT_INFORMATION_ARM64_TYPE;

typedef struct _FAULT_INFORMATION_ARM64
{
  /* 0x0000 */ void* DomainHandle;
  /* 0x0008 */ void* FaultAddress;
  /* 0x0010 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0018 */ unsigned long InputMappingId;
  /* 0x001c */ struct _FAULT_INFORMATION_ARM64_FLAGS Flags;
  /* 0x0020 */ enum _FAULT_INFORMATION_ARM64_TYPE Type;
  /* 0x0028 */ unsigned __int64 IommuBaseAddress;
} FAULT_INFORMATION_ARM64, *PFAULT_INFORMATION_ARM64; /* size: 0x0030 */

typedef struct _FAULT_INFORMATION_X64_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long FaultAddressValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
} FAULT_INFORMATION_X64_FLAGS, *PFAULT_INFORMATION_X64_FLAGS; /* size: 0x0004 */

typedef struct _FAULT_INFORMATION_X64
{
  /* 0x0000 */ void* DomainHandle;
  /* 0x0008 */ void* FaultAddress;
  /* 0x0010 */ struct _FAULT_INFORMATION_X64_FLAGS Flags;
  /* 0x0014 */ enum _FAULT_INFORMATION_ARM64_TYPE Type;
  /* 0x0018 */ unsigned __int64 IommuBaseAddress;
  /* 0x0020 */ unsigned long PciSegment;
  /* 0x0024 */ long __PADDING__[1];
} FAULT_INFORMATION_X64, *PFAULT_INFORMATION_X64; /* size: 0x0028 */

typedef struct _FAULT_INFORMATION
{
  /* 0x0000 */ enum _FAULT_INFORMATION_ARCH Type;
  /* 0x0004 */ unsigned char IsStage1;
  union
  {
    /* 0x0008 */ struct _FAULT_INFORMATION_ARM64 Arm64;
    struct
    {
      /* 0x0008 */ struct _FAULT_INFORMATION_X64 X64;
      /* 0x0030 */ long __PADDING__[2];
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
} FAULT_INFORMATION, *PFAULT_INFORMATION; /* size: 0x0038 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _IOMMU_BUS_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ void* GetSvmCapabilities /* function */;
  /* 0x0028 */ void* EnableSvmCapabilities /* function */;
  /* 0x0030 */ void* DisableSvmCapabilities /* function */;
  /* 0x0038 */ void* GetDeviceProperties /* function */;
  /* 0x0040 */ void* GetDeviceId /* function */;
  /* 0x0048 */ void* GetRootDevice /* function */;
} IOMMU_BUS_INTERFACE, *PIOMMU_BUS_INTERFACE; /* size: 0x0050 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef union _IOMMU_SVM_CAPABILITIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AtsCapability : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PriCapability : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PasidCapability : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Rsvd0 : 29; /* bit position: 3 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Padding : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned long PasidMaxWidth : 5; /* bit position: 3 */
        /* 0x0000 */ unsigned long PasidExePerm : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned long PasidPrivMode : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long AtsPageAlignedRequest : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned long AtsGlobalInvalidate : 1; /* bit position: 11 */
        /* 0x0000 */ unsigned long AtsInvalidateQueueDepth : 5; /* bit position: 12 */
        /* 0x0000 */ unsigned long PriPrgResponsePasidRequired : 1; /* bit position: 17 */
        /* 0x0000 */ unsigned long Rsvd : 14; /* bit position: 18 */
      }; /* bitfield */
    } /* size: 0x0004 */ CapReg;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Padding : 18; /* bit position: 0 */
        /* 0x0000 */ unsigned long AtsEnable : 1; /* bit position: 18 */
        /* 0x0000 */ unsigned long PriEnable : 1; /* bit position: 19 */
        /* 0x0000 */ unsigned long PasidEnable : 1; /* bit position: 20 */
        /* 0x0000 */ unsigned long ExecutePermissionEnable : 1; /* bit position: 21 */
        /* 0x0000 */ unsigned long PrivilegedModeEnable : 1; /* bit position: 22 */
        /* 0x0000 */ unsigned long Rsvd : 9; /* bit position: 23 */
      }; /* bitfield */
    } /* size: 0x0004 */ EnabledCaps;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Padding : 23; /* bit position: 0 */
        /* 0x0000 */ unsigned long IsSecureDevice : 1; /* bit position: 23 */
        /* 0x0000 */ unsigned long Rsvd : 8; /* bit position: 24 */
      }; /* bitfield */
    } /* size: 0x0004 */ DeviceInformation;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AtsPriPasidBits : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long CapRegBits : 15; /* bit position: 3 */
      /* 0x0000 */ unsigned long EnabledCapsBits : 5; /* bit position: 18 */
      /* 0x0000 */ unsigned long DeviceInformationBits : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long Rsvd1 : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} IOMMU_SVM_CAPABILITIES, *PIOMMU_SVM_CAPABILITIES; /* size: 0x0004 */

typedef enum _IOMMU_DMA_DEVICE_CREATION_STATE
{
  DmaDeviceCreationStateRemapping = 0,
  DmaDeviceCreationStateSvm = 1,
  DmaDeviceCreationStateUnblocked = 2,
  DmaDeviceCreationStateAtsOnly = 3,
  DmaDeviceCreationStateMax = 4,
} IOMMU_DMA_DEVICE_CREATION_STATE, *PIOMMU_DMA_DEVICE_CREATION_STATE;

typedef struct _IOMMU_DMA_DEVICE
{
  /* 0x0000 */ struct _EXT_IOMMU_DEVICE_ID* DeviceId;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ long DeviceState;
  /* 0x0018 */ struct _IOMMU_DMA_DOMAIN* DomainOwner;
  union
  {
    struct
    {
      /* 0x0020 */ unsigned __int64 LogicalId;
    } /* size: 0x0008 */ Hypervisor;
    struct
    {
      /* 0x0020 */ struct _REGISTERED_IOMMU* Iommu;
      /* 0x0028 */ struct _EXT_IOMMU_DEVICE* ExtDevice;
      /* 0x0030 */ unsigned __int64 SourceId;
      /* 0x0038 */ unsigned long AtsReferenceCount;
      /* 0x003c */ unsigned long InvalidationQueueDepth;
      /* 0x0040 */ struct _EX_RUNDOWN_REF DeviceActive;
    } /* size: 0x0028 */ Native;
  }; /* size: 0x0028 */
  /* 0x0048 */ struct _IOMMU_INTERFACE_CALLBACK_RECORD* InterfaceCallbackRecord;
  /* 0x0050 */ unsigned char DpptException;
  /* 0x0058 */ struct _IOMMU_TRACKED_DEVICE* SvmDevice;
  /* 0x0060 */ void* FaultHandler /* function */;
  /* 0x0068 */ void* FaultContext;
  /* 0x0070 */ struct _FAULT_INFORMATION FaultInfo;
  /* 0x00a8 */ struct _KDPC FaultDpc;
  /* 0x00e8 */ struct _WORK_QUEUE_ITEM FaultWorkItem;
  /* 0x0108 */ unsigned char PasidFaultsSuppressed;
  /* 0x0109 */ unsigned char PasidTaggedDmaEnabled;
  /* 0x010a */ unsigned char DefaultPasidEnabled;
  /* 0x0110 */ struct _IOMMU_BUS_INTERFACE IommuInterface;
  /* 0x0160 */ unsigned long PasidDomainId;
  /* 0x0168 */ struct _LIST_ENTRY PasidDevicesList;
  /* 0x0178 */ struct _EX_PUSH_LOCK PasidDevicesListLock;
  /* 0x0180 */ union _IOMMU_SVM_CAPABILITIES SvmCapControl;
  /* 0x0184 */ enum _IOMMU_DMA_DEVICE_CREATION_STATE CreationStateInitial;
  /* 0x0188 */ enum _IOMMU_DMA_DEVICE_CREATION_STATE CreationStateCurrent;
  /* 0x0190 */ struct _LIST_ENTRY DomainDmaDeviceEntry;
} IOMMU_DMA_DEVICE, *PIOMMU_DMA_DEVICE; /* size: 0x01a0 */

