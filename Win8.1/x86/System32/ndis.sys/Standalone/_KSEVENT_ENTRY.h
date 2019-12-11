typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KSEVENT_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ void* Object;
  union
  {
    /* 0x000c */ struct KSDPC_ITEM* DpcItem;
    /* 0x000c */ struct KSBUFFER_ITEM* BufferItem;
  }; /* size: 0x0004 */
  /* 0x0010 */ struct KSEVENTDATA* EventData;
  /* 0x0014 */ unsigned long NotificationType;
  /* 0x0018 */ const struct KSEVENT_SET* EventSet;
  /* 0x001c */ const struct KSEVENT_ITEM* EventItem;
  /* 0x0020 */ struct _FILE_OBJECT* FileObject;
  /* 0x0024 */ unsigned long SemaphoreAdjustment;
  /* 0x0028 */ unsigned long Reserved;
  /* 0x002c */ unsigned long Flags;
} KSEVENT_ENTRY, *PKSEVENT_ENTRY; /* size: 0x0030 */

