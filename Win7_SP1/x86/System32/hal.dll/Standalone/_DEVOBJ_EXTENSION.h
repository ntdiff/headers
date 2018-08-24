typedef struct _DEVOBJ_EXTENSION
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION; /* size: 0x0008 */

