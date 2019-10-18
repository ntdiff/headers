typedef struct _DEBUG_TRANSPORT_DATA
{
  /* 0x0000 */ unsigned long HwContextSize;
  /* 0x0004 */ unsigned char UseSerialFraming;
  /* 0x0005 */ unsigned char ValidUSBCoreId;
  /* 0x0006 */ unsigned char USBCoreId;
  /* 0x0007 */ char __PADDING__[1];
} DEBUG_TRANSPORT_DATA, *PDEBUG_TRANSPORT_DATA; /* size: 0x0008 */

