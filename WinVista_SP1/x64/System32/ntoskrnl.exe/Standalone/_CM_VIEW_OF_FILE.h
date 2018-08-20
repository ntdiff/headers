typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _CM_VIEW_OF_FILE
{
  /* 0x0000 */ struct _LIST_ENTRY MappedViewLinks;
  /* 0x0010 */ struct _LIST_ENTRY PinnedViewLinks;
  /* 0x0020 */ struct _LIST_ENTRY FlushedViewLinks;
  /* 0x0030 */ struct _CMHIVE* CmHive;
  /* 0x0038 */ void* Bcb;
  /* 0x0040 */ void* ViewAddress;
  /* 0x0048 */ unsigned long FileOffset;
  /* 0x004c */ unsigned long Size;
  /* 0x0050 */ unsigned long UseCount;
  /* 0x0054 */ long __PADDING__[1];
} CM_VIEW_OF_FILE, *PCM_VIEW_OF_FILE; /* size: 0x0058 */

