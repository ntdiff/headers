typedef enum _PCI_BUSMASTER_RID_TYPE
{
  BusmasterRidInvalid = 0,
  BusmasterRidFromDeviceRid = 1,
  BusmasterRidFromBridgeRid = 2,
  BusmasterRidFromMultipleBridges = 3,
} PCI_BUSMASTER_RID_TYPE, *PPCI_BUSMASTER_RID_TYPE;

