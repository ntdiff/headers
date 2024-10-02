typedef struct _SYSTEM_OSL_RAMDISK_ENTRY
{
  /* 0x0000 */ unsigned long BlockSize;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  /* 0x0010 */ unsigned __int64 Size;
} SYSTEM_OSL_RAMDISK_ENTRY, *PSYSTEM_OSL_RAMDISK_ENTRY; /* size: 0x0018 */

typedef struct _SYSTEM_OSL_RAMDISK_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _SYSTEM_OSL_RAMDISK_ENTRY Entries[1];
} SYSTEM_OSL_RAMDISK_INFORMATION, *PSYSTEM_OSL_RAMDISK_INFORMATION; /* size: 0x0020 */

