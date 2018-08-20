typedef struct _DEVICE_MAP
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* DosDevicesDirectory;
  /* 0x0004 */ struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;
  /* 0x0008 */ unsigned long ReferenceCount;
  /* 0x000c */ unsigned long DriveMap;
  /* 0x0010 */ unsigned char DriveType[32];
} DEVICE_MAP, *PDEVICE_MAP; /* size: 0x0030 */

