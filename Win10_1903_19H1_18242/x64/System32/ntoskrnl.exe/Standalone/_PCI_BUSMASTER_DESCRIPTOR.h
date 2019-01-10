typedef enum _PCI_BUSMASTER_RID_TYPE
{
  BusmasterRidFromDeviceRid = 0,
  BusmasterRidFromBridgeRid = 1,
  BusmasterRidFromMultipleBridges = 2,
} PCI_BUSMASTER_RID_TYPE, *PPCI_BUSMASTER_RID_TYPE;

typedef struct _PCI_BUSMASTER_DESCRIPTOR
{
  /* 0x0000 */ enum _PCI_BUSMASTER_RID_TYPE Type;
  /* 0x0004 */ unsigned long Segment;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned char Bus;
      /* 0x0009 */ unsigned char Device;
      /* 0x000a */ unsigned char Function;
      /* 0x000b */ unsigned char Reserved;
    } /* size: 0x0004 */ DeviceRid;
    struct
    {
      /* 0x0008 */ unsigned char Bus;
      /* 0x0009 */ unsigned char Device;
      /* 0x000a */ unsigned char Function;
      /* 0x000b */ unsigned char Reserved;
    } /* size: 0x0004 */ BridgeRid;
    struct
    {
      struct
      {
        /* 0x0008 */ unsigned char SecondaryBus;
        /* 0x0009 */ unsigned char SubordinateBus;
      } /* size: 0x0002 */ MultipleBridges;
      /* 0x000a */ char __PADDING__[2];
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} PCI_BUSMASTER_DESCRIPTOR, *PPCI_BUSMASTER_DESCRIPTOR; /* size: 0x000c */

