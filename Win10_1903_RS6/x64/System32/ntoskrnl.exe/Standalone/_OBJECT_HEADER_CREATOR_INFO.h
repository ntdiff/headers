typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _OBJECT_HEADER_CREATOR_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY TypeList;
  /* 0x0010 */ void* CreatorUniqueProcess;
  /* 0x0018 */ unsigned short CreatorBackTraceIndex;
  /* 0x001a */ unsigned short Reserved1;
  /* 0x001c */ unsigned long Reserved2;
} OBJECT_HEADER_CREATOR_INFO, *POBJECT_HEADER_CREATOR_INFO; /* size: 0x0020 */

