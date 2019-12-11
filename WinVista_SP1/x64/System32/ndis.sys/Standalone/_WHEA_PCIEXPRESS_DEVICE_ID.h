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

