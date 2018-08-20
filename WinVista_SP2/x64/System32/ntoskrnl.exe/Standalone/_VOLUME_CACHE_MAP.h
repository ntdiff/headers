typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _VOLUME_CACHE_MAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteCode;
  /* 0x0004 */ unsigned long UseCount;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _LIST_ENTRY VolumeCacheMapLinks;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ long __PADDING__[1];
} VOLUME_CACHE_MAP, *PVOLUME_CACHE_MAP; /* size: 0x0028 */

