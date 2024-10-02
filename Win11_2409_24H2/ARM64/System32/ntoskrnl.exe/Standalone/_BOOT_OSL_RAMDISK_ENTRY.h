typedef struct _BOOT_OSL_RAMDISK_ENTRY
{
  /* 0x0000 */ unsigned long BlockSize;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  /* 0x0010 */ unsigned __int64 Size;
} BOOT_OSL_RAMDISK_ENTRY, *PBOOT_OSL_RAMDISK_ENTRY; /* size: 0x0018 */

