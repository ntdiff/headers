typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _CM_VIEW_OF_FILE
{
  /* 0x0000 */ struct _LIST_ENTRY MappedViewLinks;
  /* 0x0008 */ struct _LIST_ENTRY PinnedViewLinks;
  /* 0x0010 */ struct _LIST_ENTRY FlushedViewLinks;
  /* 0x0018 */ struct _CMHIVE* CmHive;
  /* 0x001c */ void* Bcb;
  /* 0x0020 */ void* ViewAddress;
  /* 0x0024 */ unsigned long FileOffset;
  /* 0x0028 */ unsigned long Size;
  /* 0x002c */ unsigned long UseCount;
} CM_VIEW_OF_FILE, *PCM_VIEW_OF_FILE; /* size: 0x0030 */

