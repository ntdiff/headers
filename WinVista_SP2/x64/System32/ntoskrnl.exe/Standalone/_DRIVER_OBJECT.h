typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _DRIVER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0018 */ void* DriverStart;
  /* 0x0020 */ unsigned long DriverSize;
  /* 0x0028 */ void* DriverSection;
  /* 0x0030 */ struct _DRIVER_EXTENSION* DriverExtension;
  /* 0x0038 */ struct _UNICODE_STRING DriverName;
  /* 0x0048 */ struct _UNICODE_STRING* HardwareDatabase;
  /* 0x0050 */ struct _FAST_IO_DISPATCH* FastIoDispatch;
  /* 0x0058 */ void* DriverInit /* function */;
  /* 0x0060 */ void* DriverStartIo /* function */;
  /* 0x0068 */ void* DriverUnload /* function */;
  /* 0x0070 */ void* MajorFunction[28] /* function */;
} DRIVER_OBJECT, *PDRIVER_OBJECT; /* size: 0x0150 */

