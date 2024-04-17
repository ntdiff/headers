typedef struct _DEVICE_TRIM_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned char TrimEnabled;
  /* 0x0009 */ char __PADDING__[3];
} DEVICE_TRIM_DESCRIPTOR, *PDEVICE_TRIM_DESCRIPTOR; /* size: 0x000c */

