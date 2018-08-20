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

