typedef struct _BOOT_FIRMWARE_RAMDISK_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long BlockSize;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  /* 0x0010 */ unsigned __int64 Size;
} BOOT_FIRMWARE_RAMDISK_INFO, *PBOOT_FIRMWARE_RAMDISK_INFO; /* size: 0x0018 */

