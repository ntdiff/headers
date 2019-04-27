typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _OBJECT_HEADER_CREATOR_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY TypeList;
  /* 0x0008 */ void* CreatorUniqueProcess;
  /* 0x000c */ unsigned short CreatorBackTraceIndex;
  /* 0x000e */ unsigned short Reserved1;
} OBJECT_HEADER_CREATOR_INFO, *POBJECT_HEADER_CREATOR_INFO; /* size: 0x0010 */

