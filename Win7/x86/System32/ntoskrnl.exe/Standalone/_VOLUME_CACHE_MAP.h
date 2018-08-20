typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _VOLUME_CACHE_MAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteCode;
  /* 0x0004 */ unsigned long UseCount;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x000c */ struct _LIST_ENTRY VolumeCacheMapLinks;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ unsigned long DirtyPages;
  /* 0x001c */ unsigned long PagesQueuedToDisk;
} VOLUME_CACHE_MAP, *PVOLUME_CACHE_MAP; /* size: 0x0020 */

