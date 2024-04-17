typedef struct _STORAGE_HOTPLUG_INFO
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned char MediaRemovable;
  /* 0x0005 */ unsigned char MediaHotplug;
  /* 0x0006 */ unsigned char DeviceHotplug;
  /* 0x0007 */ unsigned char WriteCacheEnableOverride;
} STORAGE_HOTPLUG_INFO, *PSTORAGE_HOTPLUG_INFO; /* size: 0x0008 */

