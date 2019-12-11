typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KSEVENT_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* Object;
  union
  {
    /* 0x0018 */ struct KSDPC_ITEM* DpcItem;
    /* 0x0018 */ struct KSBUFFER_ITEM* BufferItem;
  }; /* size: 0x0008 */
  /* 0x0020 */ struct KSEVENTDATA* EventData;
  /* 0x0028 */ unsigned long NotificationType;
  /* 0x0030 */ const struct KSEVENT_SET* EventSet;
  /* 0x0038 */ const struct KSEVENT_ITEM* EventItem;
  /* 0x0040 */ struct _FILE_OBJECT* FileObject;
  /* 0x0048 */ unsigned long SemaphoreAdjustment;
  /* 0x004c */ unsigned long Reserved;
  /* 0x0050 */ unsigned long Flags;
  /* 0x0054 */ long __PADDING__[1];
} KSEVENT_ENTRY, *PKSEVENT_ENTRY; /* size: 0x0058 */

