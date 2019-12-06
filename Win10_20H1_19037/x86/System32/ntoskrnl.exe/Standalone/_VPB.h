typedef struct _VPB
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short VolumeLabelLength;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x000c */ struct _DEVICE_OBJECT* RealDevice;
  /* 0x0010 */ unsigned long SerialNumber;
  /* 0x0014 */ unsigned long ReferenceCount;
  /* 0x0018 */ wchar_t VolumeLabel[32];
} VPB, *PVPB; /* size: 0x0058 */

