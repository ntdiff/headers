typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long RefCnt : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0004 */

typedef struct _DEVICE_MAP
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* DosDevicesDirectory;
  /* 0x0004 */ struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;
  /* 0x0008 */ struct _EJOB* ServerSilo;
  /* 0x000c */ struct _DEVICE_MAP* GlobalDeviceMap;
  /* 0x0010 */ struct _EX_FAST_REF DriveObject[26];
  /* 0x0078 */ long ReferenceCount;
  /* 0x007c */ void* DosDevicesDirectoryHandle;
  /* 0x0080 */ unsigned long DriveMap;
  /* 0x0084 */ unsigned char DriveType[32];
} DEVICE_MAP, *PDEVICE_MAP; /* size: 0x00a4 */

