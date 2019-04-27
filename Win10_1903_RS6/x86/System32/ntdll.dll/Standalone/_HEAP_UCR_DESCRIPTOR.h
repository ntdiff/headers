typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_UCR_DESCRIPTOR
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _LIST_ENTRY SegmentEntry;
  /* 0x0010 */ void* Address;
  /* 0x0014 */ unsigned long Size;
} HEAP_UCR_DESCRIPTOR, *PHEAP_UCR_DESCRIPTOR; /* size: 0x0018 */

