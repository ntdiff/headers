typedef struct _SYSTEM_VHD_BOOT_INFORMATION
{
  /* 0x0000 */ unsigned char OsDiskIsVhd;
  /* 0x0004 */ unsigned long OsVhdFilePathOffset;
  /* 0x0008 */ wchar_t OsVhdParentVolume[1];
  /* 0x000a */ char __PADDING__[2];
} SYSTEM_VHD_BOOT_INFORMATION, *PSYSTEM_VHD_BOOT_INFORMATION; /* size: 0x000c */

