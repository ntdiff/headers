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

