typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _DRIVER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ void* DriverStart;
  /* 0x0010 */ unsigned long DriverSize;
  /* 0x0014 */ void* DriverSection;
  /* 0x0018 */ struct _DRIVER_EXTENSION* DriverExtension;
  /* 0x001c */ struct _UNICODE_STRING DriverName;
  /* 0x0024 */ struct _UNICODE_STRING* HardwareDatabase;
  /* 0x0028 */ struct _FAST_IO_DISPATCH* FastIoDispatch;
  /* 0x002c */ void* DriverInit /* function */;
  /* 0x0030 */ void* DriverStartIo /* function */;
  /* 0x0034 */ void* DriverUnload /* function */;
  /* 0x0038 */ void* MajorFunction[28] /* function */;
} DRIVER_OBJECT, *PDRIVER_OBJECT; /* size: 0x00a8 */

