typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY WorkQueueLinks;
  union
  {
    union
    {
      struct
      {
        /* 0x0010 */ struct _FILE_OBJECT* FileObject;
      } /* size: 0x0008 */ Read;
      struct
      {
        /* 0x0010 */ struct _SHARED_CACHE_MAP* SharedCacheMap;
      } /* size: 0x0008 */ Write;
      struct
      {
        /* 0x0010 */ struct _KEVENT* Event;
      } /* size: 0x0008 */ Event;
      struct
      {
        /* 0x0010 */ unsigned long Reason;
      } /* size: 0x0004 */ Notification;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Parameters;
  /* 0x0018 */ unsigned char Function;
  /* 0x0019 */ char __PADDING__[7];
} WORK_QUEUE_ENTRY, *PWORK_QUEUE_ENTRY; /* size: 0x0020 */

