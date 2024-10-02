typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

typedef struct _DEVICE_MAP
{
  /* 0x0000 */ struct _OBJECT_DIRECTORY* DosDevicesDirectory;
  /* 0x0008 */ struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;
  /* 0x0010 */ struct _EJOB* ServerSilo;
  /* 0x0018 */ struct _DEVICE_MAP* GlobalDeviceMap;
  /* 0x0020 */ struct _EX_FAST_REF DriveObject[26];
  /* 0x00f0 */ __int64 ReferenceCount;
  /* 0x00f8 */ void* DosDevicesDirectoryHandle;
  /* 0x0100 */ unsigned long DriveMap;
  /* 0x0104 */ unsigned char DriveType[32];
  /* 0x0124 */ long __PADDING__[1];
} DEVICE_MAP, *PDEVICE_MAP; /* size: 0x0128 */

