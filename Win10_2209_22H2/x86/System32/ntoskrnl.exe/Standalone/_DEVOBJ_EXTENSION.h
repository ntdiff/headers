typedef struct _DEVOBJ_EXTENSION
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ unsigned long PowerFlags;
  /* 0x000c */ struct _DEVICE_OBJECT_POWER_EXTENSION* Dope;
  /* 0x0010 */ unsigned long ExtensionFlags;
  /* 0x0014 */ void* DeviceNode;
  /* 0x0018 */ struct _DEVICE_OBJECT* AttachedTo;
  /* 0x001c */ long StartIoCount;
  /* 0x0020 */ long StartIoKey;
  /* 0x0024 */ unsigned long StartIoFlags;
  /* 0x0028 */ struct _VPB* Vpb;
  /* 0x002c */ void* DependencyNode;
  /* 0x0030 */ void* InterruptContext;
  /* 0x0034 */ long InterruptCount;
  /* 0x0038 */ void* VerifierContext;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION; /* size: 0x003c */

