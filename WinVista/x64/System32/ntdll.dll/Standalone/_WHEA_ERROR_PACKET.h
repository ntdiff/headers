typedef enum _WHEA_ERROR_TYPE
{
  WheaErrTypeProcessor = 0,
  WheaErrTypeMemory = 1,
  WheaErrTypePCIExpress = 2,
  WheaErrTypeNMI = 3,
  WheaErrTypePCIXBus = 4,
  WheaErrTypePCIXDevice = 5,
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;

typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevNone = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef enum _WHEA_ERROR_SOURCE_TYPE
{
  WheaErrSrcTypeMCE = 0,
  WheaErrSrcTypeCMC = 1,
  WheaErrSrcTypeCPE = 2,
  WheaErrSrcTypeNMI = 3,
  WheaErrSrcTypePCIe = 4,
  WheaErrSrcTypeOther = 5,
  WheaErrSrcTypeMax = 6,
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;

typedef struct _WHEA_GENERIC_PROCESSOR_ERROR
{
  /* 0x0000 */ unsigned __int64 ValidBits;
  /* 0x0008 */ unsigned char ProcessorType;
  /* 0x0009 */ unsigned char InstructionSet;
  /* 0x000a */ unsigned char ErrorType;
  /* 0x000b */ unsigned char Operation;
  /* 0x000c */ unsigned char Flags;
  /* 0x000d */ unsigned char Level;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ unsigned __int64 CPUVersion;
  /* 0x0018 */ unsigned char CPUBrandString[128];
  /* 0x0098 */ unsigned __int64 ProcessorId;
  /* 0x00a0 */ unsigned __int64 TargetAddress;
  /* 0x00a8 */ unsigned __int64 RequestorId;
  /* 0x00b0 */ unsigned __int64 ResponderId;
  /* 0x00b8 */ unsigned __int64 InstructionPointer;
} WHEA_GENERIC_PROCESSOR_ERROR, *PWHEA_GENERIC_PROCESSOR_ERROR; /* size: 0x00c0 */

typedef struct _WHEA_ERROR_STATUS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Reserved1 : 8; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ErrorType : 8; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Address : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Control : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned __int64 Data : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned __int64 Responder : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned __int64 Requester : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned __int64 FirstError : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned __int64 Overflow : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned __int64 Reserved2 : 41; /* bit position: 23 */
  }; /* bitfield */
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS; /* size: 0x0008 */

typedef struct _WHEA_MEMORY_ERROR
{
  /* 0x0000 */ unsigned __int64 ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned __int64 PhysicalAddress;
  /* 0x0018 */ unsigned __int64 PhysicalAddressMask;
  /* 0x0020 */ unsigned short Node;
  /* 0x0022 */ unsigned short Card;
  /* 0x0024 */ unsigned short Module;
  /* 0x0026 */ unsigned short Bank;
  /* 0x0028 */ unsigned short Device;
  /* 0x002a */ unsigned short Row;
  /* 0x002c */ unsigned short Column;
  /* 0x002e */ unsigned short BitPosition;
  /* 0x0030 */ unsigned __int64 RequestorId;
  /* 0x0038 */ unsigned __int64 ResponderId;
  /* 0x0040 */ unsigned __int64 TargetId;
  /* 0x0048 */ unsigned char ErrorType;
  /* 0x0049 */ char __PADDING__[7];
} WHEA_MEMORY_ERROR, *PWHEA_MEMORY_ERROR; /* size: 0x0050 */

typedef struct _WHEA_NMI_ERROR
{
  /* 0x0000 */ unsigned char Data[8];
} WHEA_NMI_ERROR, *PWHEA_NMI_ERROR; /* size: 0x0008 */

enum PCI_EXPRESS_DEVICE_TYPE
{
  PciExpressEndpoint = 0,
  PciExpressLegacyEndpoint = 1,
  PciExpressRootPort = 4,
  PciExpressUpstreamSwitchPort = 5,
  PciExpressDownstreamSwitchPort = 6,
  PciExpressToPciXBridge = 7,
  PciXToExpressBridge = 8,
  PciExpressRootComplexIntegratedEndpoint = 9,
  PciExpressRootComplexEventCollector = 10,
};

typedef struct _PCIE_DEVICE_ID
{
  /* 0x0000 */ unsigned short VendorID;
  /* 0x0002 */ unsigned short DeviceID;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ClassCode : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long FunctionNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long DeviceNumber : 8; /* bit position: 0 */
    /* 0x0008 */ unsigned long Segment : 16; /* bit position: 8 */
    /* 0x0008 */ unsigned long PrimaryBusNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long SecondaryBusNumber : 8; /* bit position: 0 */
    /* 0x000c */ unsigned long Reserved1 : 2; /* bit position: 8 */
    /* 0x000c */ unsigned long SlotNumber : 14; /* bit position: 10 */
    /* 0x000c */ unsigned long Reserved2 : 8; /* bit position: 24 */
  }; /* bitfield */
} PCIE_DEVICE_ID, *PPCIE_DEVICE_ID; /* size: 0x0010 */

typedef struct _WHEA_PCIEXPRESS_ERROR
{
  /* 0x0000 */ unsigned __int64 ValidationBits;
  /* 0x0008 */ enum PCI_EXPRESS_DEVICE_TYPE PortType;
  /* 0x000c */ unsigned long Version;
  /* 0x0010 */ unsigned long CommandStatus;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ struct _PCIE_DEVICE_ID DeviceId;
  /* 0x0028 */ unsigned __int64 DeviceSN;
  /* 0x0030 */ unsigned long BridgeCtrlSts;
  /* 0x0034 */ unsigned char ExpressCapability[60];
  /* 0x0070 */ unsigned char AerInfo[96];
} WHEA_PCIEXPRESS_ERROR, *PWHEA_PCIEXPRESS_ERROR; /* size: 0x00d0 */

typedef struct _WHEA_PCIX_BUS_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ErrorTypeValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 BusIdValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 BusAddressValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 BusDataValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 CommandValid : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 RequestorIdValid : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 CompleterIdValid : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 TargetIdValid : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
  }; /* bitfield */
} WHEA_PCIX_BUS_VALIDATION_BITS, *PWHEA_PCIX_BUS_VALIDATION_BITS; /* size: 0x0008 */

typedef struct _WHEA_PCIX_BUS_ERROR
{
  /* 0x0000 */ struct _WHEA_PCIX_BUS_VALIDATION_BITS ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned short ErrorType;
  /* 0x0012 */ unsigned short BusId;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned __int64 BusAddress;
  /* 0x0020 */ unsigned __int64 BusData;
  /* 0x0028 */ unsigned __int64 BusCommand;
  /* 0x0030 */ unsigned __int64 BusRequestorId;
  /* 0x0038 */ unsigned __int64 BusCompleterId;
  /* 0x0040 */ unsigned __int64 TargetId;
} WHEA_PCIX_BUS_ERROR, *PWHEA_PCIX_BUS_ERROR; /* size: 0x0048 */

typedef struct _WHEA_PCIX_DEV_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 IdInfoValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 MemoryNumberValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoNumberValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 RegisterDataPairValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
  }; /* bitfield */
} WHEA_PCIX_DEV_VALIDATION_BITS, *PWHEA_PCIX_DEV_VALIDATION_BITS; /* size: 0x0008 */

typedef struct _WHEA_PCIX_DEVICE_ERROR
{
  /* 0x0000 */ struct _WHEA_PCIX_DEV_VALIDATION_BITS ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned char IdInfo[16];
  /* 0x0020 */ unsigned long MemoryNumber;
  /* 0x0024 */ unsigned long IoNumber;
  /* 0x0028 */ unsigned char RegisterDataPairs[64];
} WHEA_PCIX_DEVICE_ERROR, *PWHEA_PCIX_DEVICE_ERROR; /* size: 0x0068 */

typedef enum _WHEA_ERROR_STATUS_FORMAT
{
  WheaErrorStatusFormatIPFSalRecord = 0,
  WheaErrorStatusFormatIA32MCA = 1,
  WheaErrorStatusFormatEM64TMCA = 2,
  WheaErrorStatusFormatAMD64MCA = 3,
  WheaErrorStatusFormatPCIExpress = 4,
  WheaErrorStatusFormatNMIPort = 5,
  WheaErrorStatusFormatOther = 6,
  WheaErrorStatusFormatMax = 7,
} WHEA_ERROR_STATUS_FORMAT, *PWHEA_ERROR_STATUS_FORMAT;

typedef struct _WHEA_ERROR_PACKET
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ unsigned __int64 RawDataLength;
  /* 0x0018 */ unsigned __int64 Context;
  /* 0x0020 */ enum _WHEA_ERROR_TYPE ErrorType;
  /* 0x0024 */ enum _WHEA_ERROR_SEVERITY ErrorSeverity;
  /* 0x0028 */ unsigned long ErrorSourceId;
  /* 0x002c */ enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
  /* 0x0030 */ unsigned long Reserved1;
  /* 0x0034 */ unsigned long Version;
  /* 0x0038 */ unsigned __int64 Cpu;
  union
  {
    union
    {
      /* 0x0040 */ struct _WHEA_GENERIC_PROCESSOR_ERROR ProcessorError;
      /* 0x0040 */ struct _WHEA_MEMORY_ERROR MemoryError;
      /* 0x0040 */ struct _WHEA_NMI_ERROR NmiError;
      /* 0x0040 */ struct _WHEA_PCIEXPRESS_ERROR PciExpressError;
      /* 0x0040 */ struct _WHEA_PCIX_BUS_ERROR PciXBusError;
      /* 0x0040 */ struct _WHEA_PCIX_DEVICE_ERROR PciXDeviceError;
    }; /* size: 0x00d0 */
  } /* size: 0x00d0 */ u;
  /* 0x0110 */ enum _WHEA_ERROR_STATUS_FORMAT RawDataFormat;
  /* 0x0114 */ unsigned long Reserved2;
  /* 0x0118 */ unsigned char RawData[1];
} WHEA_ERROR_PACKET, *PWHEA_ERROR_PACKET; /* size: 0x0119 */

