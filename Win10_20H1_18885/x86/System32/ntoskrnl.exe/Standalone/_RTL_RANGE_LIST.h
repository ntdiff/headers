typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_RANGE_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Count;
  /* 0x0010 */ unsigned long Stamp;
} RTL_RANGE_LIST, *PRTL_RANGE_LIST; /* size: 0x0014 */

