typedef struct _DEVICE_MAP
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* DosDevicesDirectory;
  /* 0x0004 */ struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;
  /* 0x0008 */ void* DosDevicesDirectoryHandle;
  /* 0x000c */ volatile long ReferenceCount;
  /* 0x0010 */ unsigned long DriveMap;
  /* 0x0014 */ unsigned char DriveType[32];
  /* 0x0034 */ struct _EJOB* ServerSilo;
} DEVICE_MAP, *PDEVICE_MAP; /* size: 0x0038 */

