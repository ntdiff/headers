typedef struct _DEVOBJ_EXTENSION
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ unsigned long PowerFlags;
  /* 0x0018 */ struct _DEVICE_OBJECT_POWER_EXTENSION* Dope;
  /* 0x0020 */ unsigned long ExtensionFlags;
  /* 0x0028 */ void* DeviceNode;
  /* 0x0030 */ struct _DEVICE_OBJECT* AttachedTo;
  /* 0x0038 */ long StartIoCount;
  /* 0x003c */ long StartIoKey;
  /* 0x0040 */ unsigned long StartIoFlags;
  /* 0x0048 */ struct _VPB* Vpb;
  /* 0x0050 */ void* DependencyNode;
  /* 0x0058 */ void* InterruptContext;
  /* 0x0060 */ void* VerifierContext;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION; /* size: 0x0068 */

