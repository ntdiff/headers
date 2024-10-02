typedef struct _BOOT_OSL_RAMDISK_ENTRY
{
  /* 0x0000 */ unsigned long BlockSize;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  /* 0x0010 */ unsigned __int64 Size;
} BOOT_OSL_RAMDISK_ENTRY, *PBOOT_OSL_RAMDISK_ENTRY; /* size: 0x0018 */

typedef struct _BOOT_OSL_RAMDISK_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _BOOT_OSL_RAMDISK_ENTRY Entries[1];
} BOOT_OSL_RAMDISK_INFO, *PBOOT_OSL_RAMDISK_INFO; /* size: 0x0020 */

