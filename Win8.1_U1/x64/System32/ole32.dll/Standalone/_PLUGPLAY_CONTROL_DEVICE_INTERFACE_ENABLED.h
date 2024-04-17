typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInterface;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned char Enabled;
  /* 0x0015 */ char __PADDING__[3];
} PLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED, *PPLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED; /* size: 0x0018 */

