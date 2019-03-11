typedef enum _WHEA_ERROR_SOURCE_TYPE
{
  WheaErrSrcTypeMCE = 0,
  WheaErrSrcTypeCMC = 1,
  WheaErrSrcTypeCPE = 2,
  WheaErrSrcTypeNMI = 3,
  WheaErrSrcTypePCIe = 4,
  WheaErrSrcTypeGeneric = 5,
  WheaErrSrcTypeINIT = 6,
  WheaErrSrcTypeBOOT = 7,
  WheaErrSrcTypeSCIGeneric = 8,
  WheaErrSrcTypeIPFMCA = 9,
  WheaErrSrcTypeIPFCMC = 10,
  WheaErrSrcTypeIPFCPE = 11,
  WheaErrSrcTypeGenericV2 = 12,
  WheaErrSrcTypeSCIGenericV2 = 13,
  WheaErrSrcTypeBMC = 14,
  WheaErrSrcTypePMEM = 15,
  WheaErrSrcTypeDeviceDriver = 16,
  WheaErrSrcTypeMax = 17,
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;

typedef enum _WHEA_ERROR_SOURCE_STATE
{
  WheaErrSrcStateStopped = 1,
  WheaErrSrcStateStarted = 2,
  WheaErrSrcStateRemoved = 3,
  WheaErrSrcStateRemovePending = 4,
} WHEA_ERROR_SOURCE_STATE, *PWHEA_ERROR_SOURCE_STATE;

typedef union _XPF_MCE_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long MCG_CapabilityRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long MCG_GlobalControlRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} XPF_MCE_FLAGS, *PXPF_MCE_FLAGS; /* size: 0x0004 */

typedef union _XPF_MC_BANK_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ClearOnInitializationRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ControlDataRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} XPF_MC_BANK_FLAGS, *PXPF_MC_BANK_FLAGS; /* size: 0x0001 */

typedef struct _WHEA_XPF_MC_BANK_DESCRIPTOR
{
  /* 0x0000 */ unsigned char BankNumber;
  /* 0x0001 */ unsigned char ClearOnInitialization;
  /* 0x0002 */ unsigned char StatusDataFormat;
  /* 0x0003 */ union _XPF_MC_BANK_FLAGS Flags;
  /* 0x0004 */ unsigned long ControlMsr;
  /* 0x0008 */ unsigned long StatusMsr;
  /* 0x000c */ unsigned long AddressMsr;
  /* 0x0010 */ unsigned long MiscMsr;
  /* 0x0014 */ unsigned __int64 ControlData;
} WHEA_XPF_MC_BANK_DESCRIPTOR, *PWHEA_XPF_MC_BANK_DESCRIPTOR; /* size: 0x001c */

typedef struct _WHEA_XPF_MCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char NumberOfBanks;
  /* 0x0004 */ union _XPF_MCE_FLAGS Flags;
  /* 0x0008 */ unsigned __int64 MCG_Capability;
  /* 0x0010 */ unsigned __int64 MCG_GlobalControl;
  /* 0x0018 */ struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];
} WHEA_XPF_MCE_DESCRIPTOR, *PWHEA_XPF_MCE_DESCRIPTOR; /* size: 0x0398 */

typedef union _WHEA_NOTIFICATION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short PollIntervalRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short SwitchToPollingThresholdRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short SwitchToPollingWindowRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short ErrorThresholdRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short ErrorThresholdWindowRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short Reserved : 11; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_NOTIFICATION_FLAGS, *PWHEA_NOTIFICATION_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_NOTIFICATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ union _WHEA_NOTIFICATION_FLAGS Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
      } /* size: 0x0004 */ Polled;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Interrupt;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ LocalInterrupt;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sci;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Nmi;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sea;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sei;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Gsiv;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} WHEA_NOTIFICATION_DESCRIPTOR, *PWHEA_NOTIFICATION_DESCRIPTOR; /* size: 0x001c */

typedef struct _WHEA_XPF_CMC_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char NumberOfBanks;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;
  /* 0x0024 */ struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];
} WHEA_XPF_CMC_DESCRIPTOR, *PWHEA_XPF_CMC_DESCRIPTOR; /* size: 0x03a4 */

typedef struct _WHEA_XPF_NMI_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
} WHEA_XPF_NMI_DESCRIPTOR, *PWHEA_XPF_NMI_DESCRIPTOR; /* size: 0x0003 */

typedef struct _WHEA_IPF_MCA_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
} WHEA_IPF_MCA_DESCRIPTOR, *PWHEA_IPF_MCA_DESCRIPTOR; /* size: 0x0004 */

typedef struct _WHEA_IPF_CMC_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
} WHEA_IPF_CMC_DESCRIPTOR, *PWHEA_IPF_CMC_DESCRIPTOR; /* size: 0x0004 */

typedef struct _WHEA_IPF_CPE_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
} WHEA_IPF_CPE_DESCRIPTOR, *PWHEA_IPF_CPE_DESCRIPTOR; /* size: 0x0004 */

typedef struct _WHEA_PCI_SLOT_NUMBER
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long DeviceNumber : 5; /* bit position: 0 */
          /* 0x0000 */ unsigned long FunctionNumber : 3; /* bit position: 5 */
          /* 0x0000 */ unsigned long Reserved : 24; /* bit position: 8 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0000 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} WHEA_PCI_SLOT_NUMBER, *PWHEA_PCI_SLOT_NUMBER; /* size: 0x0004 */

typedef union _AER_ROOTPORT_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short UncorrectableErrorMaskRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short UncorrectableErrorSeverityRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short CorrectableErrorMaskRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short AdvancedCapsAndControlRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short RootErrorCommandRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short Reserved : 11; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} AER_ROOTPORT_DESCRIPTOR_FLAGS, *PAER_ROOTPORT_DESCRIPTOR_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_AER_ROOTPORT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _WHEA_PCI_SLOT_NUMBER Slot;
  /* 0x000c */ unsigned short DeviceControl;
  /* 0x000e */ union _AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;
  /* 0x0010 */ unsigned long UncorrectableErrorMask;
  /* 0x0014 */ unsigned long UncorrectableErrorSeverity;
  /* 0x0018 */ unsigned long CorrectableErrorMask;
  /* 0x001c */ unsigned long AdvancedCapsAndControl;
  /* 0x0020 */ unsigned long RootErrorCommand;
} WHEA_AER_ROOTPORT_DESCRIPTOR, *PWHEA_AER_ROOTPORT_DESCRIPTOR; /* size: 0x0024 */

typedef union _AER_ENDPOINT_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short UncorrectableErrorMaskRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short UncorrectableErrorSeverityRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short CorrectableErrorMaskRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short AdvancedCapsAndControlRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short Reserved : 12; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} AER_ENDPOINT_DESCRIPTOR_FLAGS, *PAER_ENDPOINT_DESCRIPTOR_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_AER_ENDPOINT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _WHEA_PCI_SLOT_NUMBER Slot;
  /* 0x000c */ unsigned short DeviceControl;
  /* 0x000e */ union _AER_ENDPOINT_DESCRIPTOR_FLAGS Flags;
  /* 0x0010 */ unsigned long UncorrectableErrorMask;
  /* 0x0014 */ unsigned long UncorrectableErrorSeverity;
  /* 0x0018 */ unsigned long CorrectableErrorMask;
  /* 0x001c */ unsigned long AdvancedCapsAndControl;
} WHEA_AER_ENDPOINT_DESCRIPTOR, *PWHEA_AER_ENDPOINT_DESCRIPTOR; /* size: 0x0020 */

typedef union _AER_BRIDGE_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short UncorrectableErrorMaskRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short UncorrectableErrorSeverityRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short CorrectableErrorMaskRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short AdvancedCapsAndControlRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short SecondaryUncorrectableErrorMaskRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short SecondaryUncorrectableErrorSevRW : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned short SecondaryCapsAndControlRW : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned short Reserved : 9; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} AER_BRIDGE_DESCRIPTOR_FLAGS, *PAER_BRIDGE_DESCRIPTOR_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_AER_BRIDGE_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _WHEA_PCI_SLOT_NUMBER Slot;
  /* 0x000c */ unsigned short DeviceControl;
  /* 0x000e */ union _AER_BRIDGE_DESCRIPTOR_FLAGS Flags;
  /* 0x0010 */ unsigned long UncorrectableErrorMask;
  /* 0x0014 */ unsigned long UncorrectableErrorSeverity;
  /* 0x0018 */ unsigned long CorrectableErrorMask;
  /* 0x001c */ unsigned long AdvancedCapsAndControl;
  /* 0x0020 */ unsigned long SecondaryUncorrectableErrorMask;
  /* 0x0024 */ unsigned long SecondaryUncorrectableErrorSev;
  /* 0x0028 */ unsigned long SecondaryCapsAndControl;
} WHEA_AER_BRIDGE_DESCRIPTOR, *PWHEA_AER_BRIDGE_DESCRIPTOR; /* size: 0x002c */

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

typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Reserved;
  /* 0x0003 */ unsigned char Enabled;
  /* 0x0004 */ unsigned long ErrStatusBlockLength;
  /* 0x0008 */ unsigned long RelatedErrorSourceId;
  /* 0x000c */ unsigned char ErrStatusAddressSpaceID;
  /* 0x000d */ unsigned char ErrStatusAddressBitWidth;
  /* 0x000e */ unsigned char ErrStatusAddressBitOffset;
  /* 0x000f */ unsigned char ErrStatusAddressAccessSize;
  /* 0x0010 */ union _LARGE_INTEGER ErrStatusAddress;
  /* 0x0018 */ struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;
} WHEA_GENERIC_ERROR_DESCRIPTOR, *PWHEA_GENERIC_ERROR_DESCRIPTOR; /* size: 0x0034 */

typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Reserved;
  /* 0x0003 */ unsigned char Enabled;
  /* 0x0004 */ unsigned long ErrStatusBlockLength;
  /* 0x0008 */ unsigned long RelatedErrorSourceId;
  /* 0x000c */ unsigned char ErrStatusAddressSpaceID;
  /* 0x000d */ unsigned char ErrStatusAddressBitWidth;
  /* 0x000e */ unsigned char ErrStatusAddressBitOffset;
  /* 0x000f */ unsigned char ErrStatusAddressAccessSize;
  /* 0x0010 */ union _LARGE_INTEGER ErrStatusAddress;
  /* 0x0018 */ struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;
  /* 0x0034 */ unsigned char ReadAckAddressSpaceID;
  /* 0x0035 */ unsigned char ReadAckAddressBitWidth;
  /* 0x0036 */ unsigned char ReadAckAddressBitOffset;
  /* 0x0037 */ unsigned char ReadAckAddressAccessSize;
  /* 0x0038 */ union _LARGE_INTEGER ReadAckAddress;
  /* 0x0040 */ unsigned __int64 ReadAckPreserveMask;
  /* 0x0048 */ unsigned __int64 ReadAckWriteMask;
} WHEA_GENERIC_ERROR_DESCRIPTOR_V2, *PWHEA_GENERIC_ERROR_DESCRIPTOR_V2; /* size: 0x0050 */

typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD
{
  /* 0x0000 */ void* Initialize /* function */;
  /* 0x0008 */ void* Uninitialize /* function */;
  /* 0x0010 */ void* Ready /* function */;
  /* 0x0018 */ void* Correct /* function */;
} WHEA_ERROR_SOURCE_CONFIGURATION_DD, *PWHEA_ERROR_SOURCE_CONFIGURATION_DD; /* size: 0x0020 */

typedef struct _WHEA_DEVICE_DRIVER_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;
} WHEA_DEVICE_DRIVER_DESCRIPTOR, *PWHEA_DEVICE_DRIVER_DESCRIPTOR; /* size: 0x0024 */

typedef struct _WHEA_ERROR_SOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ enum _WHEA_ERROR_SOURCE_TYPE Type;
  /* 0x000c */ enum _WHEA_ERROR_SOURCE_STATE State;
  /* 0x0010 */ unsigned long MaxRawDataLength;
  /* 0x0014 */ unsigned long NumRecordsToPreallocate;
  /* 0x0018 */ unsigned long MaxSectionsPerRecord;
  /* 0x001c */ unsigned long ErrorSourceId;
  /* 0x0020 */ unsigned long PlatformErrorSourceId;
  /* 0x0024 */ unsigned long Flags;
  union
  {
    union
    {
      /* 0x0028 */ struct _WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor;
      /* 0x0028 */ struct _WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor;
      /* 0x0028 */ struct _WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor;
      /* 0x0028 */ struct _WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor;
      /* 0x0028 */ struct _WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor;
      /* 0x0028 */ struct _WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor;
      /* 0x0028 */ struct _WHEA_AER_ROOTPORT_DESCRIPTOR AerRootportDescriptor;
      /* 0x0028 */ struct _WHEA_AER_ENDPOINT_DESCRIPTOR AerEndpointDescriptor;
      /* 0x0028 */ struct _WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor;
      /* 0x0028 */ struct _WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor;
      /* 0x0028 */ struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2 GenErrDescriptorV2;
      /* 0x0028 */ struct _WHEA_DEVICE_DRIVER_DESCRIPTOR DeviceDriverDescriptor;
    }; /* size: 0x03a4 */
  } /* size: 0x03a4 */ Info;
} WHEA_ERROR_SOURCE_DESCRIPTOR, *PWHEA_ERROR_SOURCE_DESCRIPTOR; /* size: 0x03cc */

