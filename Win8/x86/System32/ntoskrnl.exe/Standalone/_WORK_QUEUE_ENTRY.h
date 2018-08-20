typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY WorkQueueLinks;
  union // _TAG_UNNAMED_57
  {
    union
    {
      struct // _TAG_UNNAMED_58
      {
        /* 0x0008 */ struct _FILE_OBJECT* FileObject;
      } /* size: 0x0004 */ Read;
      struct // _TAG_UNNAMED_59
      {
        /* 0x0008 */ struct _SHARED_CACHE_MAP* SharedCacheMap;
      } /* size: 0x0004 */ Write;
      struct // _TAG_UNNAMED_60
      {
        /* 0x0008 */ struct _KEVENT* Event;
      } /* size: 0x0004 */ Event;
      struct // _TAG_UNNAMED_61
      {
        /* 0x0008 */ unsigned long Reason;
      } /* size: 0x0004 */ Notification;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Parameters;
  /* 0x000c */ unsigned char Function;
  /* 0x000d */ char __PADDING__[3];
} WORK_QUEUE_ENTRY, *PWORK_QUEUE_ENTRY; /* size: 0x0010 */

