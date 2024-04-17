typedef struct _CM_PNP_BIOS_DEVICE_NODE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned char Node;
  /* 0x0003 */ unsigned long ProductId;
  /* 0x0007 */ unsigned char DeviceType[3];
  /* 0x000a */ unsigned short DeviceAttributes;
} CM_PNP_BIOS_DEVICE_NODE, *PCM_PNP_BIOS_DEVICE_NODE; /* size: 0x000c */

