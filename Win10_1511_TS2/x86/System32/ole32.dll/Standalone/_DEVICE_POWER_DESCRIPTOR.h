typedef struct _DEVICE_POWER_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned char DeviceAttentionSupported;
  /* 0x0009 */ unsigned char AsynchronousNotificationSupported;
  /* 0x000a */ unsigned char IdlePowerManagementEnabled;
  /* 0x000b */ unsigned char D3ColdEnabled;
  /* 0x000c */ unsigned char D3ColdSupported;
  /* 0x000d */ unsigned char NoVerifyDuringIdlePower;
  /* 0x000e */ unsigned char Reserved[2];
  /* 0x0010 */ unsigned long IdleTimeoutInMS;
} DEVICE_POWER_DESCRIPTOR, *PDEVICE_POWER_DESCRIPTOR; /* size: 0x0014 */

