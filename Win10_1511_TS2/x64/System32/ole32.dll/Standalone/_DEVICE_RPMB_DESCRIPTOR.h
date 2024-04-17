typedef struct _DEVICE_RPMB_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long SizeInBytes;
  /* 0x000c */ unsigned long MaxReliableWriteSizeInBytes;
} DEVICE_RPMB_DESCRIPTOR, *PDEVICE_RPMB_DESCRIPTOR; /* size: 0x0010 */

