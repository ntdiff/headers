typedef struct _DEVICE_RESET_INTERFACE_STANDARD
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ void* InterfaceReference /* function */;
  /* 0x000c */ void* InterfaceDereference /* function */;
  /* 0x0010 */ void* DeviceReset /* function */;
  /* 0x0014 */ unsigned long SupportedResetTypes;
  /* 0x0018 */ void* Reserved;
} DEVICE_RESET_INTERFACE_STANDARD, *PDEVICE_RESET_INTERFACE_STANDARD; /* size: 0x001c */

