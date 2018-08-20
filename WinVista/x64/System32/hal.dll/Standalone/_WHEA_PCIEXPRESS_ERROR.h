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

