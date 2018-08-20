typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY WorkQueueLinks;
  /* 0x0010 */ struct _LIST_ENTRY CoalescedWorkQueueLinks;
  union // _TAG_UNNAMED_162
  {
    union
    {
      struct // _TAG_UNNAMED_163
      {
        /* 0x0020 */ struct _FILE_OBJECT* FileObject;
      } /* size: 0x0008 */ Read;
      struct // _TAG_UNNAMED_164
      {
        /* 0x0020 */ struct _SHARED_CACHE_MAP* SharedCacheMap;
      } /* size: 0x0008 */ Write;
      struct // _TAG_UNNAMED_165
      {
        /* 0x0020 */ struct _KEVENT* Event;
      } /* size: 0x0008 */ Event;
      struct // _TAG_UNNAMED_166
      {
        /* 0x0020 */ unsigned long Reason;
      } /* size: 0x0004 */ Notification;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Parameters;
  /* 0x0028 */ unsigned char Function;
  /* 0x0029 */ char __PADDING__[7];
} WORK_QUEUE_ENTRY, *PWORK_QUEUE_ENTRY; /* size: 0x0030 */

