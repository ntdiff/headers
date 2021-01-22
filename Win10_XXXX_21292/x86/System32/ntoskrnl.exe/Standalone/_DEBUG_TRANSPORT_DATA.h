typedef struct _DEBUG_TRANSPORT_DATA
{
  /* 0x0000 */ unsigned long HwContextSize;
  /* 0x0004 */ unsigned long SharedVisibleDataSize;
  /* 0x0008 */ unsigned char UseSerialFraming;
  /* 0x0009 */ unsigned char ValidUSBCoreId;
  /* 0x000a */ unsigned char USBCoreId;
  /* 0x000b */ char __PADDING__[1];
} DEBUG_TRANSPORT_DATA, *PDEBUG_TRANSPORT_DATA; /* size: 0x000c */

