typedef struct _DEVICE_MAP
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* DosDevicesDirectory;
  /* 0x0008 */ struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;
  /* 0x0010 */ void* DosDevicesDirectoryHandle;
  /* 0x0018 */ volatile long ReferenceCount;
  /* 0x001c */ unsigned long DriveMap;
  /* 0x0020 */ unsigned char DriveType[32];
  /* 0x0040 */ struct _EJOB* ServerSilo;
} DEVICE_MAP, *PDEVICE_MAP; /* size: 0x0048 */

