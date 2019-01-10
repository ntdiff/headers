typedef union _WHEA_ERROR_PACKET_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long CpuValid : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS; /* size: 0x0004 */

typedef enum _WHEA_ERROR_TYPE
{
  WheaErrTypeProcessor = 0,
  WheaErrTypeMemory = 1,
  WheaErrTypePCIExpress = 2,
  WheaErrTypeNMI = 3,
  WheaErrTypePCIXBus = 4,
  WheaErrTypePCIXDevice = 5,
  WheaErrTypeGeneric = 6,
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
  WheaErrSrcTypeGeneric = 5,
  WheaErrSrcTypeINIT = 6,
  WheaErrSrcTypeBOOT = 7,
  WheaErrSrcTypeSCIGeneric = 8,
  WheaErrSrcTypeIPFMCA = 9,
  WheaErrSrcTypeIPFCMC = 10,
  WheaErrSrcTypeIPFCPE = 11,
  WheaErrSrcTypeMax = 12,
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;

typedef union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ProcessorType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 InstructionSet : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Operation : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Flags : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Level : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 CPUVersion : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CPUBrandString : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 ProcessorId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 TargetAddress : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 ResponderId : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 InstructionPointer : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 Reserved : 51; /* bit position: 13 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS, *PWHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS; /* size: 0x0008 */

typedef struct _WHEA_GENERIC_PROCESSOR_ERROR
{
  /* 0x0000 */ union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS ValidBits;
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
  /* 0x00a8 */ unsigned __int64 RequesterId;
  /* 0x00b0 */ unsigned __int64 ResponderId;
  /* 0x00b8 */ unsigned __int64 InstructionPointer;
} WHEA_GENERIC_PROCESSOR_ERROR, *PWHEA_GENERIC_PROCESSOR_ERROR; /* size: 0x00c0 */

typedef union _WHEA_MEMORY_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PhysicalAddress : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 PhysicalAddressMask : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Node : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Card : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Module : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 Bank : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 Device : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Row : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Column : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 BitPosition : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 ResponderId : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 TargetId : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned __int64 Reserved : 49; /* bit position: 15 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_MEMORY_ERROR_VALIDBITS, *PWHEA_MEMORY_ERROR_VALIDBITS; /* size: 0x0008 */

typedef union _WHEA_ERROR_STATUS
{
  union
  {
    /* 0x0000 */ unsigned __int64 ErrorStatus;
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
  }; /* size: 0x0008 */
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS; /* size: 0x0008 */

typedef struct _WHEA_MEMORY_ERROR
{
  /* 0x0000 */ union _WHEA_MEMORY_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
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
  /* 0x0030 */ unsigned __int64 RequesterId;
  /* 0x0038 */ unsigned __int64 ResponderId;
  /* 0x0040 */ unsigned __int64 TargetId;
  /* 0x0048 */ unsigned char ErrorType;
} WHEA_MEMORY_ERROR, *PWHEA_MEMORY_ERROR; /* size: 0x0049 */

typedef union _WHEA_NMI_ERROR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_NMI_ERROR_FLAGS, *PWHEA_NMI_ERROR_FLAGS; /* size: 0x0004 */

typedef struct _WHEA_NMI_ERROR
{
  /* 0x0000 */ unsigned char Data[8];
  /* 0x0008 */ union _WHEA_NMI_ERROR_FLAGS Flags;
} WHEA_NMI_ERROR, *PWHEA_NMI_ERROR; /* size: 0x000c */

typedef union _WHEA_PCIEXPRESS_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 PortType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Version : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 CommandStatus : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 DeviceId : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 DeviceSerialNumber : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 BridgeControlStatus : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 ExpressCapability : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 AerInfo : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Reserved : 56; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIEXPRESS_ERROR_VALIDBITS, *PWHEA_PCIEXPRESS_ERROR_VALIDBITS; /* size: 0x0008 */

enum WHEA_PCIEXPRESS_DEVICE_TYPE
{
  WheaPciExpressEndpoint = 0,
  WheaPciExpressLegacyEndpoint = 1,
  WheaPciExpressRootPort = 4,
  WheaPciExpressUpstreamSwitchPort = 5,
  WheaPciExpressDownstreamSwitchPort = 6,
  WheaPciExpressToPciXBridge = 7,
  WheaPciXToExpressBridge = 8,
  WheaPciExpressRootComplexIntegratedEndpoint = 9,
  WheaPciExpressRootComplexEventCollector = 10,
};

typedef union _WHEA_PCIEXPRESS_VERSION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char MinorVersion;
      /* 0x0001 */ unsigned char MajorVersion;
      /* 0x0002 */ unsigned short Reserved;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_VERSION, *PWHEA_PCIEXPRESS_VERSION; /* size: 0x0004 */

typedef union _WHEA_PCIEXPRESS_COMMAND_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Command;
      /* 0x0002 */ unsigned short Status;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_COMMAND_STATUS, *PWHEA_PCIEXPRESS_COMMAND_STATUS; /* size: 0x0004 */

typedef struct _WHEA_PCIEXPRESS_DEVICE_ID
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
} WHEA_PCIEXPRESS_DEVICE_ID, *PWHEA_PCIEXPRESS_DEVICE_ID; /* size: 0x0010 */

typedef union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short BridgeSecondaryStatus;
      /* 0x0002 */ unsigned short BridgeControl;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS, *PWHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS; /* size: 0x0004 */

typedef struct _WHEA_PCIEXPRESS_ERROR
{
  /* 0x0000 */ union _WHEA_PCIEXPRESS_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ enum WHEA_PCIEXPRESS_DEVICE_TYPE PortType;
  /* 0x000c */ union _WHEA_PCIEXPRESS_VERSION Version;
  /* 0x0010 */ union _WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ struct _WHEA_PCIEXPRESS_DEVICE_ID DeviceId;
  /* 0x0028 */ unsigned __int64 DeviceSerialNumber;
  /* 0x0030 */ union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS BridgeControlStatus;
  /* 0x0034 */ unsigned char ExpressCapability[60];
  /* 0x0070 */ unsigned char AerInfo[96];
} WHEA_PCIEXPRESS_ERROR, *PWHEA_PCIEXPRESS_ERROR; /* size: 0x00d0 */

typedef union _WHEA_PCIXBUS_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 BusId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 BusAddress : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 BusData : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 BusCommand : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CompleterId : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 TargetId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_ERROR_VALIDBITS, *PWHEA_PCIXBUS_ERROR_VALIDBITS; /* size: 0x0008 */

typedef union _WHEA_PCIXBUS_ID
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char BusNumber;
      /* 0x0001 */ unsigned char BusSegment;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_PCIXBUS_ID, *PWHEA_PCIXBUS_ID; /* size: 0x0002 */

typedef union _WHEA_PCIXBUS_COMMAND
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Command : 56; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PCIXCommand : 1; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_COMMAND, *PWHEA_PCIXBUS_COMMAND; /* size: 0x0008 */

typedef struct _WHEA_PCIXBUS_ERROR
{
  /* 0x0000 */ union _WHEA_PCIXBUS_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned short ErrorType;
  /* 0x0012 */ union _WHEA_PCIXBUS_ID BusId;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned __int64 BusAddress;
  /* 0x0020 */ unsigned __int64 BusData;
  /* 0x0028 */ union _WHEA_PCIXBUS_COMMAND BusCommand;
  /* 0x0030 */ unsigned __int64 RequesterId;
  /* 0x0038 */ unsigned __int64 CompleterId;
  /* 0x0040 */ unsigned __int64 TargetId;
} WHEA_PCIXBUS_ERROR, *PWHEA_PCIXBUS_ERROR; /* size: 0x0048 */

typedef union _WHEA_PCIXDEVICE_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 IdInfo : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 MemoryNumber : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 IoNumber : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 RegisterDataPairs : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXDEVICE_ERROR_VALIDBITS, *PWHEA_PCIXDEVICE_ERROR_VALIDBITS; /* size: 0x0008 */

typedef struct _WHEA_PCIXDEVICE_ID
{
  /* 0x0000 */ unsigned short VendorId;
  /* 0x0002 */ unsigned short DeviceId;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ClassCode : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long FunctionNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long DeviceNumber : 8; /* bit position: 0 */
    /* 0x0008 */ unsigned long BusNumber : 8; /* bit position: 8 */
    /* 0x0008 */ unsigned long SegmentNumber : 8; /* bit position: 16 */
    /* 0x0008 */ unsigned long Reserved1 : 8; /* bit position: 24 */
  }; /* bitfield */
  /* 0x000c */ unsigned long Reserved2;
} WHEA_PCIXDEVICE_ID, *PWHEA_PCIXDEVICE_ID; /* size: 0x0010 */

struct WHEA_PCIXDEVICE_REGISTER_PAIR
{
  /* 0x0000 */ unsigned __int64 Register;
  /* 0x0008 */ unsigned __int64 Data;
}; /* size: 0x0010 */

typedef struct _WHEA_PCIXDEVICE_ERROR
{
  /* 0x0000 */ union _WHEA_PCIXDEVICE_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ struct _WHEA_PCIXDEVICE_ID IdInfo;
  /* 0x0020 */ unsigned long MemoryNumber;
  /* 0x0024 */ unsigned long IoNumber;
  /* 0x0028 */ struct WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[4];
} WHEA_PCIXDEVICE_ERROR, *PWHEA_PCIXDEVICE_ERROR; /* size: 0x0068 */

typedef enum _WHEA_RAW_DATA_FORMAT
{
  WheaRawDataFormatIPFSalRecord = 0,
  WheaRawDataFormatIA32MCA = 1,
  WheaRawDataFormatIntel64MCA = 2,
  WheaRawDataFormatAMD64MCA = 3,
  WheaRawDataFormatMemory = 4,
  WheaRawDataFormatPCIExpress = 5,
  WheaRawDataFormatNMIPort = 6,
  WheaRawDataFormatPCIXBus = 7,
  WheaRawDataFormatPCIXDevice = 8,
  WheaRawDataFormatGeneric = 9,
  WheaRawDataFormatMax = 10,
} WHEA_RAW_DATA_FORMAT, *PWHEA_RAW_DATA_FORMAT;

typedef struct _WHEA_ERROR_PACKET
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ union _WHEA_ERROR_PACKET_FLAGS Flags;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long RawDataLength;
  /* 0x0010 */ unsigned __int64 Reserved1;
  /* 0x0018 */ unsigned __int64 Context;
  /* 0x0020 */ enum _WHEA_ERROR_TYPE ErrorType;
  /* 0x0024 */ enum _WHEA_ERROR_SEVERITY ErrorSeverity;
  /* 0x0028 */ unsigned long ErrorSourceId;
  /* 0x002c */ enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
  /* 0x0030 */ unsigned long Reserved2;
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
      /* 0x0040 */ struct _WHEA_PCIXBUS_ERROR PciXBusError;
      /* 0x0040 */ struct _WHEA_PCIXDEVICE_ERROR PciXDeviceError;
    }; /* size: 0x00d0 */
  } /* size: 0x00d0 */ u;
  /* 0x0110 */ enum _WHEA_RAW_DATA_FORMAT RawDataFormat;
  /* 0x0114 */ unsigned long RawDataOffset;
  /* 0x0118 */ unsigned char RawData[1];
} WHEA_ERROR_PACKET, *PWHEA_ERROR_PACKET; /* size: 0x0119 */

